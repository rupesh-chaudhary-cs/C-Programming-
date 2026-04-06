# fix_emails.py
def commit_callback(commit):
    old_email = b'rupeshjaiswal999939@gmail.com'
    new_name = b'Rupesh Chaudhary'
    new_email = b'rupesh.chaudhary.cs28@iilm.edu'

    if commit.author_email == old_email:
        commit.author_name = new_name
        commit.author_email = new_email
    if commit.committer_email == old_email:
        commit.committer_name = new_name
        commit.committer_email = new_email