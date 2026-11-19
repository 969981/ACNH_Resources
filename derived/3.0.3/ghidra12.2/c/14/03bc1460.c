
void FUN_03bc1460(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  long lVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  
  lVar12 = param_1[1];
  if ((lVar12 != 0) && ((int)param_1[2] == *(int *)(lVar12 + 0x10))) {
    uVar5 = *(undefined8 *)(param_2 + 0x80);
    puVar13 = *(uint **)(lVar12 + 0x78);
    uVar3 = *(undefined8 *)(param_2 + 0x68);
    uVar6 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(lVar12 + 0x78) = *(undefined8 *)(param_2 + 0x78);
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(lVar12 + 0x40) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x48);
    uVar8 = *(undefined8 *)(param_2 + 0x50);
    uVar4 = *(undefined8 *)(param_2 + 0x58);
    uVar9 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(lVar12 + 0x68) = uVar3;
    *(undefined8 *)(lVar12 + 0x70) = uVar6;
    *(uint **)(lVar12 + 0x78) = puVar13;
    *(undefined8 *)(lVar12 + 0x80) = uVar5;
    *(undefined8 *)(lVar12 + 0x58) = uVar4;
    *(undefined8 *)(lVar12 + 0x60) = uVar9;
    *(undefined8 *)(lVar12 + 0x48) = uVar7;
    *(undefined8 *)(lVar12 + 0x50) = uVar8;
    if (puVar13 != (uint *)0x0) {
      puVar14 = *(uint **)(param_2 + 0x78);
      uVar15 = *puVar13;
      puVar13[4] = puVar14[4];
      if (0 < (int)uVar15) {
        uVar16 = 0;
        do {
          uVar1 = uVar16;
          if (*puVar14 <= uVar16) {
            uVar1 = 0;
          }
          uVar2 = uVar16;
          if (uVar15 <= uVar16) {
            uVar2 = 0;
          }
          uVar16 = uVar16 + 1;
          *(undefined4 *)(*(long *)(puVar13 + 2) + (ulong)uVar2 * 4) =
               *(undefined4 *)(*(long *)(puVar14 + 2) + (ulong)uVar1 * 4);
          uVar15 = *puVar13;
        } while ((int)uVar16 < (int)uVar15);
      }
    }
    uVar5 = *(undefined8 *)(param_2 + 0xd0);
    puVar13 = *(uint **)(lVar12 + 200);
    uVar3 = *(undefined8 *)(param_2 + 0xb8);
    uVar6 = *(undefined8 *)(param_2 + 0xc0);
    *(undefined8 *)(lVar12 + 200) = *(undefined8 *)(param_2 + 200);
    uVar7 = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(lVar12 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(lVar12 + 0x90) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x98);
    uVar8 = *(undefined8 *)(param_2 + 0xa0);
    uVar4 = *(undefined8 *)(param_2 + 0xa8);
    uVar9 = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(lVar12 + 0xb8) = uVar3;
    *(undefined8 *)(lVar12 + 0xc0) = uVar6;
    *(uint **)(lVar12 + 200) = puVar13;
    *(undefined8 *)(lVar12 + 0xd0) = uVar5;
    *(undefined8 *)(lVar12 + 0xa8) = uVar4;
    *(undefined8 *)(lVar12 + 0xb0) = uVar9;
    *(undefined8 *)(lVar12 + 0x98) = uVar7;
    *(undefined8 *)(lVar12 + 0xa0) = uVar8;
    if (puVar13 != (uint *)0x0) {
      puVar14 = *(uint **)(param_2 + 200);
      uVar15 = *puVar13;
      puVar13[4] = puVar14[4];
      if (0 < (int)uVar15) {
        uVar16 = 0;
        do {
          uVar1 = uVar16;
          if (*puVar14 <= uVar16) {
            uVar1 = 0;
          }
          uVar2 = uVar16;
          if (uVar15 <= uVar16) {
            uVar2 = 0;
          }
          uVar16 = uVar16 + 1;
          *(undefined4 *)(*(long *)(puVar13 + 2) + (ulong)uVar2 * 4) =
               *(undefined4 *)(*(long *)(puVar14 + 2) + (ulong)uVar1 * 4);
          uVar15 = *puVar13;
        } while ((int)uVar16 < (int)uVar15);
      }
    }
    fVar17 = *(float *)(param_2 + 0xf4);
    bVar10 = false;
    bVar11 = true;
    if (0.0 <= fVar17) {
      bVar10 = false;
      bVar11 = true;
      if (!NAN(fVar17)) {
        bVar10 = fVar17 == 1.0;
        bVar11 = 1.0 <= fVar17;
      }
    }
    if (!bVar11 || bVar10) {
      *(float *)(lVar12 + 0xf4) = fVar17;
    }
  }
  lVar12 = *param_1;
  if (lVar12 != 0) {
    fVar17 = *(float *)(param_2 + 0x70) + *(float *)(param_2 + 0xc0);
    if (*(long *)(param_2 + 0x110) != 0) {
      fVar17 = fVar17 + *(float *)(*(long *)(param_2 + 0x110) + 0x48);
    }
    if (*(long *)(param_2 + 0x108) != 0) {
      fVar17 = fVar17 + *(float *)(*(long *)(*(long *)(param_2 + 0x108) + 0x138) + 0x38);
    }
    uVar15 = *(uint *)(lVar12 + 0x80);
    if (0 < (int)uVar15) {
      uVar16 = 0;
      do {
        uVar1 = uVar16;
        if (uVar15 <= uVar16) {
          uVar1 = 0;
        }
        uVar16 = uVar16 + 1;
        *(float *)(*(long *)(lVar12 + 0x88) + (ulong)uVar1 * 0x28 + 0x20) = fVar17;
        uVar15 = *(uint *)(lVar12 + 0x80);
      } while ((int)uVar16 < (int)uVar15);
    }
  }
  return;
}

