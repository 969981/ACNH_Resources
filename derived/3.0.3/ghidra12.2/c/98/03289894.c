
void FUN_03289894(long param_1,uint param_2)

{
  ushort uVar1;
  
  FUN_0328a0b0(param_1,6,1,param_2);
  if (((param_2 & 1) == 0) &&
     (((*(ushort *)(param_1 + 0x578) >> 5 & 1) == 0 ||
      ((*(ushort *)(param_1 + 0x578) >> 4 & 1) == 0)))) {
    uVar1 = *(ushort *)(param_1 + 0x250) | 0x200;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x250) & 0xfdff;
  }
  *(ushort *)(param_1 + 0x250) = uVar1;
  return;
}

