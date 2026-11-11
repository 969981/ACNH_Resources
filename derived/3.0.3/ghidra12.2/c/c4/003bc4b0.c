
void FUN_003bc4b0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long local_810;
  long *local_808;
  long local_800 [2];
  long local_7f0 [2];
  long local_7e0 [250];
  
  plVar3 = *(long **)(param_1 + 0x20);
  plVar1 = (long *)(param_1 + 0x18);
  if (plVar3 != plVar1) {
    plVar7 = &local_810;
    iVar4 = 1;
    plVar6 = plVar3;
    do {
      plVar6 = (long *)plVar6[1];
      iVar4 = iVar4 + -1;
    } while (plVar6 != plVar1);
    if (iVar4 != 0) {
      lVar9 = 0;
      do {
        lVar2 = (long)local_800 + lVar9 + -0x10;
        lVar10 = lVar9 + 0x40;
        *(long *)lVar2 = lVar2;
        *(long *)((long)local_800 + lVar9 + -8) = lVar2;
        *(long *)((long)local_800 + lVar9) = (long)local_800 + lVar9;
        *(long *)((long)local_800 + lVar9 + 8) = (long)local_800 + lVar9;
        *(long *)((long)local_7f0 + lVar9) = (long)local_7f0 + lVar9;
        *(long *)((long)local_7f0 + lVar9 + 8) = (long)local_7f0 + lVar9;
        *(long *)((long)local_7e0 + lVar9) = (long)local_7e0 + lVar9;
        *(long *)((long)local_7e0 + lVar9 + 8) = (long)local_7e0 + lVar9;
        lVar9 = lVar10;
      } while (lVar10 != 0x800);
      do {
        plVar6 = (long *)plVar3[1];
        lVar9 = *plVar6;
        *(long **)(*plVar3 + 8) = plVar6;
        *plVar6 = *plVar3;
        *(long **)(lVar9 + 8) = plVar3;
        *plVar3 = lVar9;
        uVar5 = *(int *)((long)plVar3 + -0x194) + (uint)*(byte *)(plVar3 + -0x23);
        uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
        if (0x7e < (int)uVar5) {
          uVar5 = 0x7f;
        }
        uVar8 = (ulong)uVar5;
        *plVar3 = local_800[uVar8 * 2 + -2];
        *(long **)(lVar9 + 8) = local_800 + uVar8 * 2 + -2;
        *(long **)(local_800[uVar8 * 2 + -2] + 8) = plVar3;
        local_800[uVar8 * 2 + -2] = lVar9;
        plVar3 = *(long **)(param_1 + 0x20);
      } while (plVar3 != plVar1);
      lVar9 = 0;
      if (local_808 != &local_810) goto LAB_003bc5c0;
      while (lVar9 = lVar9 + 1, lVar9 != 0x80) {
        plVar7 = local_800 + lVar9 * 2 + -2;
        local_808 = (long *)local_800[lVar9 * 2 + -1];
        if (local_808 != plVar7) {
LAB_003bc5c0:
          do {
            plVar3 = (long *)local_808[1];
            lVar10 = *plVar3;
            *(long **)(*local_808 + 8) = plVar3;
            *plVar3 = *local_808;
            *(long **)(lVar10 + 8) = local_808;
            *local_808 = lVar10;
            *local_808 = *plVar1;
            *(long **)(lVar10 + 8) = plVar1;
            *(long **)(*plVar1 + 8) = local_808;
            *plVar1 = lVar10;
            local_808 = (long *)plVar7[1];
          } while (local_808 != plVar7);
        }
      }
    }
  }
  return;
}

