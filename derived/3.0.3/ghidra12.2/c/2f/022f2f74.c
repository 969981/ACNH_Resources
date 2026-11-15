
void FUN_022f2f74(long param_1)

{
  int iVar1;
  undefined **local_38;
  undefined8 uStack_30;
  byte local_28;
  undefined1 local_27;
  
  if (*(long *)(param_1 + 8) != -1) {
    if ((*(ushort *)(param_1 + 0x38) >> 6 & 1) == 0) {
      local_27 = 0;
      local_28 = *PTR_DAT_04bb32e0;
      if (7 < local_28) {
        local_28 = 0xff;
      }
      local_38 = &PTR_LAB_04a7ef60;
      uStack_30 = 0x11;
      iVar1 = FUN_022f1914();
      if (iVar1 != -1) {
        uStack_30 = CONCAT44(iVar1,(undefined4)uStack_30);
        local_27 = 1;
        FUN_01393458(&local_38);
      }
      if (*(char *)(param_1 + 0x3c) == '\x01') {
        FUN_022f3db0(param_1);
      }
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x3e) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0xffff000000000000;
    *(undefined2 *)(param_1 + 0x3c) = 0;
  }
  return;
}

