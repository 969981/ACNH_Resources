
undefined8 FUN_00293b28(long param_1)

{
  undefined4 uVar1;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  uVar1 = FUN_0029b330(*(undefined8 *)PTR_DAT_04bcb8b8);
  switch(uVar1) {
  case 5:
    local_24 = 0xc406;
    break;
  case 6:
    local_24 = 0xa471;
    break;
  case 7:
    local_24 = 0xc420;
    break;
  case 8:
    local_24 = 0xc421;
    break;
  default:
    return 0;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_00229780(param_1 + 0x120,&local_24);
  return 1;
}

