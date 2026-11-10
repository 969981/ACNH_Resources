
int FUN_00167d00(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(lVar5 + 0x18) + 4;
  *(long *)(lVar5 + 0x18) = lVar3;
  *(long *)(lVar5 + 0x20) = lVar3;
  iVar2 = FUN_00168e40(param_3,param_1,param_2[3],param_2[4]);
  iVar1 = -0x20b;
  if (iVar2 != -0x1f6) {
    iVar1 = iVar2;
  }
  lVar3 = *(long *)(lVar5 + 0x18) + -4;
  *(long *)(lVar5 + 0x18) = lVar3;
  if (iVar1 == 0) {
    FUN_00168504(lVar3,*(undefined4 *)(param_2 + 5));
    param_2[2] = 0;
    uVar4 = FUN_0016b4d4(param_1);
    *param_2 = uVar4;
    FUN_001678d4(param_1,param_2);
  }
  return iVar1;
}

