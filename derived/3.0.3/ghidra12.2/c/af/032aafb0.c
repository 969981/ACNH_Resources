
void FUN_032aafb0(long *param_1)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(*param_1 + 0x20) + 0x18);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  FUN_032883c0(*param_1,(int)param_1[0xb] == 0);
  lVar1 = param_1[0xb];
  lVar3 = *param_1;
  FUN_0328a0b0(lVar3,6,1,(int)lVar1 != 2);
  if (((int)lVar1 == 2) &&
     (((*(ushort *)(lVar3 + 0x578) >> 5 & 1) == 0 || ((*(ushort *)(lVar3 + 0x578) >> 4 & 1) == 0))))
  {
    uVar2 = *(ushort *)(lVar3 + 0x250) | 0x200;
  }
  else {
    uVar2 = *(ushort *)(lVar3 + 0x250) & 0xfdff;
  }
  *(ushort *)(lVar3 + 0x250) = uVar2;
  return;
}

