
void FUN_0010c010(long *param_1,char param_2,long param_3)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  if (*(byte *)(param_1 + 0xb) - 1 < 2) {
LAB_0010c028:
    lVar3 = *(long *)(param_3 + 0x10);
    if ((lVar3 != 0) && (1 < *(byte *)(param_3 + 0x68) - 1)) {
      if (*(byte *)(param_3 + 0x68) == 3) {
        uVar4 = *(uint *)(lVar3 + 0x70);
      }
      else {
        uVar4 = (*(uint *)(lVar3 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar3 + 8) & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      }
      if ((int)uVar4 < 0x10000) {
        if (uVar4 < 7) goto LAB_0010c120;
        if (uVar4 == 0x80020000) goto LAB_0010c178;
        if (uVar4 == 0x80030000) goto LAB_0010c0b0;
      }
      else {
        uVar2 = 0x1000;
        if ((int)uVar4 < 0x50000) {
          if (uVar4 - 0x20002 < 2) goto LAB_0010c154;
          if ((uVar4 == 0x10000) || (uVar4 == 0x40000)) goto LAB_0010c17c;
        }
        else if ((uVar4 - 0x50000 < 2) || ((uVar4 + 0xbffb0000 < 2 || (uVar4 == 0x40000006))))
        goto LAB_0010c17c;
      }
    }
    uVar2 = 0x5000;
  }
  else {
    if (*(byte *)(param_1 + 0xb) == 3) {
      uVar4 = *(uint *)(lVar3 + 0x70);
    }
    else {
      uVar4 = (*(uint *)(lVar3 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar3 + 8) & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    }
    uVar2 = 0x1000;
    if ((int)uVar4 < 0x20002) {
      if (uVar4 == 0x80020000) {
LAB_0010c178:
        uVar2 = 0x3000;
        goto LAB_0010c17c;
      }
      if (uVar4 == 0x80030000) {
LAB_0010c0b0:
        uVar2 = 0x4000;
        goto LAB_0010c17c;
      }
LAB_0010c120:
      uVar2 = 0x1000;
      if (uVar4 != 3) goto LAB_0010c17c;
    }
    else {
      if (uVar4 - 0xe0000 < 2) goto LAB_0010c028;
      if (1 < uVar4 - 0x20002) goto LAB_0010c17c;
    }
LAB_0010c154:
    uVar2 = 0x2000;
  }
LAB_0010c17c:
  uVar1 = uVar2 | 0x50;
  if (param_2 != '\x01') {
    uVar1 = uVar2;
  }
  *(ushort *)(param_3 + 0x80) = uVar1;
  return;
}

