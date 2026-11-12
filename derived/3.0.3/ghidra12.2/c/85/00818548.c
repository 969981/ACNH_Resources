
void FUN_00818548(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_a8;
  undefined **local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long lStack_68;
  undefined8 local_60;
  long lStack_58;
  undefined *local_50;
  char *local_48;
  
  if (*(char *)(param_3 + 8) != '\0') {
    return;
  }
  lVar2 = **(long **)(param_3 + 0x18);
  if (*(char *)(lVar2 + 0x160) != '\0') {
    if (((*(byte *)(lVar2 + 0x128) >> 1 & 1) != 0) || (*(char *)(lVar2 + 0x118) != '\0')) {
      plVar3 = *(long **)(*(long *)(param_1 + 0x10) + (long)*(int *)(lVar2 + 0x108) * 8);
      nn::os::LockMutex((MutexType *)(plVar3 + 0x4d));
      (**(code **)(*plVar3 + 0x38))(plVar3,lVar2 + 0x110);
      nn::os::UnlockMutex((MutexType *)(plVar3 + 0x4d));
    }
    *(undefined1 *)(lVar2 + 0x162) = 1;
LAB_008185f0:
    FUN_008176f0(lVar2);
    nn::os::LockMutex((MutexType *)(param_1 + 0xb30));
    plVar3 = (long *)(*(int *)(param_1 + 0xb0c) + lVar2);
    lVar2 = *(long *)(param_1 + 0xaf8);
    *(long **)(param_1 + 0xaf8) = plVar3;
    *plVar3 = lVar2;
    plVar3[1] = param_1 + 0xaf8;
    if (lVar2 != 0) {
      *(long **)(lVar2 + 8) = plVar3;
    }
    *(int *)(param_1 + 0xb08) = *(int *)(param_1 + 0xb08) + 1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xb30));
    return;
  }
  if (*(char *)(lVar2 + 0x162) != '\0') goto LAB_008185f0;
  if (*(char *)(lVar2 + 0x161) == '\0') {
    lVar1 = *(long *)(param_1 + 0xa00);
    if (lVar1 == 0) goto LAB_00818718;
    local_70 = param_1 + 0xa08;
    local_a8 = *(undefined8 *)(param_3 + 0x10);
  }
  else {
    lVar1 = *(long *)(param_1 + 0xa00);
    if (lVar1 == 0) goto LAB_00818718;
    local_a8 = *(undefined8 *)(param_3 + 0x10);
    local_70 = 0;
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  local_88 = 0;
  local_90 = PTR_DAT_04bb5070 + 0x10;
  lStack_58 = param_1 + 0xa28;
  uStack_78 = *(undefined8 *)(param_1 + 0x9e8);
  local_60 = 0;
  local_a0 = &local_90;
  local_48 = "ResLoad";
  local_86 = 1;
  uStack_98 = 0;
  local_80 = 0;
  lStack_68 = lVar2;
  FUN_03f45184(lVar1,&local_a8);
LAB_00818718:
  *(undefined1 *)(param_2 + 8) = 1;
  return;
}

