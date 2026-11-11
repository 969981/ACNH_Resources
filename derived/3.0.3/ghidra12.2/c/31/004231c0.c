
long * FUN_004231c0(long *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  
  if (param_2 != (undefined1 *)0x0) {
    uVar5 = FUN_0043a2d0(param_2);
    if (0 < (int)uVar5) {
      lVar4 = param_1[1];
      iVar2 = (int)lVar4 + uVar5;
      lVar6 = *param_1;
      if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < iVar2) {
        lVar6 = FUN_00426720(PTR_DAT_048607c0,iVar2,1);
        *param_1 = lVar6;
      }
      puVar9 = (undefined1 *)(lVar6 + (long)(int)lVar4 + -1);
      FUN_0043aa30(puVar9 + (int)uVar5,puVar9,1);
      uVar3 = uVar5 & 3;
      if (2 < uVar5 - 1) {
        iVar7 = uVar3 - uVar5;
        puVar8 = puVar9;
        do {
          *puVar8 = *param_2;
          puVar8[1] = param_2[1];
          puVar8[2] = param_2[2];
          puVar1 = param_2 + 3;
          puVar9 = puVar8 + 4;
          param_2 = param_2 + 4;
          puVar8[3] = *puVar1;
          iVar7 = iVar7 + 4;
          puVar8 = puVar9;
        } while (iVar7 != 0);
      }
      if (uVar3 != 0) {
        iVar7 = -uVar3;
        do {
          iVar7 = iVar7 + 1;
          *puVar9 = *param_2;
          param_2 = param_2 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar7 != 0);
      }
      *(int *)(param_1 + 1) = iVar2;
    }
  }
  return param_1;
}

