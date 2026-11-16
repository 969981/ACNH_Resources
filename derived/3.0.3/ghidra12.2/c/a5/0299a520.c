
long FUN_0299a520(long param_1,int *param_2,int param_3)

{
  undefined *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  lVar5 = *(long *)(param_1 + 0x100);
  iVar3 = 1;
  if (param_3 == 4) {
    iVar3 = 2;
  }
  if (lVar5 != param_1 + 0xf8) {
    uVar2 = *(ushort *)PTR_DAT_04bb6298;
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar2 * 8;
    if (0xff < uVar2) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    do {
      lVar6 = *(long *)(lVar5 + -8);
      iVar4 = 1;
      if (*(int *)(lVar6 + 0x18) == 4) {
        iVar4 = 2;
      }
      if ((((*(int *)(lVar6 + 0x24) == *param_2) && (*(int *)(lVar6 + 0x28) == param_2[1])) &&
          (iVar4 == iVar3 && *(int *)(lVar6 + 0x2c) == param_2[2])) ||
         (((uVar2 != 0xffff && ((*(uint *)(puVar1 + 4) & 1) != 0)) &&
          ((*(int *)(lVar6 + 0x30) == *param_2 &&
           ((*(int *)(lVar6 + 0x34) == param_2[1] &&
            (*(int *)(lVar6 + 0x38) == param_2[2] && iVar4 == iVar3)))))))) goto LAB_0299a668;
      lVar5 = *(long *)(lVar5 + 8);
    } while (lVar5 + -8 != param_1 + 0xf0);
  }
  lVar6 = 0;
LAB_0299a668:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return lVar6;
}

