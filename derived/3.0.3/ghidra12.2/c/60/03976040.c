
void FUN_03976040(long param_1,uint param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  ulong uVar18;
  long lVar19;
  undefined4 *puVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  float local_70;
  undefined8 local_6c;
  undefined4 local_64;
  
  lVar21 = *(long *)(param_1 + 0x20);
  uVar10 = param_2;
  if (*(uint *)(param_1 + 0x18) <= param_2) {
    uVar10 = 0;
  }
  puVar20 = (undefined4 *)(lVar21 + (long)(int)uVar10 * 0x970);
  lVar22 = *(long *)(puVar20 + 0x92);
  plVar12 = (long *)(puVar20 + 0x8e);
  plVar1 = (long *)(puVar20 + 0x92);
  (**(code **)(*(long *)(puVar20 + 0x8e) + 0x20))(plVar12);
  (**(code **)(*(long *)(puVar20 + 0x8e) + 0x20))(plVar12);
  lVar19 = **(long **)(puVar20 + 0x90);
  bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 8) * 4];
  uVar23 = (ulong)bVar5;
  uVar11 = (**(code **)(*(long *)(puVar20 + 0x8e) + 0x18))(plVar12);
  if (bVar5 != 0) {
    uVar16 = (ulong)*(ushort *)(lVar19 + 4);
    uVar15 = uVar23 & 3;
    puVar14 = (undefined4 *)(lVar21 + (long)(int)uVar10 * 0x970 + 0x910);
    if (bVar5 < 4) {
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      puVar13 = (undefined4 *)(uVar16 + lVar22 + 8);
      do {
        lVar19 = lVar19 + -4;
        puVar13[-2] = *puVar14;
        puVar13[-1] = puVar14[1];
        *puVar13 = puVar14[2];
        puVar17 = puVar14 + 3;
        puVar14 = puVar14 + 4;
        puVar13[1] = *puVar17;
        puVar13 = puVar13 + 4;
      } while (-lVar19 != (uVar23 & 0xfc));
      lVar19 = -lVar19;
    }
    if ((bVar5 & 3) != 0) {
      puVar13 = puVar14;
      puVar17 = (undefined4 *)(lVar22 + uVar16 + lVar19 * 4);
      uVar18 = uVar15;
      do {
        puVar14 = puVar13 + 1;
        uVar18 = uVar18 - 1;
        *puVar17 = *puVar13;
        puVar13 = puVar14;
        puVar17 = puVar17 + 1;
      } while (uVar18 != 0);
    }
    uVar11 = uVar11 & 0xff;
    if (bVar5 < 4) {
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      puVar13 = (undefined4 *)(uVar16 + uVar11 * 4 + lVar22 + 8);
      do {
        lVar19 = lVar19 + -4;
        puVar13[-2] = *puVar14;
        puVar13[-1] = puVar14[1];
        *puVar13 = puVar14[2];
        puVar17 = puVar14 + 3;
        puVar14 = puVar14 + 4;
        puVar13[1] = *puVar17;
        puVar13 = puVar13 + 4;
      } while (-lVar19 != (uVar23 & 0xfc));
      lVar19 = -lVar19;
    }
    if ((bVar5 & 3) != 0) {
      puVar13 = puVar14;
      puVar17 = (undefined4 *)(lVar22 + uVar16 + lVar19 * 4 + uVar11 * 4);
      uVar18 = uVar15;
      do {
        puVar14 = puVar13 + 1;
        uVar18 = uVar18 - 1;
        *puVar17 = *puVar13;
        puVar13 = puVar14;
        puVar17 = puVar17 + 1;
      } while (uVar18 != 0);
    }
    if (bVar5 < 4) {
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      puVar13 = (undefined4 *)(uVar16 + uVar11 * 8 + lVar22 + 8);
      do {
        lVar19 = lVar19 + -4;
        puVar13[-2] = *puVar14;
        puVar13[-1] = puVar14[1];
        *puVar13 = puVar14[2];
        puVar17 = puVar14 + 3;
        puVar14 = puVar14 + 4;
        puVar13[1] = *puVar17;
        puVar13 = puVar13 + 4;
      } while (-lVar19 != (uVar23 & 0xfc));
      lVar19 = -lVar19;
    }
    if ((bVar5 & 3) != 0) {
      puVar13 = puVar14;
      puVar17 = (undefined4 *)(lVar22 + uVar16 + uVar11 * 8 + lVar19 * 4);
      uVar18 = uVar15;
      do {
        puVar14 = puVar13 + 1;
        uVar18 = uVar18 - 1;
        *puVar17 = *puVar13;
        puVar13 = puVar14;
        puVar17 = puVar17 + 1;
      } while (uVar18 != 0);
    }
    if (bVar5 < 4) {
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      puVar13 = (undefined4 *)(uVar16 + uVar11 * 0xc + lVar22 + 8);
      do {
        lVar19 = lVar19 + -4;
        puVar13[-2] = *puVar14;
        puVar13[-1] = puVar14[1];
        *puVar13 = puVar14[2];
        puVar17 = puVar14 + 3;
        puVar14 = puVar14 + 4;
        puVar13[1] = *puVar17;
        puVar13 = puVar13 + 4;
      } while (-lVar19 != (uVar23 & 0xfc));
      lVar19 = -lVar19;
    }
    if ((bVar5 & 3) != 0) {
      puVar13 = (undefined4 *)(lVar22 + uVar16 + lVar19 * 4 + uVar11 * 0xc);
      do {
        uVar15 = uVar15 - 1;
        *puVar13 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar13 = puVar13 + 1;
      } while (uVar15 != 0);
    }
  }
  lVar22 = *plVar1;
  (**(code **)(*plVar12 + 0x20))(plVar12);
  (**(code **)(*plVar12 + 0x20))(plVar12);
  lVar19 = **(long **)(puVar20 + 0x90);
  bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x14) * 4];
  uVar23 = (ulong)bVar5;
  uVar11 = (**(code **)(*plVar12 + 0x18))(plVar12);
  if (bVar5 != 0) {
    uVar16 = (ulong)*(ushort *)(lVar19 + 0x10);
    uVar15 = uVar23 & 3;
    puVar14 = puVar20;
    if (bVar5 < 4) {
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      puVar13 = (undefined4 *)(uVar16 + lVar22 + 8);
      do {
        lVar19 = lVar19 + -4;
        puVar13[-2] = *puVar14;
        puVar13[-1] = puVar14[1];
        *puVar13 = puVar14[2];
        puVar17 = puVar14 + 3;
        puVar14 = puVar14 + 4;
        puVar13[1] = *puVar17;
        puVar13 = puVar13 + 4;
      } while (-lVar19 != (uVar23 & 0xfc));
      lVar19 = -lVar19;
    }
    if ((bVar5 & 3) != 0) {
      puVar13 = puVar14;
      puVar17 = (undefined4 *)(lVar22 + uVar16 + lVar19 * 4);
      uVar18 = uVar15;
      do {
        puVar14 = puVar13 + 1;
        uVar18 = uVar18 - 1;
        *puVar17 = *puVar13;
        puVar13 = puVar14;
        puVar17 = puVar17 + 1;
      } while (uVar18 != 0);
    }
    uVar11 = uVar11 & 0xff;
    if (bVar5 < 4) {
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      puVar13 = (undefined4 *)(uVar16 + uVar11 * 4 + lVar22 + 8);
      do {
        lVar19 = lVar19 + -4;
        puVar13[-2] = *puVar14;
        puVar13[-1] = puVar14[1];
        *puVar13 = puVar14[2];
        puVar17 = puVar14 + 3;
        puVar14 = puVar14 + 4;
        puVar13[1] = *puVar17;
        puVar13 = puVar13 + 4;
      } while (-lVar19 != (uVar23 & 0xfc));
      lVar19 = -lVar19;
    }
    if ((bVar5 & 3) != 0) {
      puVar13 = puVar14;
      puVar17 = (undefined4 *)(lVar22 + uVar16 + lVar19 * 4 + uVar11 * 4);
      uVar18 = uVar15;
      do {
        puVar14 = puVar13 + 1;
        uVar18 = uVar18 - 1;
        *puVar17 = *puVar13;
        puVar13 = puVar14;
        puVar17 = puVar17 + 1;
      } while (uVar18 != 0);
    }
    if (bVar5 < 4) {
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      puVar13 = (undefined4 *)(uVar16 + uVar11 * 8 + lVar22 + 8);
      do {
        lVar19 = lVar19 + -4;
        puVar13[-2] = *puVar14;
        puVar13[-1] = puVar14[1];
        *puVar13 = puVar14[2];
        puVar17 = puVar14 + 3;
        puVar14 = puVar14 + 4;
        puVar13[1] = *puVar17;
        puVar13 = puVar13 + 4;
      } while (-lVar19 != (uVar23 & 0xfc));
      lVar19 = -lVar19;
    }
    if ((bVar5 & 3) != 0) {
      puVar13 = (undefined4 *)(lVar22 + uVar16 + uVar11 * 8 + lVar19 * 4);
      do {
        uVar15 = uVar15 - 1;
        *puVar13 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar13 = puVar13 + 1;
      } while (uVar15 != 0);
    }
  }
  lVar22 = *plVar1;
  (**(code **)(*plVar12 + 0x20))(plVar12);
  (**(code **)(*plVar12 + 0x20))(plVar12);
  lVar19 = **(long **)(puVar20 + 0x90);
  bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x20) * 4];
  uVar23 = (ulong)bVar5;
  uVar11 = (**(code **)(*plVar12 + 0x18))(plVar12);
  if (bVar5 != 0) {
    uVar16 = (ulong)*(ushort *)(lVar19 + 0x1c);
    puVar14 = puVar20 + 0xc;
    uVar15 = uVar23 & 3;
    if (bVar5 < 4) {
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      puVar13 = (undefined4 *)(uVar16 + lVar22 + 8);
      do {
        lVar19 = lVar19 + -4;
        puVar13[-2] = *puVar14;
        puVar13[-1] = puVar14[1];
        *puVar13 = puVar14[2];
        puVar17 = puVar14 + 3;
        puVar14 = puVar14 + 4;
        puVar13[1] = *puVar17;
        puVar13 = puVar13 + 4;
      } while (-lVar19 != (uVar23 & 0xfc));
      lVar19 = -lVar19;
    }
    if ((bVar5 & 3) != 0) {
      puVar13 = puVar14;
      puVar17 = (undefined4 *)(lVar22 + uVar16 + lVar19 * 4);
      uVar18 = uVar15;
      do {
        puVar14 = puVar13 + 1;
        uVar18 = uVar18 - 1;
        *puVar17 = *puVar13;
        puVar13 = puVar14;
        puVar17 = puVar17 + 1;
      } while (uVar18 != 0);
    }
    uVar11 = uVar11 & 0xff;
    if (bVar5 < 4) {
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      puVar13 = (undefined4 *)(uVar16 + uVar11 * 4 + lVar22 + 8);
      do {
        lVar19 = lVar19 + -4;
        puVar13[-2] = *puVar14;
        puVar13[-1] = puVar14[1];
        *puVar13 = puVar14[2];
        puVar17 = puVar14 + 3;
        puVar14 = puVar14 + 4;
        puVar13[1] = *puVar17;
        puVar13 = puVar13 + 4;
      } while (-lVar19 != (uVar23 & 0xfc));
      lVar19 = -lVar19;
    }
    if ((bVar5 & 3) != 0) {
      puVar13 = puVar14;
      puVar17 = (undefined4 *)(lVar22 + uVar16 + lVar19 * 4 + uVar11 * 4);
      uVar18 = uVar15;
      do {
        puVar14 = puVar13 + 1;
        uVar18 = uVar18 - 1;
        *puVar17 = *puVar13;
        puVar13 = puVar14;
        puVar17 = puVar17 + 1;
      } while (uVar18 != 0);
    }
    if (bVar5 < 4) {
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      puVar13 = (undefined4 *)(uVar16 + uVar11 * 8 + lVar22 + 8);
      do {
        lVar19 = lVar19 + -4;
        puVar13[-2] = *puVar14;
        puVar13[-1] = puVar14[1];
        *puVar13 = puVar14[2];
        puVar17 = puVar14 + 3;
        puVar14 = puVar14 + 4;
        puVar13[1] = *puVar17;
        puVar13 = puVar13 + 4;
      } while (-lVar19 != (uVar23 & 0xfc));
      lVar19 = -lVar19;
    }
    if ((bVar5 & 3) != 0) {
      puVar13 = (undefined4 *)(lVar22 + uVar16 + uVar11 * 8 + lVar19 * 4);
      do {
        uVar15 = uVar15 - 1;
        *puVar13 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar13 = puVar13 + 1;
      } while (uVar15 != 0);
    }
  }
  local_70 = (float)puVar20[0x38];
  lVar19 = lVar21 + (long)(int)uVar10 * 0x970;
  lVar22 = *plVar1;
  local_64 = *(undefined4 *)(lVar19 + 0x958);
  local_6c = *(undefined8 *)(lVar19 + 0x95c);
  (**(code **)(*plVar12 + 0x20))(plVar12);
  (**(code **)(*plVar12 + 0x20))(plVar12);
  lVar19 = **(long **)(puVar20 + 0x90);
  bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x2c) * 4];
  (**(code **)(*plVar12 + 0x18))(plVar12);
  if ((ulong)bVar5 != 0) {
    memcpy((void *)(lVar22 + (ulong)*(ushort *)(lVar19 + 0x28)),&local_70,(ulong)bVar5 << 2);
  }
  lVar19 = lVar21 + (long)(int)uVar10 * 0x970;
  lVar22 = *plVar1;
  local_70 = *(float *)(lVar19 + 0x964);
  local_64 = *(undefined4 *)(lVar19 + 0x954);
  local_6c = CONCAT44(*(undefined4 *)(lVar19 + 0x950),
                      *(float *)(lVar19 + 0x968) * (float)puVar20[0x3d]);
  (**(code **)(*plVar12 + 0x20))(plVar12);
  (**(code **)(*plVar12 + 0x20))(plVar12);
  lVar19 = **(long **)(puVar20 + 0x90);
  bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x2c) * 4];
  bVar7 = (**(code **)(*plVar12 + 0x18))(plVar12);
  if ((ulong)bVar5 != 0) {
    memcpy((void *)(lVar22 + (ulong)*(ushort *)(lVar19 + 0x28) + (ulong)bVar7 * 4),&local_70,
           (ulong)bVar5 << 2);
  }
  local_70 = 0.0;
  if (0.0 < *(float *)(param_1 + 0x50)) {
    local_70 = 1.0 / *(float *)(param_1 + 0x50);
  }
  lVar22 = *plVar1;
  local_6c = 0;
  local_64 = 0;
  (**(code **)(*plVar12 + 0x20))(plVar12);
  (**(code **)(*plVar12 + 0x20))(plVar12);
  lVar19 = **(long **)(puVar20 + 0x90);
  bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x2c) * 4];
  bVar7 = (**(code **)(*plVar12 + 0x18))(plVar12);
  if ((ulong)bVar5 != 0) {
    memcpy((void *)(lVar22 + (ulong)*(ushort *)(lVar19 + 0x28) + (ulong)bVar7 * 8),&local_70,
           (ulong)bVar5 << 2);
  }
  iVar2 = puVar20[0x9a];
  lVar21 = lVar21 + (long)(int)uVar10 * 0x970;
  bVar5 = *(byte *)(lVar21 + 0x271);
  uVar6 = *(ushort *)(lVar21 + 0x272);
  iVar8 = (**(code **)(*plVar12 + 0x20))(plVar12);
  iVar9 = (**(code **)(*plVar12 + 0x20))(plVar12);
  lVar19 = *(long *)(lVar21 + 600);
  if (lVar19 != 0) {
    iVar3 = puVar20[0x9a];
    iVar4 = *(int *)(lVar21 + 0x250);
    uVar10 = (**(code **)PTR_DAT_04bcf030)(lVar19);
    if ((uVar10 >> 2 & 1) != 0) {
      (*DAT_04c61fd8)(lVar19,iVar4 + (uint)uVar6 * (uint)bVar5 * ((iVar2 + iVar8) - 1U & -iVar9),
                      iVar3);
    }
  }
  (**(code **)(**(long **)(param_1 + 0x28) + 0x38))(*(long **)(param_1 + 0x28),param_2,puVar20);
  (**(code **)(**(long **)(param_1 + 0x30) + 0x38))(*(long **)(param_1 + 0x30),param_2,puVar20);
  (**(code **)(**(long **)(param_1 + 0x38) + 0x38))(*(long **)(param_1 + 0x38),param_2,puVar20);
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 != 0) {
    lVar21 = *(long *)(param_1 + 0x48);
    uVar11 = 0;
    do {
      plVar12 = *(long **)(lVar21 + (-(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3));
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12,param_2,puVar20);
      }
      uVar23 = uVar11 + 1;
      uVar11 = uVar23 & 0xffffffff;
    } while (iVar2 != (int)uVar23);
  }
  return;
}

