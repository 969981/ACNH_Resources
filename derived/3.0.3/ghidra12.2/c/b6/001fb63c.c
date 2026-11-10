
uint FUN_001fb63c(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined4 local_24;
  
  uVar1 = FUN_00194070(param_2);
  if ((uVar1 & 1) != 0) {
    local_24 = *(undefined4 *)(param_2 + 0x18);
    FUN_00197478(param_1,&local_24,4);
  }
  return uVar1 & 1;
}

