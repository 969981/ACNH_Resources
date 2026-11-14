
uint FUN_01de49d0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 0x10);
  uVar4 = FUN_006d5fb0(*(undefined8 *)(param_1 + 8));
  if ((uVar4 & 1) != 0) {
    cVar3 = *(char *)(*(long *)(param_1 + 8) + 0x4c);
    *(bool *)(lVar2 + 0x39) = cVar3 == '\0';
    if (cVar3 == '\0') {
      lVar5 = *(long *)(lVar2 + 8);
      if (*(char *)(lVar5 + 0x18) != '\0') {
        uVar1 = *(undefined4 *)(lVar5 + 0x10);
        *(undefined1 *)(lVar5 + 0x18) = 0;
        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(lVar5 + 0x14);
        *(undefined4 *)(lVar5 + 0x14) = uVar1;
      }
      *(undefined1 *)(lVar2 + 0x38) = 0;
    }
    *(undefined1 *)(lVar2 + 0x10) = 0;
  }
  return uVar4 & 1;
}

