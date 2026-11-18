
long FUN_03603ccc(long param_1,uint param_2,uint *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  
  if ((param_2 == 0) || (1 < *(byte *)(param_1 + 0x138))) {
    lVar1 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x140);
    uVar2 = (uint)*(byte *)(lVar1 + 0x242);
    param_3[1] = *(uint *)(lVar1 + 0x1024);
    memset(param_3 + 2,0,param_4 - 8);
  }
  else {
    uVar2 = 0xff;
    param_4 = 4;
  }
  *param_3 = uVar2;
  return param_4;
}

