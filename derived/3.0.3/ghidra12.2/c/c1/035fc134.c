
ulong FUN_035fc134(long param_1,uint param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar2 = *(ushort *)(param_1 + (ulong)param_3 * 8 + 0x168);
  if (uVar2 == 0) {
    uVar4 = FUN_035b39d4(param_1 + -0xcc0,param_2 + 0x100 & 0xffff);
    param_1 = param_1 + (ulong)param_3 * 8;
    *(char *)(param_1 + 0x16e) = (char)uVar4;
    *(short *)(param_1 + 0x16c) = (short)(param_2 + 0x100);
  }
  else if (uVar2 < 0x100) {
    if (param_3 == 4) {
      if (*(ushort *)(param_1 + 6) == 0xffff) {
        uVar4 = 0;
      }
      else {
        uVar4 = (ulong)*(byte *)(*(long *)(param_1 + 0x90) +
                                (ulong)(*(ushort *)(param_1 + 6) & 0xfe | param_2 & 1));
      }
    }
    else {
      bVar1 = *(byte *)(param_1 + (ulong)param_3 * 8 + 0x16e);
      uVar4 = (ulong)bVar1;
      if (param_3 == 1) {
        uVar3 = (uint)bVar1;
        if ((uVar2 & 2) != 0) {
          uVar3 = 0xffffffff;
        }
        uVar4 = (ulong)uVar3;
      }
    }
  }
  else {
    uVar4 = 0xff;
  }
  return uVar4;
}

