
void FUN_003a1028(long param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  
  if (*(char *)(param_1 + 0x5c) != '\0') {
    pbVar3 = *(byte **)(param_1 + 0x28);
    lVar2 = *(long *)(param_1 + 0x10);
    if (*pbVar3 != 0) {
      lVar1 = *(long *)(lVar2 + 8) + (ulong)(*pbVar3 - 1) * 0x10;
      *(byte *)(lVar1 + 0xf) = *(byte *)(lVar1 + 0xf) | 1;
    }
    if (pbVar3[1] != 0) {
      lVar1 = *(long *)(lVar2 + 8) + (ulong)(pbVar3[1] - 1) * 0x10;
      *(byte *)(lVar1 + 0xf) = *(byte *)(lVar1 + 0xf) | 1;
    }
    if (pbVar3[2] != 0) {
      lVar1 = *(long *)(lVar2 + 8) + (ulong)(pbVar3[2] - 1) * 0x10;
      *(byte *)(lVar1 + 0xf) = *(byte *)(lVar1 + 0xf) | 1;
    }
    if (pbVar3[3] != 0) {
      lVar1 = *(long *)(lVar2 + 8) + (ulong)(pbVar3[3] - 1) * 0x10;
      *(byte *)(lVar1 + 0xf) = *(byte *)(lVar1 + 0xf) | 1;
    }
    if (pbVar3[4] != 0) {
      lVar1 = *(long *)(lVar2 + 8) + (ulong)(pbVar3[4] - 1) * 0x10;
      *(byte *)(lVar1 + 0xf) = *(byte *)(lVar1 + 0xf) | 1;
    }
    if (pbVar3[5] != 0) {
      lVar1 = *(long *)(lVar2 + 8) + (ulong)(pbVar3[5] - 1) * 0x10;
      *(byte *)(lVar1 + 0xf) = *(byte *)(lVar1 + 0xf) | 1;
    }
    if (pbVar3[6] != 0) {
      lVar1 = *(long *)(lVar2 + 8) + (ulong)(pbVar3[6] - 1) * 0x10;
      *(byte *)(lVar1 + 0xf) = *(byte *)(lVar1 + 0xf) | 1;
    }
    if (pbVar3[7] != 0) {
      lVar1 = *(long *)(lVar2 + 8) + (ulong)(pbVar3[7] - 1) * 0x10;
      *(byte *)(lVar1 + 0xf) = *(byte *)(lVar1 + 0xf) | 1;
    }
    if (pbVar3[8] != 0) {
      lVar1 = *(long *)(lVar2 + 8) + (ulong)(pbVar3[8] - 1) * 0x10;
      *(byte *)(lVar1 + 0xf) = *(byte *)(lVar1 + 0xf) | 1;
    }
    if (pbVar3[9] != 0) {
      lVar1 = *(long *)(lVar2 + 8) + (ulong)(pbVar3[9] - 1) * 0x10;
      *(byte *)(lVar1 + 0xf) = *(byte *)(lVar1 + 0xf) | 1;
    }
    if (pbVar3[10] != 0) {
      lVar1 = *(long *)(lVar2 + 8) + (ulong)(pbVar3[10] - 1) * 0x10;
      *(byte *)(lVar1 + 0xf) = *(byte *)(lVar1 + 0xf) | 1;
    }
    if (pbVar3[0xb] != 0) {
      lVar1 = *(long *)(lVar2 + 8) + (ulong)(pbVar3[0xb] - 1) * 0x10;
      *(byte *)(lVar1 + 0xf) = *(byte *)(lVar1 + 0xf) | 1;
    }
    if (pbVar3[0xc] != 0) {
      lVar1 = *(long *)(lVar2 + 8) + (ulong)(pbVar3[0xc] - 1) * 0x10;
      *(byte *)(lVar1 + 0xf) = *(byte *)(lVar1 + 0xf) | 1;
    }
    if (pbVar3[0xd] != 0) {
      lVar1 = *(long *)(lVar2 + 8) + (ulong)(pbVar3[0xd] - 1) * 0x10;
      *(byte *)(lVar1 + 0xf) = *(byte *)(lVar1 + 0xf) | 1;
    }
    if (pbVar3[0xe] != 0) {
      lVar1 = *(long *)(lVar2 + 8) + (ulong)(pbVar3[0xe] - 1) * 0x10;
      *(byte *)(lVar1 + 0xf) = *(byte *)(lVar1 + 0xf) | 1;
    }
    if (pbVar3[0xf] != 0) {
      lVar1 = *(long *)(lVar2 + 8) + (ulong)(pbVar3[0xf] - 1) * 0x10;
      *(byte *)(lVar1 + 0xf) = *(byte *)(lVar1 + 0xf) | 1;
    }
    if (pbVar3[0x10] != 0) {
      lVar1 = *(long *)(lVar2 + 8) + (ulong)(pbVar3[0x10] - 1) * 0x10;
      *(byte *)(lVar1 + 0xf) = *(byte *)(lVar1 + 0xf) | 1;
    }
    if (pbVar3[0x11] != 0) {
      lVar2 = *(long *)(lVar2 + 8) + (ulong)(pbVar3[0x11] - 1) * 0x10;
      *(byte *)(lVar2 + 0xf) = *(byte *)(lVar2 + 0xf) | 1;
    }
  }
  return;
}

