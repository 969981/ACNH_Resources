
void FUN_03ca28d4(long *param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_58 = *(undefined8 *)(*(long *)(param_1[4] + 0x28) + 0x40);
  uStack_50 = 0;
  pMVar1 = (MutexType *)(PTR_DAT_04bd44e8 + 0x20);
  nn::os::LockMutex(pMVar1);
  puVar2 = PTR_DAT_04bd44c8;
  local_48 = *(undefined8 *)PTR_DAT_04bd44c8;
  *(undefined8 **)PTR_DAT_04bd44c8 = &local_58;
  puVar4 = PTR_LAB_04bd44e0;
  puVar3 = PTR_LAB_04bd44d8;
  FUN_00367a40(PTR_LAB_04bd44d8,PTR_LAB_04bd44e0,0);
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)(*param_1 + 8))(param_1);
  *(undefined8 *)puVar2 = local_48;
  FUN_00367a40(puVar3,puVar4,0);
  nn::os::UnlockMutex(pMVar1);
  return;
}

