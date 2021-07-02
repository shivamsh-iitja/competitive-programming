import subprocess
import time
from datetime import date

#adding the changes
process = subprocess.Popen(["git", "add", "."], stdout=subprocess.PIPE)
output = process.communicate()[0]
time.sleep(2)   

# committing the changes
today = date.today().strftime("%d %B")
process = subprocess.Popen(["git", "commit", "-m", today], stdout=subprocess.PIPE)
output = process.communicate()[0]
time.sleep(2)   

# push the committed changes
process = subprocess.Popen(["git", "push"], stdout=subprocess.PIPE)
output = process.communicate()[0]
