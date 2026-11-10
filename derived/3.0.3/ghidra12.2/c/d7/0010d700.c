
undefined8 FUN_0010d700(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  if (param_1 == 0) {
    uVar2 = 0xae3a;
  }
  else {
    uVar4 = 0;
    uVar2 = 0;
    plVar5 = (long *)(param_1 + 0x6f510);
    do {
      lVar3 = *plVar5;
      if ((lVar3 != 0) && (plVar5[1] != 0)) {
        if (1 < *(byte *)(plVar5 + 9) - 1) {
          if (*(byte *)(plVar5 + 9) == 3) {
            uVar1 = *(uint *)(lVar3 + 0x70);
          }
          else {
            uVar1 = (*(uint *)(lVar3 + 8) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar3 + 8) & 0xff00ff) << 8;
            uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
          }
          if ((int)uVar1 < 0x40000006) {
            if ((uVar1 - 0x50000 < 2) || (uVar1 == 6)) {
              uVar2 = FUN_0013b8f0(param_1);
            }
          }
          else if ((uVar1 + 0xbffb0000 < 2) || (uVar1 == 0x40000006)) {
            uVar2 = FUN_00129be0(param_1);
            if ((short)uVar2 < 0) {
              return uVar2;
            }
            goto LAB_0010d7d0;
          }
        }
        if ((short)uVar2 < 0) {
          return uVar2;
        }
      }
LAB_0010d7d0:
      uVar4 = uVar4 + 1;
      plVar5 = plVar5 + 10;
    } while (uVar4 < 0x14);
  }
  return uVar2;
}

