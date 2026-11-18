
void FUN_036da46c(long param_1)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  char cVar10;
  ulong uVar11;
  uint uVar12;
  ushort *puVar13;
  ulong local_60;
  float local_58;
  
  uVar11 = FUN_0290d828();
  puVar8 = PTR_DAT_04bc3a88;
  puVar7 = PTR_DAT_04bc3a48;
  puVar6 = PTR_DAT_04bc39f0;
  if (((uVar11 & 1) == 0) && (*(int *)(PTR_DAT_04bc3a88 + 0x38) != -0x6d41fcf3)) {
    sVar4 = *(short *)PTR_DAT_04bc39f0;
    if (sVar4 != -1) {
      local_60 = CONCAT44(local_60._4_4_,0x19);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar1 >> 0x19 & 1) != 0) &&
         ((((((puVar13 = *(ushort **)PTR_DAT_04bc3a48, puVar13 == (ushort *)0x0 ||
              ((*puVar13 & 1) == 0)) && (*(int *)(param_1 + 0x10) == 2)) &&
            (*(int *)(param_1 + 0x14) != 0)) &&
           ((puVar13 == (ushort *)0x0 || ((*puVar13 & 1) == 0)))) ||
          (((local_60 = CONCAT44(local_60._4_4_,0x1a), (*puVar1 >> 0x1a & 1) != 0 ||
            ((0 < *(int *)(param_1 + 0x14) && (*(int *)(param_1 + 0x14) < 4)))) ||
           (*(int *)(param_1 + 0x14) == 8)))))) goto LAB_036da5b0;
    }
    FUN_036dab00(param_1);
  }
LAB_036da5b0:
  uVar2 = *(uint *)(param_1 + 0x1a70);
  uVar12 = uVar2 & 0xffeffbff;
  *(uint *)(param_1 + 0x1a70) = uVar12;
  if ((uVar2 >> 0xc & 1) == 0) {
    if (((*(int *)(param_1 + 0x14) == 1) || (*(int *)(param_1 + 0x14) == 3)) ||
       (*(int *)(param_1 + 0x14) == 8)) {
      uVar12 = uVar2 & 0xffefe3ff | 0x800;
      goto LAB_036da618;
    }
  }
  else {
    uVar12 = uVar2 >> 2 & 0x800 | uVar2 & 0xffefe3ff;
LAB_036da618:
    *(uint *)(param_1 + 0x1a70) = uVar12;
  }
  bVar9 = false;
  if ((*(int *)(param_1 + 0x14) == 8) && ((uVar12 >> 0x13 & 1) == 0)) {
    bVar9 = *(int *)(puVar8 + 0x38) == -0x21ba1d3a || *(int *)(puVar8 + 0x38) == -0x68a9a319;
  }
  if ((*(ushort **)puVar7 == (ushort *)0x0) || (uVar3 = **(ushort **)puVar7, (uVar3 & 1) == 0)) {
    if (*(int *)(param_1 + 0x10) == 1) goto LAB_036da820;
  }
  else if (((uVar3 ^ 0xffff) & 3) == 0) {
LAB_036da820:
    if (*(int *)(param_1 + 0x14) == 4) {
      cVar10 = *(int *)(puVar8 + 0x38) == -0x17df00c3;
      if ((!(bool)cVar10) && (!(bool)(bVar9 ^ 1))) {
LAB_036da84c:
        cVar10 = (*(int *)(param_1 + 0x18) == 1) << 1;
      }
    }
    else {
      if (bVar9) goto LAB_036da84c;
      cVar10 = '\0';
    }
    FUN_03765990(cVar10);
  }
  if (bVar9) {
    FUN_03765e50();
    *(uint *)(param_1 + 0x1a70) = *(uint *)(param_1 + 0x1a70) | 0x80000;
  }
  if (*(int *)(puVar8 + 0x38) != -0x6efba09b) {
    local_60 = local_60 & 0xffffffff00000000;
    *(uint *)(param_1 + 0x1a70) = *(uint *)(param_1 + 0x1a70) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0x1a88) = 0xffffffff;
  }
  sVar4 = *(short *)puVar6;
  if (sVar4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) != 0) goto LAB_036da75c;
    local_60 = CONCAT44(local_60._4_4_,0x1a);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x1a & 1) != 0) goto LAB_036da75c;
  }
  uVar11 = FUN_0290d828();
  if (((uVar11 & 1) == 0) && (*(int *)(puVar8 + 0x38) != -0x6d41fcf3)) {
    *(undefined4 *)(param_1 + 0x1a70) = 0;
  }
LAB_036da75c:
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x17df00c3) {
    local_58 = 0.0;
    local_60 = 0;
    uVar11 = FUN_021d9820(&local_60,1);
    if ((uVar11 & 1) != 0) {
      iVar5 = (int)((float)(int)((float)local_60 + -10.0) / 5.0) -
              (uint)((float)local_60 + -10.0 < 0.0);
      *(int *)(param_1 + 0x1a30) = iVar5;
      *(int *)(param_1 + 0x1a40) = iVar5 + 3;
      iVar5 = (int)((float)(int)(local_58 + -5.0) / 5.0) - (uint)(local_58 + -5.0 < 0.0);
      *(int *)(param_1 + 0x1a34) = iVar5;
      *(int *)(param_1 + 0x1a44) = iVar5 + 2;
    }
  }
  *(undefined4 *)(param_1 + 0x1a84) = 0;
  return;
}

