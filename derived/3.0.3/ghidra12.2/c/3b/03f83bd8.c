
uint FUN_03f83bd8(undefined8 *param_1)

{
  uint uVar1;
  uint extraout_var;
  uint extraout_var_00;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  
  uVar2 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,1);
  if ((uVar2 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,1);
    if ((*(byte *)((long)param_1 + 0xb) & 1) != 0) {
      *(char *)(param_1 + 2) = (char)((*(byte *)(param_1 + 2) + 1) % 3);
      uVar2 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,1);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,1,*(undefined1 *)(param_1 + 2));
      return 0;
    }
    cVar5 = *(char *)((long)param_1 + 9);
    uVar6 = 0x1c;
    switch(cVar5) {
    case '\b':
      uVar6 = uVar1 >> 1 & 1 | 0x1c;
      cVar5 = '\t';
      break;
    case '\t':
      uVar6 = uVar1 & 1 | 0x1c;
      cVar5 = '\n';
      break;
    case '\n':
      uVar6 = *(byte *)(param_1 + 2) >> 1 & 1 | 0x1c;
      cVar5 = '\v';
      break;
    case '\v':
      uVar6 = *(byte *)(param_1 + 2) & 1 | 0x1c;
      cVar5 = '\f';
      break;
    case '\x0f':
      (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,1);
      cVar5 = *(char *)((long)param_1 + 9);
    default:
      uVar6 = 0x1d;
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
      cVar5 = cVar5 + '\x01';
      break;
    case '\x10':
      uVar6 = uVar1 >> 0x11 & 1 | 0x1c;
      cVar5 = '\x11';
      break;
    case '\x11':
      uVar6 = uVar1 >> 0x10 & 1 | 0x1c;
      cVar5 = '\x12';
      break;
    case '\x12':
      uVar6 = uVar1 >> 0xf & 1 | 0x1c;
      cVar5 = '\x13';
      break;
    case '\x13':
      uVar6 = uVar1 >> 0xe & 1 | 0x1c;
      cVar5 = '\x14';
      break;
    case '\x14':
      uVar6 = uVar1 >> 0xd & 1 | 0x1c;
      cVar5 = '\x15';
      break;
    case '\x15':
      uVar6 = uVar1 >> 0xc & 1 | 0x1c;
      cVar5 = '\x16';
      break;
    case '\x16':
      uVar6 = uVar1 >> 0xb & 1 | 0x1c;
      cVar5 = '\x17';
      break;
    case '\x17':
      uVar6 = uVar1 >> 10 & 1 | 0x1c;
      cVar5 = '\x18';
      break;
    case '\x18':
      uVar6 = uVar1 >> 9 & 1 | 0x1c;
      cVar5 = '\x19';
      break;
    case '\x19':
      uVar6 = uVar1 >> 8 & 1 | 0x1c;
      cVar5 = '\x1a';
      break;
    case '\x1a':
      uVar6 = uVar1 >> 7 & 1 | 0x1c;
      cVar5 = '\x1b';
      break;
    case '\x1b':
      uVar6 = uVar1 >> 6 & 1 | 0x1c;
      cVar5 = '\x1c';
      break;
    case '\x1c':
      uVar6 = uVar1 >> 5 & 1 | 0x1c;
      cVar5 = '\x1d';
      break;
    case '\x1d':
      uVar6 = uVar1 >> 4 & 1 | 0x1c;
      cVar5 = '\x1e';
      break;
    case '\x1e':
      uVar6 = uVar1 >> 3 & 1 | 0x1c;
      cVar5 = '\x1f';
      break;
    case '\x1f':
      uVar6 = uVar1 >> 2 & 1 | 0x1c;
      cVar5 = ' ';
    }
    goto LAB_03f84558;
  }
  if (*(char *)((long)param_1 + 0xe) != '\0') {
    if ((*(byte *)((long)param_1 + 0xb) & 1) != 0) {
      return 2;
    }
    if (*(char *)((long)param_1 + 0xd) < '\0') {
      uVar4 = *(undefined1 *)((long)param_1 + 9);
      uVar6 = 0x1c;
      switch(uVar4) {
      case 0:
        uVar1 = FUN_03f83578(param_1,1);
        uVar6 = uVar1 >> 0xf & 1 | 0x1c;
        break;
      case 1:
        uVar1 = FUN_03f83578(param_1,1);
        uVar6 = uVar1 >> 0xe & 1 | 0x1c;
        break;
      case 2:
        uVar1 = FUN_03f83578(param_1,1);
        uVar6 = uVar1 >> 0xd & 1 | 0x1c;
        break;
      case 3:
        uVar1 = FUN_03f83578(param_1,1);
        uVar6 = uVar1 >> 0xc & 1 | 0x1c;
        break;
      case 4:
        uVar1 = FUN_03f83578(param_1,1);
        uVar6 = uVar1 >> 0xb & 1 | 0x1c;
        break;
      case 5:
        uVar1 = FUN_03f83578(param_1,1);
        uVar6 = uVar1 >> 10 & 1 | 0x1c;
        break;
      case 6:
        uVar1 = FUN_03f83578(param_1,1);
        uVar6 = uVar1 >> 9 & 1 | 0x1c;
        break;
      case 7:
        uVar1 = FUN_03f83578(param_1,1);
        uVar6 = uVar1 >> 8 & 1 | 0x1c;
        break;
      case 8:
        uVar1 = FUN_03f83578(param_1,1);
        uVar6 = uVar1 >> 7 & 1 | 0x1c;
        break;
      case 9:
        uVar1 = FUN_03f83578(param_1,1);
        uVar6 = uVar1 >> 6 & 1 | 0x1c;
        break;
      case 10:
        uVar1 = FUN_03f83578(param_1,1);
        uVar6 = uVar1 >> 5 & 1 | 0x1c;
        break;
      case 0xb:
        uVar1 = FUN_03f83578(param_1,1);
        uVar6 = uVar1 >> 4 & 1 | 0x1c;
        break;
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        goto switchD_03f83d70_caseD_c;
      default:
        uVar6 = 0x1c;
        if (*(int *)((long)param_1 + 0x14) != 0) {
          uVar1 = (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,1);
          uVar6 = uVar1 & 1 | 0x1c;
        }
      }
      uVar4 = *(undefined1 *)((long)param_1 + 9);
switchD_03f83d70_caseD_c:
      switch(uVar4) {
      case 0:
        uVar3 = 2;
        goto LAB_03f8445c;
      case 1:
        uVar3 = 2;
        goto LAB_03f84470;
      case 2:
        uVar3 = 2;
        goto LAB_03f84484;
      case 3:
        uVar3 = 2;
        goto LAB_03f84498;
      case 4:
        uVar3 = 2;
        goto LAB_03f844ac;
      case 5:
        uVar3 = 2;
        goto LAB_03f844c0;
      case 6:
        uVar3 = 2;
        goto LAB_03f844d4;
      case 7:
        uVar3 = 2;
        goto LAB_03f844e8;
      case 8:
        uVar3 = 2;
        goto LAB_03f844fc;
      case 9:
        uVar3 = 2;
        goto LAB_03f84510;
      case 10:
        uVar3 = 2;
        goto LAB_03f84524;
      case 0xb:
        uVar3 = 2;
        goto LAB_03f84538;
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        break;
      default:
        if (1 < *(uint *)((long)param_1 + 0x14)) {
          uVar2 = (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,2);
          uVar1 = 2;
          if ((uVar2 & 1) == 0) {
            uVar1 = 0;
          }
          uVar6 = uVar1 | uVar6;
        }
      }
      goto switchD_03f84450_caseD_c;
    }
    uVar4 = *(undefined1 *)((long)param_1 + 10);
    uVar1 = 0x1c;
    switch(uVar4) {
    case 0:
      uVar1 = FUN_03f83578(param_1,3);
      uVar1 = uVar1 >> 0xf & 1 | 0x1c;
      break;
    case 1:
      uVar1 = FUN_03f83578(param_1,3);
      uVar1 = uVar1 >> 0xe & 1 | 0x1c;
      break;
    case 2:
      uVar1 = FUN_03f83578(param_1,3);
      uVar1 = uVar1 >> 0xd & 1 | 0x1c;
      break;
    case 3:
      uVar1 = FUN_03f83578(param_1,3);
      uVar1 = uVar1 >> 0xc & 1 | 0x1c;
      break;
    case 4:
      uVar1 = FUN_03f83578(param_1,3);
      uVar1 = uVar1 >> 0xb & 1 | 0x1c;
      break;
    case 5:
      uVar1 = FUN_03f83578(param_1,3);
      uVar1 = uVar1 >> 10 & 1 | 0x1c;
      break;
    case 6:
      uVar1 = FUN_03f83578(param_1,3);
      uVar1 = uVar1 >> 9 & 1 | 0x1c;
      break;
    case 7:
      uVar1 = FUN_03f83578(param_1,3);
      uVar1 = uVar1 >> 8 & 1 | 0x1c;
      break;
    case 8:
      uVar1 = FUN_03f83578(param_1,3);
      uVar1 = uVar1 >> 7 & 1 | 0x1c;
      break;
    case 9:
      uVar1 = FUN_03f83578(param_1,3);
      uVar1 = uVar1 >> 6 & 1 | 0x1c;
      break;
    case 10:
      uVar1 = FUN_03f83578(param_1,3);
      uVar1 = uVar1 >> 5 & 1 | 0x1c;
      break;
    case 0xb:
      uVar1 = FUN_03f83578(param_1,3);
      uVar1 = uVar1 >> 4 & 1 | 0x1c;
      break;
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
      goto switchD_03f83c8c_caseD_c;
    default:
      uVar1 = 0x1c;
      if (2 < *(uint *)((long)param_1 + 0x14)) {
        uVar1 = (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,3);
        uVar1 = uVar1 & 1 | 0x1c;
      }
    }
    uVar4 = *(undefined1 *)((long)param_1 + 10);
switchD_03f83c8c_caseD_c:
    switch(uVar4) {
    case 0:
      uVar2 = FUN_03f83578(param_1,4);
      uVar6 = (uint)(uVar2 >> 0xe) & 0x3ffff;
      break;
    case 1:
      uVar2 = FUN_03f83578(param_1,4);
      uVar6 = (uint)(uVar2 >> 0xd) & 0x7ffff;
      break;
    case 2:
      uVar2 = FUN_03f83578(param_1,4);
      uVar6 = (uint)(uVar2 >> 0xc) & 0xfffff;
      break;
    case 3:
      uVar2 = FUN_03f83578(param_1,4);
      uVar6 = (uint)(uVar2 >> 0xb) & 0x1fffff;
      break;
    case 4:
      uVar2 = FUN_03f83578(param_1,4);
      uVar6 = (uint)(uVar2 >> 10) & 0x3fffff;
      break;
    case 5:
      uVar2 = FUN_03f83578(param_1,4);
      uVar6 = (uint)(uVar2 >> 9) & 0x7fffff;
      break;
    case 6:
      FUN_03f83578(param_1,4);
      uVar6 = extraout_var & 0xffffff;
      break;
    case 7:
      uVar2 = FUN_03f83578(param_1,4);
      uVar6 = (uint)(uVar2 >> 7) & 0x1ffffff;
      break;
    case 8:
      uVar2 = FUN_03f83578(param_1,4);
      uVar6 = (uint)(uVar2 >> 6) & 0x3ffffff;
      break;
    case 9:
      uVar2 = FUN_03f83578(param_1,4);
      uVar6 = (uint)(uVar2 >> 5) & 0x7ffffff;
      break;
    case 10:
      uVar2 = FUN_03f83578(param_1,4);
      uVar6 = (uint)(uVar2 >> 4) & 0xfffffff;
      break;
    case 0xb:
      uVar2 = FUN_03f83578(param_1,4);
      uVar6 = (uint)(uVar2 >> 3) & 0x1fffffff;
      break;
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
      goto switchD_03f84018_caseD_c;
    default:
      if (3 < *(uint *)((long)param_1 + 0x14)) {
        uVar2 = (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,4);
        uVar6 = 2;
        if ((uVar2 & 1) == 0) {
          uVar6 = 0;
        }
        uVar1 = uVar6 | uVar1;
      }
      goto switchD_03f84018_caseD_c;
    }
    uVar1 = uVar1 | uVar6 & 2;
switchD_03f84018_caseD_c:
    cVar5 = '\0';
    if ((*(char *)((long)param_1 + 10) + 1U & 0xe0) == 0) {
      cVar5 = *(char *)((long)param_1 + 10) + '\x01';
    }
    *(char *)((long)param_1 + 10) = cVar5;
    return uVar1;
  }
  if ((*(byte *)((long)param_1 + 0xb) & 1) != 0) {
    return 0;
  }
  uVar4 = *(undefined1 *)((long)param_1 + 9);
  uVar6 = 0x1c;
  switch(uVar4) {
  case 0:
    uVar1 = FUN_03f83578(param_1,1);
    uVar6 = uVar1 >> 0xf & 1 | 0x1c;
    break;
  case 1:
    uVar1 = FUN_03f83578(param_1,1);
    uVar6 = uVar1 >> 0xe & 1 | 0x1c;
    break;
  case 2:
    uVar1 = FUN_03f83578(param_1,1);
    uVar6 = uVar1 >> 0xd & 1 | 0x1c;
    break;
  case 3:
    uVar1 = FUN_03f83578(param_1,1);
    uVar6 = uVar1 >> 0xc & 1 | 0x1c;
    break;
  case 4:
    uVar1 = FUN_03f83578(param_1,1);
    uVar6 = uVar1 >> 0xb & 1 | 0x1c;
    break;
  case 5:
    uVar1 = FUN_03f83578(param_1,1);
    uVar6 = uVar1 >> 10 & 1 | 0x1c;
    break;
  case 6:
    uVar1 = FUN_03f83578(param_1,1);
    uVar6 = uVar1 >> 9 & 1 | 0x1c;
    break;
  case 7:
    uVar1 = FUN_03f83578(param_1,1);
    uVar6 = uVar1 >> 8 & 1 | 0x1c;
    break;
  case 8:
    uVar1 = FUN_03f83578(param_1,1);
    uVar6 = uVar1 >> 7 & 1 | 0x1c;
    break;
  case 9:
    uVar1 = FUN_03f83578(param_1,1);
    uVar6 = uVar1 >> 6 & 1 | 0x1c;
    break;
  case 10:
    uVar1 = FUN_03f83578(param_1,1);
    uVar6 = uVar1 >> 5 & 1 | 0x1c;
    break;
  case 0xb:
    uVar1 = FUN_03f83578(param_1,1);
    uVar6 = uVar1 >> 4 & 1 | 0x1c;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    goto switchD_03f83d24_caseD_c;
  default:
    uVar6 = 0x1c;
    if (*(int *)((long)param_1 + 0x14) != 0) {
      uVar1 = (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,1);
      uVar6 = uVar1 & 1 | 0x1c;
    }
  }
  uVar4 = *(undefined1 *)((long)param_1 + 9);
switchD_03f83d24_caseD_c:
  switch(uVar4) {
  case 0:
    uVar3 = 3;
LAB_03f8445c:
    uVar2 = FUN_03f83578(param_1,uVar3);
    uVar1 = (uint)(uVar2 >> 0xe) & 0x3ffff;
    break;
  case 1:
    uVar3 = 3;
LAB_03f84470:
    uVar2 = FUN_03f83578(param_1,uVar3);
    uVar1 = (uint)(uVar2 >> 0xd) & 0x7ffff;
    break;
  case 2:
    uVar3 = 3;
LAB_03f84484:
    uVar2 = FUN_03f83578(param_1,uVar3);
    uVar1 = (uint)(uVar2 >> 0xc) & 0xfffff;
    break;
  case 3:
    uVar3 = 3;
LAB_03f84498:
    uVar2 = FUN_03f83578(param_1,uVar3);
    uVar1 = (uint)(uVar2 >> 0xb) & 0x1fffff;
    break;
  case 4:
    uVar3 = 3;
LAB_03f844ac:
    uVar2 = FUN_03f83578(param_1,uVar3);
    uVar1 = (uint)(uVar2 >> 10) & 0x3fffff;
    break;
  case 5:
    uVar3 = 3;
LAB_03f844c0:
    uVar2 = FUN_03f83578(param_1,uVar3);
    uVar1 = (uint)(uVar2 >> 9) & 0x7fffff;
    break;
  case 6:
    uVar3 = 3;
LAB_03f844d4:
    FUN_03f83578(param_1,uVar3);
    uVar1 = extraout_var_00 & 0xffffff;
    break;
  case 7:
    uVar3 = 3;
LAB_03f844e8:
    uVar2 = FUN_03f83578(param_1,uVar3);
    uVar1 = (uint)(uVar2 >> 7) & 0x1ffffff;
    break;
  case 8:
    uVar3 = 3;
LAB_03f844fc:
    uVar2 = FUN_03f83578(param_1,uVar3);
    uVar1 = (uint)(uVar2 >> 6) & 0x3ffffff;
    break;
  case 9:
    uVar3 = 3;
LAB_03f84510:
    uVar2 = FUN_03f83578(param_1,uVar3);
    uVar1 = (uint)(uVar2 >> 5) & 0x7ffffff;
    break;
  case 10:
    uVar3 = 3;
LAB_03f84524:
    uVar2 = FUN_03f83578(param_1,uVar3);
    uVar1 = (uint)(uVar2 >> 4) & 0xfffffff;
    break;
  case 0xb:
    uVar3 = 3;
LAB_03f84538:
    uVar2 = FUN_03f83578(param_1,uVar3);
    uVar1 = (uint)(uVar2 >> 3) & 0x1fffffff;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    goto switchD_03f84450_caseD_c;
  default:
    if (2 < *(uint *)((long)param_1 + 0x14)) {
      uVar2 = (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,3);
      uVar1 = 2;
      if ((uVar2 & 1) == 0) {
        uVar1 = 0;
      }
      uVar6 = uVar1 | uVar6;
    }
    goto switchD_03f84450_caseD_c;
  }
  uVar6 = uVar6 | uVar1 & 2;
switchD_03f84450_caseD_c:
  cVar5 = '\0';
  if ((*(char *)((long)param_1 + 9) + 1U & 0xe0) == 0) {
    cVar5 = *(char *)((long)param_1 + 9) + '\x01';
  }
LAB_03f84558:
  *(char *)((long)param_1 + 9) = cVar5;
  return uVar6;
}

