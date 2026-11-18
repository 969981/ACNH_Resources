
undefined8 FUN_0340d6c0(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  
  lVar2 = DAT_05694df8;
  if (DAT_05694df8 == 0) {
LAB_0340d734:
    uVar4 = 0;
  }
  else {
    lVar3 = *(long *)(DAT_05694df8 + 8);
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = *(int *)(lVar3 + 0x1b0);
    if (iVar1 != 2 && iVar1 != 4) {
      iVar6 = *(int *)(lVar3 + 0x324);
      if (iVar1 == 3 && iVar6 == 0xf) {
        uVar5 = FUN_02e29f0c();
        if ((uVar5 & 1) == 0) goto LAB_0340d6f4;
        iVar6 = *(int *)(*(long *)(lVar2 + 8) + 0x324);
      }
      if (((iVar1 != 3) || (iVar6 != 0x20)) || (uVar5 = FUN_02e29f0c(), (uVar5 & 1) != 0))
      goto LAB_0340d734;
    }
LAB_0340d6f4:
    uVar4 = 1;
  }
  return uVar4;
}

