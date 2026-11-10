
undefined8 FUN_00167dc4(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + -9;
  FUN_001674fc();
  uVar1 = FUN_00168980(*(undefined8 *)(lVar2 + 0x20),param_2 + 0x10,8);
  *(undefined8 *)(lVar2 + 0x20) = uVar1;
  return 0;
}

