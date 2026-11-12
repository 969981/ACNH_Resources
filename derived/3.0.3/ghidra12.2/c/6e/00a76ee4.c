
long FUN_00a76ee4(byte *param_1)

{
  long lVar1;
  byte bVar2;
  
  if (DAT_04da4ab8 != 0) {
    if (*(byte *)(DAT_04da4ab8 + 0x520) < 8) {
      bVar2 = *param_1;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (*(byte *)(DAT_04da4ab8 + 0x520) == bVar2) {
        lVar1 = 0;
        goto LAB_00a77078;
      }
    }
    if (*(byte *)(DAT_04da4ab8 + 0x538) < 8) {
      bVar2 = *param_1;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (*(byte *)(DAT_04da4ab8 + 0x538) == bVar2) {
        lVar1 = 1;
        goto LAB_00a77078;
      }
    }
    if (*(byte *)(DAT_04da4ab8 + 0x550) < 8) {
      bVar2 = *param_1;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (*(byte *)(DAT_04da4ab8 + 0x550) == bVar2) {
        lVar1 = 2;
        goto LAB_00a77078;
      }
    }
    if (*(byte *)(DAT_04da4ab8 + 0x568) < 8) {
      bVar2 = *param_1;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (*(byte *)(DAT_04da4ab8 + 0x568) == bVar2) {
        lVar1 = 3;
        goto LAB_00a77078;
      }
    }
    if (*(byte *)(DAT_04da4ab8 + 0x580) < 8) {
      bVar2 = *param_1;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (*(byte *)(DAT_04da4ab8 + 0x580) == bVar2) {
        lVar1 = 4;
        goto LAB_00a77078;
      }
    }
    if (*(byte *)(DAT_04da4ab8 + 0x598) < 8) {
      bVar2 = *param_1;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (*(byte *)(DAT_04da4ab8 + 0x598) == bVar2) {
        lVar1 = 5;
        goto LAB_00a77078;
      }
    }
    if (*(byte *)(DAT_04da4ab8 + 0x5b0) < 8) {
      bVar2 = *param_1;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (*(byte *)(DAT_04da4ab8 + 0x5b0) == bVar2) {
        lVar1 = 6;
        goto LAB_00a77078;
      }
    }
    if (*(byte *)(DAT_04da4ab8 + 0x5c8) < 8) {
      bVar2 = *param_1;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (*(byte *)(DAT_04da4ab8 + 0x5c8) == bVar2) {
        lVar1 = 7;
        goto LAB_00a77078;
      }
    }
    if (*(byte *)(DAT_04da4ab8 + 0x5e0) < 8) {
      bVar2 = *param_1;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (*(byte *)(DAT_04da4ab8 + 0x5e0) == bVar2) {
        lVar1 = 8;
LAB_00a77078:
        return DAT_04da4ab8 + 0x520 + lVar1 * 0x18;
      }
    }
  }
  return 0;
}

