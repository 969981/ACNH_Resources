
undefined8 FUN_0016e544(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((*(code **)(param_1 + 0x7f0) == (code *)0x0) ||
     (iVar1 = (**(code **)(param_1 + 0x7f0))
                        (param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x8b8)), iVar1 == 0)) {
    uVar2 = FUN_00172194(param_3);
    uVar3 = FUN_0016bcd4(param_1,*(undefined4 *)(param_1 + 0x93c),uVar2,param_4);
    return uVar3;
  }
  return 0xfffffc7a;
}

