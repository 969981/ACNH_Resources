
void FUN_0363885c(long param_1)

{
  uint uVar1;
  int iVar2;
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
    uVar1 = uVar6 + 4;
    *(short *)(param_1 + 0x2604) = (short)uVar1;
    if ((*(ushort *)(param_1 + 0x2602) & uVar1) == 0) {
      if (((uVar1 ^ uVar6) >> 0xc & 1) != 0) {
        *(int *)(param_1 + 0x1510) = *(int *)(param_1 + 0x1510) + 1;
      }
      if ((*(byte *)(param_1 + 0x2608) >> 2 & 1) != 0) {
        iVar2 = *(byte *)(param_1 + 0x2606) + 1;
        *(char *)(param_1 + 0x2606) = (char)iVar2;
        *pcVar4 = (char)((uint)iVar2 >> 8);
      }
    }
    goto LAB_036389a4;
  }
  *(byte *)(param_1 + 0x281) = *(byte *)(param_1 + 0x281) | 4;
  *(undefined1 *)(param_1 + 0x2606) = *(undefined1 *)(param_1 + 0x2607);
  uVar6 = *(ushort *)(param_1 + 0x2604);
  uVar1 = uVar6 + 4;
  *(short *)(param_1 + 0x2604) = (short)uVar1;
  if ((*(ushort *)(param_1 + 0x2602) & uVar1) == 0) {
    if (((uVar1 ^ uVar6) >> 0xc & 1) != 0) {
      *(int *)(param_1 + 0x1510) = *(int *)(param_1 + 0x1510) + 1;
    }
    if ((*(byte *)(param_1 + 0x2608) >> 2 & 1) == 0) goto LAB_0363893c;
    bVar7 = *(char *)(param_1 + 0x2607) == '\0';
  }
  else {
LAB_0363893c:
    bVar7 = false;
  }
  *pcVar4 = bVar7;
  *(undefined1 *)(param_1 + 0x2601) = 1;
LAB_036389a4:
  uVar1 = *(int *)(param_1 + 0x39c) + 4;
  if (*(byte *)(param_1 + 0x1c6) < 0xa2) {
    if (uVar1 < *(uint *)(param_1 + 0x3a0)) {
      *(uint *)(param_1 + 0x39c) = uVar1;
    }
    else {
      FUN_035d86a0(param_1 + 0x2c0,uVar1,0);
    }
    FUN_035b1c9c(param_1 + 0x1c0);
  }
  else if (uVar1 < *(uint *)(param_1 + 0x3a0)) {
    *(uint *)(param_1 + 0x39c) = uVar1;
  }
  else {
    FUN_035cc180(param_1 + 0x2c0,uVar1,0);
  }
  uVar1 = *(int *)(param_1 + 0x1504) + 4;
  *(uint *)(param_1 + 0x1504) = uVar1;
  if (*(char *)(param_1 + 0x15fa) < '\0') {
    *(int *)(param_1 + 0x150c) = *(int *)(param_1 + 0x150c) + 4;
  }
  if (7 < uVar1) {
    FUN_036119a8();
  }
  if (*(ulong *)(param_1 + 0x108) < *(ulong *)(param_1 + 0x2670)) {
    return;
  }
  FUN_036070e4(param_1 + 0x2640);
  return;
}

