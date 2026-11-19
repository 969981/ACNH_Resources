
void FUN_0384c440(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  char *__s2;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  char *pcVar7;
  uint *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  
  lVar5 = *(long *)(param_1 + 0x20 + ((ulong)*(byte *)(param_1 + 0xd8) & 1) * 8);
  if ((((lVar5 != 0) && (*(char *)(lVar5 + 0x20) != '\0')) && (*(long *)(param_1 + 0x30) != 0)) &&
     (plVar4 = *(long **)(*(long *)(param_1 + 0x30) + 0x18), plVar4 != (long *)0x0)) {
    plVar6 = plVar4 + 3 + *(uint *)(plVar4 + 2);
    if (1 < *(uint *)(plVar4 + 2)) {
      plVar6 = plVar4 + 3;
    }
    plVar6 = (long *)*plVar6;
    if (((plVar6 != (long *)0x0) && (plVar6[3] != 0)) &&
       ((*plVar6 != 0 && (*(long *)(*plVar6 + 0x48) != 0)))) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      uVar2 = DAT_04c4bf50;
      lVar10 = *(long *)(*(long *)(lVar5 + 0x18) + 8);
      uVar12 = *(uint *)(lVar10 + 0x568);
      if ((uVar12 < *(uint *)(lVar10 + 0x530)) && (*(long *)(lVar10 + 0x540) != 0)) {
        iVar13 = *(uint *)(lVar10 + 0x530) - uVar12;
        lVar14 = (ulong)uVar12 << 0x20;
        uVar11 = *(ulong *)PTR_DAT_04bb38c0;
        puVar8 = (uint *)(*(long *)(lVar10 + 0x540) + (ulong)uVar12 * 0xc);
        do {
          pcVar7 = (char *)(uVar2 | *puVar8);
          __s2 = pcVar7 + 0x100000000;
          if (uVar11 <= *puVar8) {
            __s2 = pcVar7;
          }
          if ((__s2 != (char *)0x0) && (iVar3 = strcmp("RootMatrixMode",__s2), iVar3 == 0)) {
            lVar14 = lVar14 >> 0x20;
            goto LAB_0384c580;
          }
          lVar14 = lVar14 + 0x100000000;
          iVar13 = iVar13 + -1;
          puVar8 = puVar8 + 3;
        } while (iVar13 != 0);
      }
      lVar14 = -1;
LAB_0384c580:
      plVar4 = (long *)(*(long *)(lVar5 + 0x10) + 0x18);
      uVar12 = *(uint *)(*(long *)(lVar5 + 0x10) + 0x10);
      plVar6 = plVar4 + uVar12;
      if (1 < uVar12) {
        plVar6 = plVar4;
      }
      iVar13 = *(int *)(*(long *)(*(long *)*plVar6 + 0x48) +
                       ((ulong)*(uint *)(((long *)*plVar6)[3] + lVar14 * 4) & 0xffffff) * 4);
      if (1 < iVar13 + 1U) {
        if (iVar13 == 2) {
          param_2 = param_4;
        }
        else {
          param_2 = param_3;
          if (iVar13 != 1) {
            return;
          }
        }
      }
    }
  }
  lVar5 = *(long *)(param_1 + 0x40);
  if (lVar5 != param_2) {
    puVar8 = *(uint **)(param_1 + 0x20 + ((ulong)*(byte *)(param_1 + 0xd8) & 1) * 8);
    if (((puVar8 != (uint *)0x0) && ((char)puVar8[8] != '\0')) &&
       (uVar12 = *puVar8, 0 < (int)uVar12)) {
      uVar9 = 0;
      do {
        lVar10 = *(long *)(puVar8 + 2);
        uVar1 = uVar9;
        if (uVar12 <= uVar9) {
          uVar1 = 0;
        }
        plVar4 = (long *)(lVar10 + (ulong)uVar1 * 0x18 + 8);
        if (*plVar4 == lVar5) {
          *plVar4 = param_2;
          *(undefined1 *)(lVar10 + (ulong)uVar1 * 0x18 + 0x10) = 0;
          uVar12 = *puVar8;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar12);
    }
    *(long *)(param_1 + 0x40) = param_2;
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}

