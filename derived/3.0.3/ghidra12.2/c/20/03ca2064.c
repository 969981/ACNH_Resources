
void FUN_03ca2064(long *param_1,long param_2,long *param_3)

{
  MutexType *pMVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar7 = *param_1;
  nn::os::LockMutex((MutexType *)(lVar7 + 0x60));
  plVar2 = (long *)(*(int *)((long)param_3 + 0x3c) + param_2);
  if (*plVar2 != 0) {
    *(long *)(*plVar2 + 8) = plVar2[1];
  }
  if ((long *)plVar2[1] != (long *)0x0) {
    *(long *)plVar2[1] = *plVar2;
  }
  *plVar2 = 0;
  plVar2[1] = 0;
  *(int *)(param_3 + 7) = (int)param_3[7] + -1;
  uVar6 = (**(code **)(*param_3 + 0x28))(param_3);
  if (((uVar6 & 1) != 0) && ((int)param_3[7] == 0)) {
    local_58 = *(undefined8 *)(*(long *)(param_3[4] + 0x28) + 0x40);
    uStack_50 = 0;
    pMVar1 = (MutexType *)(PTR_DAT_04bd44e8 + 0x20);
    nn::os::LockMutex(pMVar1);
    puVar3 = PTR_DAT_04bd44c8;
    local_48 = *(undefined8 *)PTR_DAT_04bd44c8;
    *(undefined8 **)PTR_DAT_04bd44c8 = &local_58;
    puVar5 = PTR_LAB_04bd44e0;
    puVar4 = PTR_LAB_04bd44d8;
    FUN_00367a40(PTR_LAB_04bd44d8,PTR_LAB_04bd44e0,0);
    (**(code **)(*param_3 + 0x10))(param_3);
    (**(code **)(*param_3 + 8))(param_3);
    *(undefined8 *)puVar3 = local_48;
    FUN_00367a40(puVar4,puVar5,0);
    nn::os::UnlockMutex(pMVar1);
  }
  nn::os::UnlockMutex((MutexType *)(lVar7 + 0x60));
  return;
}

