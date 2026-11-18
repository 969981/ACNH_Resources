
void FUN_03638610(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  byte bVar5;
  ushort uVar6;
  bool bVar7;
  undefined1 *puVar8;
  
  pcVar4 = (char *)(param_1 + 0x2600);
  uVar3 = *(long *)(param_1 + 0x110) + 4;
  *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 4;
  *(ulong *)(param_1 + 0x110) = uVar3;
  *(short *)(param_1 + 0x142) = *(short *)(param_1 + 0x142) + 1;
  if (*(ulong *)(param_1 + 0x138) <= uVar3) {
    FUN_0361e0b4(param_1);
  }
  if (*(char *)(param_1 + 0x285) != '\0') {
    if (*(char *)(param_1 + 0x286) == '\0') {
      *(undefined1 *)(param_1 + 0x280) = *(undefined1 *)(param_1 + 0x283);
      bVar5 = *(byte *)(param_1 + 0x284);
      *(undefined1 *)(param_1 + 0x284) = 0;
      *(byte *)(param_1 + 0x281) = *(byte *)(param_1 + 0x281) | bVar5;
      puVar8 = (undefined1 *)(param_1 + 0x285);
    }
    else {
      puVar8 = (undefined1 *)(param_1 + 0x286);
    }
    *puVar8 = 0;
  }
  if (*pcVar4 == '\0') {
    uVar6 = *(ushort *)(param_1 + 0x2604);
    *(undefined1 *)(param_1 + 0x2601) = 0;
    uVar2 = uVar6 + 4;
    *(short *)(param_1 + 0x2604) = (short)uVar2;
    if ((*(ushort *)(param_1 + 0x2602) & uVar2) == 0) {
      if (((uVar2 ^ uVar6) >> 0xc & 1) != 0) {
        *(int *)(param_1 + 0x1510) = *(int *)(param_1 + 0x1510) + 1;
      }
      if ((*(byte *)(param_1 + 0x2608) >> 2 & 1) != 0) {
        iVar1 = *(byte *)(param_1 + 0x2606) + 1;
        *(char *)(param_1 + 0x2606) = (char)iVar1;
        *pcVar4 = (char)((uint)iVar1 >> 8);
      }
    }
    goto LAB_0363877c;
  }
  if (*(int *)(param_1 + 0x10cc) == 1) {
    *(byte *)(param_1 + 0x284) = *(byte *)(param_1 + 0x284) | 4;
    *(undefined1 *)(param_1 + 0x285) = 1;
  }
  else {
    *(byte *)(param_1 + 0x281) = *(byte *)(param_1 + 0x281) | 4;
  }
  *(undefined1 *)(param_1 + 0x2606) = *(undefined1 *)(param_1 + 0x2607);
  uVar6 = *(ushort *)(param_1 + 0x2604);
  uVar2 = uVar6 + 4;
  *(short *)(param_1 + 0x2604) = (short)uVar2;
  if ((*(ushort *)(param_1 + 0x2602) & uVar2) == 0) {
    if (((uVar2 ^ uVar6) >> 0xc & 1) != 0) {
      *(int *)(param_1 + 0x1510) = *(int *)(param_1 + 0x1510) + 1;
    }
    if ((*(byte *)(param_1 + 0x2608) >> 2 & 1) == 0) goto LAB_0363876c;
    bVar7 = *(char *)(param_1 + 0x2607) == '\0';
  }
  else {
LAB_0363876c:
    bVar7 = false;
  }
  *pcVar4 = bVar7;
  *(undefined1 *)(param_1 + 0x2601) = 1;
LAB_0363877c:
  uVar2 = *(int *)(param_1 + 0x39c) + 4;
  if (*(byte *)(param_1 + 0x1c6) < 0xa2) {
    if (uVar2 < *(uint *)(param_1 + 0x3a0)) {
      *(uint *)(param_1 + 0x39c) = uVar2;
    }
    else {
      FUN_035d5870(param_1 + 0x2c0,uVar2,0);
    }
    FUN_035b19e4(param_1 + 0x1c0);
  }
  else if (uVar2 < *(uint *)(param_1 + 0x3a0)) {
    *(uint *)(param_1 + 0x39c) = uVar2;
  }
  else {
    FUN_035c8f50(param_1 + 0x2c0,uVar2,0);
  }
  uVar2 = *(int *)(param_1 + 0x1504) + 4;
  *(uint *)(param_1 + 0x1504) = uVar2;
  if (*(char *)(param_1 + 0x15fa) < '\0') {
    *(int *)(param_1 + 0x150c) = *(int *)(param_1 + 0x150c) + 4;
  }
  if (7 < uVar2) {
    FUN_036119a8();
  }
  if (*(ulong *)(param_1 + 0x108) < *(ulong *)(param_1 + 0x2670)) {
    return;
  }
  FUN_03606f24(param_1 + 0x2640);
  return;
}

