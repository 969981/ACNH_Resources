
bool FUN_00a77a10(byte *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  
  lVar3 = DAT_04da4ab8;
  uVar4 = FUN_00a76844(DAT_04da4ab8,0x13);
  if (uVar4 != 0xffffffff) {
    bVar5 = *param_1;
    lVar1 = lVar3 + (ulong)uVar4 * 0x20;
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    iVar2 = *(int *)(lVar3 + 0x414);
    *(byte *)(lVar1 + 0x10) = bVar5;
    *(undefined8 *)(lVar1 + 0x18) = param_2;
    *(undefined8 *)(lVar1 + 0x20) = 3;
    *(undefined4 *)(lVar1 + 0x2c) = 0;
    *(undefined1 *)(lVar1 + 0x28) = 2;
    if (*(int *)(lVar3 + 0x410) < iVar2) {
      *(byte **)(*(long *)(lVar3 + 0x418) + (long)*(int *)(lVar3 + 0x410) * 8) =
           (byte *)(lVar1 + 0x10);
      *(int *)(lVar3 + 0x410) = *(int *)(lVar3 + 0x410) + 1;
    }
  }
  return uVar4 != 0xffffffff;
}

