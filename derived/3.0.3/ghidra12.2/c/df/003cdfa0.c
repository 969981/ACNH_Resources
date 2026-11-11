
void FUN_003cdfa0(long param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  undefined **ppuVar6;
  long lVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long lVar11;
  
  if (*(long **)(param_1 + 0x38) != (long *)(param_1 + 0x30)) {
    plVar1 = (long *)(param_1 + 0x20);
    plVar3 = *(long **)(param_1 + 0x38);
    do {
      plVar5 = (long *)plVar3[1];
      if ((char)plVar3[-1] == '\x02') {
        lVar7 = *plVar5;
        *(long **)(*plVar3 + 8) = plVar5;
        *plVar5 = *plVar3;
        *(long **)(lVar7 + 8) = plVar3;
        *plVar3 = lVar7;
        *plVar3 = *plVar1;
        *(long **)(lVar7 + 8) = plVar1;
        *(long **)(*plVar1 + 8) = plVar3;
        *plVar1 = lVar7;
      }
      plVar3 = plVar5;
    } while (plVar5 != (long *)(param_1 + 0x30));
  }
  lVar7 = *(long *)(param_1 + 8);
  while (lVar7 != param_1) {
    lVar11 = *(long *)(lVar7 + 8);
    FUN_003ced48(lVar7 + -0x1e0);
    lVar7 = lVar11;
  }
  plVar3 = *(long **)(param_1 + 0x18);
  plVar1 = (long *)(param_1 + 0x10);
  if (plVar3 != plVar1) {
    iVar2 = 1;
    plVar5 = plVar3;
    do {
      plVar5 = (long *)plVar5[1];
      iVar2 = iVar2 + -1;
    } while (plVar5 != plVar1);
    if (iVar2 != 0) {
      do {
        plVar5 = (long *)plVar3[1];
        puVar10 = (undefined *)*plVar5;
        *(long **)(*plVar3 + 8) = plVar5;
        *plVar5 = *plVar3;
        *(long **)(puVar10 + 8) = plVar3;
        *plVar3 = (long)puVar10;
        uVar4 = *(int *)((long)plVar3 + -0x174) + (uint)*(byte *)(plVar3 + -0x1f);
        uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
        if (0x7e < (int)uVar4) {
          uVar4 = 0x7f;
        }
        uVar8 = (ulong)uVar4;
        *plVar3 = (long)(&PTR_LOOP_04c11278)[uVar8 * 2];
        *(undefined ***)(puVar10 + 8) = &PTR_LOOP_04c11278 + uVar8 * 2;
        *(long **)((&PTR_LOOP_04c11278)[uVar8 * 2] + 8) = plVar3;
        (&PTR_LOOP_04c11278)[uVar8 * 2] = puVar10;
        plVar3 = *(long **)(param_1 + 0x18);
      } while (plVar3 != plVar1);
      lVar7 = 0;
      ppuVar6 = &PTR_LOOP_04c11278;
      ppuVar9 = (undefined **)PTR_LOOP_04c11280;
      if ((undefined **)PTR_LOOP_04c11280 != &PTR_LOOP_04c11278) goto LAB_003ce120;
      while (lVar7 = lVar7 + 1, lVar7 != 0x80) {
        ppuVar6 = &PTR_LOOP_04c11278 + lVar7 * 2;
        ppuVar9 = (undefined **)(&PTR_LOOP_04c11280)[lVar7 * 2];
        if (ppuVar9 != ppuVar6) {
LAB_003ce120:
          do {
            plVar3 = (long *)ppuVar9[1];
            puVar10 = (undefined *)*plVar3;
            *(long **)(*ppuVar9 + 8) = plVar3;
            *plVar3 = (long)*ppuVar9;
            *(undefined ***)(puVar10 + 8) = ppuVar9;
            *ppuVar9 = puVar10;
            *ppuVar9 = (undefined *)*plVar1;
            *(long **)(puVar10 + 8) = plVar1;
            *(undefined ***)(*plVar1 + 8) = ppuVar9;
            *plVar1 = (long)puVar10;
            ppuVar9 = (undefined **)ppuVar6[1];
          } while (ppuVar9 != ppuVar6);
        }
      }
    }
  }
  return;
}

