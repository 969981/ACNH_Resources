
void FUN_01f1dc64(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  FUN_01f3dc10();
  lVar2 = FUN_021c9770(*(undefined4 *)(*(long *)(param_1 + 8) + 0x50c),1);
  if (lVar2 != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    *(undefined4 *)(lVar2 + 0x218) = *(undefined4 *)(lVar3 + 0x278);
    *(undefined4 *)(lVar2 + 0x21c) = *(undefined4 *)(lVar3 + 0x27c);
    *(undefined4 *)(lVar2 + 0x220) = *(undefined4 *)(lVar3 + 0x280);
    uVar1 = *(undefined4 *)(lVar3 + 0x2b4);
    if (*(char *)(lVar2 + 0x228) == '\0') {
      *(undefined1 *)(lVar2 + 0x228) = 1;
    }
    *(undefined4 *)(lVar2 + 0x224) = uVar1;
  }
  return;
}

