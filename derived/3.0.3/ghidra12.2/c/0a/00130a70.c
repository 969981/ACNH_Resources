
void FUN_00130a70(long param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar4 = *(ushort *)(param_1 + 0x6d63a);
  if (uVar4 == 10) {
    return;
  }
  if (uVar4 == 1) {
    uVar4 = 2;
    goto LAB_00130b48;
  }
  if (uVar4 == 0) {
    if ((*(char *)(param_1 + 0x6d63c) == '\x02') && (*(short *)(param_1 + 0x6f4a4) == 0)) {
      uVar4 = 1;
      if (*(long *)(param_1 + 0x6f4e8) == 0) {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 3;
      if ((*(byte *)(param_1 + 0x6d641) & 1) != 0) {
        uVar4 = 4;
      }
    }
    goto LAB_00130b48;
  }
  if (((ushort)*(byte *)(param_1 + 0x6d648) <= *(ushort *)(param_1 + 0x6cd66)) &&
     (*(ushort *)(param_1 + 0x6cd66) <= (ushort)*(byte *)(param_1 + 0x6d649))) {
    uVar2 = *(ushort *)(param_1 + 0x6d640);
    if (((uVar2 & 0xc00) == 0) ||
       ((ushort)*(byte *)(param_1 + 0x6d64a) <= *(ushort *)(param_1 + 0x6f4a4))) {
      if ((((uVar4 < 5) && (uVar4 != 2)) && (((uVar2 & 1) == 0 || ((uVar2 & 0xc00) != 0)))) &&
         (*(short *)(param_1 + 0x6f4a4) != 0)) {
        if (*(ushort *)(param_1 + 0x6f4a2) <= *(ushort *)(param_1 + 0x6f4b0)) {
LAB_00130bc8:
          uVar4 = 5;
          goto LAB_00130b48;
        }
        if ((uVar2 & 0xc00) != 0) {
          if (*(char *)(param_1 + 0x6d64a) != '\0') goto LAB_00130bc8;
          *(char *)(param_1 + 0x6d64b) = (char)*(short *)(param_1 + 0x6f4a4);
        }
      }
      if (((((uVar2 >> 1 & 1) == 0) && (uVar4 < 6)) && (uVar4 != 2)) &&
         (*(short *)(param_1 + 0x6f4a4) != 0)) {
        uVar4 = 6;
        goto LAB_00130b48;
      }
      if ((((uVar2 >> 5 & 1) == 0) && (uVar4 < 7)) &&
         ((uVar4 != 2 && (*(short *)(param_1 + 0x6f4a4) != 0)))) {
        uVar4 = 7;
        goto LAB_00130b48;
      }
      if (((uVar4 < 8) && (uVar4 != 2)) &&
         (((uVar2 & 0xc00) != 0 &&
          (((uVar2 & 1) == 0 && (uVar3 = *(ushort *)(param_1 + 0x6f4a4), uVar3 != 0)))))) {
        bVar1 = *(byte *)(param_1 + 0x6d64b);
        if (((bVar1 != 0) && ((ushort)*(byte *)(param_1 + 0x6d648) <= (ushort)bVar1)) &&
           ((((uVar2 >> 10 & 1) != 0 && (bVar1 < uVar3)) ||
            (((uVar2 >> 0xb & 1) != 0 && (bVar1 <= uVar3)))))) {
          uVar4 = 8;
          goto LAB_00130b48;
        }
      }
      if (((((uVar2 >> 5 & 1) == 0) && (uVar4 < 9)) && (uVar4 != 2)) &&
         (*(short *)(param_1 + 0x6f4a4) != 0)) {
        uVar4 = 9;
        goto LAB_00130b48;
      }
    }
  }
  uVar4 = 10;
LAB_00130b48:
  *(ushort *)(param_1 + 0x6d63a) = uVar4;
  return;
}

