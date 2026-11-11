
void FUN_003c1180(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  if (*(char *)(param_1 + 0x1d8) == '\0') {
    return;
  }
  uVar3 = *(ushort *)(param_1 + 0x1e8);
  if (((uVar3 & 1) == 0) || (*(char *)(param_1 + 0x1d9) == '\0')) {
    iVar9 = 0;
    if (*(char *)(param_1 + 0x1da) == '\0') goto LAB_003c11f8;
joined_r0x003c11d0:
    iVar9 = 0;
    if ((uVar3 >> 1 & 1) == 0) goto LAB_003c11f8;
  }
  else {
    if (*(char *)(param_1 + 0x1da) != '\0') goto joined_r0x003c11d0;
    uVar2 = *(uint *)(param_1 + 0x1c4);
    if (0 < (int)uVar2) {
      uVar12 = *(undefined4 *)(param_1 + 0x1f0);
      uVar5 = (ulong)uVar2 & 3;
      if (uVar2 < 4) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        lVar11 = param_1;
        do {
          uVar6 = uVar6 + 4;
          *(undefined4 *)(lVar11 + 0xc) = uVar12;
          *(undefined4 *)(lVar11 + 0xec) = uVar12;
          *(undefined4 *)(lVar11 + 0x1cc) = uVar12;
          *(undefined4 *)(lVar11 + 0x2ac) = uVar12;
          lVar11 = lVar11 + 0x380;
        } while (((ulong)uVar2 & 0xfffffffc) != uVar6);
      }
      if ((uVar2 & 3) != 0) {
        puVar7 = (undefined4 *)(param_1 + uVar6 * 0xe0 + 0xc);
        do {
          uVar5 = uVar5 - 1;
          *puVar7 = uVar12;
          puVar7 = puVar7 + 0x38;
        } while (uVar5 != 0);
      }
      uVar5 = 0;
      lVar11 = 0x10;
      do {
        FUN_003c1eb0(param_1,auStack_a0,param_1 + 0x20c,*(undefined8 *)(param_1 + 0x260),
                     uVar5 & 0xffffffff,0);
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        FUN_003c2440(param_1,&local_100,0,param_1 + 0x20c,*(undefined8 *)(param_1 + 0x260),
                     auStack_a0);
        puVar1 = (undefined8 *)(param_1 + lVar11);
        uVar5 = uVar5 + 1;
        lVar11 = lVar11 + 0xe0;
        puVar1[8] = local_c0;
        puVar1[9] = uStack_b8;
        puVar1[10] = local_b0;
        puVar1[0xb] = uStack_a8;
        puVar1[4] = local_e0;
        puVar1[5] = uStack_d8;
        puVar1[6] = local_d0;
        puVar1[7] = uStack_c8;
        *puVar1 = local_100;
        puVar1[1] = uStack_f8;
        puVar1[2] = local_f0;
        puVar1[3] = uStack_e8;
      } while ((long)uVar5 < (long)*(int *)(param_1 + 0x1c4));
    }
    fVar14 = *(float *)(param_1 + 0x1ec);
    FUN_03b38a74();
    fVar13 = (float)FUN_003b6ac0();
    uVar2 = *(uint *)(param_1 + 0x1c4);
    if (0 < (int)uVar2) {
      fVar14 = fVar14 * fVar13;
      uVar5 = (ulong)uVar2 & 3;
      if (uVar2 < 4) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        lVar11 = param_1;
        do {
          uVar6 = uVar6 + 4;
          *(float *)(lVar11 + 8) = fVar14;
          *(float *)(lVar11 + 0xe8) = fVar14;
          *(float *)(lVar11 + 0x1c8) = fVar14;
          *(float *)(lVar11 + 0x2a8) = fVar14;
          lVar11 = lVar11 + 0x380;
        } while (((ulong)uVar2 & 0xfffffffc) != uVar6);
      }
      if ((uVar2 & 3) != 0) {
        pfVar8 = (float *)(param_1 + uVar6 * 0xe0 + 8);
        do {
          uVar5 = uVar5 - 1;
          *pfVar8 = fVar14;
          pfVar8 = pfVar8 + 0x38;
        } while (uVar5 != 0);
      }
    }
    iVar9 = 1;
    *(undefined1 *)(param_1 + 0x1da) = 1;
    uVar2 = *(ushort *)(param_1 + 0x1e8) & 0xfff2;
    uVar3 = (ushort)uVar2;
    *(ushort *)(param_1 + 0x1e8) = uVar3;
    if ((uVar2 >> 1 & 1) == 0) goto LAB_003c11f8;
  }
  if (*(char *)(param_1 + 0x1d9) != '\0') {
    *(ushort *)(param_1 + 0x1e8) = uVar3 & 0xfffd;
    *(char *)(param_1 + 0x1dc) = *(char *)(param_1 + 0x1db);
    iVar9 = 1;
    if (*(char *)(param_1 + 0x1db) != '\0') {
      iVar9 = 2;
    }
  }
LAB_003c11f8:
  iVar4 = *(int *)(param_1 + 0x1c4);
  if (0 < iVar4) {
    lVar11 = 0;
    lVar10 = param_1;
    do {
      FUN_003c2f40(lVar10);
      iVar4 = *(int *)(param_1 + 0x1c4);
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0xe0;
    } while (lVar11 < iVar4);
  }
  if (iVar9 == 1) {
    if (0 < iVar4) {
      lVar11 = 0;
      lVar10 = param_1;
      do {
        FUN_003c2e98(lVar10,0);
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 0xe0;
      } while (lVar11 < *(int *)(param_1 + 0x1c4));
    }
  }
  else if ((iVar9 == 2) && (0 < iVar4)) {
    lVar11 = 0;
    lVar10 = param_1;
    do {
      FUN_003c2e98(lVar10,2);
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0xe0;
    } while (lVar11 < *(int *)(param_1 + 0x1c4));
  }
  return;
}

