
void FUN_004397f0(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long *plVar9;
  int iVar10;
  
  plVar9 = *(long **)(param_1 + 8);
  iVar10 = -1;
  lVar5 = (long)(int)plVar9[3];
  do {
    lVar4 = lVar5 + -1;
    if (lVar5 < 1) goto LAB_00439848;
    lVar1 = lVar5 * 8;
    lVar5 = lVar4;
  } while (*(ulong *)(param_1 + 0x10) <= param_2 - *(long *)(plVar9[2] + lVar1 + -8));
  iVar10 = (int)lVar4;
LAB_00439848:
  iVar3 = (int)plVar9[1];
  lVar5 = (long)iVar3;
  uVar2 = param_2 + param_3;
  if (0 < iVar3) {
    puVar8 = (ulong *)(*plVar9 + lVar5 * 0x18);
    do {
      puVar6 = puVar8 + -3;
      if ((int)puVar8[-1] == iVar10) {
        if (puVar8[-2] == param_2) {
          puVar8[-2] = uVar2;
          plVar9 = *(long **)(param_1 + 8);
          iVar10 = (int)plVar9[1];
          goto joined_r0x00439948;
        }
        if (*puVar6 == uVar2) {
          *puVar6 = param_2;
          plVar9 = *(long **)(param_1 + 8);
          iVar10 = (int)plVar9[1];
          goto joined_r0x00439948;
        }
        if (*puVar6 < param_2) goto LAB_004398b8;
      }
      else if ((int)puVar8[-1] < iVar10) goto LAB_004398b8;
      lVar5 = lVar5 + -1;
      puVar8 = puVar6;
    } while (0 < lVar5);
  }
  lVar5 = 0;
LAB_004398b8:
  if (iVar3 < (int)(*(uint *)((long)plVar9 + 0xc) & 0x3fffffff)) {
    lVar4 = *plVar9;
  }
  else {
    lVar4 = FUN_00426720(*(undefined8 *)(param_1 + 0x48),iVar3 + 1,0x18,*plVar9);
    *plVar9 = lVar4;
  }
  puVar8 = (ulong *)(lVar4 + (long)(int)lVar5 * 0x18);
  FUN_0043aa30(puVar8 + 3,puVar8,(long)(iVar3 - (int)lVar5) * 0x18);
  *(int *)(plVar9 + 1) = iVar3 + 1;
  *puVar8 = param_2;
  puVar8[1] = uVar2;
  *(int *)(puVar8 + 2) = iVar10;
  plVar9 = *(long **)(param_1 + 8);
  iVar10 = (int)plVar9[1];
joined_r0x00439948:
  if (iVar10 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*plVar9 + (long)(iVar10 + -1) * 0x18 + 8);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  return;
}

