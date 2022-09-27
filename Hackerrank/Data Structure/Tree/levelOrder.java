/* 
    
    class Node 
    	int data;
    	Node left;
    	Node right;
	*/
	public static void levelOrder(Node root) {
      Queue<Node> q=new LinkedList<Node>();
      q.add(root);
      while(!q.isEmpty()){
          Node curNode=q.poll();
          System.out.print(curNode.data+" ");
          if(curNode.left!=null)
          q.add(curNode.left);
          if(curNode.right!=null)
          q.add(curNode.right);
      }
      
    }

