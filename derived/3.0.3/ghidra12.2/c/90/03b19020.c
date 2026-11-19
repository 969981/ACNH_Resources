
byte FUN_03b19020(long param_1,ulong param_2)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  float fVar4;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    lVar3 = *(long *)(param_1 + 0x60);
    if (lVar3 != 0) {
      if (*(float *)(lVar3 + 0x20) != 0.0) goto LAB_03b1908c;
      goto LAB_03b19074;
    }
    if ((param_2 & 1) != 0) goto LAB_03b19098;
  }
  else {
    fVar4 = *(float *)(*(long *)(param_1 + 0x68) + 0x20);
    uVar2 = FUN_0035d97c();
    if (fVar4 != (float)uVar2) {
LAB_03b1908c:
      bVar1 = 0;
      goto LAB_03b190d4;
    }
    lVar3 = *(long *)(param_1 + 0x68);
LAB_03b19074:
    bVar1 = *(char *)(lVar3 + 0x24) == '\0';
    if ((*(char *)(lVar3 + 0x24) != '\0') || ((param_2 & 1) == 0)) goto LAB_03b190d4;
LAB_03b19098:
    lVar3 = *(long *)(param_1 + 0x50);
    if (lVar3 != param_1 + 0x48) {
      do {
        bVar1 = FUN_03b19020(*(undefined8 *)(lVar3 + 0x10),1);
        if ((bVar1 & 1) == 0) break;
        lVar3 = *(long *)(lVar3 + 8);
      } while (lVar3 != param_1 + 0x48);
      goto LAB_03b190d4;
    }
  }
  bVar1 = 1;
LAB_03b190d4:
  return bVar1 & 1;
}

