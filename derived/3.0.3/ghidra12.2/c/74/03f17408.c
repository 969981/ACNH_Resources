
byte FUN_03f17408(long *param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  bVar1 = 0;
  if ((lVar2 != 0) &&
     (lVar3 = param_1[1], bVar1 = FUN_03f169a0(lVar2,(ulong)*(byte *)(lVar2 + 4) + lVar2,param_2),
     lVar3 != 0)) {
    if ((bVar1 & 1) == 0) {
      bVar1 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
    }
    else {
      if ((char)param_1[2] == '\0') {
        lVar2 = param_1[4];
        if (*(char *)(lVar2 + 0x15) == '\0') {
          lVar2 = *(long *)(lVar2 + 0x18);
        }
        else {
          lVar2 = (long)(DAT_05ae7888 *
                         (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4)) * 5) /
                  1000 + *(long *)(lVar2 + 0x18);
        }
        param_1[3] = lVar2;
      }
      *(undefined1 *)(param_1 + 2) = 1;
      lVar2 = param_1[4];
      if (*(char *)(lVar2 + 0x15) == '\0') {
        lVar2 = *(long *)(lVar2 + 0x18);
      }
      else {
        lVar2 = (long)(DAT_05ae7888 *
                       (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4)) * 5) /
                1000 + *(long *)(lVar2 + 0x18);
      }
      bVar1 = param_1[1] < lVar2 - param_1[3];
    }
  }
  return bVar1 & 1;
}

