
undefined8 FUN_0065afc0(undefined4 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 local_38 [16];
  ulong local_28;
  undefined4 local_14;
  
  local_28 = 0;
  local_14 = param_1;
  local_38 = FUN_00446e00(&local_14,&DAT_04c384c0);
  uVar1 = local_28;
  if (local_38._8_8_ == 0) {
    local_28 = 0;
    uVar2 = local_28;
  }
  else {
    uVar2 = FUN_00428370(local_38._8_8_);
    uVar1 = local_28;
    if ((uVar2 & 1) != 0) {
      FUN_0043dd30(uVar2 & 0xfffffffffffffffe);
      uVar1 = local_28;
    }
  }
  local_28 = uVar2;
  if ((uVar1 & 1) != 0) {
    FUN_0043dd50(uVar1 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_0044c7a0(&DAT_048e7ec8,local_38);
  if ((local_28 & 1) != 0) {
    FUN_0043dd50(local_28 & 0xfffffffffffffffe);
  }
  return uVar3;
}

