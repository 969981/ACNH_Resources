
undefined8
FUN_015a2a64(long param_1,short *param_2,short *param_3,undefined8 *param_4,undefined8 param_5,
            uint param_6,undefined4 param_7)

{
  ushort *puVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  short *psVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_c8;
  undefined **local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined8 local_a0;
  undefined8 local_98;
  long lStack_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined *local_70;
  char *local_68;
  
  if (*param_3 == *(short *)PTR_DAT_04bb3170) {
    return 0;
  }
  uVar5 = FUN_01596ab4(param_2);
  if ((uVar5 & 1) == 0) {
    param_2[8] = param_2[8] & 0xffbfU | 0x28;
    nn::os::LockMutex((MutexType *)(param_1 + 0xd3e88));
    if (*(int *)(param_1 + 0xd3e60) < 1) {
      plVar12 = (long *)0x0;
    }
    else {
      plVar12 = *(long **)(param_1 + 0xd3e58);
      if (*plVar12 != 0) {
        *(long *)(*plVar12 + 8) = plVar12[1];
      }
      if ((long *)plVar12[1] != (long *)0x0) {
        *(long *)plVar12[1] = *plVar12;
      }
      *plVar12 = 0;
      plVar12[1] = 0;
      *(int *)(param_1 + 0xd3e60) = *(int *)(param_1 + 0xd3e60) + -1;
    }
    iVar4 = *(int *)(param_1 + 0xd3e64);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xd3e88));
    if ((plVar12 == (long *)0x0) || (lVar11 = (long)plVar12 - (long)iVar4, lVar11 == 0)) {
      uVar6 = 0;
      param_2[8] = param_2[8] & 0xffd7;
    }
    else {
      *(undefined4 *)(lVar11 + 0x4054) = 1;
      puVar1 = (ushort *)(lVar11 + 0x4050);
      *(short *)(lVar11 + 0x4018) = *param_3;
      uVar6 = *param_4;
      *puVar1 = *puVar1 & 0xfffd;
      *(undefined8 *)(lVar11 + 0x4020) = uVar6;
      *(undefined4 *)(lVar11 + 0x4044) = param_7;
      uVar5 = FUN_007ef630(param_3);
      if ((uVar5 & 1) == 0) {
        *(long *)(lVar11 + 0x4060) = param_1 + 0x3d908;
        psVar10 = (short *)PTR_DAT_04bb3170;
      }
      else {
        uVar5 = FUN_007ef630(param_3);
        if ((uVar5 & 1) == 0) {
          lVar7 = param_1 + 0xd3d48;
        }
        else {
          uVar5 = FUN_007ef180(param_3);
          lVar7 = 0xc8e00;
          if ((uVar5 & 1) == 0) {
            lVar7 = 0xd3d48;
          }
          lVar7 = param_1 + lVar7;
        }
        psVar10 = (short *)PTR_DAT_04bb3170;
        *(long *)(lVar11 + 0x4060) = lVar7;
        uVar5 = FUN_007ef630(param_3);
        if ((uVar5 & 1) == 0) {
          lVar7 = param_1 + 0xd3cf0;
        }
        else {
          uVar5 = FUN_007ef180(param_3);
          lVar7 = 0xc8da8;
          if ((uVar5 & 1) == 0) {
            lVar7 = 0xd3cf0;
          }
          lVar7 = param_1 + lVar7;
        }
        *(long *)(lVar11 + 0x4058) = lVar7;
        *puVar1 = *puVar1 | 8;
      }
      uVar5 = FUN_007ef760(param_3);
      uVar3 = 0x80;
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      *puVar1 = *puVar1 & 0xff7f | uVar3;
      uVar8 = 1;
      if ((param_6 & 1) != 0) {
        uVar8 = 2;
      }
      *(undefined4 *)(lVar11 + 0x4040) = uVar8;
      if (*param_2 == *psVar10) {
        *param_2 = *param_3;
        *(undefined8 *)(param_2 + 4) = *param_4;
        *puVar1 = *puVar1 | 1;
      }
      *(long *)(param_2 + 0x10) = lVar11;
      param_2[8] = param_2[8] & 0xffdfU | 2;
      if (((uVar5 & 1) == 0) || ((param_6 & 1) != 0)) {
        uVar5 = FUN_007ef630(param_3);
        plVar12 = (long *)(param_1 + 0xd3ea8);
        nn::os::LockMutex((MutexType *)(param_1 + 0xd3ee0));
        plVar2 = (long *)(lVar11 + *(int *)(param_1 + 0xd3ebc));
        if ((uVar5 & 1) == 0) {
          lVar11 = *plVar12;
          *plVar12 = (long)plVar2;
          *plVar2 = lVar11;
          plVar2[1] = (long)plVar12;
          if (lVar11 != 0) {
            *(long **)(lVar11 + 8) = plVar2;
          }
        }
        else {
          puVar9 = *(undefined8 **)(param_1 + 0xd3eb0);
          *(long **)(param_1 + 0xd3eb0) = plVar2;
          *plVar2 = (long)plVar12;
          plVar2[1] = (long)puVar9;
          if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = plVar2;
          }
        }
        *(int *)(param_1 + 0xd3eb8) = *(int *)(param_1 + 0xd3eb8) + 1;
        nn::os::UnlockMutex((MutexType *)(param_1 + 0xd3ee0));
      }
      else {
        lVar7 = *(long *)(*(long *)(param_1 + 0x270) + 0x20);
        if (lVar7 != 0) {
          local_a8 = 0;
          local_b0 = PTR_DAT_04bb5070 + 0x10;
          local_70 = PTR_DAT_04bb2020 + 0x10;
          local_a0 = 0;
          local_c8 = 0;
          local_a6 = 1;
          lStack_90 = param_1 + 0x298;
          local_98 = *(undefined8 *)(*(long *)(param_1 + 0x270) + 8);
          uStack_80 = 0;
          local_78 = 0;
          local_68 = "CheckCache";
          local_c0 = &local_b0;
          uStack_b8 = 0;
          local_88 = lVar11;
          FUN_03f45184(lVar7,&local_c8);
        }
      }
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

