
bool FUN_01e9eef0(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  byte bVar13;
  undefined4 local_168 [16];
  undefined2 local_128;
  undefined2 local_126;
  undefined4 local_124;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  
  puVar8 = PTR_DAT_04bb30a0;
  uVar7 = (int)param_1[0xef6] - 8;
  if (0xfffffffa < uVar7) goto LAB_01e9f0f4;
  pbVar1 = (byte *)((long)param_1 + 0xad54);
  bVar13 = *pbVar1;
  bVar4 = bVar13 >> 1 & 1;
  bVar2 = 0;
  if (*(int *)((long)param_1 + 0xad44) == 1) {
    bVar2 = bVar4;
  }
  bVar3 = 0;
  if (*(int *)((long)param_1 + 0xad44) == 0) {
    bVar3 = bVar4;
  }
  if ((((bVar2 == 0) && (bVar3 == 0)) || ((int)param_1[0xef6] == 0x10)) ||
     ((*(int *)((long)param_1 + 0x77f4) == 0x10 ||
      (local_168[0] = 0xe, *(int *)(*(long *)(param_1[1] + 0x3b0) + 0x360) == 0xe))))
  goto LAB_01e9f0f4;
  if (bVar3 == 0) {
LAB_01e9efa8:
    iVar10 = *(int *)((long)param_1 + 0xad44);
    bVar4 = bVar13 & 0xf9 | 4;
    if (iVar10 < 1) {
      bVar4 = bVar13 & 0xf9;
    }
    bVar13 = bVar4 | 8;
    if (iVar10 != 2) {
      bVar13 = bVar4 & 0xf7;
    }
    if ((bVar4 & 1) != 0) {
      bVar4 = bVar13;
    }
    bVar13 = bVar4 | 0x10;
    if (iVar10 != 0) {
      bVar13 = bVar4;
    }
    *pbVar1 = bVar13;
  }
  else {
    uVar9 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
    if (uVar9 < 4) {
      bVar13 = *pbVar1;
      goto LAB_01e9efa8;
    }
    FUN_0220fad4(param_1 + 0x15a6);
  }
  uVar9 = FUN_00a86724(*(undefined8 *)puVar8);
  bVar2 = bVar2 & (uVar9 & 0xfffffffe) != 6;
  lVar5 = 0x130;
  lVar6 = (long)param_1 + 0xae84;
  if (bVar2 == 0) {
    lVar5 = 0x128;
    lVar6 = (long)param_1 + 0xae7c;
  }
  local_56 = *(undefined2 *)(lVar6 + 2);
  local_54 = *(undefined4 *)(lVar6 + 4);
  local_58 = *(undefined2 *)(pbVar1 + lVar5);
  if (*(short *)((long)param_1 + 0xae84) != -2) {
    plVar11 = *(long **)(param_1[1] + 0x60);
    if (plVar11 == (long *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_052461c0), iVar10 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        plVar11 = &DAT_05240280;
      }
      else {
        plVar11 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar11 + 0x370))(local_168);
    uVar12 = FUN_0277d7b4(local_168,&local_58);
    if ((uVar12 & 1) == 0) {
      FUN_01e7b7bc(local_168);
      FUN_01f8f1d4(local_168);
      FUN_01ea3608(param_1,bVar2);
      lVar5 = 0x130;
      lVar6 = (long)param_1 + 0xae84;
      if (*(int *)((long)param_1 + 0xae8c) != 1) {
        lVar5 = 0x128;
        lVar6 = (long)param_1 + 0xae7c;
      }
      local_128 = *(undefined2 *)(pbVar1 + lVar5);
      local_126 = *(undefined2 *)(lVar6 + 2);
      local_124 = *(undefined4 *)(lVar6 + 4);
      (**(code **)(*param_1 + 0x38))(param_1,0x12,local_168,1);
    }
  }
LAB_01e9f0f4:
  return uVar7 < 0xfffffffb;
}

