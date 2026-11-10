
void FUN_00188a54(void)

{
  ThreadType *pTVar1;
  
  pTVar1 = (ThreadType *)nn::os::GetCurrentThread();
  nn::os::GetThreadId(pTVar1);
  return;
}

