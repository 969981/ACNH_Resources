
/* WARNING: Removing unreachable block (ram,0x01311380) */
/* WARNING: Removing unreachable block (ram,0x013112f8) */
/* WARNING: Removing unreachable block (ram,0x01311354) */
/* WARNING: Removing unreachable block (ram,0x013113ac) */

void FUN_013112c8(long param_1,int param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **local_50;
  long lStack_48;
  undefined8 local_40;
  
  lStack_48 = param_1 + 8;
  if (param_2 == 1) {
    ppuVar1 = &PTR_LAB_0498d8c8;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    ppuVar1 = &PTR_LAB_0498d8a0;
  }
  local_50 = ppuVar1;
  local_40 = param_3;
  FUN_01316d20(&local_50,0);
  lStack_48 = param_1 + 0x90;
  local_50 = ppuVar1;
  local_40 = param_3;
  FUN_01316d20(&local_50,1);
  lStack_48 = param_1 + 0x118;
  local_50 = ppuVar1;
  local_40 = param_3;
  FUN_01316d20(&local_50,2);
  lStack_48 = param_1 + 0x1a0;
  local_50 = ppuVar1;
  local_40 = param_3;
  FUN_01316d20(&local_50,3);
  return;
}

