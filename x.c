Step 4 — Disable Password Authentication on your Server
If you were able to log into your account using SSH without a password, you have successfully configured SSH-key-based authentication to your account. However, your password-based authentication mechanism is still active, meaning that your server is still exposed to brute-force attacks.

Before completing the steps in this section, make sure that you either have SSH-key-based authentication configured for the root account on this server, or preferably, that you have SSH-key-based authentication configured for a non-root account on this server with sudo privileges. This step will lock down password-based logins, so ensuring that you will still be able to get administrative access is crucial.

Once you''ve confirmed that your remote account has administrative privileges, log into your remote server with SSH keys, either as root or with an account with sudo privileges. Then, open up the SSH daemon's configuration file:

why?
hahahhahah
hot fix
hot fix two
hot fix three
hot fix four
hot fix five
