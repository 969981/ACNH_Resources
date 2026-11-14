
undefined8 FUN_015d7b58(long param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ushort uVar5;
  long *plVar6;
  undefined4 local_88 [2];
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  char *pcStack_58;
  
  if ((((*(char *)(param_1 + 0x16c) != '\0' || *(char *)(param_1 + 0x16d) != '\0') &&
       ((*(uint *)(param_1 + 0x170) & 1) != 0)) && ((*(uint *)(param_1 + 0x170) >> 1 & 1) == 0)) &&
     (uVar1 = *param_3, uVar1 != 0xffffffff)) {
    if ((uVar1 & 0xe000) == 0x6000) {
      if (*(char *)(param_1 + 0x16c) == '\0') {
        return 0;
      }
      if (2 < (uVar1 & 7)) {
        return 0;
      }
    }
    uVar4 = FUN_015d3428(param_2);
    if ((uVar4 & 1) == 0) {
      *(ushort *)(param_2 + 1) = (ushort)param_2[1] & 0xffef | 10;
      uVar3 = FUN_015d3550(0);
      uVar1 = 0;
      if (uVar3 != 0xffffffff) {
        uVar1 = uVar3;
      }
      param_2[6] = uVar1;
      nn::os::LockMutex((MutexType *)(param_1 + 0x4a0));
      if (*(int *)(param_1 + 0x478) < 1) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = *(long **)(param_1 + 0x470);
        if (*plVar6 != 0) {
          *(long *)(*plVar6 + 8) = plVar6[1];
        }
        if ((long *)plVar6[1] != (long *)0x0) {
          *(long *)plVar6[1] = *plVar6;
        }
        *plVar6 = 0;
        plVar6[1] = 0;
        *(int *)(param_1 + 0x478) = *(int *)(param_1 + 0x478) + -1;
      }
      iVar2 = *(int *)(param_1 + 0x47c);
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x4a0));
      if ((plVar6 == (long *)0x0) || (lStack_78 = (long)plVar6 - (long)iVar2, lStack_78 == 0)) {
        *(ushort *)(param_2 + 1) = (ushort)param_2[1] & 0xfff5;
        return 0;
      }
      *(undefined4 *)(lStack_78 + 0x3c) = 1;
      uVar5 = 10;
      if ((param_4 & 1) == 0) {
        uVar5 = 8;
      }
      *(uint *)(lStack_78 + 0x20) = *param_3;
      *(ushort *)(lStack_78 + 0x38) = *(ushort *)(lStack_78 + 0x38) & 0xfffd | uVar5;
      if (*param_2 == 0xffffffff) {
        *param_2 = *param_3;
        *(ushort *)(lStack_78 + 0x38) = *(ushort *)(lStack_78 + 0x38) | 1;
      }
      *(long *)(param_2 + 4) = lStack_78;
      *(ushort *)(param_2 + 1) = (ushort)param_2[1] & 0xfff7 | 1;
      if ((param_4 & 1) == 0) {
        local_70 = 0;
        uStack_68 = 0;
        local_88[0] = 1;
        local_80 = param_1 + 200;
        local_60 = PTR_DAT_04bb2020 + 0x10;
        pcStack_58 = "CheckCacheWherearenPhotographTexture";
        FUN_01557ba0(*(undefined8 *)(*(long *)PTR_DAT_04bb2200 + 0x120),local_88);
        return 1;
      }
      FUN_015d67b4(param_1 + 0x4c0);
      return 1;
    }
  }
  return 0;
}

