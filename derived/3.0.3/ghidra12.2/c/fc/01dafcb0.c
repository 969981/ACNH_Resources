
void FUN_01dafcb0(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*param_1 == 0) goto LAB_01dafcf4;
  FUN_01dafe10();
  lVar6 = *param_1;
  nn::os::LockMutex((MutexType *)(lVar6 + 0xd0));
  if (*(long *)(lVar6 + 0x78) == 0) {
    if (0 < *(int *)(lVar6 + 0x38)) {
      iVar2 = *(int *)(lVar6 + 0x30);
      iVar3 = *(int *)(lVar6 + 0x34);
      iVar1 = 0;
      if (iVar2 <= iVar3) {
        iVar1 = iVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar6 + 0x28) + (long)(iVar3 - iVar1) * 8);
      iVar1 = 0;
      if (iVar3 + 1 < iVar2) {
        iVar1 = iVar3 + 1;
      }
      *(int *)(lVar6 + 0x34) = iVar1;
      *(int *)(lVar6 + 0x38) = *(int *)(lVar6 + 0x38) + -1;
      *(long *)(lVar6 + 0x78) = lVar5;
      if (lVar5 != 0) goto LAB_01dafcec;
    }
    local_34 = 0x2a;
    if (*(int *)(DAT_05358908 + 0x38) != 0 && *(char *)(DAT_05358908 + 0xfd8) == '\0') {
      plVar7 = *(long **)(DAT_05ae6a60 + 0x30);
      uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7);
      if (((uVar4 & 1) == 0) && (uVar4 = (**(code **)(*plVar7 + 0x18))(plVar7), (uVar4 & 1) == 0)) {
        FUN_0387de70(plVar7,&DAT_05b03f00,0xe,0x14,0x2a);
      }
    }
  }
LAB_01dafcec:
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0xd0));
LAB_01dafcf4:
  nn::os::LockMutex((MutexType *)(param_1 + 0xb));
  local_38 = 0;
  FUN_01db1970(param_1,&local_38);
  if (*(char *)((long)param_1 + 0x79) == '\0') {
    FUN_01db1bd0(param_1);
    local_3c = 1;
    FUN_01db1970(param_1,&local_3c);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xb));
  return;
}

