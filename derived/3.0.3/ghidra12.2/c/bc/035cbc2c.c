
void FUN_035cbc2c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  
  bVar4 = false;
  *(undefined1 *)(param_1 + 4) = 0;
  if (*(char *)(param_1 + 9) == '\0' && *(char *)(param_1 + 0xe9) == '\0') {
    bVar4 = *(char *)(param_1 + 0x16) != '\0';
  }
  *(bool *)(param_1 + 0xe8) = bVar4;
  *(undefined1 *)(param_1 + 0xf) = 0;
  bVar6 = *(byte *)(param_1 + 1);
  uVar8 = bVar6 & 0x7b | (uint)(*(char *)(param_1 + 0x10) == '\0') << 2;
  uVar7 = (uint)bVar6;
  if (bVar6 != uVar8) {
    uVar1 = bVar6 & 0x44444444;
    uVar7 = uVar8;
    if (*(char *)(param_1 + 0xd8) == '\x01') {
      bVar5 = (bVar6 & 0x38) != 0;
      bVar4 = uVar1 == 0x44 || bVar5;
      *(char *)(param_1 + 1) = (char)uVar8;
      if (!(((uVar8 ^ 0xffffffff) & 0x44) == 0 || bVar5)) goto LAB_035cbd24;
    }
    else {
      uVar2 = (bVar6 >> 3 & 7) >> (ulong)(bVar6 & 3) & 1;
      uVar3 = uVar2;
      if (uVar1 == 0x44) {
        uVar3 = 1;
      }
      bVar4 = uVar3 != 0;
      if (((uVar8 ^ 0xffffffff) & 0x44) == 0) {
        uVar2 = 1;
      }
      *(char *)(param_1 + 1) = (char)uVar8;
      if (uVar2 == 0) goto LAB_035cbd24;
    }
    if (!bVar4) {
      *(byte *)(param_1 + -0x3f) = *(byte *)(param_1 + -0x3f) | 2;
      uVar7 = (uint)*(byte *)(param_1 + 1);
      if (*(char *)(param_1 + 0x10) != *(char *)(param_1 + 5)) {
        uVar7 = uVar7 & 0xfffffffb;
        *(char *)(param_1 + 1) = (char)uVar7;
      }
    }
  }
LAB_035cbd24:
  bVar6 = (byte)uVar7;
  uVar8 = uVar7 & 0x44;
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    uVar7 = (uint)((uVar7 & 0x38) != 0 || uVar8 == 0x44);
    uVar8 = uVar7;
  }
  else {
    uVar1 = (uVar7 >> 3 & 7) >> (ulong)(uVar7 & 3) & 1;
    if (uVar8 == 0x44) {
      uVar1 = 1;
    }
    uVar7 = uVar7 >> 3 & 1 | (uint)(uVar8 == 0x44);
    uVar8 = (uint)(uVar1 != 0);
  }
  if (((uVar8 | uVar7 ^ 1) != 1) || (*(char *)(param_1 + 0x14) != '\0')) {
    *(byte *)(param_1 + -0x3f) = *(byte *)(param_1 + -0x3f) | 2;
    bVar6 = *(byte *)(param_1 + 1);
  }
  *(byte *)(param_1 + 1) = bVar6 & 0x7c;
  if (((*(char *)(param_1 + 4) == *(char *)(param_1 + 9)) && (*(char *)(param_1 + 0xe9) == '\0')) &&
     (*(char *)(param_1 + 0x16) != '\0')) {
    *(undefined1 *)(param_1 + 0xe9) = 1;
  }
  return;
}

