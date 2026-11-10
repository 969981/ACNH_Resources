
void FUN_00215a50(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined4 local_14;
  
  if (param_3 == 0) {
    local_14 = 0x8001000a;
  }
  else if ((*(long *)(param_2 + 0x1f8) == 0) || (*(int *)(*(long *)(param_2 + 0x1f8) + 0x40) == 5))
  {
    uVar1 = FUN_0021104c(param_2,param_3,*(undefined8 *)(param_2 + 0xc0));
    if ((uVar1 & 1) == 0) {
      local_14 = 0x8001000d;
    }
    else {
      local_14 = 0x10001;
    }
  }
  else {
    local_14 = 0x80010004;
  }
  FUN_0018aa70(param_1,&local_14);
  return;
}

