/* you only have to complete the function given below.  
Node is defined as  

class Node {
    int data;
    Node left;
    Node right;
}

*/

    public static void inOrder(Node root) {
        Stack<Node> s=new Stack<Node>();
        while(true){
            while(root!=null){
                s.push(root);
                root=root.left;
            }
            if(s.empty()) return;
            root=s.pop();
            System.out.print(root.data+" ");
            root=root.right;
        }

    }

