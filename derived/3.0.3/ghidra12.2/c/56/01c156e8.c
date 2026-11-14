
uint FUN_01c156e8(long *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined4 local_20 [2];
  ulong local_18;
  
  uVar2 = *param_2;
  if (uVar2 == 0) {
    (**(code **)(*param_1 + 0x38))();
    uVar1 = 0;
  }
  else {
    local_20[0] = 0;
    local_18 = 0;
    if (uVar2 <= DAT_04c88ec8) {
      local_18 = uVar2;
    }
    uVar1 = FUN_01c15060(param_1,local_20,&DAT_041697ea);
  }
  return uVar1 & 1;
}

