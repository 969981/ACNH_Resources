
void FUN_036396d8(long param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  pcVar3 = (char *)(param_1 + 0x2600);
  uVar2 = *(long *)(param_1 + 0x110) + 2;
  *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 4;
  *(ulong *)(param_1 + 0x110) = uVar2;
  if (*(ulong *)(param_1 + 0x138) <= uVar2) {
    FUN_0361e0b4(param_1);
  }
  if (*(char *)(param_1 + 0x285) != '\0') {
    if (*(char *)(param_1 + 0x286) == '\0') {
      *(undefined1 *)(param_1 + 0x280) = *(undefined1 *)(param_1 + 0x283);
      bVar4 = *(byte *)(param_1 + 0x284);
      *(undefined1 *)(param_1 + 0x284) = 0;
      *(byte *)(param_1 + 0x281) = *(byte *)(param_1 + 0x281) | bVar4;
      puVar8 = (undefined1 *)(param_1 + 0x285);
    }
    else {
      puVar8 = (undefined1 *)(param_1 + 0x286);
    }
    *puVar8 = 0;
  }
  if (*pcVar3 == '\0') {
    uVar5 = *(ushort *)(param_1 + 0x2604);
    *(undefined1 *)(param_1 + 0x2601) = 0;
    uVar7 = uVar5 + 4;
    *(short *)(param_1 + 0x2604) = (short)uVar7;
    if ((*(ushort *)(param_1 + 0x2602) & uVar7) == 0) {
      if (((uVar7 ^ uVar5) >> 0xd & 1) != 0) {
        *(int *)(param_1 + 0x1510) = *(int *)(param_1 + 0x1510) + 1;
      }
      if ((*(byte *)(param_1 + 0x2608) >> 2 & 1) != 0) {
        iVar1 = *(byte *)(param_1 + 0x2606) + 1;
        *(char *)(param_1 + 0x2606) = (char)iVar1;
        *pcVar3 = (char)((uint)iVar1 >> 8);
      }
    }
  }
  else {
    *(byte *)(param_1 + 0x281) = *(byte *)(param_1 + 0x281) | 4;
    *(undefined1 *)(param_1 + 0x2606) = *(undefined1 *)(param_1 + 0x2607);
    uVar5 = *(ushort *)(param_1 + 0x2604);
    uVar7 = uVar5 + 4;
    *(short *)(param_1 + 0x2604) = (short)uVar7;
    if ((*(ushort *)(param_1 + 0x2602) & uVar7) == 0) {
      if (((uVar7 ^ uVar5) >> 0xd & 1) != 0) {
        *(int *)(param_1 + 0x1510) = *(int *)(param_1 + 0x1510) + 1;
      }
      if ((*(byte *)(param_1 + 0x2608) >> 2 & 1) == 0) goto LAB_036397ac;
      bVar6 = *(char *)(param_1 + 0x2607) == '\0';
    }
    else {
LAB_036397ac:
      bVar6 = false;
    }
    *pcVar3 = bVar6;
    *(undefined1 *)(param_1 + 0x2601) = 1;
  }
  if ((*(char *)(param_1 + 0x1cc) == '\0') ||
     ((*(char *)(param_1 + 0x1cc) != '\x01' && (*(char *)(param_1 + 0x1cd) == '\0')))) {
    uVar7 = *(int *)(param_1 + 0x39c) + 2;
    if (*(byte *)(param_1 + 0x1c6) < 0xa2) {
      if (uVar7 < *(uint *)(param_1 + 0x3a0)) {
        *(uint *)(param_1 + 0x39c) = uVar7;
      }
      else {
        FUN_035de510(param_1 + 0x2c0,uVar7,1);
      }
      FUN_035b220c(param_1 + 0x1c0);
      goto LAB_036398b8;
    }
    if (*(uint *)(param_1 + 0x3a0) <= uVar7) {
      FUN_035d2540(param_1 + 0x2c0,uVar7,1);
      goto LAB_036398b8;
    }
  }
  else {
    FUN_035b2784(param_1 + 0x1c0);
    uVar7 = *(int *)(param_1 + 0x39c) + 2;
    if (*(uint *)(param_1 + 0x3a0) <= uVar7) {
      FUN_035ea5b0(param_1 + 0x2c0,uVar7,0);
      goto LAB_036398b8;
    }
  }
  *(uint *)(param_1 + 0x39c) = uVar7;
LAB_036398b8:
  uVar7 = *(int *)(param_1 + 0x1504) + 2;
  *(uint *)(param_1 + 0x1504) = uVar7;
  if (*(char *)(param_1 + 0x15fa) < '\0') {
    *(int *)(param_1 + 0x150c) = *(int *)(param_1 + 0x150c) + 2;
  }
  if (7 < uVar7) {
    FUN_036119a8();
  }
  if (*(ulong *)(param_1 + 0x108) < *(ulong *)(param_1 + 0x2670)) {
    return;
  }
  FUN_036074b4(param_1 + 0x2640);
  return;
}

