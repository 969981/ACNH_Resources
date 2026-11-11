
void FUN_00466570(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar4 = param_1[1];
    if ((int)lVar4 != 0) {
      lVar6 = param_1[2];
      puVar3 = (undefined8 *)FUN_00426e90(lVar6,0x100);
      if ((puVar3 != (undefined8 *)0x0) && ((code *)*puVar3 != (code *)0x0)) {
        (*(code *)*puVar3)(lVar5,lVar6,(int)lVar4);
      }
    }
    if ((*param_1 != 0) && (-1 < *(int *)((long)param_1 + 0xc))) {
      iVar2 = FUN_00426fc0(param_1[2]);
      iVar1 = *(int *)((long)param_1 + 0xc);
      lVar6 = *param_1;
      lVar4 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
      lVar5 = DAT_04c6f058;
      if (lVar4 != 0) {
        lVar5 = lVar4;
      }
      FUN_004220c0(*(undefined8 *)(lVar5 + 0x58),lVar6,1,iVar1 * iVar2);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

