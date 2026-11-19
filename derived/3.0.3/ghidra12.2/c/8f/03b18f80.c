
byte FUN_03b18f80(long param_1,ulong param_2)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  float fVar4;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    if ((param_2 & 1) != 0) goto LAB_03b18fc8;
  }
  else {
    fVar4 = *(float *)(*(long *)(param_1 + 0x60) + 0x20);
    uVar2 = FUN_0035d97c();
    bVar1 = fVar4 == (float)uVar2;
    if ((!(bool)bVar1) || ((param_2 & 1) == 0)) goto LAB_03b19004;
LAB_03b18fc8:
    lVar3 = *(long *)(param_1 + 0x50);
    if (lVar3 != param_1 + 0x48) {
      do {
        bVar1 = FUN_03b18f80(*(undefined8 *)(lVar3 + 0x10),1);
        if ((bVar1 & 1) == 0) break;
        lVar3 = *(long *)(lVar3 + 8);
      } while (lVar3 != param_1 + 0x48);
      goto LAB_03b19004;
    }
  }
  bVar1 = 1;
LAB_03b19004:
  return bVar1 & 1;
}

