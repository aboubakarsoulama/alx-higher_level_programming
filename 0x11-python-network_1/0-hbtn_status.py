dy response:")
        print("\t- type: {}".format(type(content)))
        print("\t- content: {}".format(content))
        print("\t- utf8 content: {#!/usr/bin/python3

"""A script that
- fetches the url: https://alx-intranet.hbtn.io/status.
- uses urllib package
"""


if __name__ == '__main__':
    import urllib.request

    with urllib.request.urlopen('https://alx-intranet.hbtn.io/status') as res:
        content = res.read()
        print("Bo}".format(content.decode('utf-8')))
