
void FUN_03b2a448(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_03b21830();
  uVar1 = FUN_00364e30(param_2,"Check");
  lVar2 = FUN_03b185ec(param_3,uVar1,1);
  *(long *)(param_1 + 0x70) = lVar2;
  *(byte *)(lVar2 + 0x57) = *(byte *)(lVar2 + 0x57) | 0x10;
  *(byte *)(*(long *)(param_1 + 0x70) + 0x57) = *(byte *)(*(long *)(param_1 + 0x70) + 0x57) & 0xdf;
  return;
}

