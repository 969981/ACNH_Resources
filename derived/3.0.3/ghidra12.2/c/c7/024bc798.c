
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_024bc798(long param_1,undefined1 param_2,uint param_3)

{
  bool bVar1;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  bVar1 = *(int *)(param_1 + 0x178) == 0 && *(int *)(param_1 + 0x21b8) == 0;
  if ((*(int *)(param_1 + 0x178) == 0 && *(int *)(param_1 + 0x21b8) == 0) && ((param_3 & 1) == 0)) {
    local_1c = 0;
    local_14 = 0;
    local_24 = _DAT_05586008;
    uStack_20 = DAT_0558600c;
    local_28[0] = param_2;
    FUN_024bc7f8(param_1,local_28);
    bVar1 = true;
  }
  return bVar1;
}

