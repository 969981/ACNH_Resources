
void FUN_0018cb8c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong local_28;
  ulong local_18;
  
  if (DAT_04c58998 == '\0') {
    DAT_04c58998 = 1;
    if (DAT_04c58988 == (long *)0x0) {
      lVar2 = nn::os::GetSystemTick();
      uVar3 = nn::os::GetSystemTickFrequency();
      local_28 = 0;
      if (uVar3 != 0) {
        local_28 = (ulong)(lVar2 * 1000) / uVar3;
      }
    }
    else {
      (**(code **)(*DAT_04c58988 + 0x10))(&local_28);
    }
    puVar1 = PTR_DAT_04bcbdc8;
    *param_1 = 1;
    *(ulong *)puVar1 = 1 - local_28;
    return;
  }
  if (DAT_04c58988 == (long *)0x0) {
    lVar2 = nn::os::GetSystemTick();
    uVar3 = nn::os::GetSystemTickFrequency();
    local_18 = 0;
    if (uVar3 != 0) {
      local_18 = (ulong)(lVar2 * 1000) / uVar3;
    }
  }
  else {
    (**(code **)(*DAT_04c58988 + 0x10))(&local_18);
  }
  *param_1 = local_18 + DAT_04c58990;
  return;
}

