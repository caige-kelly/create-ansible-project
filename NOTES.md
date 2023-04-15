# General Notes 

## Ansible references 

- [Modeled directory layout](https://docs.ansible.com/ansible/2.8/user_guide/playbooks_best_practices.html#directory-layout)

## Creating the files

- [ ] Probably need to use mkdirat() instead of mkdir()
- [ ] Want to follow the pattern of create a temp dir, setting it up and renaming it
    as mentioned [here](https://stackoverflow.com/questions/65168665/create-a-directory-and-return-a-dirfd-with-open)
