package tree;

public class BinaryTree {
    TreeNode tree;
    public BinaryTree(){
        root=null;
    }

    public void insert(int value){
        root=insertRec(root,value);
    }

}
