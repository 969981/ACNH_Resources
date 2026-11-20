
uint FUN_03f836d8(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint extraout_var;
  ulong uVar3;
  char cVar4;
  
  uVar3 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,0);
  if ((uVar3 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,0);
    if ((*(byte *)((long)param_1 + 0xb) & 1) != 0) {
      *(char *)((long)param_1 + 0xf) = (char)((*(byte *)((long)param_1 + 0xf) + 1) % 3);
      uVar3 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,0);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      (**(code **)(*(long *)*param_1 + 0x28))
                ((long *)*param_1,0,*(undefined1 *)((long)param_1 + 0xf));
      return 0;
    }
    cVar4 = *(char *)(param_1 + 1);
    uVar2 = 0;
    switch(cVar4) {
    case '\b':
      uVar2 = uVar1 >> 1 & 1;
      cVar4 = '\t';
      break;
    case '\t':
      uVar2 = uVar1 & 1;
      cVar4 = '\n';
      break;
    case '\n':
      uVar2 = *(byte *)((long)param_1 + 0xf) >> 1 & 1;
      cVar4 = '\v';
      break;
    case '\v':
      uVar2 = *(byte *)((long)param_1 + 0xf) & 1;
      cVar4 = '\f';
      break;
    case '\x0f':
      (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,0);
      cVar4 = *(char *)(param_1 + 1);
    default:
      uVar2 = 1;
    case '\0':
    case '\x01':
    case '\x02':
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
    case '\a':
    case '\f':
    case '\r':
    case '\x0e':
      cVar4 = cVar4 + '\x01';
      break;
    case '\x10':
      uVar2 = uVar1 >> 0x11 & 1;
      cVar4 = '\x11';
      break;
    case '\x11':
      uVar2 = uVar1 >> 0x10 & 1;
      cVar4 = '\x12';
      break;
    case '\x12':
      uVar2 = uVar1 >> 0xf & 1;
      cVar4 = '\x13';
      break;
    case '\x13':
      uVar2 = uVar1 >> 0xe & 1;
      cVar4 = '\x14';
      break;
    case '\x14':
      uVar2 = uVar1 >> 0xd & 1;
      cVar4 = '\x15';
      break;
    case '\x15':
      uVar2 = uVar1 >> 0xc & 1;
      cVar4 = '\x16';
      break;
    case '\x16':
      uVar2 = uVar1 >> 0xb & 1;
      cVar4 = '\x17';
      break;
    case '\x17':
      uVar2 = uVar1 >> 10 & 1;
      cVar4 = '\x18';
      break;
    case '\x18':
      uVar2 = uVar1 >> 9 & 1;
      cVar4 = '\x19';
      break;
    case '\x19':
      uVar2 = uVar1 >> 8 & 1;
      cVar4 = '\x1a';
      break;
    case '\x1a':
      uVar2 = uVar1 >> 7 & 1;
      cVar4 = '\x1b';
      break;
    case '\x1b':
      uVar2 = uVar1 >> 6 & 1;
      cVar4 = '\x1c';
      break;
    case '\x1c':
      uVar2 = uVar1 >> 5 & 1;
      cVar4 = '\x1d';
      break;
    case '\x1d':
      uVar2 = uVar1 >> 4 & 1;
      cVar4 = '\x1e';
      break;
    case '\x1e':
      uVar2 = uVar1 >> 3 & 1;
      cVar4 = '\x1f';
      break;
    case '\x1f':
      uVar2 = uVar1 >> 2 & 1;
      cVar4 = ' ';
    }
    goto LAB_03f83b80;
  }
  if ((*(byte *)((long)param_1 + 0xb) & 1) != 0) {
    return 0;
  }
  uVar2 = 0;
  switch(*(undefined1 *)(param_1 + 1)) {
  case 0:
    uVar1 = FUN_03f83578(param_1,0);
    uVar2 = uVar1 >> 0xf & 1;
    break;
  case 1:
    uVar1 = FUN_03f83578(param_1,0);
    uVar2 = uVar1 >> 0xe & 1;
    break;
  case 2:
    uVar1 = FUN_03f83578(param_1,0);
    uVar2 = uVar1 >> 0xd & 1;
    break;
  case 3:
    uVar1 = FUN_03f83578(param_1,0);
    uVar2 = uVar1 >> 0xc & 1;
    break;
  case 4:
    uVar1 = FUN_03f83578(param_1,0);
    uVar2 = uVar1 >> 0xb & 1;
    break;
  case 5:
    uVar1 = FUN_03f83578(param_1,0);
    uVar2 = uVar1 >> 10 & 1;
    break;
  case 6:
    uVar1 = FUN_03f83578(param_1,0);
    uVar2 = uVar1 >> 9 & 1;
    break;
  case 7:
    uVar1 = FUN_03f83578(param_1,0);
    uVar2 = uVar1 >> 8 & 1;
    break;
  case 8:
    uVar1 = FUN_03f83578(param_1,0);
    uVar2 = uVar1 >> 7 & 1;
    break;
  case 9:
    uVar1 = FUN_03f83578(param_1,0);
    uVar2 = uVar1 >> 6 & 1;
    break;
  case 10:
    uVar1 = FUN_03f83578(param_1,0);
    uVar2 = uVar1 >> 5 & 1;
    break;
  case 0xb:
    uVar1 = FUN_03f83578(param_1,0);
    uVar2 = uVar1 >> 4 & 1;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    break;
  default:
    uVar2 = (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0);
    uVar2 = uVar2 & 1;
  }
  if (*(char *)((long)param_1 + 0xe) != '\0') goto switchD_03f837a8_caseD_c;
  switch(*(undefined1 *)(param_1 + 1)) {
  case 0:
    uVar3 = FUN_03f83578(param_1,2);
    uVar1 = (uint)(uVar3 >> 0xe) & 0x3ffff;
    break;
  case 1:
    uVar3 = FUN_03f83578(param_1,2);
    uVar1 = (uint)(uVar3 >> 0xd) & 0x7ffff;
    break;
  case 2:
    uVar3 = FUN_03f83578(param_1,2);
    uVar1 = (uint)(uVar3 >> 0xc) & 0xfffff;
    break;
  case 3:
    uVar3 = FUN_03f83578(param_1,2);
    uVar1 = (uint)(uVar3 >> 0xb) & 0x1fffff;
    break;
  case 4:
    uVar3 = FUN_03f83578(param_1,2);
    uVar1 = (uint)(uVar3 >> 10) & 0x3fffff;
    break;
  case 5:
    uVar3 = FUN_03f83578(param_1,2);
    uVar1 = (uint)(uVar3 >> 9) & 0x7fffff;
    break;
  case 6:
    FUN_03f83578(param_1,2);
    uVar1 = extraout_var & 0xffffff;
    break;
  case 7:
    uVar3 = FUN_03f83578(param_1,2);
    uVar1 = (uint)(uVar3 >> 7) & 0x1ffffff;
    break;
  case 8:
    uVar3 = FUN_03f83578(param_1,2);
    uVar1 = (uint)(uVar3 >> 6) & 0x3ffffff;
    break;
  case 9:
    uVar3 = FUN_03f83578(param_1,2);
    uVar1 = (uint)(uVar3 >> 5) & 0x7ffffff;
    break;
  case 10:
    uVar3 = FUN_03f83578(param_1,2);
    uVar1 = (uint)(uVar3 >> 4) & 0xfffffff;
    break;
  case 0xb:
    uVar3 = FUN_03f83578(param_1,2);
    uVar1 = (uint)(uVar3 >> 3) & 0x1fffffff;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    goto switchD_03f837a8_caseD_c;
  default:
    if (1 < *(uint *)((long)param_1 + 0x14)) {
      uVar3 = (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,2);
      uVar1 = 2;
      if ((uVar3 & 1) == 0) {
        uVar1 = 0;
      }
      uVar2 = uVar1 | uVar2;
    }
    goto switchD_03f837a8_caseD_c;
  }
  uVar2 = uVar2 | uVar1 & 2;
switchD_03f837a8_caseD_c:
  cVar4 = '\0';
  if ((*(char *)(param_1 + 1) + 1U & 0xe0) == 0) {
    cVar4 = *(char *)(param_1 + 1) + '\x01';
  }
LAB_03f83b80:
  *(char *)(param_1 + 1) = cVar4;
  return uVar2;
}

