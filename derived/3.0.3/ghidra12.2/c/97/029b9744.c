
uint FUN_029b9744(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 - 0x53U < 5) {
    uVar2 = 0;
    switch(param_1) {
    case 7:
      uVar2 = param_2 - 1;
      break;
    case 0xc:
      uVar2 = param_2 + 4;
      break;
    case 0x11:
      uVar2 = param_2 + 9;
      break;
    case 0x16:
    case 0x20:
      uVar2 = param_2 + 0xe;
      break;
    case 0x1b:
      uVar2 = param_2 + 0x13;
      break;
    case 0x1d:
      uVar2 = param_2 + 0x18;
      break;
    case 0x22:
      uVar2 = param_2 + 0x1d;
      break;
    case 0x25:
      uVar2 = param_2 + 0x22;
      break;
    case 0x2a:
      uVar2 = param_2 + 0x27;
      break;
    case 0x2b:
      uVar2 = param_2 + 0x2c;
      break;
    case 0x2f:
      uVar2 = param_2 + 0x31;
      break;
    case 0x34:
      uVar2 = param_2 + 0x36;
      break;
    case 0x39:
      uVar2 = param_2 + 0x3b;
      break;
    case 0x43:
      uVar2 = param_2 + 0x40;
    }
  }
  else if (param_2 - 0x4dU < 5) {
    uVar2 = 0;
    switch(param_1) {
    case 2:
      uVar2 = param_2 + 0x4b;
      break;
    case 3:
      uVar2 = param_2 + 0xb9;
      break;
    case 7:
      uVar2 = param_2 + 0x55;
      break;
    case 8:
      uVar2 = param_2 + 0x50;
      break;
    case 0xc:
      uVar2 = param_2 + 0x5f;
      break;
    case 0xd:
      uVar2 = param_2 + 0x5a;
      break;
    case 0x11:
      uVar2 = param_2 + 0x69;
      break;
    case 0x12:
      uVar2 = param_2 + 100;
      break;
    case 0x16:
    case 0x20:
      uVar2 = param_2 + 0x73;
      break;
    case 0x17:
      uVar2 = param_2 + 0x6e;
      break;
    case 0x1b:
      uVar2 = param_2 + 0x7d;
      break;
    case 0x1c:
      uVar2 = param_2 + 0x78;
      break;
    case 0x1d:
      uVar2 = param_2 + 0x82;
      break;
    case 0x1e:
      uVar2 = param_2 + 0x87;
      break;
    case 0x21:
      uVar2 = param_2 - 0x38;
      break;
    case 0x22:
      uVar2 = param_2 + 0x8c;
      break;
    case 0x23:
      uVar2 = param_2 + 0x91;
      break;
    case 0x25:
      uVar2 = param_2 + 0x96;
      break;
    case 0x2a:
      uVar2 = param_2 + 0x9b;
      break;
    case 0x2b:
      uVar2 = param_2 + 0xaa;
      break;
    case 0x2f:
      uVar2 = param_2 + 0xa0;
      break;
    case 0x34:
      uVar2 = param_2 + 0x3c;
      break;
    case 0x39:
      uVar2 = param_2 + 0xaf;
      break;
    case 0x43:
      uVar2 = param_2 + 0x46;
      break;
    case 0x59:
      uVar2 = param_2 - 0x1f;
    }
  }
  else {
    uVar2 = 0;
  }
  uVar1 = 0;
  if (*(char *)(&DAT_055e7558)[(ulong)uVar2 * 2] != '\0') {
    uVar1 = uVar2;
  }
  return uVar1;
}

