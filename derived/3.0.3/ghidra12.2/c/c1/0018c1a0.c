
ulong FUN_0018c1a0(byte *param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar2 = 0;
  do {
    iVar1 = sprintf((char *)(param_2 + uVar2),"%02X",(ulong)*param_1);
    uVar2 = (ulong)(uint)(iVar1 + (int)uVar2);
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
  } while (param_3 != 0);
  return uVar2;
}

