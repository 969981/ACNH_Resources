
void FUN_0030aaa8(undefined8 param_1,long param_2,uint param_3,undefined4 param_4)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (param_3 < 6) {
    if (*(char *)(param_2 + 0xd32) < '\0') {
      local_24 = 0x10c08;
    }
    else {
      local_24 = 0;
      *(undefined4 *)(param_2 + (ulong)param_3 * 400 + 0x1c) = param_4;
      *(undefined4 *)(param_2 + (ulong)param_3 * 4 + 0x97c) = 1;
      *(undefined1 *)(param_2 + (ulong)param_3 + 0x9c4) = 0;
      *(uint *)(param_2 + 0xd30) = *(uint *)(param_2 + 0xd30) | 0x40 << (ulong)(param_3 & 0x1f);
    }
  }
  else {
    local_24 = 0x10c07;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

