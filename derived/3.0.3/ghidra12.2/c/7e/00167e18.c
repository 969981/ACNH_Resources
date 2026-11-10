
undefined8 FUN_00167e18(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + -9;
  FUN_001674fc();
  FUN_00168504(*(undefined8 *)(lVar3 + 0x20),*(undefined4 *)(param_2 + 0x10));
  lVar1 = *(long *)(lVar3 + 0x20) + 4;
  *(long *)(lVar3 + 0x20) = lVar1;
  FUN_00168504(lVar1,*(undefined4 *)(param_2 + 0x14));
  *(long *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x20) + 4;
  uVar2 = FUN_0016b500(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  if ((int)uVar2 == -0x1f6) {
    uVar2 = 0xfffffdf6;
  }
  return uVar2;
}

