
ulong FUN_0043d200(long *param_1,ulong param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)((long)param_1 + 0xc);
  lVar3 = *param_1;
  uVar2 = (ulong)((int)(param_2 >> 4) * -0x61c8864f & uVar1);
  uVar4 = *(ulong *)(lVar3 + uVar2 * 0x10);
  while( true ) {
    if (uVar4 == 0xffffffffffffffff) {
      return (long)(int)(uVar1 + 1);
    }
    if ((uVar4 == param_2) && (*(long *)(lVar3 + uVar2 * 0x10 + 8) == param_3)) break;
    uVar2 = (ulong)((int)uVar2 + 1U & uVar1);
    uVar4 = *(ulong *)(lVar3 + uVar2 * 0x10);
  }
  return uVar2;
}

