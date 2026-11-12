
/* WARNING: Removing unreachable block (ram,0x0068e5dc) */
/* WARNING: Removing unreachable block (ram,0x0068e5b8) */
/* WARNING: Removing unreachable block (ram,0x0068e56c) */
/* WARNING: Removing unreachable block (ram,0x0068e5cc) */

undefined8 FUN_0068e3d0(long *param_1,undefined8 *param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  ushort *puVar13;
  char *pcVar14;
  
  plVar2 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  plVar6 = plVar2;
  if (plVar2 == plVar3) {
LAB_0068e46c:
    if (plVar6 != plVar3) {
      uVar9 = *(uint *)(param_3 + 1);
      lVar8 = *(long *)(*plVar6 + 0x38);
      uVar12 = (ulong)*(ushort *)(lVar8 + 0xc);
      puVar11 = (uint *)((int *)(lVar8 + 8) + uVar12 * 4);
      if (*(int *)(lVar8 + 8) < (int)*puVar11) {
        uVar4 = *puVar11;
        do {
          if ((uint)((int)uVar4 >> 3) < uVar9) {
            uVar10 = (ulong)(*(byte *)(*param_3 + (long)(int)(uVar9 + ~((int)uVar4 >> 3))) >>
                            ((ulong)uVar4 & 7)) & 1;
          }
          else {
            uVar10 = 0;
          }
          uVar12 = (ulong)*(ushort *)(lVar8 + 8 + uVar12 * 0x10 + uVar10 * 2 + 4);
          puVar11 = (uint *)(lVar8 + 8 + uVar12 * 0x10);
          bVar1 = (int)uVar4 < (int)*puVar11;
          uVar4 = *puVar11;
        } while (bVar1);
      }
      puVar13 = *(ushort **)(puVar11 + 2) + 1;
      if (uVar9 == **(ushort **)(puVar11 + 2)) {
        if (0 < (int)uVar9) {
          pcVar14 = (char *)*param_3;
          iVar7 = uVar9 + 1;
          do {
            cVar5 = *pcVar14;
            if (cVar5 == '\0' || cVar5 != (char)*puVar13) {
              if (cVar5 != (char)*puVar13) {
                return 0;
              }
              break;
            }
            iVar7 = iVar7 + -1;
            pcVar14 = pcVar14 + 1;
            puVar13 = (ushort *)((long)puVar13 + 1);
          } while (1 < iVar7);
        }
        iVar7 = (int)((ulong)((long)puVar11 + (-0x18 - lVar8)) >> 4);
        if (iVar7 != -1) {
          *(int *)(param_1 + 2) = (int)((ulong)((long)plVar6 - (long)plVar2) >> 3);
          *(int *)((long)param_1 + 0x14) = iVar7;
          return 1;
        }
      }
    }
  }
  else {
    uVar9 = (uint)param_2[1];
    if ((int)uVar9 < 1) {
      do {
        if (**(ushort **)(*plVar6 + 0x20) == uVar9) goto LAB_0068e46c;
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar3);
    }
    else {
      do {
        if (**(ushort **)(*plVar6 + 0x20) == uVar9) {
          puVar13 = *(ushort **)(*plVar6 + 0x20) + 1;
          pcVar14 = (char *)*param_2;
          iVar7 = uVar9 + 1;
          while( true ) {
            cVar5 = *pcVar14;
            if (cVar5 == '\0' || cVar5 != (char)*puVar13) break;
            iVar7 = iVar7 + -1;
            pcVar14 = pcVar14 + 1;
            puVar13 = (ushort *)((long)puVar13 + 1);
            if (iVar7 < 2) goto LAB_0068e46c;
          }
          if (cVar5 == (char)*puVar13) goto LAB_0068e46c;
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar3);
    }
  }
  return 0;
}

