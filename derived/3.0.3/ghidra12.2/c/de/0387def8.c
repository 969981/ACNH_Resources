
void FUN_0387def8(long *param_1)

{
  ulong uVar1;
  int local_4c;
  long local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xc));
  local_4c = 0;
  local_3c = 0;
  local_34 = 0;
  local_40 = DAT_05ae69a8;
  local_48 = DAT_05ae69a0;
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1,&local_4c);
  if ((((uVar1 & 1) == 0) && (*(int *)((long)param_1 + 0x24) < 2)) &&
     ((*(int *)((long)param_1 + 0x24) < 1 || (1 < *(int *)((long)param_1 + 0x24))))) {
    *(int *)((long)param_1 + 0x24) = local_4c;
    *(undefined8 *)((long)param_1 + 0x34) = local_3c;
    *(undefined4 *)(param_1 + 6) = local_40;
    param_1[5] = local_48;
    *(undefined4 *)((long)param_1 + 0x3c) = local_34;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xc));
  return;
}

