
undefined8 FUN_01508318(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 local_24;
  
  local_24 = 2;
  uVar1 = FUN_01508a18(param_1,param_2,&local_24);
  if (((uVar1 & 1) == 0) || (uVar1 = FUN_01505780(param_1,param_2 + 0x10), (uVar1 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

