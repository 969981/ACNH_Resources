
void FUN_01e5d648(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_40;
  undefined8 uStack_38;
  undefined *local_30;
  undefined8 local_28;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_28 = (&DAT_05390508)[(long)*(int *)(param_1 + 0x56c) * 2];
  local_30 = puVar1;
  if (*(int *)(*(long *)(param_1 + 0x358) + 0x750) - 1U < 3) {
    lVar2 = FUN_01e39d3c();
    uStack_38 = *(undefined8 *)(lVar2 + 8);
    local_40 = puVar1;
    if (*(int *)(param_1 + 0x56c) == 0) {
      local_28 = uStack_38;
    }
    else {
      FUN_017081d0(*(undefined8 *)(param_1 + 0x340),&local_40,*(undefined4 *)(param_1 + 0x43c),1,0);
    }
  }
  FUN_017081d0(*(undefined8 *)(param_1 + 0x340),&local_30,*(undefined4 *)(param_1 + 0x43c),1,0);
  return;
}

