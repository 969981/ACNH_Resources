
undefined4 FUN_00129c60(undefined8 param_1,long param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (param_4 < 0x29) {
    return 0x94a7;
  }
  uVar1 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
  if ((uVar1 >> 0x10 | uVar1 << 0x10) != 0x4e4a4144) {
    return 0x90a7;
  }
  uVar1 = (param_3[1] & 0xff00ff00) >> 8 | (param_3[1] & 0xff00ff) << 8;
  if ((uVar1 >> 0x10 | uVar1 << 0x10) != param_4) {
    return 0xbaa7;
  }
  uVar1 = (param_3[3] & 0xff00ff00) >> 8 | (param_3[3] & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  if (*(char *)((long)param_3 + 0x27) < '\0') {
    uVar2 = 0xffff90a7;
    if (((ulong)(byte)param_3[8] << 0x18 | (ulong)*(byte *)((long)param_3 + 0x21) << 0x10 |
         (ulong)*(byte *)((long)param_3 + 0x22) << 8 | (ulong)*(byte *)((long)param_3 + 0x23)) <
        0x70) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  if (uVar1 != 0) {
    lVar3 = 0;
    do {
      if (*(char *)((long)param_3 +
                   lVar3 + ((ulong)(byte)param_3[2] << 0x18 |
                            (ulong)*(byte *)((long)param_3 + 9) << 0x10 |
                            (ulong)*(byte *)((long)param_3 + 10) << 8 |
                           (ulong)*(byte *)((long)param_3 + 0xb))) !=
          *(char *)(*(long *)(param_2 + 8) + lVar3)) {
        uVar2 = 0x90a7;
        break;
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < uVar1);
  }
  uVar1 = *(uint *)((long)param_3 + ((ulong)param_4 - 4));
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  if ((uVar1 >> 0x10 | uVar1 << 0x10) != 0x4e4a4144) {
    uVar2 = 0xffff90a7;
  }
  return uVar2;
}

