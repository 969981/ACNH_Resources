
void FUN_00317f30(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  long *plVar12;
  bool bVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  long *plVar17;
  undefined1 *puVar18;
  long *plVar19;
  long *plVar20;
  
  puVar1 = PTR_DAT_04bcecc8;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  uVar6 = *(undefined4 *)(param_2 + 0xc);
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)((long)param_1 + 0xc) = uVar6;
  lVar3 = *(long *)(param_2 + 0x18);
  param_1[2] = *(long *)(param_2 + 0x10);
  param_1[3] = lVar3;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  puVar1 = PTR_DAT_04bc0ec8;
  *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  param_1[7] = (long)(puVar1 + 0x10);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = uVar6;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[10] = (long)(param_1 + 8);
  param_1[0xb] = 0x10;
  FUN_0018b070(param_1 + 7,*(undefined8 *)(param_2 + 0x50),0xffffffffffffffff);
  puVar11 = PTR_DAT_04bcea50;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  lVar3 = *(long *)(param_2 + 0x68);
  lVar4 = *(long *)(param_2 + 0x70);
  uVar6 = *(undefined4 *)(param_2 + 100);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0x60);
  *(undefined4 *)((long)param_1 + 100) = uVar6;
  *param_1 = (long)(puVar11 + 0x10);
  lVar9 = lVar4 - lVar3;
  if (lVar9 != 0) {
    if (lVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001a3240();
    }
    lVar14 = FUN_00187df4(lVar9);
    lVar16 = 0;
    param_1[0xd] = lVar14;
    param_1[0xf] = lVar14 + (lVar9 >> 2) * 4;
    do {
      *(undefined4 *)(lVar14 + lVar16) = *(undefined4 *)(lVar3 + lVar16);
      lVar16 = lVar16 + 4;
    } while (lVar3 + lVar16 != lVar4);
    param_1[0xe] = lVar14 + lVar16;
  }
  uVar7 = *(undefined1 *)(param_2 + 0x80);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x10) = uVar7;
  puVar2 = *(undefined1 **)(param_2 + 0x88);
  puVar5 = *(undefined1 **)(param_2 + 0x90);
  uVar10 = (long)puVar5 - (long)puVar2;
  *(undefined4 *)((long)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  if (uVar10 != 0) {
    if ((long)uVar10 < 0) goto LAB_003182a0;
    puVar15 = (undefined1 *)FUN_00187df4(uVar10);
    param_1[0x13] = (long)(puVar15 + uVar10);
    param_1[0x11] = (long)puVar15;
    param_1[0x12] = (long)puVar15;
    puVar18 = puVar2;
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar15 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar15 = puVar15 + 1;
    }
    if ((undefined1 *)0x2 < puVar5 + ~(ulong)puVar2) {
      do {
        *puVar15 = *puVar18;
        puVar15[1] = puVar18[1];
        puVar15[2] = puVar18[2];
        puVar2 = puVar18 + 3;
        puVar18 = puVar18 + 4;
        puVar15[3] = *puVar2;
        puVar15 = puVar15 + 4;
      } while (puVar18 != puVar5);
    }
    param_1[0x12] = (long)puVar15;
  }
  uVar6 = *(undefined4 *)(param_2 + 0xa0);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  puVar2 = *(undefined1 **)(param_2 + 0xa8);
  puVar5 = *(undefined1 **)(param_2 + 0xb0);
  uVar10 = (long)puVar5 - (long)puVar2;
  *(undefined1 *)((long)param_1 + 0xa4) = *(undefined1 *)(param_2 + 0xa4);
  if (uVar10 != 0) {
    if ((long)uVar10 < 0) {
LAB_003182a0:
                    /* WARNING: Subroutine does not return */
      FUN_01c6e7e8();
    }
    puVar15 = (undefined1 *)FUN_00187df4(uVar10);
    param_1[0x17] = (long)(puVar15 + uVar10);
    param_1[0x15] = (long)puVar15;
    param_1[0x16] = (long)puVar15;
    puVar18 = puVar2;
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar15 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar15 = puVar15 + 1;
    }
    if ((undefined1 *)0x2 < puVar5 + ~(ulong)puVar2) {
      do {
        *puVar15 = *puVar18;
        puVar15[1] = puVar18[1];
        puVar15[2] = puVar18[2];
        puVar2 = puVar18 + 3;
        puVar18 = puVar18 + 4;
        puVar15[3] = *puVar2;
        puVar15 = puVar15 + 4;
      } while (puVar18 != puVar5);
    }
    param_1[0x16] = (long)puVar15;
  }
  uVar6 = *(undefined4 *)(param_2 + 0xc0);
  plVar17 = param_1 + 0x1c;
  *plVar17 = 0;
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  puVar11 = PTR_DAT_04bce970;
  param_1[0x1b] = (long)plVar17;
  param_1[0x1d] = 0;
  plVar19 = *(long **)(param_2 + 0xd8);
  param_1[0x19] = (long)(puVar11 + 0x10);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0xd0);
  if (plVar19 != (long *)(param_2 + 0xe0)) {
    do {
      FUN_00202ed8(param_1 + 0x1b,plVar17,plVar19 + 4,plVar19 + 4);
      plVar12 = (long *)plVar19[1];
      plVar20 = plVar19;
      if ((long *)plVar19[1] == (long *)0x0) {
        do {
          plVar19 = (long *)plVar20[2];
          bVar13 = (long *)*plVar19 != plVar20;
          plVar20 = plVar19;
        } while (bVar13);
      }
      else {
        do {
          plVar19 = plVar12;
          plVar12 = (long *)*plVar19;
        } while ((long *)*plVar19 != (long *)0x0);
      }
    } while (plVar19 != (long *)(param_2 + 0xe0));
  }
  param_1[0x19] = (long)(PTR_DAT_04bce920 + 0x10);
  FUN_0018652c(param_1 + 0x1e,param_2 + 0xf0);
  puVar1 = puVar1 + 0x10;
  param_1[0x1f] = (long)puVar1;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x22] = (long)(param_1 + 0x20);
  param_1[0x23] = 0x10;
  FUN_0018b070(param_1 + 0x1f,*(undefined8 *)(param_2 + 0x110),0xffffffffffffffff);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x120);
  uVar8 = *(undefined2 *)(param_2 + 0x124);
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x25] = (long)puVar1;
  *(undefined2 *)((long)param_1 + 0x124) = uVar8;
  param_1[0x28] = (long)(param_1 + 0x26);
  param_1[0x29] = 0x10;
  FUN_0018b070(param_1 + 0x25,*(undefined8 *)(param_2 + 0x140),0xffffffffffffffff);
  return;
}

