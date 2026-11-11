
void FUN_0044c150(long param_1,int param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  
LAB_0044c17c:
  plVar18 = (long *)(param_1 + ((long)((ulong)(param_2 + param_3) << 0x20) >> 0x21) * 0x20);
  lVar17 = *plVar18;
  iVar9 = (int)plVar18[1];
  uVar16 = (ulong)param_3;
  lVar2 = plVar18[2];
  lVar4 = plVar18[3];
  iVar14 = param_2;
LAB_0044c1a0:
  plVar18 = (long *)(param_1 + (long)iVar14 * 0x20);
  do {
    if ((*(long *)(*plVar18 + 8) == *(long *)(lVar17 + 8)) ||
       (iVar10 = FUN_00428d60(plVar18[2],plVar18[3],lVar2,lVar4), iVar10 == 0)) {
      if ((int)plVar18[1] == iVar9) {
        lVar15 = *(long *)(*plVar18 + 8);
        if ((lVar15 == *(long *)(lVar17 + 8)) || (lVar12 = FUN_0044f820(), lVar15 != lVar12)) break;
      }
      else if (iVar9 <= (int)plVar18[1]) break;
    }
    else if (-1 < iVar10) break;
    iVar14 = iVar14 + 1;
    plVar18 = plVar18 + 4;
  } while( true );
  uVar13 = -(uVar16 >> 0x1f) & 0xffffffe000000000 | uVar16 << 5;
  do {
    iVar10 = (int)uVar16;
    if ((*(long *)(lVar17 + 8) == *(long *)(*(long *)(param_1 + uVar13) + 8)) ||
       (iVar11 = FUN_00428d60(lVar2,lVar4,*(undefined8 *)(param_1 + uVar13 + 0x10),
                              *(undefined8 *)(param_1 + uVar13 + 0x18)), iVar11 == 0)) {
      iVar11 = *(int *)(param_1 + uVar13 + 8);
      if (iVar9 == iVar11) {
        lVar15 = *(long *)(lVar17 + 8);
        if ((lVar15 == *(long *)(*(long *)(param_1 + uVar13) + 8)) ||
           (lVar12 = FUN_0044f820(), lVar15 != lVar12)) break;
      }
      else if (iVar11 <= iVar9) break;
    }
    else if (-1 < iVar11) break;
    uVar16 = (ulong)(iVar10 - 1);
    uVar13 = uVar13 - 0x20;
  } while( true );
  if (iVar14 <= iVar10) {
    if (iVar14 != iVar10) {
      plVar1 = (long *)(param_1 + uVar13);
      lVar15 = *plVar1;
      lVar5 = plVar1[1];
      lVar12 = plVar1[2];
      lVar6 = plVar1[3];
      lVar3 = *plVar18;
      lVar7 = plVar18[1];
      lVar8 = plVar18[3];
      plVar1[2] = plVar18[2];
      plVar1[3] = lVar8;
      *plVar1 = lVar3;
      plVar1[1] = lVar7;
      plVar18[2] = lVar12;
      plVar18[3] = lVar6;
      *plVar18 = lVar15;
      plVar18[1] = lVar5;
    }
    uVar16 = (ulong)(iVar10 - 1);
    iVar14 = iVar14 + 1;
  }
  if ((int)uVar16 < iVar14) goto code_r0x0044c2e8;
  goto LAB_0044c1a0;
code_r0x0044c2e8:
  if (param_2 < (int)uVar16) {
    FUN_0044c150(param_1,param_2,uVar16);
  }
  param_2 = iVar14;
  if ((int)param_3 <= iVar14) {
    return;
  }
  goto LAB_0044c17c;
}

