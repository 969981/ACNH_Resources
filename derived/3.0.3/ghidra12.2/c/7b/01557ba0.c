
void FUN_01557ba0(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 local_78;
  undefined **local_70;
  long lStack_68;
  undefined *local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined *local_20;
  undefined8 local_18;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x20) != 0)) {
    local_57 = 0;
    local_60 = PTR_DAT_04bb5070 + 0x10;
    local_20 = PTR_DAT_04bb2020 + 0x10;
    local_38 = *(undefined8 *)(param_2 + 4);
    lStack_68 = *(long *)(param_2 + 6);
    local_58 = lStack_68 != 0;
    local_50 = 0;
    local_18 = *(undefined8 *)(param_2 + 0xc);
    local_78 = 0;
    local_56 = (undefined1)*param_2;
    uStack_40 = *(undefined8 *)(param_2 + 2);
    local_48 = *(undefined8 *)(lVar1 + 8);
    uStack_30 = 0;
    local_28 = *(undefined8 *)(param_2 + 8);
    local_70 = &local_60;
    FUN_03f45184(*(long *)(lVar1 + 0x20),&local_78);
  }
  return;
}

