
undefined8 FUN_0044e3a0(code *param_1,long param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00427110(param_3,&DAT_04c14570);
  if ((uVar2 & 1) == 0) {
    (*param_1)(param_2,param_3,param_4);
  }
  else {
    iVar1 = FUN_00426fc0(param_3);
    if (0 < param_4) {
      do {
        uVar3 = *(undefined8 *)(param_2 + 8);
        (*param_1)(param_2,param_3,1);
        *(undefined8 *)(param_2 + 8) = uVar3;
        param_2 = param_2 + iVar1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  return 0;
}

