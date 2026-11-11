
void FUN_00474a90(long param_1,int param_2,int param_3,code *param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  
  do {
    uVar9 = *(undefined8 *)(param_1 + (long)(param_2 + param_3 >> 1) * 8);
    iVar6 = param_2;
    iVar8 = param_3;
    do {
      while( true ) {
        puVar10 = (undefined8 *)(param_1 + -8 + (long)iVar6 * 8);
        iVar3 = (iVar6 + -1) - iVar8;
        do {
          iVar11 = iVar3;
          iVar7 = iVar6;
          puVar10 = puVar10 + 1;
          cVar2 = (*param_4)(*puVar10,uVar9);
          iVar6 = iVar7 + 1;
          iVar3 = iVar11 + 1;
        } while (cVar2 != '\0');
        lVar5 = 0;
        do {
          cVar2 = (*param_4)(uVar9,*(undefined8 *)(param_1 + (long)iVar8 * 8 + lVar5 * 8));
          lVar5 = lVar5 + -1;
          iVar11 = iVar11 + 1;
        } while (cVar2 != '\0');
        iVar3 = (int)lVar5 + iVar8 + 1;
        if (iVar7 <= iVar3) break;
        iVar6 = iVar7;
        iVar8 = iVar3;
        if (iVar3 < iVar7) goto LAB_00474b90;
      }
      if (iVar11 != 0) {
        lVar1 = param_1 + (long)iVar8 * 8 + lVar5 * 8;
        uVar4 = *(undefined8 *)(lVar1 + 8);
        *(undefined8 *)(lVar1 + 8) = *puVar10;
        *puVar10 = uVar4;
      }
      iVar8 = iVar8 + (int)lVar5;
      iVar7 = iVar6;
      iVar3 = iVar8;
    } while (iVar6 <= iVar8);
LAB_00474b90:
    if (param_2 < iVar3) {
      FUN_00474a90(param_1,param_2,iVar3,param_4);
    }
    param_2 = iVar7;
    if (param_3 <= iVar7) {
      return;
    }
  } while( true );
}

