
void FUN_036081dc(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (((*(byte *)(param_1 + 9) ^ 0xff) & 0x81) != 0) {
    lVar3 = -1;
    goto LAB_0360833c;
  }
  lVar7 = *(long *)(param_1 + -0x30);
  uVar4 = *(long *)(param_1 + 0x10) - lVar7;
  lVar3 = *(long *)(param_1 + -0x2538);
  uVar6 = lVar3 - *(long *)(param_1 + 0x10);
  if ((((*(byte *)(param_1 + 9) >> 1 & 1) == 0) || (*(byte *)(param_1 + -0x256e) < 3)) ||
     ((*(byte *)(param_1 + -0x177d) >> 2 & 1) != 0)) {
    lVar5 = uVar6 + (uVar4 & 0x7f);
    if ((uVar4 & 0x80) != 0) {
      lVar5 = lVar5 + 0x80;
    }
    uVar1 = *(int *)(param_1 + 0x18) + (int)((ulong)lVar5 >> 8);
    if (uVar1 < 3) {
      lVar5 = lVar7;
      if (uVar1 == 2) goto LAB_036082a0;
    }
    else {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
      lVar3 = *(long *)(param_1 + -0x2538);
      lVar5 = *(long *)(param_1 + -0x30);
    }
    lVar2 = (lVar3 - lVar5 & 0xffffffffffffff80U) + lVar5;
    if ((lVar3 - lVar5 & 0x80U) != 0) {
      lVar2 = lVar2 + -0x80;
    }
    if (lVar2 <= lVar7) {
      lVar2 = lVar7;
    }
    lVar3 = lVar2 + (ulong)uVar1 * -0x100 + 0x200;
  }
  else {
    if ((uVar4 & 4) != 0) {
      uVar6 = uVar6 + 4;
    }
    uVar1 = *(int *)(param_1 + 0x1c) + (int)(uVar6 >> 3);
    if (uVar1 < 3) {
      lVar5 = lVar7;
      if (uVar1 == 2) {
LAB_036082a0:
        lVar3 = lVar3 + 4;
        goto LAB_0360833c;
      }
    }
    else {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
      lVar3 = *(long *)(param_1 + -0x2538);
      lVar5 = *(long *)(param_1 + -0x30);
    }
    lVar2 = (lVar3 - lVar5 & 0xfffffffffffffffcU) + lVar5;
    if ((lVar3 - lVar5 & 4U) != 0) {
      lVar2 = lVar2 + -4;
    }
    if (lVar2 <= lVar7) {
      lVar2 = lVar7;
    }
    lVar3 = lVar2 + (ulong)uVar1 * -8 + 0x10;
  }
LAB_0360833c:
  *(long *)(param_1 + 0x30) = lVar3;
  return;
}

