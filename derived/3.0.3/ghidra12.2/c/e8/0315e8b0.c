
/* WARNING: Removing unreachable block (ram,0x0315eb44) */
/* WARNING: Removing unreachable block (ram,0x0315eb94) */
/* WARNING: Removing unreachable block (ram,0x0315ebd0) */
/* WARNING: Removing unreachable block (ram,0x0315ebd4) */
/* WARNING: Removing unreachable block (ram,0x0315ebec) */
/* WARNING: Removing unreachable block (ram,0x0315ec14) */
/* WARNING: Removing unreachable block (ram,0x0315ec00) */
/* WARNING: Removing unreachable block (ram,0x0315ec34) */
/* WARNING: Removing unreachable block (ram,0x0315ecd0) */
/* WARNING: Removing unreachable block (ram,0x0315ed10) */
/* WARNING: Removing unreachable block (ram,0x0315ec58) */
/* WARNING: Removing unreachable block (ram,0x0315ec98) */
/* WARNING: Removing unreachable block (ram,0x0315ed3c) */
/* WARNING: Removing unreachable block (ram,0x0315ed48) */
/* WARNING: Removing unreachable block (ram,0x0315edbc) */
/* WARNING: Removing unreachable block (ram,0x0315edc8) */
/* WARNING: Removing unreachable block (ram,0x0315ee00) */
/* WARNING: Removing unreachable block (ram,0x0315ee0c) */
/* WARNING: Removing unreachable block (ram,0x0315ee1c) */
/* WARNING: Removing unreachable block (ram,0x0315efd4) */
/* WARNING: Removing unreachable block (ram,0x0315f078) */
/* WARNING: Removing unreachable block (ram,0x0315f038) */
/* WARNING: Removing unreachable block (ram,0x0315f084) */
/* WARNING: Removing unreachable block (ram,0x0315f064) */
/* WARNING: Removing unreachable block (ram,0x0315f088) */
/* WARNING: Removing unreachable block (ram,0x0315f09c) */
/* WARNING: Removing unreachable block (ram,0x0315f198) */
/* WARNING: Removing unreachable block (ram,0x0315f1d0) */
/* WARNING: Removing unreachable block (ram,0x0315f128) */
/* WARNING: Removing unreachable block (ram,0x0315f160) */
/* WARNING: Removing unreachable block (ram,0x0315f1fc) */
/* WARNING: Removing unreachable block (ram,0x0315f208) */
/* WARNING: Removing unreachable block (ram,0x0315f294) */
/* WARNING: Removing unreachable block (ram,0x0315f2cc) */
/* WARNING: Removing unreachable block (ram,0x0315f224) */
/* WARNING: Removing unreachable block (ram,0x0315f25c) */
/* WARNING: Removing unreachable block (ram,0x0315f300) */
/* WARNING: Removing unreachable block (ram,0x0315f30c) */
/* WARNING: Removing unreachable block (ram,0x0315f34c) */
/* WARNING: Removing unreachable block (ram,0x0315f318) */
/* WARNING: Removing unreachable block (ram,0x0315f320) */
/* WARNING: Removing unreachable block (ram,0x0315f354) */
/* WARNING: Removing unreachable block (ram,0x0315f334) */
/* WARNING: Removing unreachable block (ram,0x0315f344) */
/* WARNING: Removing unreachable block (ram,0x0315f364) */
/* WARNING: Removing unreachable block (ram,0x0315f368) */
/* WARNING: Removing unreachable block (ram,0x0315f378) */
/* WARNING: Removing unreachable block (ram,0x0315f384) */
/* WARNING: Removing unreachable block (ram,0x0315f3c4) */
/* WARNING: Removing unreachable block (ram,0x0315f3cc) */
/* WARNING: Removing unreachable block (ram,0x0315f3d8) */
/* WARNING: Removing unreachable block (ram,0x0315f3e8) */
/* WARNING: Removing unreachable block (ram,0x0315eed0) */
/* WARNING: Removing unreachable block (ram,0x0315eed4) */
/* WARNING: Removing unreachable block (ram,0x0315f3f0) */
/* WARNING: Removing unreachable block (ram,0x0315eed8) */

void FUN_0315e8b0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  bool bVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  
  puVar5 = PTR_DAT_04bc4d98;
  uVar9 = *(uint *)(param_1 + 0x1c1f0);
  iVar6 = -1;
  if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)(param_1 + 0x1c1d8))) {
    lVar8 = param_1 + 0x1c1c8;
    uVar2 = uVar9 + 1 & 3;
    if (2 < uVar9) {
      uVar9 = uVar9 + 1 & 0xfffffffc;
      do {
        uVar9 = uVar9 - 4;
        lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(lVar8 + 8) + 8) + 8) + 8);
      } while (uVar9 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      lVar8 = *(long *)(lVar8 + 8);
    }
    iVar6 = -1;
    if ((lVar8 != 0) && (lVar8 = lVar8 - *(int *)(param_1 + 0x1c1dc), lVar8 != 0)) {
      iVar6 = *(int *)(lVar8 + 0x270);
    }
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x210) + 0x588);
  iVar10 = *(int *)(lVar8 + 0x430) - *(int *)(lVar8 + 0x438);
  if ((*(byte *)(lVar8 + 1000) >> 1 & 1) != 0) {
    uVar2 = *(uint *)(lVar8 + 0x434);
    uVar9 = 0;
    if ((int)uVar2 < iVar10) {
      uVar9 = ~uVar2;
    }
    if (iVar10 < 0) {
      uVar9 = uVar2 + 1;
    }
    iVar10 = uVar9 + iVar10;
    iVar4 = *(int *)(lVar8 + 0x3d0);
    iVar3 = 0;
    if (iVar4 <= iVar10) {
      iVar3 = iVar4;
    }
    if (-1 < iVar10) {
      iVar4 = -iVar3;
    }
    iVar10 = iVar4 + iVar10;
  }
  uVar9 = iVar10 * *(int *)(lVar8 + 0x2e8);
  uVar2 = *(uint *)(lVar8 + 0x2f8);
  if (*(int *)(lVar8 + 0x3cc) <= (int)uVar9 || 0x7fffffff < uVar9) {
    uVar9 = 0xffffffff;
  }
  if (0 < (int)uVar2) {
    if (iVar6 == 0x6f) {
      puVar1 = PTR_DAT_04bc4da0 + 0x10;
      uVar15 = 0;
      do {
        plVar11 = (long *)0x0;
        uVar14 = (uint)uVar15;
        if (((-1 < (int)uVar14) && ((int)uVar14 < (int)*(uint *)(lVar8 + 0x208))) &&
           (uVar14 < *(uint *)(lVar8 + 0x208))) {
          plVar11 = *(long **)(*(long *)(lVar8 + 0x210) + uVar15 * 8);
        }
        if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bc4d90 = puVar1;
          __cxa_guard_release(puVar5);
        }
        if ((plVar11 != (long *)0x0) &&
           (uVar7 = (**(code **)*plVar11)(plVar11,PTR_DAT_04bc4d90), (uVar7 & 1) != 0)) {
          bVar12 = false;
          if ((-1 < (long)((long)(int)uVar9 + uVar15)) &&
             (*(int **)(param_1 + 0x1c308) != (int *)0x0)) {
            bVar12 = (long)((long)(int)uVar9 + uVar15) < (long)**(int **)(param_1 + 0x1c308);
          }
          (**(code **)(*plVar11 + 0x140))(plVar11,bVar12,0);
                    /* WARNING: Could not recover jumptable at 0x0315eb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_0315eb04 + (ulong)DAT_041840c3 * 4))();
          return;
        }
        uVar15 = uVar15 + 1;
      } while (uVar2 != uVar15);
    }
    else {
      puVar1 = PTR_DAT_04bc4da0 + 0x10;
      uVar15 = 0;
      do {
        if ((long)uVar15 < (long)(int)*(uint *)(lVar8 + 0x208) && uVar15 < *(uint *)(lVar8 + 0x208))
        {
          puVar13 = *(undefined8 **)(*(long *)(lVar8 + 0x210) + uVar15 * 8);
        }
        else {
          puVar13 = (undefined8 *)0x0;
        }
        if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bc4d90 = puVar1;
          __cxa_guard_release(puVar5);
        }
        if ((puVar13 != (undefined8 *)0x0) &&
           (uVar7 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc4d90), (uVar7 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0315ef8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_0315ef90 + (ulong)DAT_041840be * 4))();
          return;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar2);
    }
  }
  return;
}

