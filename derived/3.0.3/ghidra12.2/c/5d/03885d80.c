
undefined1  [16] FUN_03885d80(long param_1,ulong *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar8._0_8_ = *param_2;
  lVar2 = *(long *)(param_1 + 0xf8);
  iVar1 = *(int *)(lVar2 + 0x28);
  plVar3 = *(long **)(lVar2 + 0x30);
  lVar4 = (long)iVar1 << 3;
  if (iVar1 != 0) {
    lVar5 = lVar4;
    plVar6 = plVar3;
    do {
      lVar7 = *plVar6;
      if (((*(ulong *)(lVar7 + 0x10) == auVar8._0_8_) && (*(char *)(lVar7 + 0x18) == '\0')) &&
         (*(char *)(lVar7 + 0x19) == '\0')) goto LAB_03885e00;
      plVar6 = plVar6 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if (((*(ulong *)(lVar2 + 0x88) == auVar8._0_8_) && (*(char *)(lVar2 + 0x90) == '\0')) &&
     (*(char *)(lVar2 + 0x91) == '\0')) {
    lVar7 = lVar2 + 0x78;
LAB_03885e00:
    if (*(int *)(lVar7 + 8) != 3) {
      auVar8._8_8_ = 0;
      return auVar8;
    }
  }
  if (iVar1 != 0) {
    do {
      lVar5 = *plVar3;
      if (((*(ulong *)(lVar5 + 0x10) == auVar8._0_8_) && (*(char *)(lVar5 + 0x18) == '\0')) &&
         (*(char *)(lVar5 + 0x19) == '\x01')) goto LAB_03885e70;
      plVar3 = plVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if (((*(ulong *)(lVar2 + 0x88) == auVar8._0_8_) && (*(char *)(lVar2 + 0x90) == '\0')) &&
     (*(char *)(lVar2 + 0x91) == '\x01')) {
    lVar5 = lVar2 + 0x78;
LAB_03885e70:
    if (*(int *)(lVar5 + 8) != 3) {
      auVar9._8_8_ = 0x100;
      auVar9._0_8_ = auVar8._0_8_;
      return auVar9;
    }
  }
  lVar4 = *(long *)(DAT_05ae6a60 + 0x30);
  if (*(char *)(lVar4 + 0x80) == '\0') {
    *(undefined1 *)(lVar4 + 0x80) = 1;
    *(undefined8 *)(lVar4 + 0x84) = 9;
    return ZEXT816(0);
  }
  return ZEXT816(0);
}

