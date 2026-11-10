
void FUN_003075f0(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined4 local_48;
  ErrorResultVariant aEStack_44 [12];
  int local_38 [4];
  int local_28;
  undefined4 local_24;
  
  local_28 = 0;
  FUN_00226fc0(local_38,*(undefined8 *)(param_2 + 0x10));
  if (local_38[0] == 0) {
    if ((local_28 == 0) || (local_28 != param_4)) {
      local_48 = 0x10c08;
      goto LAB_0030766c;
    }
  }
  else if (*(char *)(param_2 + 8) != '\0') {
    FUN_002296c4(param_1,local_38);
    return;
  }
  local_48 = 0;
LAB_0030766c:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_44,(Result *)&local_24);
  FUN_002296c4(param_1,&local_48);
  return;
}

