
void FUN_002b0d5c(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined1 auStack_4c [4];
  undefined4 local_48;
  ErrorResultVariant aEStack_44 [12];
  uint local_38;
  undefined4 local_34;
  
  memset(&local_38,0,4);
  if (*(long *)(param_2 + 0x538) != 0) {
    local_38 = local_38 | 1;
  }
  if (*(long *)(param_2 + 0x540) != 0) {
    local_38 = local_38 | 2;
  }
  if (*(long *)(param_2 + 0x548) != 0) {
    local_38 = local_38 | 4;
  }
  if (*(long *)(param_2 + 0x550) != 0) {
    local_38 = local_38 | 8;
  }
  if (*(long *)(param_2 + 0x558) != 0) {
    local_38 = local_38 | 0x10;
  }
  if (*(long *)(param_2 + 0x560) != 0) {
    local_38 = local_38 | 0x20;
  }
  if (*(long *)(param_2 + 0x568) != 0) {
    local_38 = local_38 | 0x40;
  }
  if (*(long *)(param_2 + 0x570) != 0) {
    local_38 = local_38 | 0x80;
  }
  if (*(long *)(param_2 + 0x578) != 0) {
    local_38 = local_38 | 0x100;
  }
  if (*(long *)(param_2 + 0x580) != 0) {
    local_38 = local_38 | 0x200;
  }
  if (*(long *)(param_2 + 0x588) != 0) {
    local_38 = local_38 | 0x400;
  }
  if (*(long *)(param_2 + 0x590) != 0) {
    local_38 = local_38 | 0x800;
  }
  if (*(long *)(param_2 + 0x598) != 0) {
    local_38 = local_38 | 0x1000;
  }
  if (*(long *)(param_2 + 0x5a0) != 0) {
    local_38 = local_38 | 0x2000;
  }
  if (*(long *)(param_2 + 0x5a8) != 0) {
    local_38 = local_38 | 0x4000;
  }
  if (*(long *)(param_2 + 0x5b0) != 0) {
    local_38 = local_38 | 0x8000;
  }
  if (*(long *)(param_2 + 0x5b8) != 0) {
    local_38 = local_38 | 0x10000;
  }
  if (*(long *)(param_2 + 0x5c0) != 0) {
    local_38 = local_38 | 0x20000;
  }
  if (*(long *)(param_2 + 0x5c8) != 0) {
    local_38 = local_38 | 0x40000;
  }
  if (*(long *)(param_2 + 0x5d0) != 0) {
    local_38 = local_38 | 0x80000;
  }
  if (*(long *)(param_2 + 0x5d8) != 0) {
    local_38 = local_38 | 0x100000;
  }
  if (*(long *)(param_2 + 0x5e0) != 0) {
    local_38 = local_38 | 0x200000;
  }
  if (*(long *)(param_2 + 0x5e8) != 0) {
    local_38 = local_38 | 0x400000;
  }
  if (*(long *)(param_2 + 0x5f0) != 0) {
    local_38 = local_38 | 0x800000;
  }
  if (*(long *)(param_2 + 0x5f8) != 0) {
    local_38 = local_38 | 0x1000000;
  }
  if (*(long *)(param_2 + 0x600) != 0) {
    local_38 = local_38 | 0x2000000;
  }
  if (*(long *)(param_2 + 0x608) != 0) {
    local_38 = local_38 | 0x4000000;
  }
  if (*(long *)(param_2 + 0x610) != 0) {
    local_38 = local_38 | 0x8000000;
  }
  if (*(long *)(param_2 + 0x618) != 0) {
    local_38 = local_38 | 0x10000000;
  }
  if (*(long *)(param_2 + 0x620) != 0) {
    local_38 = local_38 | 0x20000000;
  }
  if (*(long *)(param_2 + 0x628) != 0) {
    local_38 = local_38 | 0x40000000;
  }
  if (*(long *)(param_2 + 0x630) == 0) {
    if (local_38 == 0) {
      local_34 = 0;
      local_48 = 0x10c08;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_44,(Result *)&local_34);
      FUN_002296c4(param_1,&local_48);
      return;
    }
  }
  else {
    local_38 = local_38 | 0x80000000;
  }
  memcpy(auStack_4c,&local_38,4);
  FUN_002b1020(param_1,param_2,auStack_4c,param_3,param_4,param_5);
  return;
}

