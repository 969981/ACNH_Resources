
long FUN_00a77090(byte *param_1)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  
  if (DAT_04da4ab8 != 0) {
    if (*(int *)(DAT_04da4ab8 + 0x614) != 0) {
      bVar2 = *(byte *)(DAT_04da4ab8 + 0x5f8);
      bVar3 = *param_1;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      if (bVar2 == bVar3) {
        lVar1 = 0;
        goto LAB_00a7726c;
      }
    }
    if (*(int *)(DAT_04da4ab8 + 0x63c) != 0) {
      bVar2 = *(byte *)(DAT_04da4ab8 + 0x620);
      bVar3 = *param_1;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      if (bVar2 == bVar3) {
        lVar1 = 1;
        goto LAB_00a7726c;
      }
    }
    if (*(int *)(DAT_04da4ab8 + 0x664) != 0) {
      bVar2 = *(byte *)(DAT_04da4ab8 + 0x648);
      bVar3 = *param_1;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      if (bVar2 == bVar3) {
        lVar1 = 2;
        goto LAB_00a7726c;
      }
    }
    if (*(int *)(DAT_04da4ab8 + 0x68c) != 0) {
      bVar2 = *(byte *)(DAT_04da4ab8 + 0x670);
      bVar3 = *param_1;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      if (bVar2 == bVar3) {
        lVar1 = 3;
        goto LAB_00a7726c;
      }
    }
    if (*(int *)(DAT_04da4ab8 + 0x6b4) != 0) {
      bVar2 = *(byte *)(DAT_04da4ab8 + 0x698);
      bVar3 = *param_1;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      if (bVar2 == bVar3) {
        lVar1 = 4;
        goto LAB_00a7726c;
      }
    }
    if (*(int *)(DAT_04da4ab8 + 0x6dc) != 0) {
      bVar2 = *(byte *)(DAT_04da4ab8 + 0x6c0);
      bVar3 = *param_1;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      if (bVar2 == bVar3) {
        lVar1 = 5;
        goto LAB_00a7726c;
      }
    }
    if (*(int *)(DAT_04da4ab8 + 0x704) != 0) {
      bVar2 = *(byte *)(DAT_04da4ab8 + 0x6e8);
      bVar3 = *param_1;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      if (bVar2 == bVar3) {
        lVar1 = 6;
        goto LAB_00a7726c;
      }
    }
    if (*(int *)(DAT_04da4ab8 + 0x72c) != 0) {
      bVar2 = *(byte *)(DAT_04da4ab8 + 0x710);
      bVar3 = *param_1;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      if (bVar2 == bVar3) {
        lVar1 = 7;
        goto LAB_00a7726c;
      }
    }
    if (*(int *)(DAT_04da4ab8 + 0x754) != 0) {
      bVar2 = *(byte *)(DAT_04da4ab8 + 0x738);
      bVar3 = *param_1;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      if (bVar2 == bVar3) {
        lVar1 = 8;
LAB_00a7726c:
        return DAT_04da4ab8 + lVar1 * 0x28 + 0x5f8;
      }
    }
  }
  return 0;
}

