
uint FUN_0025af00(long param_1)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  do {
    uVar3 = FUN_0024e270(param_1 + 0xb0);
    uVar6 = 0xff;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0xffffffff;
      uVar3 = FUN_0024e270(param_1 + 0xf0);
    }
    else {
      bVar1 = *(byte *)(param_1 + 0xe5);
      uVar4 = (uint)bVar1;
      uVar6 = 0xff;
      if (uVar4 >= uVar5 && uVar4 != 0xff) {
        uVar6 = (uint)bVar1;
      }
      uVar4 = -(uint)(uVar4 < uVar5 || uVar4 == 0xff);
      uVar3 = FUN_0024e270(param_1 + 0xf0);
    }
    if (((uVar3 & 1) != 0) && (bVar1 = *(byte *)(param_1 + 0x125), bVar1 < uVar6 && uVar5 <= bVar1))
    {
      uVar4 = 1;
      uVar6 = (uint)bVar1;
    }
    uVar3 = FUN_0024e270(param_1 + 0x130);
    if (((uVar3 & 1) != 0) && (bVar1 = *(byte *)(param_1 + 0x165), bVar1 < uVar6 && uVar5 <= bVar1))
    {
      uVar4 = 2;
      uVar6 = (uint)bVar1;
    }
    uVar3 = FUN_0024e270(param_1 + 0x170);
    if (((uVar3 & 1) != 0) && (bVar1 = *(byte *)(param_1 + 0x1a5), bVar1 < uVar6 && uVar5 <= bVar1))
    {
      uVar4 = 3;
      uVar6 = (uint)bVar1;
    }
    uVar3 = FUN_0024e270(param_1 + 0x1b0);
    if (((uVar3 & 1) != 0) && (bVar1 = *(byte *)(param_1 + 0x1e5), bVar1 < uVar6 && uVar5 <= bVar1))
    {
      uVar4 = 4;
      uVar6 = (uint)bVar1;
    }
    uVar3 = FUN_0024e270(param_1 + 0x1f0);
    if (((uVar3 & 1) != 0) && (bVar1 = *(byte *)(param_1 + 0x225), bVar1 < uVar6 && uVar5 <= bVar1))
    {
      uVar4 = 5;
      uVar6 = (uint)bVar1;
    }
    uVar3 = FUN_0024e270(param_1 + 0x230);
    if (((uVar3 & 1) != 0) && (bVar1 = *(byte *)(param_1 + 0x265), bVar1 < uVar6 && uVar5 <= bVar1))
    {
      uVar4 = 6;
      uVar6 = (uint)bVar1;
    }
    uVar3 = FUN_0024e270(param_1 + 0x270);
    if ((((uVar3 & 1) == 0) || (*(byte *)(param_1 + 0x2a5) < uVar5)) ||
       (uVar6 <= *(byte *)(param_1 + 0x2a5))) {
      if (uVar4 == 0xffffffff) {
        return uVar5;
      }
      *(char *)(param_1 + (ulong)uVar4 * 0x40 + 0xe5) = (char)uVar5;
    }
    else {
      *(char *)(param_1 + 0x2a5) = (char)uVar5;
    }
    bVar2 = uVar5 < 7;
    uVar5 = uVar5 + 1;
  } while (bVar2);
  return 0xff;
}

