
void FUN_002b1480(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined4 param_5
                 ,undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_54 [4];
  undefined4 local_50;
  ErrorResultVariant aEStack_4c [12];
  uint local_38;
  undefined4 local_34;
  
  memset(&local_38,0,4);
  if (*(long *)(param_2 + 0x538) == param_3) {
    local_38 = local_38 | 1;
    lVar1 = *(long *)(param_2 + 0x540);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x540);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 2;
    lVar1 = *(long *)(param_2 + 0x548);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x548);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 4;
    lVar1 = *(long *)(param_2 + 0x550);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x550);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 8;
    lVar1 = *(long *)(param_2 + 0x558);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x558);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x10;
    lVar1 = *(long *)(param_2 + 0x560);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x560);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x20;
    lVar1 = *(long *)(param_2 + 0x568);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x568);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x40;
    lVar1 = *(long *)(param_2 + 0x570);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x570);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x80;
    lVar1 = *(long *)(param_2 + 0x578);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x578);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x100;
    lVar1 = *(long *)(param_2 + 0x580);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x580);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x200;
    lVar1 = *(long *)(param_2 + 0x588);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x588);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x400;
    lVar1 = *(long *)(param_2 + 0x590);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x590);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x800;
    lVar1 = *(long *)(param_2 + 0x598);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x598);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x1000;
    lVar1 = *(long *)(param_2 + 0x5a0);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x5a0);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x2000;
    lVar1 = *(long *)(param_2 + 0x5a8);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x5a8);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x4000;
    lVar1 = *(long *)(param_2 + 0x5b0);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x5b0);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x8000;
    lVar1 = *(long *)(param_2 + 0x5b8);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x5b8);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x10000;
    lVar1 = *(long *)(param_2 + 0x5c0);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x5c0);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x20000;
    lVar1 = *(long *)(param_2 + 0x5c8);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x5c8);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x40000;
    lVar1 = *(long *)(param_2 + 0x5d0);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x5d0);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x80000;
    lVar1 = *(long *)(param_2 + 0x5d8);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x5d8);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x100000;
    lVar1 = *(long *)(param_2 + 0x5e0);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x5e0);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x200000;
    lVar1 = *(long *)(param_2 + 0x5e8);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x5e8);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x400000;
    lVar1 = *(long *)(param_2 + 0x5f0);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x5f0);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x800000;
    lVar1 = *(long *)(param_2 + 0x5f8);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x5f8);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x1000000;
    lVar1 = *(long *)(param_2 + 0x600);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x600);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x2000000;
    lVar1 = *(long *)(param_2 + 0x608);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x608);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x4000000;
    lVar1 = *(long *)(param_2 + 0x610);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x610);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x8000000;
    lVar1 = *(long *)(param_2 + 0x618);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x618);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x10000000;
    lVar1 = *(long *)(param_2 + 0x620);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x620);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x20000000;
    lVar1 = *(long *)(param_2 + 0x628);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x628);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x40000000;
    lVar1 = *(long *)(param_2 + 0x630);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x630);
  }
  if (lVar1 == param_3) {
    local_38 = local_38 | 0x80000000;
  }
  else if (local_38 == 0) {
    local_34 = 0;
    local_50 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_34);
    FUN_002296c4(param_1,&local_50);
    return;
  }
  memcpy(auStack_54,&local_38,4);
  FUN_002b1020(param_1,param_2,auStack_54,param_4,param_5,param_6);
  return;
}

