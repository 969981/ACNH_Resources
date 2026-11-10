
undefined8 FUN_00171ebc(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x150);
  cVar1 = *(char *)(lVar4 + 0xc);
  if (cVar1 == '\0') {
    if (*(char *)(lVar4 + 0x71) == '\0') {
      *(undefined1 *)(lVar4 + 0x72) = 0;
      lVar4 = FUN_001726f0(param_1,*(undefined4 *)(lVar4 + 8));
      if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0xe4) >> 1 & 1) != 0)) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        if (*(int *)(lVar4 + 0xdc) != 5) {
          lVar5 = lVar4;
        }
      }
      iVar2 = FUN_00171f98(param_1,lVar5);
      if (iVar2 == 0) {
        *(undefined8 *)(param_1 + 0x150) = 0;
      }
      else if ((lVar5 != 0) && (uVar3 = FUN_00172a6c(lVar5), (int)uVar3 < -900)) {
        return uVar3;
      }
    }
  }
  else if ((cVar1 == '\x05' || cVar1 == '\x01') &&
          (iVar2 = FUN_0016b77c(param_1 + 0x158), iVar2 != 0)) {
    *(undefined8 *)(param_1 + 0x160) = **(undefined8 **)(param_1 + 0x160);
    return 0;
  }
  FUN_0016c3ec((undefined8 *)(param_1 + 0x150),param_1 + 0x890);
  return 0;
}

