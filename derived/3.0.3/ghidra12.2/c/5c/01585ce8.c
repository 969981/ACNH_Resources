
undefined8 FUN_01585ce8(long param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  ushort uVar6;
  long *plVar7;
  undefined4 local_98 [2];
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  char *pcStack_68;
  
  puVar3 = PTR_DAT_04bb4b48;
  if ((((*(char *)(param_1 + 0x3a0) != '\0' || *(char *)(param_1 + 0x3a1) != '\0') &&
       ((*(uint *)(param_1 + 0xf8) & 1) != 0)) &&
      (local_98[0] = 1, (*(uint *)(param_1 + 0xf8) >> 1 & 1) == 0)) &&
     (uVar1 = *param_3, uVar1 != *(uint *)PTR_DAT_04bb4b48)) {
    if ((uVar1 & 0x38) == 0x10) {
      if (*(char *)(param_1 + 0x3a0) == '\0') {
        return 0;
      }
      if (0x80 < (uVar1 & 0xffc0)) {
        return 0;
      }
    }
    uVar5 = FUN_01581c40(param_2);
    if ((uVar5 & 1) == 0) {
      *(ushort *)(param_2 + 1) = (ushort)param_2[1] & 0xffef | 10;
      uVar4 = FUN_01581d70(0);
      uVar1 = 0;
      if (uVar4 != 0xffffffff) {
        uVar1 = uVar4;
      }
      param_2[6] = uVar1;
      nn::os::LockMutex((MutexType *)(param_1 + 0x490));
      if (*(int *)(param_1 + 0x468) < 1) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = *(long **)(param_1 + 0x460);
        if (*plVar7 != 0) {
          *(long *)(*plVar7 + 8) = plVar7[1];
        }
        if ((long *)plVar7[1] != (long *)0x0) {
          *(long *)plVar7[1] = *plVar7;
        }
        *plVar7 = 0;
        plVar7[1] = 0;
        *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + -1;
      }
      iVar2 = *(int *)(param_1 + 0x46c);
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x490));
      if ((plVar7 == (long *)0x0) || (lStack_88 = (long)plVar7 - (long)iVar2, lStack_88 == 0)) {
        *(ushort *)(param_2 + 1) = (ushort)param_2[1] & 0xfff5;
        return 0;
      }
      *(undefined4 *)(lStack_88 + 0x3c) = 1;
      uVar6 = 10;
      if ((param_4 & 1) == 0) {
        uVar6 = 8;
      }
      *(uint *)(lStack_88 + 0x20) = *param_3;
      uVar1 = *(uint *)puVar3;
      *(ushort *)(lStack_88 + 0x38) = *(ushort *)(lStack_88 + 0x38) & 0xfffd | uVar6;
      if (*param_2 == uVar1) {
        *param_2 = *param_3;
        *(ushort *)(lStack_88 + 0x38) = *(ushort *)(lStack_88 + 0x38) | 1;
      }
      *(long *)(param_2 + 4) = lStack_88;
      *(ushort *)(param_2 + 1) = (ushort)param_2[1] & 0xfff7 | 1;
      if ((param_4 & 1) == 0) {
        local_80 = 0;
        uStack_78 = 0;
        local_98[0] = 1;
        local_90 = param_1 + 0x58;
        local_70 = PTR_DAT_04bb2020 + 0x10;
        pcStack_68 = "CheckCacheHotelRoomPhotographTexture";
        FUN_01557ba0(*(undefined8 *)(*(long *)PTR_DAT_04bb2200 + 0x120),local_98);
        return 1;
      }
      FUN_015848e4(param_1 + 0x4b0);
      return 1;
    }
  }
  return 0;
}

