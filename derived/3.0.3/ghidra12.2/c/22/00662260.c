
ulong FUN_00662260(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  
  if ((int)(DAT_04c7e408 * 2) < (int)((DAT_04c7e3f8 + 1) * 3)) {
    FUN_0043d3c0(&DAT_04c7e400);
  }
  uVar3 = DAT_04c7e3f8;
  uVar1 = *param_1 * -0x61c8864f;
  uVar2 = param_1[1] * -0x61c8864f;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar1 = uVar2 + uVar1 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar1;
  uVar6 = (ulong)(uVar1 & DAT_04c7e408);
  puVar4 = (uint *)(DAT_04c7e400 + uVar6 * 8);
  puVar7 = puVar4 + 1;
  uVar2 = *puVar7;
  if (-1 < (int)uVar2) {
    do {
      uVar5 = (ulong)uVar2;
      if (((*puVar4 == uVar1) &&
          (*(int *)(DAT_04c7e3f0 + (-(ulong)(uVar2 >> 0x1f) & 0xffffffe000000000 | uVar5 << 5)) ==
           *param_1)) && (*(int *)(DAT_04c7e3f0 + (long)(int)uVar2 * 0x20 + 4) == param_1[1]))
      goto LAB_00662360;
      uVar6 = ((long)(uVar6 << 3) >> 3) + 1U & (long)(int)DAT_04c7e408;
      puVar4 = (uint *)(DAT_04c7e400 + uVar6 * 8);
      puVar7 = puVar4 + 1;
      uVar2 = *puVar7;
    } while (-1 < (int)uVar2);
  }
  *puVar4 = uVar1;
  *puVar7 = uVar3;
  uVar5 = (ulong)DAT_04c7e3f8;
LAB_00662360:
  return uVar5 | ((long)puVar4 - DAT_04c7e400) * 0x20000000;
}

