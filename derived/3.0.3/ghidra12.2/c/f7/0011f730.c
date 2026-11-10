
undefined8 FUN_0011f730(long param_1,ushort param_2,char param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    bVar7 = param_3 != '\0';
    lVar1 = 0x1c;
    if (bVar7) {
      lVar1 = 0x1e;
    }
    lVar2 = 0x1d;
    if (bVar7) {
      lVar2 = 0x1f;
    }
    lVar3 = 0x20;
    if (bVar7) {
      lVar3 = 0x24;
    }
    lVar4 = 0x21;
    if (bVar7) {
      lVar4 = 0x25;
    }
    lVar5 = 0x22;
    if (bVar7) {
      lVar5 = 0x26;
    }
    lVar6 = 0x23;
    if (bVar7) {
      lVar6 = 0x27;
    }
    *param_4 = param_1 + ((ulong)*(byte *)(param_1 + lVar3) << 0x18 |
                          (ulong)*(byte *)(param_1 + lVar4) << 0x10 |
                          (ulong)*(byte *)(param_1 + lVar5) << 8 | (ulong)*(byte *)(param_1 + lVar6)
                         ) +
               (long)(int)((CONCAT11(*(undefined1 *)(param_1 + lVar1),
                                     *(undefined1 *)(param_1 + lVar2)) + 7 >> 3) * (param_2 - 1));
  }
  return 0;
}

