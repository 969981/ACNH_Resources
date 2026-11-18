
long FUN_032ef9a0(undefined8 param_1,long param_2,long param_3,char *param_4,uint param_5)

{
  char *pcVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined1 uVar7;
  
  if (*(char *)(param_2 + 4) != '\x01') {
    return 0x8003;
  }
  lVar6 = 0;
  bVar5 = false;
  do {
    if (*(char *)(param_3 + lVar6) == '\0') {
      if ((*(char *)(param_3 + lVar6 + 1) == '\0') || (bVar5)) break;
    }
    else if (bVar5) {
      (param_4 + lVar6)[0] = '\0';
      (param_4 + lVar6)[1] = '\0';
      if (*(char *)(param_3 + lVar6) != '\0') {
        return 0x8024;
      }
      goto LAB_032efa38;
    }
    pcVar1 = param_4 + lVar6;
    lVar2 = param_3 + lVar6;
    *pcVar1 = *(char *)(param_3 + lVar6);
    lVar6 = lVar6 + 2;
    if ((int)((param_5 & 0xffff) - 2) <= (int)lVar6) {
      bVar5 = true;
    }
    pcVar1[1] = *(char *)(lVar2 + 1);
  } while( true );
  (param_4 + lVar6)[0] = '\0';
  (param_4 + lVar6)[1] = '\0';
  if (bVar5) {
    if (*(char *)(param_3 + lVar6) != '\0') {
      return 0x8024;
    }
LAB_032efa38:
    if (*(char *)(param_3 + lVar6 + 1) != '\0') {
      return 0x8024;
    }
  }
  bVar3 = *(byte *)(param_2 + 2);
  if (((0x30 < bVar3) || ((1L << ((ulong)bVar3 & 0x3f) & 0x1124924800092U) == 0)) && (bVar3 != 0xfe)
     ) {
    *(undefined1 *)(param_2 + 0x85b48) = 0;
    return lVar6;
  }
  *(undefined1 *)(param_2 + 0x85b48) = 0;
  cVar4 = *param_4;
  if (cVar4 == '\0') {
    bVar3 = param_4[1];
    if (bVar3 == 0) {
      return lVar6;
    }
    if ((0x19 < bVar3 - 0x41) && (0x1c < (byte)(bVar3 + 0x3f))) {
      return lVar6;
    }
  }
  else {
    if (cVar4 != '\x04') {
      if (cVar4 != '\x01') {
        return lVar6;
      }
      switch(param_4[1]) {
      case '\x04':
      case '\x06':
      case '\f':
      case '\x0e':
      case '\x18':
      case '\x1a':
      case 'A':
      case 'C':
      case 'G':
      case 'R':
      case 'X':
      case 'Z':
      case '`':
      case 'd':
      case 'n':
      case 'x':
      case 'y':
      case '{':
      case '}':
        goto switchD_032efac0_caseD_4;
      default:
        return lVar6;
      }
    }
    if (((byte)param_4[1] != 1) && (0x1f < (byte)param_4[1] - 0x10)) {
      return lVar6;
    }
  }
switchD_032efac0_caseD_4:
  cVar4 = param_4[2];
  if (cVar4 == '\0') {
    bVar3 = param_4[3];
    if ((bVar3 != 0) && ((bVar3 - 0x41 < 0x1a || ((byte)(bVar3 + 0x3f) < 0x1d)))) {
switchD_032efb40_caseD_4:
      uVar7 = 2;
      goto LAB_032efba8;
    }
  }
  else if (cVar4 == '\x04') {
    if (((byte)param_4[3] == 1) || ((byte)param_4[3] - 0x10 < 0x20)) goto switchD_032efb40_caseD_4;
  }
  else if (cVar4 == '\x01') {
    switch(param_4[3]) {
    case '\x04':
    case '\x06':
    case '\f':
    case '\x0e':
    case '\x18':
    case '\x1a':
    case 'A':
    case 'C':
    case 'G':
    case 'R':
    case 'X':
    case 'Z':
    case '`':
    case 'd':
    case 'n':
    case 'x':
    case 'y':
    case '{':
    case '}':
      goto switchD_032efb40_caseD_4;
    }
  }
  uVar7 = 1;
LAB_032efba8:
  *(undefined1 *)(param_2 + 0x85b48) = uVar7;
  return lVar6;
}

