
undefined8 FUN_0017211c(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00172194(param_4);
  uVar3 = FUN_0016cb78(param_1,param_2,uVar1);
  if ((int)uVar3 == 0) {
    if ((*(code **)(param_1 + 0x7f0) == (code *)0x0) ||
       (iVar2 = (**(code **)(param_1 + 0x7f0))
                          (param_1,param_3,param_4,*(undefined8 *)(param_1 + 0x8b8)), iVar2 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xfffffc7a;
    }
  }
  return uVar3;
}

