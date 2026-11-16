
void FUN_0281a7b0(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  long lVar16;
  int iVar17;
  uint *puVar18;
  uint local_84;
  undefined *local_78;
  char *local_70;
  undefined8 local_68;
  
  if (DAT_05574040 == 0) {
    return;
  }
  puVar10 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar6 = (**(code **)(*(long *)*puVar10 + 0x38))();
    if (lVar6 == 0) goto LAB_0281aed8;
    lVar6 = lVar6 + 0x70;
  }
  else if (((puVar10 == (undefined8 *)0x0) || ((long *)puVar10[0x26] == (long *)0x0)) ||
          (lVar6 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar6 == 0)) goto LAB_0281aed8;
  if ((*(long *)(lVar6 + 0xd0) == 0) ||
     (puVar10 = *(undefined8 **)(*(long *)(lVar6 + 0xd0) + 0x10), puVar10 == (undefined8 *)0x0)) {
    local_84 = 0;
  }
  else {
    local_84 = (**(code **)*puVar10)();
  }
  lVar13 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    if ((*(long *)(lVar6 + 0xd0) != 0) &&
       (plVar7 = *(long **)(*(long *)(lVar6 + 0xd0) + 0x20), plVar7 != (long *)0x0)) {
      local_78 = *(undefined **)(lVar6 + 0xb0);
      local_70 = *(char **)(lVar6 + 0xb8);
      local_68 = 0x1e3388;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
    }
    lVar14 = *(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0);
    pbVar15 = (byte *)(lVar14 + lVar13 * 0x13230);
    uVar11 = (ulong)*pbVar15;
    if ((((uVar11 < 0x23) && (pbVar15[1] <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
        (((uint)(&DAT_053e6eb8)[uVar11] >> (ulong)(pbVar15[1] & 0x1f) & 1) != 0)) &&
       (iVar2 = *param_1, iVar2 != 0)) {
      iVar17 = 0;
      lVar12 = *(long *)(param_1 + 2);
      lVar14 = lVar14 + lVar13 * 0x13230 + 0x2f84;
      do {
        lVar16 = lVar12 + (long)iVar17 * 0x3c;
        FUN_02661d90(lVar16);
        pvVar8 = (void *)FUN_026917f4(pbVar15,lVar16 + 0x1c);
        if (pvVar8 != (void *)0x0) {
          FUN_027478c0((long)pvVar8 + 0x38);
          local_70 = "SameLand";
          local_78 = puVar1;
          FUN_02747170((long)pvVar8 + 0x38,&local_78,1);
          uVar5 = FUN_026b3780(pbVar15);
          lVar16 = lVar14 + (ulong)uVar5 * 0x158;
          if (0x9f < uVar5) {
            lVar16 = lVar14;
          }
          FUN_027a896c(lVar16,pvVar8);
          memset(pvVar8,0,0x5f0);
          FUN_027b5970(pvVar8);
        }
        iVar17 = iVar17 + 1;
      } while (iVar2 != iVar17);
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 10);
  if ((*(long *)(lVar6 + 0xd0) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar6 + 0xd0) + 0x20), plVar7 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar6 + 0xb0);
    local_70 = *(char **)(lVar6 + 0xb8);
    local_68 = 0x1e3388;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
  }
  lVar13 = *(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0);
  pbVar15 = (byte *)(lVar13 + 0xbf670);
  uVar11 = (ulong)*pbVar15;
  if (((uVar11 < 0x23) && (*(byte *)(lVar13 + 0xbf671) <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
     ((((uint)(&DAT_053e6eb8)[uVar11] >> (ulong)(*(byte *)(lVar13 + 0xbf671) & 0x1f) & 1) != 0 &&
      (iVar2 = *param_1, iVar2 != 0)))) {
    lVar14 = *(long *)(param_1 + 2);
    iVar17 = 0;
    do {
      pvVar8 = (void *)FUN_026917f4(pbVar15,lVar14 + (long)iVar17 * 0x3c + 0x1c);
      if (pvVar8 != (void *)0x0) {
        FUN_027478c0((long)pvVar8 + 0x38);
        uVar5 = FUN_026b3780(pbVar15);
        lVar12 = lVar13 + 0xc25f4 + (ulong)uVar5 * 0x158;
        if (0x9f < uVar5) {
          lVar12 = lVar13 + 0xc25f4;
        }
        FUN_027a896c(lVar12,pvVar8);
        memset(pvVar8,0,0x5f0);
        FUN_027b5970(pvVar8);
      }
      iVar17 = iVar17 + 1;
    } while (iVar2 != iVar17);
  }
  if ((*(long *)(lVar6 + 0xd0) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar6 + 0xd0) + 0x20), plVar7 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar6 + 0xb0);
    local_70 = *(char **)(lVar6 + 0xb8);
    local_68 = 0x1e3388;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
  }
  lVar13 = *(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0);
  pbVar15 = (byte *)(lVar13 + 0xd28a0);
  uVar11 = (ulong)*pbVar15;
  if ((((uVar11 < 0x23) && (*(byte *)(lVar13 + 0xd28a1) <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
      (((uint)(&DAT_053e6eb8)[uVar11] >> (ulong)(*(byte *)(lVar13 + 0xd28a1) & 0x1f) & 1) != 0)) &&
     (iVar2 = *param_1, iVar2 != 0)) {
    lVar14 = *(long *)(param_1 + 2);
    iVar17 = 0;
    do {
      pvVar8 = (void *)FUN_026917f4(pbVar15,lVar14 + (long)iVar17 * 0x3c + 0x1c);
      if (pvVar8 != (void *)0x0) {
        FUN_027478c0((long)pvVar8 + 0x38);
        uVar5 = FUN_026b3780(pbVar15);
        lVar12 = lVar13 + 0xd5824 + (ulong)uVar5 * 0x158;
        if (0x9f < uVar5) {
          lVar12 = lVar13 + 0xd5824;
        }
        FUN_027a896c(lVar12,pvVar8);
        memset(pvVar8,0,0x5f0);
        FUN_027b5970(pvVar8);
      }
      iVar17 = iVar17 + 1;
    } while (iVar2 != iVar17);
  }
  if ((*(long *)(lVar6 + 0xd0) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar6 + 0xd0) + 0x20), plVar7 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar6 + 0xb0);
    local_70 = *(char **)(lVar6 + 0xb8);
    local_68 = 0x1e3388;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
  }
  lVar13 = *(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0);
  pbVar15 = (byte *)(lVar13 + 0xe5ad0);
  uVar11 = (ulong)*pbVar15;
  if (((uVar11 < 0x23) && (*(byte *)(lVar13 + 0xe5ad1) <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
     ((((uint)(&DAT_053e6eb8)[uVar11] >> (ulong)(*(byte *)(lVar13 + 0xe5ad1) & 0x1f) & 1) != 0 &&
      (iVar2 = *param_1, iVar2 != 0)))) {
    lVar14 = *(long *)(param_1 + 2);
    iVar17 = 0;
    do {
      pvVar8 = (void *)FUN_026917f4(pbVar15,lVar14 + (long)iVar17 * 0x3c + 0x1c);
      if (pvVar8 != (void *)0x0) {
        FUN_027478c0((long)pvVar8 + 0x38);
        uVar5 = FUN_026b3780(pbVar15);
        lVar12 = lVar13 + 0xe8a54 + (ulong)uVar5 * 0x158;
        if (0x9f < uVar5) {
          lVar12 = lVar13 + 0xe8a54;
        }
        FUN_027a896c(lVar12,pvVar8);
        memset(pvVar8,0,0x5f0);
        FUN_027b5970(pvVar8);
      }
      iVar17 = iVar17 + 1;
    } while (iVar2 != iVar17);
  }
  if ((*(long *)(lVar6 + 0xd0) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar6 + 0xd0) + 0x20), plVar7 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar6 + 0xb0);
    local_70 = *(char **)(lVar6 + 0xb8);
    local_68 = 0x1e3388;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
  }
  lVar13 = *(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0);
  pbVar15 = (byte *)(lVar13 + 0xf8d00);
  uVar11 = (ulong)*pbVar15;
  if ((((uVar11 < 0x23) && (*(byte *)(lVar13 + 0xf8d01) <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
      (((uint)(&DAT_053e6eb8)[uVar11] >> (ulong)(*(byte *)(lVar13 + 0xf8d01) & 0x1f) & 1) != 0)) &&
     (iVar2 = *param_1, iVar2 != 0)) {
    lVar14 = *(long *)(param_1 + 2);
    iVar17 = 0;
    do {
      pvVar8 = (void *)FUN_026917f4(pbVar15,lVar14 + (long)iVar17 * 0x3c + 0x1c);
      if (pvVar8 != (void *)0x0) {
        FUN_027478c0((long)pvVar8 + 0x38);
        uVar5 = FUN_026b3780(pbVar15);
        lVar12 = lVar13 + 0xfbc84 + (ulong)uVar5 * 0x158;
        if (0x9f < uVar5) {
          lVar12 = lVar13 + 0xfbc84;
        }
        FUN_027a896c(lVar12,pvVar8);
        memset(pvVar8,0,0x5f0);
        FUN_027b5970(pvVar8);
      }
      iVar17 = iVar17 + 1;
    } while (iVar2 != iVar17);
  }
  if ((*(long *)(lVar6 + 0xd0) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar6 + 0xd0) + 0x20), plVar7 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar6 + 0xb0);
    local_70 = *(char **)(lVar6 + 0xb8);
    local_68 = 0x1e3388;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
  }
  iVar2 = *param_1;
  if (iVar2 != 0) {
    lVar13 = *(long *)(lVar6 + 0xb0);
    lVar14 = *(long *)(lVar6 + 0xb8);
    iVar17 = 0;
    lVar12 = *(long *)(param_1 + 2);
    do {
      FUN_028518d4(lVar14 + lVar13 + 0x1cb510,lVar12 + (long)iVar17 * 0x3c);
      iVar17 = iVar17 + 1;
    } while (iVar2 != iVar17);
  }
  if ((((local_84 & 1) != 0) && (*(long *)(lVar6 + 0xd0) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar6 + 0xd0) + 0x18), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
LAB_0281aed8:
  if ((DAT_05574040 != 0) &&
     (lVar6 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))(), lVar6 != 0))
  {
    plVar7 = (long *)(lVar6 + 0x276cb8);
    if ((*(long *)(lVar6 + 0x276cd8) == 0) ||
       (puVar10 = *(undefined8 **)(*(long *)(lVar6 + 0x276cd8) + 0x10), puVar10 == (undefined8 *)0x0
       )) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar10)();
      uVar5 = uVar5 ^ 1;
    }
    puVar1 = PTR_DAT_04bb27d0;
    iVar2 = *param_1;
    if (iVar2 != 0) {
      iVar17 = 0;
      lVar13 = *(long *)(param_1 + 2);
      do {
        if ((*(long *)(lVar6 + 0x276cd8) != 0) &&
           (plVar9 = *(long **)(*(long *)(lVar6 + 0x276cd8) + 0x20), plVar9 != (long *)0x0)) {
          local_78 = (undefined *)*plVar7;
          local_70 = *(char **)(lVar6 + 0x276cc0);
          local_68 = 0x3fd140;
          (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
        }
        puVar18 = (uint *)(lVar13 + (long)iVar17 * 0x3c + 0x38);
        if (*puVar18 < 8) {
          lVar14 = *(long *)(lVar6 + 0x276cc0) + *plVar7 + (ulong)*puVar18 * 0xd8;
          *(undefined8 *)(&LAB_003c5388 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5390 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5378 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5380 + lVar14) = 0;
          *(undefined8 *)(lVar14 + 0x3c52c0) = 0;
          *(undefined8 *)(&LAB_003c5368 + lVar14) = 0;
          *(undefined8 *)(lVar14 + 0x3c5370) = 0;
          *(undefined8 *)(&LAB_003c5390 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5358 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5360 + lVar14) = 0;
          *(undefined8 *)(lVar14 + 0x3c535c) = 0;
          *(undefined8 *)(&LAB_003c5364 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c536c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5374 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c537c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5384 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5348 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5350 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c534c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5354 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5338 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5340 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c533c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5344 + lVar14) = 0;
          *(undefined8 *)(&DAT_003c5328 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5330 + lVar14) = 0;
          *(undefined8 *)(&DAT_003c532c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5334 + lVar14) = 0;
          *(undefined8 *)(lVar14 + 0x3c5318) = 0;
          *(undefined8 *)(FUN_003c5320 + lVar14) = 0;
          *(undefined8 *)(lVar14 + 0x3c531c) = 0;
          *(undefined8 *)(FUN_003c5320 + lVar14 + 4) = 0;
          *(undefined8 *)(lVar14 + 0x3c5308) = 0;
          *(undefined8 *)(lVar14 + 0x3c5310) = 0;
          *(undefined8 *)(lVar14 + 0x3c530c) = 0;
          *(undefined8 *)(lVar14 + 0x3c5314) = 0;
          *(undefined8 *)(lVar14 + 0x3c52f8) = 0;
          *(undefined8 *)(lVar14 + 0x3c5300) = 0;
          *(undefined8 *)(lVar14 + 0x3c52fc) = 0;
          *(undefined8 *)(lVar14 + 0x3c5304) = 0;
          *(undefined8 *)(lVar14 + 0x3c52e8) = 0;
          *(undefined8 *)(lVar14 + 0x3c52f0) = 0;
          *(undefined8 *)(&DAT_003c52ec + lVar14) = 0;
          *(undefined8 *)(lVar14 + 0x3c52f4) = 0;
          *(undefined8 *)(lVar14 + 0x3c52d8) = 0;
          *(undefined8 *)(lVar14 + 0x3c52e0) = 0;
          *(undefined1 *)(lVar14 + 0x3c52d8) = 2;
          *(undefined8 *)(lVar14 + 0x3c52dc) = 0;
          *(undefined8 *)(lVar14 + 0x3c52e4) = 0;
          *(undefined8 *)(lVar14 + 0x3c52c8) = 0;
          *(undefined8 *)(lVar14 + 0x3c52d0) = 0;
          *(undefined8 *)(lVar14 + 0x3c52c4) = 0;
          *(undefined8 *)(lVar14 + 0x3c52cc) = 0;
          *(undefined4 *)(lVar14 + 0x3c52d4) = 0;
        }
        if ((*(long *)(lVar6 + 0x276cd8) != 0) &&
           (plVar9 = *(long **)(*(long *)(lVar6 + 0x276cd8) + 0x20), plVar9 != (long *)0x0)) {
          local_78 = (undefined *)*plVar7;
          local_70 = *(char **)(lVar6 + 0x276cc0);
          local_68 = 0x3fd140;
          (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
        }
        if (*puVar18 < 8) {
          lVar14 = *(long *)(lVar6 + 0x276cc0) + *plVar7 + (ulong)*puVar18 * 0xd8;
          *(undefined8 *)(&LAB_003c5a48 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5a50 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5a38 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5a40 + lVar14) = 0;
          *(undefined8 *)(lVar14 + 0x3c5980) = 0;
          *(undefined8 *)(lVar14 + 0x3c5a28) = 0;
          *(undefined8 *)(&LAB_003c5a30 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5a50 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5a18 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5a20 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5a1c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5a24 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5a2c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5a34 + lVar14) = 0;
          *(undefined8 *)(lVar14 + 0x3c5a3c) = 0;
          *(undefined8 *)(&LAB_003c5a44 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5a08 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5a10 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5a0c + lVar14) = 0;
          *(undefined8 *)(lVar14 + 0x3c5a14) = 0;
          *(undefined8 *)(lVar14 + 0x3c59f8) = 0;
          *(undefined8 *)(&LAB_003c5a00 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c59fc + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5a04 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c59e8 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c59f0 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c59ec + lVar14) = 0;
          *(undefined8 *)(&LAB_003c59f4 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c59d8 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c59e0 + lVar14) = 0;
          *(undefined8 *)(lVar14 + 0x3c59dc) = 0;
          *(undefined8 *)(&LAB_003c59e4 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c59c8 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c59d0 + lVar14) = 0;
          *(undefined8 *)(lVar14 + 0x3c59cc) = 0;
          *(undefined8 *)(&LAB_003c59d4 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c59b8 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c59c0 + lVar14) = 0;
          *(undefined8 *)(lVar14 + 0x3c59bc) = 0;
          *(undefined8 *)(&LAB_003c59c4 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c59a8 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c59b0 + lVar14) = 0;
          *(undefined8 *)(lVar14 + 0x3c59ac) = 0;
          *(undefined8 *)(&LAB_003c59b4 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5998 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c59a0 + lVar14) = 0;
          (&LAB_003c5998)[lVar14] = 2;
          *(undefined8 *)(&LAB_003c599c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c59a4 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5988 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5990 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c5984 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c598c + lVar14) = 0;
          *(undefined4 *)(lVar14 + 0x3c5994) = 0;
        }
        if ((*(long *)(lVar6 + 0x276cd8) != 0) &&
           (plVar9 = *(long **)(*(long *)(lVar6 + 0x276cd8) + 0x20), plVar9 != (long *)0x0)) {
          local_78 = (undefined *)*plVar7;
          local_70 = *(char **)(lVar6 + 0x276cc0);
          local_68 = 0x3fd140;
          (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
        }
        lVar14 = **(long **)puVar1;
        bVar3 = *(byte *)(lVar14 + 0x473);
        if ((long)(char)bVar3 == 0xffffffffffffffff) {
LAB_0281b1d0:
          bVar4 = true;
        }
        else {
          pbVar15 = (byte *)(lVar14 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
          if (7 < bVar3) {
            pbVar15 = (byte *)(lVar14 + 0x48);
          }
          if ((*pbVar15 >> 3 & 1) == 0) goto LAB_0281b1d0;
          bVar4 = *(byte *)(lVar14 + 0x472) == bVar3;
        }
        if ((*puVar18 < 8) && (bVar4)) {
          lVar14 = *(long *)(lVar6 + 0x276cc0) + *plVar7 + (ulong)*puVar18 * 0x6c0;
          *(undefined8 *)(&LAB_003c6100 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6108 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6104 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60f0 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60f8 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60f4 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60fc + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60e0 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60e8 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60e4 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60ec + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60d0 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60d8 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60d4 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60dc + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60c0 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60c8 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60c4 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60cc + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60b0 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60b8 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60b4 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60bc + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60a0 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60a8 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60a4 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c60ac + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6090 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6098 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6094 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c609c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6080 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6088 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6084 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c608c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6070 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6078 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6074 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c607c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6060 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6068 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6064 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c606c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6050 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6058 + lVar14) = 0;
          (&LAB_003c6058)[lVar14] = 2;
          *(undefined4 *)(&LAB_003c6054 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c605c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6040 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6048 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6044 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c604c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6118 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6120 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6110 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c611c + lVar14) = 0;
          *(undefined8 *)(lVar14 + 0x3c61e8) = 0;
          *(undefined8 *)(lVar14 + 0x3c6390) = 0;
          *(undefined8 *)(lVar14 + 0x3c6388) = 0;
          *(undefined8 *)(lVar14 + 0x3c6380) = 0;
          *(undefined8 *)(lVar14 + 0x3c6378) = 0;
          *(undefined8 *)(lVar14 + 0x3c6370) = 0;
          *(undefined8 *)(lVar14 + 0x3c6368) = 0;
          *(undefined8 *)(lVar14 + 0x3c6360) = 0;
          *(undefined8 *)(lVar14 + 0x3c6358) = 0;
          *(undefined8 *)(lVar14 + 0x3c6350) = 0;
          *(undefined8 *)(lVar14 + 0x3c6348) = 0;
          *(undefined8 *)(lVar14 + 0x3c6340) = 0;
          *(undefined8 *)(lVar14 + 0x3c6338) = 0;
          *(undefined8 *)(lVar14 + 0x3c6330) = 0;
          *(undefined8 *)(lVar14 + 0x3c6328) = 0;
          *(undefined8 *)(lVar14 + 0x3c6320) = 0;
          *(undefined8 *)(lVar14 + 0x3c6324) = 0;
          *(undefined8 *)(lVar14 + 0x3c632c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6334) = 0;
          *(undefined8 *)(lVar14 + 0x3c633c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6344) = 0;
          *(undefined8 *)(lVar14 + 0x3c634c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6354) = 0;
          *(undefined8 *)(lVar14 + 0x3c635c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6364) = 0;
          *(undefined8 *)(lVar14 + 0x3c636c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6374) = 0;
          *(undefined8 *)(lVar14 + 0x3c637c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6384) = 0;
          *(undefined8 *)(lVar14 + 0x3c638c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6468) = 0;
          *(undefined8 *)(lVar14 + 0x3c6460) = 0;
          *(undefined8 *)(lVar14 + 0x3c6458) = 0;
          *(undefined8 *)(lVar14 + 0x3c6450) = 0;
          *(undefined8 *)(lVar14 + 0x3c6448) = 0;
          *(undefined8 *)(lVar14 + 0x3c6440) = 0;
          *(undefined8 *)(lVar14 + 0x3c6438) = 0;
          *(undefined8 *)(lVar14 + 0x3c6430) = 0;
          *(undefined8 *)(lVar14 + 0x3c6428) = 0;
          *(undefined8 *)(lVar14 + 0x3c6420) = 0;
          *(undefined8 *)(lVar14 + 0x3c6418) = 0;
          *(undefined8 *)(lVar14 + 0x3c6410) = 0;
          *(undefined8 *)(lVar14 + 0x3c6408) = 0;
          *(undefined8 *)(lVar14 + 0x3c6400) = 0;
          *(undefined8 *)(lVar14 + 0x3c63f8) = 0;
          *(undefined8 *)(lVar14 + 0x3c63f0) = 0;
          *(undefined8 *)(lVar14 + 0x3c63e8) = 0;
          *(undefined8 *)(lVar14 + 0x3c63e0) = 0;
          *(undefined8 *)(lVar14 + 0x3c63d8) = 0;
          *(undefined8 *)(lVar14 + 0x3c63d0) = 0;
          *(undefined8 *)(lVar14 + 0x3c63c8) = 0;
          *(undefined8 *)(lVar14 + 0x3c63c0) = 0;
          *(undefined8 *)(lVar14 + 0x3c63b8) = 0;
          *(undefined8 *)(lVar14 + 0x3c63b0) = 0;
          *(undefined8 *)(lVar14 + 0x3c63a8) = 0;
          *(undefined8 *)(lVar14 + 0x3c63a0) = 0;
          *(undefined8 *)(lVar14 + 0x3c6398) = 0;
          *(undefined1 *)(lVar14 + 0x3c63b8) = 2;
          *(undefined8 *)(lVar14 + 0x3c63a4) = 0;
          *(undefined8 *)(lVar14 + 0x3c63ac) = 0;
          *(undefined4 *)(lVar14 + 0x3c63b4) = 0;
          *(undefined8 *)(lVar14 + 0x3c63bc) = 0;
          *(undefined8 *)(lVar14 + 0x3c63c4) = 0;
          *(undefined8 *)(lVar14 + 0x3c63cc) = 0;
          *(undefined8 *)(lVar14 + 0x3c63d4) = 0;
          *(undefined8 *)(lVar14 + 0x3c63dc) = 0;
          *(undefined8 *)(lVar14 + 0x3c63e4) = 0;
          *(undefined8 *)(lVar14 + 0x3c63ec) = 0;
          *(undefined8 *)(lVar14 + 0x3c63f4) = 0;
          *(undefined8 *)(lVar14 + 0x3c63fc) = 0;
          *(undefined8 *)(lVar14 + 0x3c6404) = 0;
          *(undefined8 *)(lVar14 + 0x3c640c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6414) = 0;
          *(undefined8 *)(lVar14 + 0x3c641c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6424) = 0;
          *(undefined8 *)(lVar14 + 0x3c642c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6434) = 0;
          *(undefined8 *)(lVar14 + 0x3c643c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6444) = 0;
          *(undefined8 *)(lVar14 + 0x3c644c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6454) = 0;
          *(undefined8 *)(lVar14 + 0x3c645c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6464) = 0;
          *(undefined8 *)(lVar14 + 0x3c6540) = 0;
          *(undefined8 *)(lVar14 + 0x3c6538) = 0;
          *(undefined8 *)(lVar14 + 0x3c6530) = 0;
          *(undefined8 *)(lVar14 + 0x3c6528) = 0;
          *(undefined8 *)(lVar14 + 0x3c6520) = 0;
          *(undefined8 *)(lVar14 + 0x3c6518) = 0;
          *(undefined8 *)(lVar14 + 0x3c6510) = 0;
          *(undefined8 *)(lVar14 + 0x3c6508) = 0;
          *(undefined8 *)(lVar14 + 0x3c6500) = 0;
          *(undefined8 *)(lVar14 + 0x3c64f8) = 0;
          *(undefined8 *)(lVar14 + 0x3c64f0) = 0;
          *(undefined8 *)(lVar14 + 0x3c64e8) = 0;
          *(undefined8 *)(lVar14 + 0x3c64e0) = 0;
          *(undefined8 *)(lVar14 + 0x3c64d8) = 0;
          *(undefined8 *)(lVar14 + 0x3c64d0) = 0;
          *(undefined8 *)(lVar14 + 0x3c64c8) = 0;
          *(undefined8 *)(lVar14 + 0x3c64c0) = 0;
          *(undefined8 *)(lVar14 + 0x3c64b8) = 0;
          *(undefined8 *)(lVar14 + 0x3c64b0) = 0;
          *(undefined8 *)(lVar14 + 0x3c64a8) = 0;
          *(undefined8 *)(lVar14 + 0x3c64a0) = 0;
          *(undefined8 *)(lVar14 + 0x3c6498) = 0;
          *(undefined8 *)(lVar14 + 0x3c6490) = 0;
          *(undefined8 *)(lVar14 + 0x3c6488) = 0;
          *(undefined8 *)(lVar14 + 0x3c6480) = 0;
          *(undefined8 *)(lVar14 + 0x3c6478) = 0;
          *(undefined8 *)(lVar14 + 0x3c6470) = 0;
          *(undefined1 *)(lVar14 + 0x3c6490) = 2;
          *(undefined8 *)(lVar14 + 0x3c647c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6484) = 0;
          *(undefined4 *)(lVar14 + 0x3c648c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6494) = 0;
          *(undefined8 *)(lVar14 + 0x3c649c) = 0;
          *(undefined8 *)(lVar14 + 0x3c64a4) = 0;
          *(undefined8 *)(lVar14 + 0x3c64ac) = 0;
          *(undefined8 *)(lVar14 + 0x3c64b4) = 0;
          *(undefined8 *)(lVar14 + 0x3c64bc) = 0;
          *(undefined8 *)(lVar14 + 0x3c64c4) = 0;
          *(undefined8 *)(lVar14 + 0x3c64cc) = 0;
          *(undefined8 *)(lVar14 + 0x3c64d4) = 0;
          *(undefined8 *)(lVar14 + 0x3c64dc) = 0;
          *(undefined8 *)(lVar14 + 0x3c64e4) = 0;
          *(undefined8 *)(lVar14 + 0x3c64ec) = 0;
          *(undefined8 *)(lVar14 + 0x3c64f4) = 0;
          *(undefined8 *)(lVar14 + 0x3c64fc) = 0;
          *(undefined8 *)(lVar14 + 0x3c6504) = 0;
          *(undefined8 *)(lVar14 + 0x3c650c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6514) = 0;
          *(undefined8 *)(lVar14 + 0x3c651c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6524) = 0;
          *(undefined8 *)(lVar14 + 0x3c652c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6534) = 0;
          *(undefined8 *)(lVar14 + 0x3c653c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6618) = 0;
          *(undefined8 *)(lVar14 + 0x3c6610) = 0;
          *(undefined8 *)(lVar14 + 0x3c6608) = 0;
          *(undefined8 *)(lVar14 + 0x3c6600) = 0;
          *(undefined8 *)(lVar14 + 0x3c65f8) = 0;
          *(undefined8 *)(lVar14 + 0x3c65f0) = 0;
          *(undefined8 *)(lVar14 + 0x3c65e8) = 0;
          *(undefined8 *)(lVar14 + 0x3c65e0) = 0;
          *(undefined8 *)(lVar14 + 0x3c65d8) = 0;
          *(undefined8 *)(lVar14 + 0x3c65d0) = 0;
          *(undefined8 *)(lVar14 + 0x3c65c8) = 0;
          *(undefined8 *)(lVar14 + 0x3c65c0) = 0;
          *(undefined8 *)(lVar14 + 0x3c65b8) = 0;
          *(undefined8 *)(lVar14 + 0x3c65b0) = 0;
          *(undefined8 *)(lVar14 + 0x3c65a8) = 0;
          *(undefined8 *)(lVar14 + 0x3c65a0) = 0;
          *(undefined8 *)(lVar14 + 0x3c6598) = 0;
          *(undefined8 *)(lVar14 + 0x3c6590) = 0;
          *(undefined8 *)(lVar14 + 0x3c6588) = 0;
          *(undefined8 *)(lVar14 + 0x3c6580) = 0;
          *(undefined8 *)(lVar14 + 0x3c6578) = 0;
          *(undefined8 *)(FUN_003c6570 + lVar14) = 0;
          *(undefined8 *)(&DAT_003c6568 + lVar14) = 0;
          *(undefined8 *)(lVar14 + 0x3c6560) = 0;
          *(undefined8 *)(lVar14 + 0x3c6558) = 0;
          *(undefined8 *)(lVar14 + 0x3c6550) = 0;
          *(undefined8 *)(lVar14 + 0x3c6548) = 0;
          (&DAT_003c6568)[lVar14] = 2;
          *(undefined8 *)(lVar14 + 0x3c6554) = 0;
          *(undefined8 *)(lVar14 + 0x3c655c) = 0;
          *(undefined4 *)(lVar14 + 0x3c6564) = 0;
          *(undefined8 *)(&DAT_003c656c + lVar14) = 0;
          *(undefined8 *)(FUN_003c6570 + lVar14 + 4) = 0;
          *(undefined8 *)(lVar14 + 0x3c657c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6584) = 0;
          *(undefined8 *)(lVar14 + 0x3c658c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6594) = 0;
          *(undefined8 *)(lVar14 + 0x3c659c) = 0;
          *(undefined8 *)(lVar14 + 0x3c65a4) = 0;
          *(undefined8 *)(lVar14 + 0x3c65ac) = 0;
          *(undefined8 *)(lVar14 + 0x3c65b4) = 0;
          *(undefined8 *)(lVar14 + 0x3c65bc) = 0;
          *(undefined8 *)(lVar14 + 0x3c65c4) = 0;
          *(undefined8 *)(lVar14 + 0x3c65cc) = 0;
          *(undefined8 *)(lVar14 + 0x3c65d4) = 0;
          *(undefined8 *)(lVar14 + 0x3c65dc) = 0;
          *(undefined8 *)(lVar14 + 0x3c65e4) = 0;
          *(undefined8 *)(lVar14 + 0x3c65ec) = 0;
          *(undefined8 *)(lVar14 + 0x3c65f4) = 0;
          *(undefined8 *)(lVar14 + 0x3c65fc) = 0;
          *(undefined8 *)(lVar14 + 0x3c6604) = 0;
          *(undefined8 *)(lVar14 + 0x3c660c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6614) = 0;
          *(undefined8 *)(&LAB_003c66f0 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c66e8 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c66e0 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c66d8 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c66d0 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c66c8 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c66c0 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c66b8 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c66b0 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c66a8 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c66a0 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6698 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6690 + lVar14) = 0;
          *(undefined8 *)(lVar14 + 0x3c6688) = 0;
          *(undefined8 *)(lVar14 + 0x3c6680) = 0;
          *(undefined8 *)(lVar14 + 0x3c6678) = 0;
          *(undefined8 *)(FUN_003c6670 + lVar14) = 0;
          *(undefined8 *)(lVar14 + 0x3c6668) = 0;
          *(undefined8 *)(lVar14 + 0x3c6660) = 0;
          *(undefined8 *)(lVar14 + 0x3c6658) = 0;
          *(undefined8 *)(lVar14 + 0x3c6650) = 0;
          *(undefined8 *)(lVar14 + 0x3c6648) = 0;
          *(undefined8 *)(lVar14 + 0x3c6640) = 0;
          *(undefined8 *)(lVar14 + 0x3c6638) = 0;
          *(undefined8 *)(lVar14 + 0x3c6630) = 0;
          *(undefined8 *)(lVar14 + 0x3c6628) = 0;
          *(undefined8 *)(lVar14 + 0x3c6620) = 0;
          *(undefined1 *)(lVar14 + 0x3c6640) = 2;
          *(undefined8 *)(lVar14 + 0x3c662c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6634) = 0;
          *(undefined4 *)(lVar14 + 0x3c663c) = 0;
          *(undefined8 *)(&LAB_003c66f8 + lVar14) = 0;
          *(undefined8 *)(lVar14 + 0x3c6644) = 0;
          *(undefined8 *)(lVar14 + 0x3c664c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6654) = 0;
          *(undefined8 *)(lVar14 + 0x3c665c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6664) = 0;
          *(undefined8 *)(lVar14 + 0x3c666c) = 0;
          *(undefined8 *)(FUN_003c6670 + lVar14 + 4) = 0;
          *(undefined8 *)(lVar14 + 0x3c667c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6684) = 0;
          *(undefined8 *)(&LAB_003c668c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6694 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c669c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c66a4 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c66ac + lVar14) = 0;
          *(undefined8 *)(&LAB_003c66b4 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c66bc + lVar14) = 0;
          *(undefined8 *)(&LAB_003c66c4 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c66cc + lVar14) = 0;
          *(undefined8 *)(&LAB_003c66d4 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c66dc + lVar14) = 0;
          *(undefined8 *)(&LAB_003c66e4 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c66ec + lVar14) = 0;
          *(undefined8 *)(lVar14 + 0x3c61d8) = 0;
          *(undefined8 *)(lVar14 + 0x3c61e0) = 0;
          *(undefined8 *)(lVar14 + 0x3c61dc) = 0;
          *(undefined8 *)(FUN_003c61c8 + lVar14) = 0;
          *(undefined8 *)(lVar14 + 0x3c61d0) = 0;
          *(undefined8 *)(FUN_003c61c8 + lVar14 + 4) = 0;
          *(undefined8 *)(lVar14 + 0x3c61d4) = 0;
          *(undefined8 *)(&LAB_003c61b8 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c61c0 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c61bc + lVar14) = 0;
          *(undefined8 *)(&LAB_003c61c4 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c61a8 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c61b0 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c61ac + lVar14) = 0;
          *(undefined8 *)(&LAB_003c61b4 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6198 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c61a0 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c619c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c61a4 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6188 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6190 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c618c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6194 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6178 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6180 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c617c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6184 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6168 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6170 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c616c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6174 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6158 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6160 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c615c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6164 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6148 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6150 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c614c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6154 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6138 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6140 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c613c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6144 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6128 + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6130 + lVar14) = 0;
          (&LAB_003c6130)[lVar14] = 2;
          *(undefined8 *)(&LAB_003c6124 + lVar14) = 0;
          *(undefined4 *)(&LAB_003c612c + lVar14) = 0;
          *(undefined8 *)(&LAB_003c6134 + lVar14) = 0;
          *(undefined8 *)(lVar14 + 0x3c62b0) = 0;
          *(undefined8 *)(lVar14 + 0x3c62b8) = 0;
          *(undefined8 *)(lVar14 + 0x3c62b4) = 0;
          *(undefined8 *)(lVar14 + 0x3c62a0) = 0;
          *(undefined8 *)(lVar14 + 0x3c62a8) = 0;
          *(undefined8 *)(lVar14 + 0x3c62a4) = 0;
          *(undefined8 *)(lVar14 + 0x3c62ac) = 0;
          *(undefined8 *)(lVar14 + 0x3c6290) = 0;
          *(undefined8 *)(lVar14 + 0x3c6298) = 0;
          *(undefined8 *)(lVar14 + 0x3c6294) = 0;
          *(undefined8 *)(lVar14 + 0x3c629c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6280) = 0;
          *(undefined8 *)(lVar14 + 0x3c6288) = 0;
          *(undefined8 *)(lVar14 + 0x3c6284) = 0;
          *(undefined8 *)(lVar14 + 0x3c628c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6270) = 0;
          *(undefined8 *)(lVar14 + 0x3c6278) = 0;
          *(undefined8 *)(lVar14 + 0x3c6274) = 0;
          *(undefined8 *)(lVar14 + 0x3c627c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6260) = 0;
          *(undefined8 *)(lVar14 + 0x3c6268) = 0;
          *(undefined8 *)(lVar14 + 0x3c6264) = 0;
          *(undefined8 *)(lVar14 + 0x3c626c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6250) = 0;
          *(undefined8 *)(lVar14 + 0x3c6258) = 0;
          *(undefined8 *)(lVar14 + 0x3c6254) = 0;
          *(undefined8 *)(lVar14 + 0x3c625c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6240) = 0;
          *(undefined8 *)(lVar14 + 0x3c6248) = 0;
          *(undefined8 *)(lVar14 + 0x3c6244) = 0;
          *(undefined8 *)(lVar14 + 0x3c624c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6230) = 0;
          *(undefined8 *)(lVar14 + 0x3c6238) = 0;
          *(undefined8 *)(lVar14 + 0x3c6234) = 0;
          *(undefined8 *)(lVar14 + 0x3c623c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6220) = 0;
          *(undefined8 *)(lVar14 + 0x3c6228) = 0;
          *(undefined8 *)(lVar14 + 0x3c6224) = 0;
          *(undefined8 *)(lVar14 + 0x3c622c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6210) = 0;
          *(undefined8 *)(lVar14 + 0x3c6218) = 0;
          *(undefined8 *)(lVar14 + 0x3c6214) = 0;
          *(undefined8 *)(lVar14 + 0x3c621c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6200) = 0;
          *(undefined8 *)(lVar14 + 0x3c6208) = 0;
          *(undefined1 *)(lVar14 + 0x3c6208) = 2;
          *(undefined4 *)(lVar14 + 0x3c6204) = 0;
          *(undefined8 *)(lVar14 + 0x3c620c) = 0;
          *(undefined8 *)(lVar14 + 0x3c61f0) = 0;
          *(undefined8 *)(lVar14 + 0x3c61f8) = 0;
          *(undefined8 *)(lVar14 + 0x3c61f4) = 0;
          *(undefined8 *)(lVar14 + 0x3c61fc) = 0;
          *(undefined8 *)(lVar14 + 0x3c6310) = 0;
          *(undefined8 *)(lVar14 + 0x3c6318) = 0;
          *(undefined8 *)(lVar14 + 0x3c6314) = 0;
          *(undefined8 *)(lVar14 + 0x3c631c) = 0;
          *(undefined8 *)(lVar14 + 0x3c6300) = 0;
          *(undefined8 *)(lVar14 + 0x3c6308) = 0;
          *(undefined8 *)(lVar14 + 0x3c6304) = 0;
          *(undefined8 *)(lVar14 + 0x3c630c) = 0;
          *(undefined8 *)(lVar14 + 0x3c62f0) = 0;
          *(undefined8 *)(lVar14 + 0x3c62f8) = 0;
          *(undefined8 *)(lVar14 + 0x3c62f4) = 0;
          *(undefined8 *)(lVar14 + 0x3c62fc) = 0;
          *(undefined8 *)(lVar14 + 0x3c62e0) = 0;
          *(undefined8 *)(FUN_003c62e8 + lVar14) = 0;
          *(undefined1 *)(lVar14 + 0x3c62e0) = 2;
          *(undefined8 *)(lVar14 + 0x3c62e4) = 0;
          *(undefined8 *)(FUN_003c62e8 + lVar14 + 4) = 0;
          *(undefined8 *)(lVar14 + 0x3c62d0) = 0;
          *(undefined8 *)(lVar14 + 0x3c62d8) = 0;
          *(undefined8 *)(lVar14 + 0x3c62d4) = 0;
          *(undefined4 *)(lVar14 + 0x3c62dc) = 0;
          *(undefined8 *)(lVar14 + 0x3c62c0) = 0;
          *(undefined8 *)(lVar14 + 0x3c62c8) = 0;
          *(undefined8 *)(lVar14 + 0x3c62cc) = 0;
        }
        iVar17 = iVar17 + 1;
      } while (iVar2 != iVar17);
    }
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar6 + 0x276cd8) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar6 + 0x276cd8) + 0x18), puVar10 != (undefined8 *)0x0
       )) {
      (**(code **)*puVar10)();
    }
  }
  return;
}

