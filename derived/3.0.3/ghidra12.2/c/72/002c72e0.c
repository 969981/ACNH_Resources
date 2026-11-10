
undefined8 FUN_002c72e0(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x228;
  if (*(long *)(param_1 + 0x230) == lVar1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    lVar3 = *(long *)(param_1 + 0x230);
    do {
      lVar5 = *(long *)(lVar3 + 8);
      iVar2 = FUN_002b43fc(lVar3 + 0x18);
      if (iVar2 == param_2) {
        (*(code *)**(undefined8 **)(lVar3 + 0x10))();
        FUN_00223704(lVar1,lVar3);
        FUN_002236e0(param_1 + 0x240,param_1 + 0x240,lVar3 + *(int *)(param_1 + 0x254));
        uVar4 = 1;
      }
      lVar3 = lVar5;
    } while (lVar5 != lVar1);
  }
  lVar1 = param_1 + 0x1d8;
  if (*(long *)(param_1 + 0x1e0) != lVar1) {
    lVar3 = *(long *)(param_1 + 0x1e0);
    do {
      lVar5 = *(long *)(lVar3 + 8);
      iVar2 = FUN_002b43fc(lVar3 + 0x18);
      if (iVar2 == param_2) {
        (*(code *)**(undefined8 **)(lVar3 + 0x10))();
        FUN_00223704(lVar1,lVar3);
        FUN_002236e0(param_1 + 0x1f0,param_1 + 0x1f0,lVar3 + *(int *)(param_1 + 0x204));
        uVar4 = 1;
      }
      lVar3 = lVar5;
    } while (lVar5 != lVar1);
  }
  return uVar4;
}

