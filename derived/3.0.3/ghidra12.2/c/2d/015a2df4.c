
undefined8
FUN_015a2df4(long param_1,short *param_2,short *param_3,long *param_4,undefined8 param_5,
            uint param_6)

{
  ushort *puVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ushort uVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
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
  
  puVar3 = PTR_DAT_04bb3170;
  if ((*param_3 == *(short *)PTR_DAT_04bb3170) || (uVar4 = FUN_01596ab4(param_2), (uVar4 & 1) != 0))
  {
    uVar5 = 0;
  }
  else {
    param_2[8] = param_2[8] & 0xffbfU | 0x28;
    nn::os::LockMutex((MutexType *)(param_1 + 0xd3e88));
    if (*(int *)(param_1 + 0xd3e60) < 1) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = *(long **)(param_1 + 0xd3e58);
      if (*plVar11 != 0) {
        *(long *)(*plVar11 + 8) = plVar11[1];
      }
      if ((long *)plVar11[1] != (long *)0x0) {
        *(long *)plVar11[1] = *plVar11;
      }
      *plVar11 = 0;
      plVar11[1] = 0;
      *(int *)(param_1 + 0xd3e60) = *(int *)(param_1 + 0xd3e60) + -1;
    }
    iVar2 = *(int *)(param_1 + 0xd3e64);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xd3e88));
    if ((plVar11 == (long *)0x0) || (local_88 = (long)plVar11 - (long)iVar2, local_88 == 0)) {
      uVar5 = 0;
      param_2[8] = param_2[8] & 0xffd7;
    }
    else {
      *(undefined4 *)(local_88 + 0x4054) = 1;
      *(short *)(local_88 + 0x4018) = *param_3;
      *(long *)(local_88 + 0x4020) = *param_4;
      puVar1 = (ushort *)(local_88 + 0x4050);
      uVar7 = *puVar1;
      *puVar1 = uVar7 & 0xfffd;
      lVar9 = *param_4;
      *puVar1 = uVar7 & 0xfffd | 0x80;
      lVar6 = param_1 + 0xb3990;
      if (lVar9 != 0) {
        lVar6 = param_1 + 0xd3df8;
      }
      *(long *)(local_88 + 0x4060) = lVar6;
      uVar8 = 4;
      if ((param_6 & 1) != 0) {
        uVar8 = 5;
      }
      *(undefined4 *)(local_88 + 0x4040) = uVar8;
      if (*param_2 == *(short *)puVar3) {
        *param_2 = *param_3;
        *(long *)(param_2 + 4) = *param_4;
        *puVar1 = *puVar1 | 1;
      }
      uVar7 = param_2[8] | 1;
      param_2[8] = uVar7;
      if (*param_4 != 0) {
        *puVar1 = *puVar1 | 0x10;
        uVar7 = param_2[8] | 4;
      }
      *(long *)(param_2 + 0x10) = local_88;
      param_2[8] = uVar7 & 0xffdf | 2;
      if ((param_6 & 1) == 0) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x270) + 0x20);
        if (lVar6 != 0) {
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
          FUN_03f45184(lVar6,&local_c8);
        }
      }
      else {
        nn::os::LockMutex((MutexType *)(param_1 + 0xd3ee0));
        plVar10 = (long *)(param_1 + 0xd3ea8);
        lVar6 = *plVar10;
        plVar11 = (long *)(local_88 + *(int *)(param_1 + 0xd3ebc));
        *plVar10 = (long)plVar11;
        *plVar11 = lVar6;
        plVar11[1] = (long)plVar10;
        if (lVar6 != 0) {
          *(long **)(lVar6 + 8) = plVar11;
        }
        *(int *)(param_1 + 0xd3eb8) = *(int *)(param_1 + 0xd3eb8) + 1;
        nn::os::UnlockMutex((MutexType *)(param_1 + 0xd3ee0));
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}

