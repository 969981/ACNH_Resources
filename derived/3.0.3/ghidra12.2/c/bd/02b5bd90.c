
ushort FUN_02b5bd90(int param_1)

{
  ushort uVar1;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined1 local_40;
  int local_3c;
  undefined **local_38;
  undefined4 *puStack_30;
  ushort *local_28;
  char *pcStack_20;
  char local_18 [4];
  ushort local_14 [2];
  
  if (param_1 == 0) {
    local_4c = 0x13;
  }
  else {
    if (((param_1 != 2) && (param_1 != 5)) && (param_1 != 6)) {
      return 0;
    }
    if (param_1 == 6) {
      local_4c = 0x19;
    }
    else if (param_1 == 5) {
      local_4c = 0x18;
    }
    else {
      if (param_1 != 2) {
        return 0;
      }
      local_4c = 0x15;
    }
  }
  puStack_30 = &local_4c;
  local_38 = &PTR_LAB_04aa4ad8;
  local_28 = local_14;
  pcStack_20 = local_18;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_14[0] = 0;
  local_18[0] = '\0';
  local_3c = param_1;
  FUN_02ad1b90(&local_38);
  uVar1 = 0;
  if (local_18[0] != '\0') {
    uVar1 = local_14[0];
  }
  return uVar1;
}

