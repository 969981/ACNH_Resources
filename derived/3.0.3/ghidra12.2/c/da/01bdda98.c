
uint FUN_01bdda98(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  param_1[7] = param_2;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 1) = 0xc;
  param_1[9] = param_3;
  param_1[10] = param_4;
  param_1[0xb] = param_5;
  param_1[0xc] = param_6;
  puVar2 = PTR_DAT_04bb28f8;
  lVar6 = *(long *)PTR_DAT_04bb28f8;
  plVar1 = (long *)(lVar6 + 0x2688);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  nn::os::LockMutex((MutexType *)(lVar6 + 0x26b0));
  *(long **)(lVar6 + 0x2688) = param_1;
  uVar3 = FUN_01bde430(plVar1);
  uVar4 = FUN_01bde840(plVar1);
  uVar5 = *(uint *)(*(long *)(lVar6 + 0x2688) + 8);
  if ((uVar5 >> 3 & 1) == 0) {
    if ((uVar5 >> 4 & 1) == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = FUN_01bdf6c0(plVar1);
    }
  }
  else {
    uVar5 = FUN_01bdf2bc(plVar1);
  }
  if (*(char *)(*plVar1 + 0x1c) != '\0') {
    FUN_01bc1880(*(long *)puVar2 + 0x2990,*plVar1 + 0x18);
  }
  *plVar1 = 0;
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0x26b0));
  (**(code **)(*param_1 + 0x10))(param_1);
  return uVar3 & uVar4 & uVar5 & 1;
}

