   public Book[] library; findAuthorInLibrary(author){
        for (int i = 0; i < library.length ;i ++) {
            if(library[i].getAuthor().equals(author)) {
                return library[i];
            }            
        }
        return false;
    }
