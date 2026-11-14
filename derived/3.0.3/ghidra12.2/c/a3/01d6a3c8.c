
void FUN_01d6a3c8(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = DAT_0537d558;
  bVar2 = *(byte *)(param_1 + 0x1f8);
  lVar4 = *DAT_0537d558;
  if (bVar2 == *(byte *)(lVar4 + 0x473)) {
    *(undefined1 *)(param_1 + 0x1f9) = 0;
    lVar4 = *plVar3;
  }
  if (bVar2 != 0xff) {
    pbVar1 = (byte *)(lVar4 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
    if (7 < bVar2) {
      pbVar1 = (byte *)(lVar4 + 0x48);
    }
    if ((*pbVar1 >> 1 & 1) != 0) goto LAB_01d6a444;
  }
  lVar4 = *(long *)(lVar4 + 0x480);
  if ((*(int *)(lVar4 + 0x9c) == 2) && (*(byte *)(lVar4 + 0x99) == bVar2)) {
    *(undefined8 *)(lVar4 + 0x90) = 0;
    *(undefined4 *)(lVar4 + 0x9c) = 0;
    *(undefined2 *)(lVar4 + 0x98) = 0xff00;
  }
LAB_01d6a444:
  *(undefined1 *)(param_1 + 0x1f8) = 0xff;
  FUN_03ebb160(param_1 + 0xb8,0);
  return;
}

