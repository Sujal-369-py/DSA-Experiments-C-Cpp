from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.chrome.service import Service
from webdriver_manager.chrome import ChromeDriverManager
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.common.action_chains import ActionChains
import time

# Setup ChromeDriver
driver = webdriver.Chrome(service=Service(ChromeDriverManager().install()))

# Open the webpage (Replace with the actual URL you want to scrape)
driver.get('https://www.prokabaddi.com/')  # Replace with the actual target URL

# Scroll to ensure dynamic content is loaded
driver.execute_script("window.scrollTo(0, document.body.scrollHeight);")
time.sleep(3)  # Wait for dynamic content to load

# Wait for the element you want to interact with to be visible
# Replace 'YOUR_SELECTOR' with the exact CSS or XPath selector for the content you're trying to scrape
try:
    WebDriverWait(driver, 40).until(
        EC.visibility_of_element_located((By.XPATH, '//*[@class="match-container"]'))  # Change this to correct XPath
    )

    # After waiting for the page to load, extract the elements
    matches = driver.find_elements(By.XPATH, '//*[@class="match-container"]')  # Update to correct XPath

    print(f'Total matches found: {len(matches)}')

    for match in matches:
        print(match.text)  # Adjust based on how you want to extract match data

except Exception as e:
    print(f"An error occurred: {e}")

finally:
    # Close the driver
    driver.quit()
