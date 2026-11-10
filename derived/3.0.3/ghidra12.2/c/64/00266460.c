
void FUN_00266460(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = FUN_002ba790(DAT_04c61168);
  lVar1 = *(long *)(lVar1 + 0x98);
  if (lVar1 != 0) {
    lVar2 = FUN_002ba790(DAT_04c61168);
    for (lVar4 = *(long *)(lVar2 + 0x20); lVar4 != lVar2 + 0x18; lVar4 = *(long *)(lVar4 + 8)) {
      if (*(long *)(lVar4 + 0x10) != lVar1) {
        uVar3 = FUN_00269a70(DAT_04c603c8,*(undefined1 *)(*(long *)(lVar4 + 0x10) + 0x38));
        if ((uVar3 & 1) != 0) {
          FUN_00269b00(DAT_04c603c8,*(undefined1 *)(*(long *)(lVar4 + 0x10) + 0x38));
        }
        lVar5 = *(long *)(lVar4 + 0x10);
        FUN_002609c8(*(undefined8 *)(lVar5 + 0x98));
        FUN_00278538(*(undefined8 *)(lVar5 + 0xa8));
      }
    }
  }
  return;
}

