
undefined8 FUN_011e8990(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  
  iVar4 = *(int *)(param_1 + 0x24f78);
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      lVar1 = param_1 + lVar5;
      if (((((*(ushort *)(lVar1 + 0x2e0) >> 3 & 1) != 0) && (*(char *)(lVar1 + 0x2e6) < '\0')) &&
          (*(int *)(param_2 + 8) == *(int *)(lVar1 + 0x290))) &&
         (*(int *)(param_2 + 0xc) == *(int *)(lVar1 + 0x294))) {
        iVar4 = *(int *)(lVar1 + 0x2d8);
        lVar5 = lVar1 + 0x278;
        uVar3 = param_1;
        if (iVar4 == 0) {
          if ((*(ushort *)(lVar1 + 0x2e0) >> 5 & 1) == 0) {
            uVar2 = FUN_011e8aa0(param_1,param_2);
            return uVar2;
          }
          uVar3 = FUN_0125772c(lVar5);
          if ((uVar3 & 1) != 0) {
            uVar3 = FUN_011de4ec(param_1,lVar5);
          }
          iVar4 = *(int *)(lVar1 + 0x2d8);
        }
        if (iVar4 - 1U < 2) {
          *(ushort *)(lVar1 + 0x2e0) = *(ushort *)(lVar1 + 0x2e0) | 0x10;
          *(undefined4 *)(lVar1 + 0x2dc) = *(undefined4 *)(param_2 + 0x24);
          *(undefined4 *)(lVar1 + 0x29c) = *(undefined4 *)(param_2 + 0x20);
          *(undefined1 *)(lVar1 + 0x2e7) = *(undefined1 *)(param_2 + 0x2d);
          FUN_011e7000(uVar3,lVar5);
          return 1;
        }
        return 0;
      }
      iVar4 = iVar4 + -1;
      lVar5 = lVar5 + 0x78;
    } while (iVar4 != 0);
  }
  return 0;
}

