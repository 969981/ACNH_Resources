
undefined8 FUN_01fe00e0(long param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 8);
  (**(code **)(*(long *)(lVar6 + 0x3e0) + 0x18))(lVar6 + 0x3e0);
  (**(code **)(*(long *)(lVar6 + 0x3e0) + 0x18))(lVar6 + 0x3e0);
  if (*(undefined1 **)(lVar6 + 1000) == &DAT_040a033e) {
LAB_01fe0174:
    if (((DAT_05abbc58 != 0) && (*(short *)(param_1 + 0x12184) != -1)) &&
       (*(int *)(DAT_05abbc58 + 0xe0) != 0)) {
      lVar6 = 0;
      lVar5 = (long)*(int *)(DAT_05abbc58 + 0xe0) << 3;
      do {
        if (*(short *)(*(long *)(*(long *)(DAT_05abbc58 + 0xe8) + lVar6 * 8) + 0x38) ==
            *(short *)(param_1 + 0x12184)) {
          if ((*(ushort *)(*(long *)(*(long *)(DAT_05abbc58 + 0xe8) + lVar6 * 8) + 0x114) >> 5 & 1)
              == 0) {
            return 0;
          }
          uVar3 = FUN_01fc27f4(param_1,param_2 & 1);
          return uVar3;
        }
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
  }
  else {
    uVar4 = 0;
    bVar2 = true;
    do {
      cVar1 = (*(undefined1 **)(lVar6 + 1000))[uVar4];
      if (cVar1 != (&DAT_040a033e)[uVar4]) {
        return 0;
      }
      if (cVar1 == '\0') {
        if (!bVar2) {
          return 0;
        }
        goto LAB_01fe0174;
      }
      bVar2 = uVar4 < 0x80000;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x80001);
  }
  return 0;
}

