
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03b070e0(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar17 = *(undefined8 *)(param_1 + 0x18);
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar12 == 0) {
    iVar11 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar11 = (int)lVar12 + -1;
  }
  puVar13 = (undefined8 *)FUN_0033e680(uVar17,iVar11,&local_40,0x1b0);
  if (puVar13 == (undefined8 *)0x0) {
    return;
  }
  lVar12 = *(long *)(*(long *)(param_2 + 200) + 0x10);
  if (lVar12 == 0) goto LAB_03b073f0;
  uVar17 = *(undefined8 *)(lVar12 + 0x2610);
  puVar13[0x1b] = *(undefined8 *)(lVar12 + 0x2618);
  puVar13[0x1a] = uVar17;
  uVar17 = *(undefined8 *)(lVar12 + 0x2620);
  puVar13[0x1d] = *(undefined8 *)(lVar12 + 0x2628);
  puVar13[0x1c] = uVar17;
  uVar17 = *(undefined8 *)(lVar12 + 0x2630);
  puVar13[0x1f] = *(undefined8 *)(lVar12 + 0x2638);
  puVar13[0x1e] = uVar17;
  uVar17 = *(undefined8 *)(lVar12 + 0x2640);
  puVar13[0x21] = *(undefined8 *)(lVar12 + 0x2648);
  puVar13[0x20] = uVar17;
  uVar10 = _UNK_04102888;
  uVar9 = _DAT_04102880;
  uVar8 = _UNK_041023d8;
  uVar7 = _DAT_041023d0;
  uVar17 = _DAT_04102200;
  if (*(int *)(lVar12 + 0x2bc8) == 0) {
    puVar13[0x23] = _UNK_04102208;
    puVar13[0x22] = uVar17;
    puVar13[0x25] = uVar10;
    puVar13[0x24] = uVar9;
    fVar19 = 0.0;
    puVar13[0x27] = uVar8;
    puVar13[0x26] = uVar7;
  }
  else {
    lVar15 = *(long *)(lVar12 + 0x2bd0);
    uVar17 = *(undefined8 *)(lVar15 + 0x520);
    puVar13[0x23] = *(undefined8 *)(lVar15 + 0x528);
    puVar13[0x22] = uVar17;
    uVar17 = *(undefined8 *)(lVar15 + 0x530);
    puVar13[0x25] = *(undefined8 *)(lVar15 + 0x538);
    puVar13[0x24] = uVar17;
    uVar17 = *(undefined8 *)(lVar15 + 0x540);
    puVar13[0x27] = *(undefined8 *)(lVar15 + 0x548);
    puVar13[0x26] = uVar17;
    fVar18 = *(float *)(*(long *)(lVar12 + 0x2bd0) + 0x4d8);
    fVar20 = *(float *)(*(long *)(lVar12 + 0x2bd0) + 0x59c);
    fVar21 = 1.0;
    if (fVar18 <= 1.0) {
      fVar21 = fVar18;
    }
    fVar19 = 0.0;
    if (0.0 <= fVar18) {
      fVar19 = fVar21;
    }
    fVar21 = 1.0;
    if (fVar20 <= 1.0) {
      fVar21 = fVar20;
    }
    fVar18 = 0.0;
    if (0.0 <= fVar20) {
      fVar18 = fVar21;
    }
    fVar19 = fVar19 * fVar18;
  }
  *(float *)(puVar13 + 0x34) = fVar19;
  lVar15 = *(long *)(lVar12 + 0x1600);
  if ((((*(char *)(lVar15 + 0xa10) == '\0') || (*(char *)(lVar15 + 0x4d0) == '\0')) ||
      (*(char *)(lVar15 + 0x1660) != '\0')) ||
     (uVar16 = *(uint *)(param_2 + 0xb0),
     (*(uint *)(lVar12 + 0x1b48) & 1 << (ulong)(uVar16 & 0x1f)) == 0)) goto LAB_03b073f0;
  lVar15 = *(long *)(lVar12 + 0x1a78);
  if (*(uint *)(lVar12 + 0x1a70) <= uVar16) {
    uVar16 = 0;
  }
  if (lVar15 == 0) goto LAB_03b073f0;
  *(undefined4 *)(puVar13 + 1) = 0x7f7fffff;
  *puVar13 = 0x7f7fffff7f7fffff;
  uVar4 = *(uint *)(lVar15 + (long)(int)uVar16 * 0xfc8 + 0x238);
  uVar14 = (ulong)uVar4;
  if ((int)uVar4 < 1) {
LAB_03b07354:
    uVar7 = DAT_04102218;
    uVar17 = DAT_04102210;
    puVar1 = puVar13 + 2;
    if ((1 - uVar4 & 1) != 0) {
      puVar2 = puVar1 + uVar14 * 8;
      if (2 < uVar4) {
        puVar2 = puVar1;
      }
      uVar14 = (ulong)(uVar4 + 1);
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[7] = uVar7;
      puVar2[6] = uVar17;
    }
    uVar7 = DAT_04102218;
    uVar17 = DAT_04102210;
    if (uVar4 != 2) {
      do {
        uVar16 = (uint)uVar14;
        puVar2 = puVar1 + uVar14 * 8;
        if (2 < uVar16) {
          puVar2 = puVar1;
        }
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[7] = uVar7;
        puVar2[6] = uVar17;
        uVar14 = (ulong)(uVar16 + 2);
        puVar2 = puVar1 + (ulong)(uVar16 + 1) * 8;
        if (2 < uVar16 + 1) {
          puVar2 = puVar1;
        }
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[7] = uVar7;
        puVar2[6] = uVar17;
      } while (uVar16 + 2 != 3);
    }
  }
  else {
    lVar15 = lVar15 + (long)(int)uVar16 * 0xfc8;
    lVar12 = *(long *)(lVar15 + 0x378);
    uVar17 = *(undefined8 *)(lVar12 + 0x2e0);
    puVar13[3] = *(undefined8 *)(lVar12 + 0x2e8);
    puVar13[2] = uVar17;
    uVar17 = *(undefined8 *)(lVar12 + 0x2f0);
    puVar13[5] = *(undefined8 *)(lVar12 + 0x2f8);
    puVar13[4] = uVar17;
    uVar17 = *(undefined8 *)(lVar12 + 0x300);
    puVar13[7] = *(undefined8 *)(lVar12 + 0x308);
    puVar13[6] = uVar17;
    uVar17 = *(undefined8 *)(lVar12 + 0x310);
    puVar13[9] = *(undefined8 *)(lVar12 + 0x318);
    puVar13[8] = uVar17;
    *(undefined4 *)puVar13 = *(undefined4 *)(*(long *)(lVar15 + 0x318) + 4);
    if (uVar4 == 1) goto LAB_03b07354;
    lVar12 = *(long *)(lVar15 + 0x378) + (ulong)(1 < *(uint *)(lVar15 + 0x370)) * 0x5d0;
    uVar17 = *(undefined8 *)(lVar12 + 0x2e0);
    puVar13[0xb] = *(undefined8 *)(lVar12 + 0x2e8);
    puVar13[10] = uVar17;
    uVar17 = *(undefined8 *)(lVar12 + 0x2f0);
    puVar13[0xd] = *(undefined8 *)(lVar12 + 0x2f8);
    puVar13[0xc] = uVar17;
    uVar17 = *(undefined8 *)(lVar12 + 0x300);
    puVar13[0xf] = *(undefined8 *)(lVar12 + 0x308);
    puVar13[0xe] = uVar17;
    uVar17 = *(undefined8 *)(lVar12 + 0x310);
    puVar13[0x11] = *(undefined8 *)(lVar12 + 0x318);
    puVar13[0x10] = uVar17;
    *(undefined4 *)((long)puVar13 + 4) = *(undefined4 *)(*(long *)(lVar15 + 0x318) + 8);
    if (uVar4 < 3) goto LAB_03b07354;
    lVar12 = 0xba0;
    if (*(uint *)(lVar15 + 0x370) < 3) {
      lVar12 = 0;
    }
    lVar12 = *(long *)(lVar15 + 0x378) + lVar12;
    uVar17 = *(undefined8 *)(lVar12 + 0x2e0);
    puVar13[0x13] = *(undefined8 *)(lVar12 + 0x2e8);
    puVar13[0x12] = uVar17;
    uVar17 = *(undefined8 *)(lVar12 + 0x2f0);
    puVar13[0x15] = *(undefined8 *)(lVar12 + 0x2f8);
    puVar13[0x14] = uVar17;
    uVar17 = *(undefined8 *)(lVar12 + 0x300);
    puVar13[0x17] = *(undefined8 *)(lVar12 + 0x308);
    puVar13[0x16] = uVar17;
    uVar17 = *(undefined8 *)(lVar12 + 0x310);
    puVar13[0x19] = *(undefined8 *)(lVar12 + 0x318);
    puVar13[0x18] = uVar17;
    *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(*(long *)(lVar15 + 0x318) + 0xc);
  }
  *(undefined4 *)((long)puVar13 + 0xc) = 0;
LAB_03b073f0:
  lVar12 = *(long *)(*(long *)(param_2 + 200) + 8);
  if (lVar12 != 0) {
    uVar5 = *(ushort *)(lVar12 + 0x30);
    if (uVar5 < 2) {
      uVar5 = 1;
    }
    uVar6 = *(ushort *)(lVar12 + 0x32);
    uVar3 = uVar6;
    if (*(short *)(lVar12 + 0x3a) != 3) {
      uVar3 = 1;
    }
    if (uVar3 <= uVar6) {
      uVar3 = uVar6;
    }
    *(float *)(puVar13 + 0x28) = *(float *)(param_2 + 0x8c) * *(float *)(param_2 + 0x84);
    fVar19 = *(float *)(param_2 + 0x8c);
    fVar21 = *(float *)(param_2 + 0x84);
    *(float *)(puVar13 + 0x29) = 1.0 / (float)uVar5;
    *(float *)((long)puVar13 + 0x14c) = 1.0 / (float)uVar3;
    *(float *)((long)puVar13 + 0x144) = fVar19 * fVar21;
    fVar19 = *(float *)(param_2 + 0x94);
    *(float *)(puVar13 + 0x2a) =
         (*(float *)(param_2 + 0x90) + *(float *)(param_2 + 0x90)) * *(float *)(param_2 + 0x8c) *
         *(float *)(param_2 + 0x84);
    fVar21 = *(float *)(param_2 + 0x8c);
    puVar13[0x2b] = 0;
    *(float *)((long)puVar13 + 0x154) = (fVar19 + fVar19) * fVar21;
  }
  puVar13[0x32] = 0;
  puVar13[0x33] = 0;
  puVar13[0x30] = 0;
  puVar13[0x31] = 0;
  puVar13[0x2e] = 0;
  puVar13[0x2f] = 0;
  puVar13[0x2c] = 0;
  puVar13[0x2d] = 0;
  return;
}

