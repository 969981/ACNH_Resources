
void FUN_00226750(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  switch(param_2) {
  default:
    local_24 = 0x10c08;
    break;
  case 4:
  case 0xb:
  case 0xc:
  case 0x10:
  case 0x69:
    local_24 = 0x4c0d;
    break;
  case 9:
  case 0xe:
  case 0x16:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5f:
  case 0x61:
  case 99:
    local_24 = 0x10c07;
    break;
  case 0x20:
  case 100:
  case 0x65:
  case 0x68:
  case 0x6b:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
    local_24 = 0xc406;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

