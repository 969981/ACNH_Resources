
void FUN_03639198(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  byte bVar5;
  ushort uVar6;
  bool bVar7;
  uint uVar8;
  undefined1 *puVar9;
  
  pcVar4 = (char *)(param_1 + 0x2600);
  uVar2 = *(long *)(param_1 + 0x110) + 4;
  *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 4;
  *(ulong *)(param_1 + 0x110) = uVar2;
  if (*(ulong *)(param_1 + 0x138) <= uVar2) {
    FUN_0361e0b4(param_1);
  }
  if (*(char *)(param_1 + 0x285) != '\0') {
    if (*(char *)(param_1 + 0x286) == '\0') {
      *(undefined1 *)(param_1 + 0x280) = *(undefined1 *)(param_1 + 0x283);
      bVar5 = *(byte *)(param_1 + 0x284);
      *(undefined1 *)(param_1 + 0x284) = 0;
      *(byte *)(param_1 + 0x281) = *(byte *)(param_1 + 0x281) | bVar5;
      puVar9 = (undefined1 *)(param_1 + 0x285);
    }
    else {
      puVar9 = (undefined1 *)(param_1 + 0x286);
    }
    *puVar9 = 0;
  }
  if (*pcVar4 == '\0') {
    uVar6 = *(ushort *)(param_1 + 0x2604);
    *(undefined1 *)(param_1 + 0x2601) = 0;
    uVar8 = uVar6 + 4;
    *(short *)(param_1 + 0x2604) = (short)uVar8;
    if ((*(ushort *)(param_1 + 0x2602) & uVar8) == 0) {
      if (((uVar8 ^ uVar6) >> 0xc & 1) != 0) {
        *(int *)(param_1 + 0x1510) = *(int *)(param_1 + 0x1510) + 1;
      }
      if ((*(byte *)(param_1 + 0x2608) >> 2 & 1) != 0) {
        iVar1 = *(byte *)(param_1 + 0x2606) + 1;
        *(char *)(param_1 + 0x2606) = (char)iVar1;
        *pcVar4 = (char)((uint)iVar1 >> 8);
      }
    }
  }
  else {
    *(byte *)(param_1 + 0x281) = *(byte *)(param_1 + 0x281) | 4;
    *(undefined1 *)(param_1 + 0x2606) = *(undefined1 *)(param_1 + 0x2607);
    uVar6 = *(ushort *)(param_1 + 0x2604);
    uVar8 = uVar6 + 4;
    *(short *)(param_1 + 0x2604) = (short)uVar8;
    if ((*(ushort *)(param_1 + 0x2602) & uVar8) == 0) {
      if (((uVar8 ^ uVar6) >> 0xc & 1) != 0) {
        *(int *)(param_1 + 0x1510) = *(int *)(param_1 + 0x1510) + 1;
      }
      if ((*(byte *)(param_1 + 0x2608) >> 2 & 1) == 0) goto LAB_03639270;
      bVar7 = *(char *)(param_1 + 0x2607) == '\0';
    }
    else {
LAB_03639270:
      bVar7 = false;
    }
    *pcVar4 = bVar7;
    *(undefined1 *)(param_1 + 0x2601) = 1;
  }
  lVar3 = param_1 + 0x1c0;
  if ((*(char *)(param_1 + 0x1cc) == '\0') ||
     ((*(char *)(param_1 + 0x1cc) != '\x01' && (*(char *)(param_1 + 0x1cd) == '\0')))) {
    uVar8 = *(int *)(param_1 + 0x39c) + 4;
    if (*(byte *)(param_1 + 0x1c6) < 0xa2) {
      if (uVar8 < *(uint *)(param_1 + 0x3a0)) {
        *(uint *)(param_1 + 0x39c) = uVar8;
      }
      else {
        FUN_035d86a0(param_1 + 0x2c0,uVar8,1);
      }
      FUN_035b1c9c(lVar3);
      goto LAB_036393b0;
    }
    if (*(uint *)(param_1 + 0x3a0) <= uVar8) {
      FUN_035cc180(param_1 + 0x2c0,uVar8,1);
      goto LAB_036393b0;
    }
  }
  else {
    FUN_035b25b4(lVar3);
    uVar8 = *(int *)(param_1 + 0x39c) + 2;
    if (uVar8 < *(uint *)(param_1 + 0x3a0)) {
      *(uint *)(param_1 + 0x39c) = uVar8;
    }
    else {
      FUN_035e4460(param_1 + 0x2c0,uVar8,0);
    }
    FUN_035b25b4(lVar3);
    uVar8 = *(int *)(param_1 + 0x39c) + 2;
    if (*(uint *)(param_1 + 0x3a0) <= uVar8) {
      FUN_035e4460(param_1 + 0x2c0,uVar8,0);
      goto LAB_036393b0;
    }
  }
  *(uint *)(param_1 + 0x39c) = uVar8;
LAB_036393b0:
  uVar8 = *(int *)(param_1 + 0x1504) + 4;
  *(uint *)(param_1 + 0x1504) = uVar8;
  if (*(char *)(param_1 + 0x15fa) < '\0') {
    *(int *)(param_1 + 0x150c) = *(int *)(param_1 + 0x150c) + 4;
  }
  if (7 < uVar8) {
    FUN_036119a8();
  }
  if (*(ulong *)(param_1 + 0x108) < *(ulong *)(param_1 + 0x2670)) {
    return;
  }
  FUN_036070e4(param_1 + 0x2640);
  return;
}

