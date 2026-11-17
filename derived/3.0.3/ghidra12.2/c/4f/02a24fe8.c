
void FUN_02a24fe8(long param_1,long param_2,long param_3)

{
  undefined8 local_88;
  undefined **local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  undefined *puStack_30;
  char *local_28;
  
  local_38 = param_1 + 0x19fa08;
  local_50 = param_1 + 0x19f9e8;
  local_70 = PTR_DAT_04bb5070 + 0x10;
  local_28 = "SoundUpdateAfterAal";
  local_60 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_66 = 0;
  local_68 = 1;
  puStack_30 = PTR_DAT_04bb2020 + 0x10;
  local_58 = (*(undefined8 **)PTR_DAT_04bb49a8)[1];
  if (*(long *)(param_3 + 0x10) == 0) {
    local_80 = &local_70;
    local_88 = 0;
    uStack_78 = 0;
    FUN_03f45184(**(undefined8 **)PTR_DAT_04bb49a8,&local_88);
  }
  else {
    FUN_03f44830(*(long *)(param_3 + 0x10),&local_70);
  }
  *(undefined1 *)(param_2 + 8) = 1;
  return;
}

