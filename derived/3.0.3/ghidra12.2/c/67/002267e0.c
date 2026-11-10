
void FUN_002267e0(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  switch(param_2) {
  case 4:
  case 0xb:
  case 0xc:
  case 0x10:
    local_24 = 0x2c09;
    break;
  default:
    local_24 = 0x10c08;
    break;
  case 9:
  case 0x16:
  case 0x58:
  case 0x5a:
  case 0x5f:
  case 0x61:
    local_24 = 0x10c07;
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

