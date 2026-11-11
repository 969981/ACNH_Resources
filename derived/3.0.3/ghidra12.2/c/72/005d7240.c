
/* WARNING: Removing unreachable block (ram,0x005d730c) */

void FUN_005d7240(uint param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ushort uVar4;
  undefined *puVar5;
  long lVar6;
  short *psVar7;
  long lVar8;
  ushort uVar9;
  short sVar10;
  long lVar11;
  ulong uVar12;
  ushort *puVar13;
  ulong uVar14;
  
  puVar5 = PTR_DAT_04bd4d10;
  Hint_Prefetch(param_2,0,0,0);
  Hint_Prefetch(param_2 + 0x40,0,0,0);
  Hint_Prefetch(param_2 + 0x80,0,0,0);
  Hint_Prefetch(param_2 + 0xc0,0,0,0);
  Hint_Prefetch(param_2 + 0x100,0,0,0);
  Hint_Prefetch(param_2 + 0x140,0,0,0);
  Hint_Prefetch(param_2 + 0x180,0,0,0);
  Hint_Prefetch(param_2 + 0x1c0,0,0,0);
  lVar6 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
  lVar11 = DAT_04c6f058;
  if (lVar6 != 0) {
    lVar11 = lVar6;
  }
  if (*(ulong *)(lVar11 + 0x10) < 0x280) {
LAB_005d72c4:
    psVar7 = (short *)FUN_00439510(lVar11,0x280);
  }
  else {
    psVar7 = *(short **)(lVar11 + 0x18);
    if (*(short **)(lVar11 + 0x20) < psVar7 + 0x140) goto LAB_005d72c4;
    *(short **)(lVar11 + 0x18) = psVar7 + 0x140;
  }
  FUN_0043a4d0(psVar7,0,0x202);
  if (0 < (int)param_1) {
    if (param_1 == 1) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      puVar13 = (ushort *)(param_2 + 0x10);
      do {
        uVar14 = (ulong)(puVar13[-8] >> 6) & 0x3fe;
        *(short *)((long)psVar7 + uVar14 + 2) = *(short *)((long)psVar7 + uVar14 + 2) + 1;
        lVar11 = lVar11 + 2;
        uVar14 = (ulong)(*puVar13 >> 6) & 0x3fe;
        *(short *)((long)psVar7 + uVar14 + 2) = *(short *)((long)psVar7 + uVar14 + 2) + 1;
        puVar13 = puVar13 + 0x10;
      } while ((ulong)param_1 - ((ulong)param_1 & 1) != lVar11);
      if ((param_1 & 1) == 0) goto LAB_005d7378;
    }
    uVar14 = (ulong)(*(ushort *)(param_2 + lVar11 * 0x10) >> 6) & 0x3fe;
    *(short *)((long)psVar7 + uVar14 + 2) = *(short *)((long)psVar7 + uVar14 + 2) + 1;
  }
LAB_005d7378:
  sVar10 = *psVar7;
  lVar11 = 0;
  do {
    lVar6 = lVar11 + 6;
    sVar10 = *(short *)((long)psVar7 + lVar11 + 2) + sVar10;
    *(short *)((long)psVar7 + lVar11 + 2) = sVar10;
    sVar10 = *(short *)((long)psVar7 + lVar11 + 4) + sVar10;
    *(short *)((long)psVar7 + lVar11 + 4) = sVar10;
    sVar10 = *(short *)((long)psVar7 + lVar11 + 6) + sVar10;
    *(short *)((long)psVar7 + lVar11 + 6) = sVar10;
    lVar11 = lVar6;
  } while (lVar6 != 0x1fe);
  lVar6 = FUN_0043c4e0(*(undefined2 *)puVar5);
  lVar11 = DAT_04c6f058;
  if (lVar6 != 0) {
    lVar11 = lVar6;
  }
  uVar14 = (ulong)(int)(param_1 * 2 + 0x7f & 0xffffff80);
  if (uVar14 <= *(ulong *)(lVar11 + 0x10)) {
    lVar6 = *(long *)(lVar11 + 0x18);
    if (lVar6 + uVar14 <= *(ulong *)(lVar11 + 0x20)) {
      *(ulong *)(lVar11 + 0x18) = lVar6 + uVar14;
      goto joined_r0x005d7404;
    }
  }
  lVar6 = FUN_00439510(lVar11,uVar14);
joined_r0x005d7404:
  if (0 < (int)param_1) {
    uVar9 = 0;
    do {
      puVar13 = (ushort *)(param_2 + (ulong)uVar9 * 0x10);
      uVar12 = (ulong)(*puVar13 >> 6) & 0x3fe;
      uVar4 = *(ushort *)((long)psVar7 + uVar12);
      *(ushort *)((long)psVar7 + uVar12) = uVar4 + 1;
      puVar13[7] = uVar4;
      *(ushort *)(lVar6 + (ulong)uVar4 * 2) = uVar9;
      uVar9 = uVar9 + 1;
    } while ((int)(uint)uVar9 < (int)param_1);
    if (0 < (int)param_1) {
      uVar9 = 0;
      do {
        uVar4 = *(ushort *)(lVar6 + (ulong)uVar9 * 2);
        puVar1 = (undefined8 *)(param_2 + (ulong)uVar9 * 0x10);
        uVar3 = *puVar1;
        uVar12 = puVar1[1];
        puVar2 = (undefined8 *)(param_2 + (ulong)uVar4 * 0x10);
        puVar1[1] = puVar2[1];
        *puVar1 = *puVar2;
        *puVar2 = uVar3;
        puVar2[1] = uVar12;
        *(ushort *)(lVar6 + (ulong)*(ushort *)((long)puVar1 + 0xe) * 2) = uVar9;
        uVar9 = uVar9 + 1;
        *(ushort *)(lVar6 + (uVar12 >> 0x30) * 2) = uVar4;
      } while ((int)(uint)uVar9 < (int)param_1);
    }
  }
  lVar8 = FUN_0043c4e0(*(undefined2 *)puVar5);
  lVar11 = DAT_04c6f058;
  if (lVar8 != 0) {
    lVar11 = lVar8;
  }
  if (((*(ulong *)(lVar11 + 0x10) < uVar14) || (*(long *)(lVar11 + 0x18) != lVar6 + uVar14)) ||
     (*(long *)(lVar11 + 0x28) == lVar6)) {
    FUN_00439980(lVar11,lVar6,uVar14);
  }
  else {
    *(long *)(lVar11 + 0x18) = lVar6;
  }
  lVar6 = FUN_0043c4e0(*(undefined2 *)puVar5);
  lVar11 = DAT_04c6f058;
  if (lVar6 != 0) {
    lVar11 = lVar6;
  }
  if (((*(ulong *)(lVar11 + 0x10) < 0x280) || (*(short **)(lVar11 + 0x18) != psVar7 + 0x140)) ||
     (*(short **)(lVar11 + 0x28) == psVar7)) {
    FUN_00439980(lVar11,psVar7,0x280);
    return;
  }
  *(short **)(lVar11 + 0x18) = psVar7;
  return;
}

