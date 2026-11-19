
void FUN_03833884(float param_1,long param_2,long param_3)

{
  undefined1 local_68;
  undefined1 local_67;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  undefined *puStack_28;
  undefined *local_20;
  long lStack_18;
  
  if ((param_3 != 0) && (0.0 <= param_1)) {
    if (115600.0 <= param_1) {
      if (176400.0 <= param_1) {
        *(undefined4 *)(param_2 + 0x10) = 0;
      }
    }
    else if ((*(long *)(param_3 + 8) != 0) && (*(long *)(param_3 + 0x10) != 0)) {
      *(undefined4 *)(param_2 + 0x10) = 3;
      local_67 = *(undefined1 *)(param_3 + 1);
      local_68 = 0;
      uStack_58 = *(undefined8 *)(param_3 + 0x18);
      puStack_48 = PTR_DAT_04bb2020 + 0x10;
      local_50 = 0;
      local_40 = PTR_DAT_04bb2120;
      local_60 = 0;
      local_30 = *(undefined8 *)(param_3 + 0x28);
      lStack_18 = param_2 + 0x38;
      local_20 = PTR_DAT_04bb2120;
      puStack_38 = puStack_48;
      puStack_28 = puStack_48;
      FUN_0383a710(DAT_05ae0670,&local_68,0);
      return;
    }
  }
  return;
}

