
void FUN_00226870(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  switch(param_2) {
  default:
    local_24 = 0x10c08;
    break;
  case 9:
  case 0xe:
  case 0x16:
  case 0x58:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5f:
  case 0x61:
  case 99:
    local_24 = 0x10c07;
    break;
  case 0x10:
    local_24 = 0x4c0d;
    break;
  case 0x62:
    local_24 = 0xc35;
    break;
  case 100:
  case 0x68:
  case 0x6b:
  case 0x6e:
    local_24 = 0xc406;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

