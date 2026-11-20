
void FUN_03fc2900(long param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  
  uVar5 = param_2 & 7;
  uVar8 = (ulong)(uVar5 << 0xd);
  *(char *)(param_1 + 0x45ae5) = (char)uVar5;
  *(ulong *)(param_1 + 0x45ae8) = *(long *)(param_1 + 0x90) + uVar8;
  *(char *)(param_1 + 0x45adf) = (char)uVar5 * '\x04';
  *(ulong *)(param_1 + 0x45af0) = *(long *)(param_1 + 0x88) + uVar8;
  *(ulong *)(param_1 + 0x45af8) = *(long *)(param_1 + 0x80) + uVar8;
  *(short *)(param_1 + 0x45ae0) = (short)(uVar5 << 8);
  uVar3 = param_2 >> 4 & 7;
  uVar4 = *(undefined8 *)(param_1 + 0x45ad0 + (3 - (ulong)*(byte *)(param_1 + 0x45ae4)) * 8 + 0x18);
  *(ulong *)(param_1 + 0x45b00) = param_1 + 0x98 + (ulong)(uVar5 << 9);
  *(ulong *)(param_1 + 0x45b08) = param_1 + 0x1098 + (ulong)(uVar5 << 8);
  uVar8 = (ulong)(uVar3 << 0xd);
  *(ulong *)(param_1 + 0x45bb0) = *(long *)(param_1 + 0x80) + uVar8;
  *(ulong *)(param_1 + 0x45ba0) = *(long *)(param_1 + 0x90) + uVar8;
  *(ulong *)(param_1 + 0x45ba8) = *(long *)(param_1 + 0x88) + uVar8;
  *(ulong *)(param_1 + 0x45b10) = param_1 + 0x1898 + (ulong)(uVar5 << 7);
  *(undefined8 *)(param_1 + 0x45b18) = uVar4;
  *(char *)(param_1 + 0x45b9d) = (char)uVar3;
  *(char *)(param_1 + 0x45b97) = (char)uVar3 * '\x04';
  *(short *)(param_1 + 0x45b98) = (short)(uVar3 << 8);
  uVar4 = *(undefined8 *)(param_1 + 0x45ad0 + (3 - (ulong)*(byte *)(param_1 + 0x45b9c)) * 8 + 0xd0);
  *(ulong *)(param_1 + 0x45bb8) = param_1 + 0x98 + (ulong)(uVar3 << 9);
  *(ulong *)(param_1 + 0x45bc0) = param_1 + 0x1098 + (ulong)(uVar3 << 8);
  *(ulong *)(param_1 + 0x45bc8) = param_1 + 0x1898 + (ulong)(uVar3 << 7);
  *(undefined8 *)(param_1 + 0x45bd0) = uVar4;
  uVar2 = 1 << (ulong)(*(byte *)(param_1 + 0x316a9e) & 0x1f);
  uVar6 = 0x22;
  if (*(byte *)(param_1 + 0x316a9e) == 0) {
    uVar5 = uVar5 * -4 & 0x1f;
    uVar5 = 0x22U >> uVar5 | 0x22 << 0x20 - uVar5;
LAB_03fc2a38:
    *(uint *)(param_1 + 0x45ab8) = uVar5;
  }
  else {
    if ((uVar2 & 0x66) != 0) {
      uVar5 = uVar5 * -4 & 0x1f;
      uVar5 = 0x4444U >> uVar5 | 0x4444 << 0x20 - uVar5;
      goto LAB_03fc2a38;
    }
    if ((uVar2 & 0x18) != 0) {
      uVar5 = 0x88888888;
      goto LAB_03fc2a38;
    }
  }
  if ((uVar2 & 0x31) == 0) {
    if ((uVar2 & 0xe) == 0) goto LAB_03fc2a70;
    uVar6 = 0x4444;
  }
  uVar5 = uVar3 * -4 & 0x1f;
  *(uint *)(param_1 + 0x45abc) = uVar6 >> uVar5 | uVar6 << 0x20 - uVar5;
LAB_03fc2a70:
  uVar5 = (uint)*(byte *)(param_1 + 0x3170e8);
  if (*(byte *)(param_1 + 0x3170e8) != 0) {
    bVar1 = *(byte *)(param_1 + 0x45960);
    if (bVar1 == 0) {
      uVar5 = 0;
    }
    else {
      if (bVar1 == 1) {
        uVar8 = 0;
        uVar5 = 0;
      }
      else {
        uVar8 = 0;
        uVar5 = 0;
        pbVar7 = (byte *)(param_1 + 0x45968);
        do {
          uVar8 = uVar8 + 2;
          uVar5 = *(uint *)(param_1 + 0x45ab8 + (ulong)*pbVar7 * 4) |
                  *(uint *)(param_1 + 0x45ab8 + (ulong)pbVar7[-1] * 4) | uVar5;
          pbVar7 = pbVar7 + 2;
        } while (((ulong)bVar1 & 0xfe) != uVar8);
      }
      if ((bVar1 & 1) != 0) {
        uVar5 = *(uint *)(param_1 + (ulong)*(byte *)(param_1 + uVar8 + 0x45967) * 4 + 0x45ab8) |
                uVar5;
      }
    }
    if (*(char *)(param_1 + 0x459cc) != '\0') {
      uVar5 = *(uint *)(param_1 + 0x45ac8) | uVar5;
    }
  }
  bVar1 = *(byte *)(param_1 + 0x45a10);
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      pbVar7 = (byte *)(param_1 + 0x45a18);
      do {
        uVar8 = uVar8 + 2;
        uVar5 = *(uint *)(param_1 + 0x45ab8 + (ulong)*pbVar7 * 4) |
                *(uint *)(param_1 + 0x45ab8 + (ulong)pbVar7[-1] * 4) | uVar5;
        pbVar7 = pbVar7 + 2;
      } while (((ulong)bVar1 & 0xfe) != uVar8);
    }
    if ((bVar1 & 1) != 0) {
      uVar5 = *(uint *)(param_1 + (ulong)*(byte *)(param_1 + uVar8 + 0x45a17) * 4 + 0x45ab8) | uVar5
      ;
    }
  }
  uVar2 = 0;
  if (*(char *)(param_1 + 0x45a7c) != '\0') {
    uVar2 = *(uint *)(param_1 + 0x45ac8);
  }
  FUN_03fc20a0(param_1,uVar2 | uVar5);
  return;
}

