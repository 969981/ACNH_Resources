
undefined8 FUN_006f0db0(uint param_1)

{
  param_1 = param_1 & 0xffff;
  if ((param_1 - 0x391 < 0x19) || (param_1 - 0x3b1 < 0x19)) {
switchD_006f0df0_caseD_386:
    return 1;
  }
  switch(param_1) {
  case 0x386:
  case 0x388:
  case 0x389:
  case 0x38a:
  case 0x38c:
  case 0x38e:
  case 0x38f:
  case 0x390:
  case 0x3aa:
  case 0x3ab:
  case 0x3ac:
  case 0x3ad:
  case 0x3ae:
  case 0x3af:
  case 0x3b0:
  case 0x3ca:
  case 0x3cb:
  case 0x3cc:
  case 0x3cd:
  case 0x3ce:
    goto switchD_006f0df0_caseD_386;
  default:
    return 0;
  }
}

