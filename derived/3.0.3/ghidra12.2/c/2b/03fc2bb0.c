
void FUN_03fc2bb0(long param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  
  uVar4 = param_2 & 7;
  uVar6 = (ulong)(uVar4 << 0xd);
  *(char *)(param_1 + 0x45c55) = (char)uVar4;
  *(ulong *)(param_1 + 0x45c58) = *(long *)(param_1 + 0x90) + uVar6;
  *(char *)(param_1 + 0x45c4f) = (char)uVar4 * '\x04';
  *(ulong *)(param_1 + 0x45c60) = *(long *)(param_1 + 0x88) + uVar6;
  *(ulong *)(param_1 + 0x45c68) = *(long *)(param_1 + 0x80) + uVar6;
  *(short *)(param_1 + 0x45c50) = (short)(uVar4 << 8);
  uVar3 = *(undefined8 *)(param_1 + 0x45ad0 + (3 - (ulong)*(byte *)(param_1 + 0x45c54)) * 8 + 0x188)
  ;
  *(ulong *)(param_1 + 0x45c70) = param_1 + 0x98 + (ulong)(uVar4 << 9);
  *(ulong *)(param_1 + 0x45c78) = param_1 + 0x1098 + (ulong)(uVar4 << 8);
  uVar2 = param_2 >> 4 & 7;
  uVar6 = (ulong)(uVar2 << 0xd);
  *(ulong *)(param_1 + 0x45d20) = *(long *)(param_1 + 0x80) + uVar6;
  *(ulong *)(param_1 + 0x45d10) = *(long *)(param_1 + 0x90) + uVar6;
  *(ulong *)(param_1 + 0x45d18) = *(long *)(param_1 + 0x88) + uVar6;
  *(char *)(param_1 + 0x45d0d) = (char)uVar2;
  *(ulong *)(param_1 + 0x45c80) = param_1 + 0x1898 + (ulong)(uVar4 << 7);
  *(undefined8 *)(param_1 + 0x45c88) = uVar3;
  *(char *)(param_1 + 0x45d07) = (char)uVar2 * '\x04';
  *(short *)(param_1 + 0x45d08) = (short)(uVar2 << 8);
  uVar3 = *(undefined8 *)(param_1 + 0x45ad0 + (3 - (ulong)*(byte *)(param_1 + 0x45d0c)) * 8 + 0x240)
  ;
  *(ulong *)(param_1 + 0x45d28) = param_1 + 0x98 + (ulong)(uVar2 << 9);
  *(ulong *)(param_1 + 0x45d30) = param_1 + 0x1098 + (ulong)(uVar2 << 8);
  *(ulong *)(param_1 + 0x45d38) = param_1 + 0x1898 + (ulong)(uVar2 << 7);
  *(undefined8 *)(param_1 + 0x45d40) = uVar3;
  if ((*(byte *)(param_1 + 0x316a9e) < 2) &&
     (uVar4 = uVar4 * -4 & 0x1f,
     *(uint *)(param_1 + 0x45ac0) = 0x22U >> uVar4 | 0x22 << 0x20 - uVar4,
     *(byte *)(param_1 + 0x316a9e) == 0)) {
    uVar4 = uVar2 * -4 & 0x1f;
    *(uint *)(param_1 + 0x45ac4) = 0x22U >> uVar4 | 0x22 << 0x20 - uVar4;
    if (*(char *)(param_1 + 0x3170e8) == '\0') {
      uVar4 = 0;
      goto LAB_03fc2d80;
    }
  }
  else {
    uVar4 = (uint)*(byte *)(param_1 + 0x3170e8);
    if (*(byte *)(param_1 + 0x3170e8) == 0) goto LAB_03fc2d80;
  }
  bVar1 = *(byte *)(param_1 + 0x45960);
  if (bVar1 == 0) {
    uVar4 = 0;
  }
  else {
    if (bVar1 == 1) {
      uVar6 = 0;
      uVar4 = 0;
    }
    else {
      uVar6 = 0;
      uVar4 = 0;
      pbVar5 = (byte *)(param_1 + 0x45968);
      do {
        uVar6 = uVar6 + 2;
        uVar4 = *(uint *)(param_1 + 0x45ab8 + (ulong)*pbVar5 * 4) |
                *(uint *)(param_1 + 0x45ab8 + (ulong)pbVar5[-1] * 4) | uVar4;
        pbVar5 = pbVar5 + 2;
      } while (((ulong)bVar1 & 0xfe) != uVar6);
    }
    if ((bVar1 & 1) != 0) {
      uVar4 = *(uint *)(param_1 + (ulong)*(byte *)(param_1 + uVar6 + 0x45967) * 4 + 0x45ab8) | uVar4
      ;
    }
  }
  if (*(char *)(param_1 + 0x459cc) != '\0') {
    uVar4 = *(uint *)(param_1 + 0x45ac8) | uVar4;
  }
LAB_03fc2d80:
  bVar1 = *(byte *)(param_1 + 0x45a10);
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      pbVar5 = (byte *)(param_1 + 0x45a18);
      do {
        uVar6 = uVar6 + 2;
        uVar4 = *(uint *)(param_1 + 0x45ab8 + (ulong)*pbVar5 * 4) |
                *(uint *)(param_1 + 0x45ab8 + (ulong)pbVar5[-1] * 4) | uVar4;
        pbVar5 = pbVar5 + 2;
      } while (((ulong)bVar1 & 0xfe) != uVar6);
    }
    if ((bVar1 & 1) != 0) {
      uVar4 = *(uint *)(param_1 + (ulong)*(byte *)(param_1 + uVar6 + 0x45a17) * 4 + 0x45ab8) | uVar4
      ;
    }
  }
  uVar2 = 0;
  if (*(char *)(param_1 + 0x45a7c) != '\0') {
    uVar2 = *(uint *)(param_1 + 0x45ac8);
  }
  FUN_03fc20a0(param_1,uVar2 | uVar4);
  return;
}

