
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_0097d840(undefined8 param_1)

{
  uint uVar1;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0xffffffffffffffff;
  local_18 = 0x1ff;
  local_14 = 7;
  local_20 = 0xffffffffffffff7f;
  local_14 = 7;
  local_18 = 0x1ff;
  if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0x90) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0094b840(DAT_04cfae30 + 0x28,param_1,&local_20);
  }
  return uVar1 & 1;
}

