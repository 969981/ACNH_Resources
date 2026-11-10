
undefined8 FUN_00167ab0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + -9;
  FUN_001674fc();
  FUN_00168504(*(undefined8 *)(lVar1 + 0x20),*(undefined4 *)(param_2 + 0x10));
  *(long *)(lVar1 + 0x20) = *(long *)(lVar1 + 0x20) + 4;
  return 0;
}

