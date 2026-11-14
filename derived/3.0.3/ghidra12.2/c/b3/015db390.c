
void FUN_015db390(undefined8 *param_1)

{
  EventType *pEVar1;
  EventType *pEVar2;
  EventType *pEVar3;
  EventType *pEVar4;
  EventType *pEVar5;
  EventType *pEVar6;
  
  param_1[0x7d] = 0;
  *param_1 = 0x1100000000;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  memset(param_1 + 0xb9,0,0x1c0);
  memset(param_1 + 0x7f,0,0x1ca);
  param_1[0xf1] = (long)param_1 + 0x79c;
  *(undefined4 *)(param_1 + 0xf3) = 0;
  param_1[0x104] = (long)param_1 + 0x834;
  param_1[0x7c] = 0x40000;
  param_1[0x77] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  param_1[0xf2] = 0x20;
  *(undefined4 *)(param_1 + 0x106) = 0;
  param_1[0x105] = 0x20;
  param_1[0x120] = 0;
  *(undefined2 *)(param_1 + 0x12d) = 0;
  param_1[3] = 0;
  param_1[0x79] = 0xffffffffffffffff;
  param_1[0x7a] = 0xffffffffffffffff;
  param_1[0x7b] = 0xffffffffffffffff;
  *(undefined2 *)((long)param_1 + 0x96b) = 0;
  *(undefined1 *)((long)param_1 + 0x96a) = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x11f] = 0x20;
  *(undefined1 *)((long)param_1 + 0x3f1) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x117),false,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x11b),false,0);
  nn::os::InitializeEvent((EventType *)(param_1 + 0x2c),0,0);
  pEVar1 = (EventType *)(param_1 + 4);
  nn::os::InitializeEvent(pEVar1,0,0);
  pEVar2 = (EventType *)(param_1 + 9);
  nn::os::InitializeEvent(pEVar2,0,0);
  pEVar3 = (EventType *)(param_1 + 0xe);
  nn::os::InitializeEvent(pEVar3,0,0);
  nn::os::InitializeEvent(param_1 + 0x13,0,0);
  pEVar4 = (EventType *)(param_1 + 0x18);
  nn::os::InitializeEvent(pEVar4,0,0);
  pEVar5 = (EventType *)(param_1 + 0x1d);
  nn::os::InitializeEvent(pEVar5,0,0);
  pEVar6 = (EventType *)(param_1 + 0x22);
  nn::os::InitializeEvent(pEVar6,0,0);
  nn::os::InitializeEvent(param_1 + 0x27,0,0);
  nn::os::InitializeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x31),pEVar1);
  nn::os::InitializeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x39),pEVar2);
  nn::os::InitializeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x41),pEVar3);
  nn::os::InitializeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x49),pEVar4);
  nn::os::InitializeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x51),pEVar5);
  nn::os::InitializeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x59),pEVar6);
  nn::os::InitializeMultiWaitHolder
            ((MultiWaitHolderType *)(param_1 + 0x67),(EventType *)(param_1 + 0x2c));
  nn::os::InitializeMultiWait((MultiWaitType *)(param_1 + 0x61));
  param_1[0x6f] = pEVar1;
  param_1[0x70] = pEVar2;
  param_1[0x71] = pEVar3;
  param_1[0x72] = param_1 + 0x13;
  param_1[0x73] = pEVar4;
  param_1[0x74] = pEVar5;
  param_1[0x75] = pEVar6;
  param_1[0x76] = param_1 + 0x27;
  return;
}

