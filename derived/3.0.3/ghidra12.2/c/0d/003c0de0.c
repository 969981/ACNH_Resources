
/* WARNING: Type propagation algorithm not settling */

void FUN_003c0de0(long param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
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
  
  if (*(char *)(param_1 + 0x1d9) == '\0') {
    return;
  }
  uVar2 = *(ushort *)(param_1 + 0x1e8);
  uVar4 = (uint)uVar2;
  if ((uVar2 >> 2 & 1) != 0) {
    uVar4 = *(uint *)(param_1 + 0x1c4);
    if (0 < (int)uVar4) {
      uVar11 = *(undefined4 *)(param_1 + 0x1f0);
      uVar8 = (ulong)uVar4 & 3;
      if (uVar4 < 4) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        lVar10 = param_1;
        do {
          uVar5 = uVar5 + 4;
          *(undefined4 *)(lVar10 + 0xc) = uVar11;
          *(undefined4 *)(lVar10 + 0xec) = uVar11;
          *(undefined4 *)(lVar10 + 0x1cc) = uVar11;
          *(undefined4 *)(lVar10 + 0x2ac) = uVar11;
          lVar10 = lVar10 + 0x380;
        } while (((ulong)uVar4 & 0xfffffffc) != uVar5);
      }
      if ((uVar4 & 3) != 0) {
        puVar7 = (undefined4 *)(param_1 + uVar5 * 0xe0 + 0xc);
        do {
          uVar8 = uVar8 - 1;
          *puVar7 = uVar11;
          puVar7 = puVar7 + 0x38;
        } while (uVar8 != 0);
      }
    }
    uVar4 = uVar2 & 0xfffffffb;
    *(short *)(param_1 + 0x1e8) = (short)uVar4;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    fVar13 = *(float *)(param_1 + 0x1ec);
    FUN_03b38a74();
    fVar12 = (float)FUN_003b6ac0();
    uVar4 = *(uint *)(param_1 + 0x1c4);
    if (0 < (int)uVar4) {
      fVar13 = fVar13 * fVar12;
      uVar8 = (ulong)uVar4 & 3;
      if (uVar4 < 4) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        lVar10 = param_1;
        do {
          uVar5 = uVar5 + 4;
          *(float *)(lVar10 + 8) = fVar13;
          *(float *)(lVar10 + 0xe8) = fVar13;
          *(float *)(lVar10 + 0x1c8) = fVar13;
          *(float *)(lVar10 + 0x2a8) = fVar13;
          lVar10 = lVar10 + 0x380;
        } while (((ulong)uVar4 & 0xfffffffc) != uVar5);
      }
      if ((uVar4 & 3) != 0) {
        pfVar6 = (float *)(param_1 + uVar5 * 0xe0 + 8);
        do {
          uVar8 = uVar8 - 1;
          *pfVar6 = fVar13;
          pfVar6 = pfVar6 + 0x38;
        } while (uVar8 != 0);
      }
    }
    uVar4 = *(ushort *)(param_1 + 0x1e8) & 0xffffffbf;
    *(short *)(param_1 + 0x1e8) = (short)uVar4;
  }
  if ((uVar4 >> 3 & 1) == 0) {
    uVar3 = uVar4;
  }
  else {
    if (0 < *(int *)(param_1 + 0x1c4)) {
      uVar8 = 0;
      lVar10 = 0x10;
      do {
        FUN_003c1eb0(param_1,auStack_a0,param_1 + 0x20c,*(undefined8 *)(param_1 + 0x260),
                     uVar8 & 0xffffffff,0);
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
        puVar1 = (undefined8 *)(param_1 + lVar10);
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0xe0;
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
      } while ((long)uVar8 < (long)*(int *)(param_1 + 0x1c4));
      uVar4 = (uint)*(ushort *)(param_1 + 0x1e8);
    }
    *(short *)(param_1 + 0x1e8) = (short)(uVar4 & 0xfff7);
    uVar3 = uVar4 & 0xfff7;
  }
  if ((uVar4 >> 4 & 1) == 0) {
    if ((uVar3 >> 5 & 1) == 0) {
      return;
    }
  }
  else {
    uVar4 = FUN_003b7ad8(*(undefined4 *)(param_1 + 0x1fc));
    if (0 < *(int *)(param_1 + 0x1c4)) {
      if ((uVar4 >> 7 & 0x1ff) < 0x7d) {
        lVar10 = 0;
        lVar9 = param_1;
        do {
          FUN_003c2fc0(lVar9,1,uVar4);
          lVar10 = lVar10 + 1;
          lVar9 = lVar9 + 0xe0;
        } while (lVar10 < *(int *)(param_1 + 0x1c4));
      }
      else {
        lVar10 = 0;
        lVar9 = param_1;
        do {
          FUN_003c2fc0(lVar9,0,0);
          lVar10 = lVar10 + 1;
          lVar9 = lVar9 + 0xe0;
        } while (lVar10 < *(int *)(param_1 + 0x1c4));
      }
    }
    uVar2 = *(ushort *)(param_1 + 0x1e8);
    *(ushort *)(param_1 + 0x1e8) = uVar2 & 0xffef;
    if ((uVar2 >> 5 & 1) == 0) {
      return;
    }
  }
  FUN_003c10c0(param_1);
  *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) & 0xffdf;
  return;
}

