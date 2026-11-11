
ulong FUN_0043d190(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)((long)param_1 + 0xc);
  uVar2 = (ulong)((int)(param_2 >> 4) * -0x61c8864f & uVar1);
  uVar3 = *(ulong *)(*param_1 + uVar2 * 0x10);
  if (uVar3 == 0xffffffffffffffff) {
LAB_0043d1f0:
    return (long)(int)(uVar1 + 1);
  }
  if (uVar3 != param_2) {
    do {
      uVar2 = (ulong)((int)uVar2 + 1U & uVar1);
      uVar3 = *(ulong *)(*param_1 + uVar2 * 0x10);
      if (uVar3 == 0xffffffffffffffff) goto LAB_0043d1f0;
    } while (uVar3 != param_2);
  }
  return uVar2;
}

