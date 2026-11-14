
uint FUN_016d3ba0(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined1 local_18 [4];
  undefined4 local_14;
  
  local_18[0] = 0;
  local_14 = 0xffffffff;
  uVar2 = FUN_016d0eb0(local_18,param_1,0);
  uVar1 = 0;
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_016d3964(local_18);
  }
  return uVar1 & 1;
}

