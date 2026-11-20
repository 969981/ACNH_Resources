
long FUN_03f845e0(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  
  if ((((*(char *)(param_2 + 0x7fb6) == '\0') && (*(char *)(param_2 + 0x7fb7) == '\0')) &&
      (*(char *)(param_2 + 0x7fb8) == '\0')) &&
     ((*(char *)(param_2 + 0x7fb9) == '\0' && (*(char *)(param_2 + 0x7fba) == '\0')))) {
    uVar4 = 10;
    if (*(char *)(param_2 + 0x7fbb) != '\0') {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  uVar6 = 0;
  do {
    uVar2 = *(byte *)(param_2 + 0x7fc0 + uVar6) - 0x20;
    if (0x12 < uVar6) break;
    uVar6 = uVar6 + 1;
  } while (uVar2 < 0x5f);
  if (((*(char *)(param_2 + 0xffb6) == '\0') && (*(char *)(param_2 + 0xffb7) == '\0')) &&
     ((*(char *)(param_2 + 0xffb8) == '\0' &&
      ((*(char *)(param_2 + 0xffb9) == '\0' && (*(char *)(param_2 + 0xffba) == '\0')))))) {
    uVar5 = 10;
    if (*(char *)(param_2 + 0xffbb) != '\0') {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
  }
  uVar6 = 0;
  do {
    uVar3 = *(byte *)(param_2 + 0xffc0 + uVar6) - 0x20;
    if (0x12 < uVar6) break;
    uVar6 = uVar6 + 1;
  } while (uVar3 < 0x5f);
  uVar1 = uVar4 + 10;
  if (0x5e < uVar2) {
    uVar1 = uVar4;
  }
  uVar4 = uVar1 + 10;
  if ((*(byte *)(param_2 + 0x7fd5) & 0xe0) != 0x20) {
    uVar4 = uVar1;
  }
  uVar2 = uVar4 + 10;
  if (6 < *(byte *)(param_2 + 0x7fd7) - 7) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 + 10;
  if (7 < *(byte *)(param_2 + 0x7fd8)) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 + 10;
  if (0x14 < *(byte *)(param_2 + 0x7fd9)) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 + 0x14;
  if ((uint)*(ushort *)(param_2 + 0x7fde) + (uint)*(ushort *)(param_2 + 0x7fdc) != 0xffff) {
    uVar4 = uVar2;
  }
  uVar2 = uVar5 + 10;
  if (0x5e < uVar3) {
    uVar2 = uVar5;
  }
  uVar5 = uVar2 + 10;
  if ((*(byte *)(param_2 + 0xffd5) & 0xe0) != 0x20) {
    uVar5 = uVar2;
  }
  uVar2 = uVar5 + 10;
  if (6 < *(byte *)(param_2 + 0xffd7) - 7) {
    uVar2 = uVar5;
  }
  uVar5 = uVar2 + 10;
  if (7 < *(byte *)(param_2 + 0xffd8)) {
    uVar5 = uVar2;
  }
  uVar2 = uVar5 + 10;
  if (0x14 < *(byte *)(param_2 + 0xffd9)) {
    uVar2 = uVar5;
  }
  uVar5 = uVar2 + 0x14;
  if ((uint)*(ushort *)(param_2 + 0xffde) + (uint)*(ushort *)(param_2 + 0xffdc) != 0xffff) {
    uVar5 = uVar2;
  }
  return (ulong)(uVar4 < uVar5) << 0xf;
}

