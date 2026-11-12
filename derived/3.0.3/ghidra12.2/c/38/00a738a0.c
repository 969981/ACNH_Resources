
undefined8 FUN_00a738a0(byte *param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  
  if (DAT_04da4ab8 != 0) {
    bVar4 = *param_1;
    uVar1 = 1 << (ulong)(bVar4 & 0x1f) & (uint)DAT_04da4850;
    bVar2 = 0xff;
    if (bVar4 < 8) {
      bVar2 = bVar4;
    }
    if (*(int *)(DAT_04da4ab8 + 0x614) != 0) {
      uVar3 = *(uint *)(DAT_04da4ab8 + 0x610);
      if (uVar3 < 0x11) {
        if ((1 << (ulong)(uVar3 & 0x1f) & 0x51e0U) == 0) {
          if ((1 << (ulong)(uVar3 & 0x1f) & 0x12000U) != 0) {
            return 1;
          }
        }
        else if ((uVar3 != 0xe || 7 < bVar4) || uVar1 != 0) {
          return 1;
        }
      }
      bVar5 = *(byte *)(DAT_04da4ab8 + 0x5f8);
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if ((bVar4 < 8) && (bVar5 == bVar2)) {
        return 1;
      }
    }
    if (*(int *)(DAT_04da4ab8 + 0x63c) != 0) {
      uVar3 = *(uint *)(DAT_04da4ab8 + 0x638);
      if (uVar3 < 0x11) {
        if ((1 << (ulong)(uVar3 & 0x1f) & 0x51e0U) == 0) {
          uVar3 = 1 << (ulong)(uVar3 & 0x1f) & 0x12000;
        }
        else {
          if (uVar3 != 0xe) {
            return 1;
          }
          uVar3 = uVar1;
          if (7 < bVar4) {
            return 1;
          }
        }
        if (uVar3 != 0) {
          return 1;
        }
      }
      bVar5 = *(byte *)(DAT_04da4ab8 + 0x620);
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if ((bVar4 < 8) && (bVar5 == bVar2)) {
        return 1;
      }
    }
    if (*(int *)(DAT_04da4ab8 + 0x664) != 0) {
      uVar3 = *(uint *)(DAT_04da4ab8 + 0x660);
      if (uVar3 < 0x11) {
        if ((1 << (ulong)(uVar3 & 0x1f) & 0x51e0U) == 0) {
          uVar3 = 1 << (ulong)(uVar3 & 0x1f) & 0x12000;
        }
        else {
          if (uVar3 != 0xe) {
            return 1;
          }
          uVar3 = uVar1;
          if (7 < bVar4) {
            return 1;
          }
        }
        if (uVar3 != 0) {
          return 1;
        }
      }
      bVar5 = *(byte *)(DAT_04da4ab8 + 0x648);
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if ((bVar4 < 8) && (bVar5 == bVar2)) {
        return 1;
      }
    }
    if (*(int *)(DAT_04da4ab8 + 0x68c) != 0) {
      uVar3 = *(uint *)(DAT_04da4ab8 + 0x688);
      if (uVar3 < 0x11) {
        if ((1 << (ulong)(uVar3 & 0x1f) & 0x51e0U) == 0) {
          uVar3 = 1 << (ulong)(uVar3 & 0x1f) & 0x12000;
        }
        else {
          if (uVar3 != 0xe) {
            return 1;
          }
          uVar3 = uVar1;
          if (7 < bVar4) {
            return 1;
          }
        }
        if (uVar3 != 0) {
          return 1;
        }
      }
      bVar5 = *(byte *)(DAT_04da4ab8 + 0x670);
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if ((bVar4 < 8) && (bVar5 == bVar2)) {
        return 1;
      }
    }
    if (*(int *)(DAT_04da4ab8 + 0x6b4) != 0) {
      uVar3 = *(uint *)(DAT_04da4ab8 + 0x6b0);
      if (uVar3 < 0x11) {
        if ((1 << (ulong)(uVar3 & 0x1f) & 0x51e0U) == 0) {
          uVar3 = 1 << (ulong)(uVar3 & 0x1f) & 0x12000;
        }
        else {
          if (uVar3 != 0xe) {
            return 1;
          }
          uVar3 = uVar1;
          if (7 < bVar4) {
            return 1;
          }
        }
        if (uVar3 != 0) {
          return 1;
        }
      }
      bVar5 = *(byte *)(DAT_04da4ab8 + 0x698);
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if ((bVar4 < 8) && (bVar5 == bVar2)) {
        return 1;
      }
    }
    if (*(int *)(DAT_04da4ab8 + 0x6dc) != 0) {
      uVar3 = *(uint *)(DAT_04da4ab8 + 0x6d8);
      if (uVar3 < 0x11) {
        if ((1 << (ulong)(uVar3 & 0x1f) & 0x51e0U) == 0) {
          uVar3 = 1 << (ulong)(uVar3 & 0x1f) & 0x12000;
        }
        else {
          if (uVar3 != 0xe) {
            return 1;
          }
          uVar3 = uVar1;
          if (7 < bVar4) {
            return 1;
          }
        }
        if (uVar3 != 0) {
          return 1;
        }
      }
      bVar5 = *(byte *)(DAT_04da4ab8 + 0x6c0);
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if ((bVar4 < 8) && (bVar5 == bVar2)) {
        return 1;
      }
    }
    if (*(int *)(DAT_04da4ab8 + 0x704) != 0) {
      uVar3 = *(uint *)(DAT_04da4ab8 + 0x700);
      if (uVar3 < 0x11) {
        if ((1 << (ulong)(uVar3 & 0x1f) & 0x51e0U) == 0) {
          uVar3 = 1 << (ulong)(uVar3 & 0x1f) & 0x12000;
        }
        else {
          if (uVar3 != 0xe) {
            return 1;
          }
          uVar3 = uVar1;
          if (7 < bVar4) {
            return 1;
          }
        }
        if (uVar3 != 0) {
          return 1;
        }
      }
      bVar5 = *(byte *)(DAT_04da4ab8 + 0x6e8);
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if ((bVar4 < 8) && (bVar5 == bVar2)) {
        return 1;
      }
    }
    if (*(int *)(DAT_04da4ab8 + 0x72c) != 0) {
      uVar3 = *(uint *)(DAT_04da4ab8 + 0x728);
      if (uVar3 < 0x11) {
        if ((1 << (ulong)(uVar3 & 0x1f) & 0x51e0U) == 0) {
          uVar3 = 1 << (ulong)(uVar3 & 0x1f) & 0x12000;
        }
        else {
          if (uVar3 != 0xe) {
            return 1;
          }
          uVar3 = uVar1;
          if (7 < bVar4) {
            return 1;
          }
        }
        if (uVar3 != 0) {
          return 1;
        }
      }
      bVar5 = *(byte *)(DAT_04da4ab8 + 0x710);
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if ((bVar4 < 8) && (bVar5 == bVar2)) {
        return 1;
      }
    }
    if (*(int *)(DAT_04da4ab8 + 0x754) == 0) {
      return 0;
    }
    uVar3 = *(uint *)(DAT_04da4ab8 + 0x750);
    if (uVar3 < 0x11) {
      if ((1 << (ulong)(uVar3 & 0x1f) & 0x51e0U) == 0) {
        uVar1 = 1 << (ulong)(uVar3 & 0x1f) & 0x12000;
      }
      else {
        if (uVar3 != 0xe) {
          return 1;
        }
        if (7 < bVar4) {
          return 1;
        }
      }
      if (uVar1 != 0) {
        return 1;
      }
    }
    bVar5 = *(byte *)(DAT_04da4ab8 + 0x738);
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if ((bVar4 < 8) && (bVar5 == bVar2)) {
      return 1;
    }
  }
  return 0;
}

