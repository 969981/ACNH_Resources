
uint FUN_00a74b78(byte *param_1)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  
  if (DAT_04da4ab8 == 0) {
    return 0x13;
  }
  if (*(int *)(DAT_04da4ab8 + 0x614) != 0) {
    uVar1 = *(uint *)(DAT_04da4ab8 + 0x610);
    if (uVar1 < 0x11) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x131e0U) != 0) {
        return uVar1;
      }
      if (uVar1 != 0xe) goto LAB_00a74bdc;
      bVar4 = *param_1;
      if ((DAT_04da4850 >> (ulong)(bVar4 & 0x1f) & 1) != 0) {
        return 0xe;
      }
    }
    else {
LAB_00a74bdc:
      bVar4 = *param_1;
    }
    bVar3 = *(byte *)(DAT_04da4ab8 + 0x5f8);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (bVar3 == bVar4) {
      lVar2 = 0;
      goto LAB_00a74fe4;
    }
  }
  if (*(int *)(DAT_04da4ab8 + 0x63c) != 0) {
    uVar1 = *(uint *)(DAT_04da4ab8 + 0x638);
    if (uVar1 < 0x11) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x131e0U) != 0) {
        return uVar1;
      }
      if (uVar1 != 0xe) goto LAB_00a74c58;
      bVar4 = *param_1;
      if ((DAT_04da4850 >> (ulong)(bVar4 & 0x1f) & 1) != 0) {
        return 0xe;
      }
    }
    else {
LAB_00a74c58:
      bVar4 = *param_1;
    }
    bVar3 = *(byte *)(DAT_04da4ab8 + 0x620);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (bVar3 == bVar4) {
      lVar2 = 1;
      goto LAB_00a74fe4;
    }
  }
  if (*(int *)(DAT_04da4ab8 + 0x664) != 0) {
    uVar1 = *(uint *)(DAT_04da4ab8 + 0x660);
    if (uVar1 < 0x11) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x131e0U) != 0) {
        return uVar1;
      }
      if (uVar1 != 0xe) goto LAB_00a74cd4;
      bVar4 = *param_1;
      if ((DAT_04da4850 >> (ulong)(bVar4 & 0x1f) & 1) != 0) {
        return 0xe;
      }
    }
    else {
LAB_00a74cd4:
      bVar4 = *param_1;
    }
    bVar3 = *(byte *)(DAT_04da4ab8 + 0x648);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (bVar3 == bVar4) {
      lVar2 = 2;
      goto LAB_00a74fe4;
    }
  }
  if (*(int *)(DAT_04da4ab8 + 0x68c) != 0) {
    uVar1 = *(uint *)(DAT_04da4ab8 + 0x688);
    if (uVar1 < 0x11) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x131e0U) != 0) {
        return uVar1;
      }
      if (uVar1 != 0xe) goto LAB_00a74d50;
      bVar4 = *param_1;
      if ((DAT_04da4850 >> (ulong)(bVar4 & 0x1f) & 1) != 0) {
        return 0xe;
      }
    }
    else {
LAB_00a74d50:
      bVar4 = *param_1;
    }
    bVar3 = *(byte *)(DAT_04da4ab8 + 0x670);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (bVar3 == bVar4) {
      lVar2 = 3;
      goto LAB_00a74fe4;
    }
  }
  if (*(int *)(DAT_04da4ab8 + 0x6b4) != 0) {
    uVar1 = *(uint *)(DAT_04da4ab8 + 0x6b0);
    if (uVar1 < 0x11) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x131e0U) != 0) {
        return uVar1;
      }
      if (uVar1 != 0xe) goto LAB_00a74dcc;
      bVar4 = *param_1;
      if ((DAT_04da4850 >> (ulong)(bVar4 & 0x1f) & 1) != 0) {
        return 0xe;
      }
    }
    else {
LAB_00a74dcc:
      bVar4 = *param_1;
    }
    bVar3 = *(byte *)(DAT_04da4ab8 + 0x698);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (bVar3 == bVar4) {
      lVar2 = 4;
      goto LAB_00a74fe4;
    }
  }
  if (*(int *)(DAT_04da4ab8 + 0x6dc) != 0) {
    uVar1 = *(uint *)(DAT_04da4ab8 + 0x6d8);
    if (uVar1 < 0x11) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x131e0U) != 0) {
        return uVar1;
      }
      if (uVar1 != 0xe) goto LAB_00a74e48;
      bVar4 = *param_1;
      if ((DAT_04da4850 >> (ulong)(bVar4 & 0x1f) & 1) != 0) {
        return 0xe;
      }
    }
    else {
LAB_00a74e48:
      bVar4 = *param_1;
    }
    bVar3 = *(byte *)(DAT_04da4ab8 + 0x6c0);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (bVar3 == bVar4) {
      lVar2 = 5;
      goto LAB_00a74fe4;
    }
  }
  if (*(int *)(DAT_04da4ab8 + 0x704) != 0) {
    uVar1 = *(uint *)(DAT_04da4ab8 + 0x700);
    if (uVar1 < 0x11) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x131e0U) != 0) {
        return uVar1;
      }
      if (uVar1 != 0xe) goto LAB_00a74ec4;
      bVar4 = *param_1;
      if ((DAT_04da4850 >> (ulong)(bVar4 & 0x1f) & 1) != 0) {
        return 0xe;
      }
    }
    else {
LAB_00a74ec4:
      bVar4 = *param_1;
    }
    bVar3 = *(byte *)(DAT_04da4ab8 + 0x6e8);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (bVar3 == bVar4) {
      lVar2 = 6;
      goto LAB_00a74fe4;
    }
  }
  if (*(int *)(DAT_04da4ab8 + 0x72c) != 0) {
    uVar1 = *(uint *)(DAT_04da4ab8 + 0x728);
    if (uVar1 < 0x11) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x131e0U) != 0) {
        return uVar1;
      }
      if (uVar1 != 0xe) goto LAB_00a74f40;
      bVar4 = *param_1;
      if ((DAT_04da4850 >> (ulong)(bVar4 & 0x1f) & 1) != 0) {
        return 0xe;
      }
    }
    else {
LAB_00a74f40:
      bVar4 = *param_1;
    }
    bVar3 = *(byte *)(DAT_04da4ab8 + 0x710);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (bVar3 == bVar4) {
      lVar2 = 7;
      goto LAB_00a74fe4;
    }
  }
  if (*(int *)(DAT_04da4ab8 + 0x754) == 0) {
    return 0x13;
  }
  uVar1 = *(uint *)(DAT_04da4ab8 + 0x750);
  if (uVar1 < 0x11) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x131e0U) != 0) {
      return uVar1;
    }
    if (uVar1 != 0xe) goto LAB_00a74fbc;
    bVar4 = *param_1;
    if ((DAT_04da4850 >> (ulong)(bVar4 & 0x1f) & 1) != 0) {
      return 0xe;
    }
  }
  else {
LAB_00a74fbc:
    bVar4 = *param_1;
  }
  bVar3 = *(byte *)(DAT_04da4ab8 + 0x738);
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  if (bVar3 != bVar4) {
    return 0x13;
  }
  lVar2 = 8;
LAB_00a74fe4:
  return *(uint *)(DAT_04da4ab8 + lVar2 * 0x28 + 0x610);
}

