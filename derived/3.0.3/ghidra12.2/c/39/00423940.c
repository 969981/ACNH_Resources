
long * FUN_00423940(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  
  iVar4 = (int)param_1[1];
  iVar5 = -1;
  lVar3 = (long)iVar4 + -1;
  do {
    lVar2 = lVar3 + -1;
    if (lVar3 < 1) goto LAB_00423988;
    lVar1 = *param_1 + lVar3;
    lVar3 = lVar2;
  } while (*(char *)(lVar1 + -1) != '\\');
  iVar5 = (int)lVar2;
LAB_00423988:
  iVar7 = -1;
  lVar3 = (long)iVar4 + -1;
  do {
    lVar2 = lVar3 + -1;
    if (lVar3 < 1) goto LAB_004239b0;
    lVar1 = *param_1 + lVar3;
    lVar3 = lVar2;
  } while (*(char *)(lVar1 + -1) != '/');
  iVar7 = (int)lVar2;
LAB_004239b0:
  if (iVar5 <= iVar7) {
    iVar5 = iVar7;
  }
  if (iVar5 < 0) {
    if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == 0) {
      lVar3 = FUN_00426720(PTR_DAT_048607c0,1,1,*param_1);
      iVar4 = (int)param_1[1];
      *param_1 = lVar3;
    }
    if (iVar4 != 1) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
    puVar6 = (undefined1 *)*param_1;
  }
  else {
    iVar7 = iVar5 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar5) {
      lVar3 = FUN_00426720(PTR_DAT_048607c0,iVar7,1,*param_1);
      iVar4 = (int)param_1[1];
      *param_1 = lVar3;
    }
    if ((iVar4 <= iVar5) || (iVar7 < iVar4)) {
      *(int *)(param_1 + 1) = iVar7;
    }
    puVar6 = (undefined1 *)(*param_1 + (long)iVar5);
  }
  *puVar6 = 0;
  return param_1;
}

