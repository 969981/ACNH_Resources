
void FUN_004ab170(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 8);
  iVar1 = FUN_00426fc0(param_3);
  uVar2 = (**(code **)(*(long *)(lVar4 + 0x100) + 0x10))(lVar4 + 0x100,(long)iVar1,0);
  *param_1 = uVar2;
  param_1[1] = param_3;
  if (param_3 == 0) {
    param_1[2] = 0;
  }
  else {
    uVar3 = FUN_00428370(param_3);
    param_1[2] = uVar3;
    if ((uVar3 & 1) != 0) {
      FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
      return;
    }
  }
  return;
}

