
uint * FUN_006621b0(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar2 = (param_1 * -0x61c8864f & 0xff00ff00U) >> 8 | (param_1 * -0x61c8864f & 0xff00ffU) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar3 = (param_2 * -0x61c8864f & 0xff00ff00U) >> 8 | (param_2 * -0x61c8864f & 0xff00ffU) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar2 = uVar3 + uVar2 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar2;
  uVar4 = (ulong)(DAT_04c7e408 & uVar2);
  uVar3 = *(uint *)(DAT_04c7e400 + uVar4 * 8 + 4);
  while( true ) {
    if ((int)uVar3 < 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(DAT_04c7e400 + uVar4 * 8);
    if (((*puVar1 == uVar2) &&
        (*(int *)(DAT_04c7e3f0 + (-(ulong)(uVar3 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar3 << 5))
         == param_1)) && (*(int *)(DAT_04c7e3f0 + (long)(int)uVar3 * 0x20 + 4) == param_2)) break;
    uVar4 = ((long)(uVar4 << 3) >> 3) + 1U & (long)(int)DAT_04c7e408;
    uVar3 = *(uint *)(DAT_04c7e400 + uVar4 * 8 + 4);
  }
  return puVar1;
}

