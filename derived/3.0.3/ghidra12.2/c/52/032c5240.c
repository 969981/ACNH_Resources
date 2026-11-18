
undefined4 FUN_032c5240(undefined1 *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 local_8;
  
  switch(*param_1) {
  case 100:
    if ((param_1[1] == 'e') && (param_1[2] == '\0')) {
      return 7;
    }
    break;
  case 0x65:
    cVar1 = param_1[1];
    cVar2 = param_1[2];
    cVar3 = param_1[3];
    cVar4 = param_1[4];
    cVar5 = param_1[5];
    if ((((cVar1 == 'n' && cVar2 == '-') && (cVar3 == 'U')) && (cVar4 == 'S')) && (cVar5 == '\0')) {
      return 1;
    }
    if (((cVar3 == 'G' && (cVar1 == 'n' && cVar2 == '-')) && (cVar4 == 'B')) && (cVar5 == '\0')) {
      return 2;
    }
    if (((cVar1 == 's') && (cVar2 == '-')) &&
       ((cVar3 == '4' && (((cVar4 == '1' && (cVar5 == '9')) && (param_1[6] == '\0')))))) {
      return 5;
    }
    if ((cVar1 == 's') && (cVar2 == '\0')) {
      return 6;
    }
    break;
  case 0x66:
    if ((((param_1[1] == 'r') && (param_1[2] == '-')) && (param_1[3] == 'C')) &&
       ((param_1[4] == 'A' && (param_1[5] == '\0')))) {
      return 3;
    }
    if ((param_1[1] == 'r') && (param_1[2] == '\0')) {
      return 4;
    }
    break;
  case 0x69:
    if ((param_1[1] == 't') && (param_1[2] == '\0')) {
      return 8;
    }
    break;
  case 0x6a:
    if ((param_1[1] == 'a') && (param_1[2] == '\0')) {
      return 0;
    }
    break;
  case 0x6e:
    if ((param_1[1] == 'l') && (param_1[2] == '\0')) {
      return 9;
    }
    break;
  case 0x72:
    if ((param_1[1] == 'u') && (param_1[2] == '\0')) {
      return 10;
    }
  }
  local_8 = 0x7470;
  uVar6 = FUN_032c54b0(param_1,&local_8);
  if ((uVar6 & 1) == 0) {
    local_8 = 0x736e61482d687a;
    uVar6 = FUN_032c54b0(param_1,&local_8);
    if ((uVar6 & 1) == 0) {
      local_8 = 0x6f6b;
      uVar6 = FUN_032c54b0(param_1,&local_8);
      if ((uVar6 & 1) == 0) {
        local_8 = 0x746e61482d687a;
        uVar6 = FUN_032c54b0(param_1,&local_8);
        uVar7 = 0xe;
        if ((uVar6 & 1) == 0) {
          uVar7 = 1;
        }
      }
      else {
        uVar7 = 0xd;
      }
    }
    else {
      uVar7 = 0xc;
    }
  }
  else {
    uVar7 = 0xb;
  }
  return uVar7;
}

