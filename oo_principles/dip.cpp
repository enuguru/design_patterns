public class HighLevelModule
{
  private readonly LowLevelModule _lowLowelModule;
 
  public HighLevelModule()
  {
    _lowLevelModule = new LowLevelModule();   
  }

  public void Call()
  {
    _lowLevelModule.Initiate();
    _lowLevelModule.Send();
  }
}

public class LowLevelModule
{
  public void Initiate()
  {
    //do initiation before sending
  }
  
  public void Send()
  {
    //perform sending operation
  }
}



public abstract class OperationBase
{
  public abstract void Send();
}

public class LowLevelModule: OperationBase
{
  protected LowLevelModule()
  {
    Initiate();
  }

  private void Initiate()
  {
    //do initiation before sending
  }
  
  public override void Send()
  {
    //perform sending operation
  }
}

public class HighLevelModule
{
  private readonly OperationBase _operation;

  public HighLevelModule(OperationBase operation)
  {
    _operation = operation;
  }

  public void Call()
  {
    _operation.Send();
  }
}