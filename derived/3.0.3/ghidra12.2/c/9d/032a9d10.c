
void FUN_032a9d10(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  FUN_032aae60(param_2);
  lVar1 = *(long *)(*(long *)(*param_2 + 0x20) + 0x18);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  FUN_032883c0(*param_2,0);
  return;
}

