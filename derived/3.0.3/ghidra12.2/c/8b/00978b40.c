
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00978b40(undefined8 param_1)

{
  uint uVar1;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_20 = 0;
  local_14 = 0x25;
  local_14 = 0x25;
  local_18 = 0;
  local_20 = 0x2000000000;
  if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00949898(DAT_04cfae30 + 0x28,param_1,&local_20);
  }
  return uVar1 & 1;
}

