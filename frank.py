import subprocess, re

subprocess.run(["gcc", "frank.c", "-o", "frank"])
proc=subprocess.run("./frank", stdout=subprocess.PIPE)
proc_out=str(proc.stdout)
print(proc_out.replace("b'",'').replace("'",''))
collatz=int((re.search('starts at\s\d*,', proc_out).group(0)).replace('starts at ','').replace(',', ''))
subprocess.run(["/bin/sh", "frank.sh", str(collatz)])