
long FUN_032f95c0(long param_1,long param_2,long param_3,uint param_4)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  byte *pbVar7;
  byte bVar8;
  
  if (*(char *)(param_1 + 0x85b48) != '\0') {
    iVar6 = 0;
    pbVar7 = (byte *)(param_2 + 1);
LAB_032f95f4:
    bVar8 = pbVar7[-1];
    if ((bVar8 == 0) && (*pbVar7 == 0)) goto LAB_032f96c0;
    bVar4 = iVar6 != 0;
    iVar6 = iVar6 + -1;
    if ((*(char *)(param_1 + 0x85b48) == '\x01') && (bVar4)) goto LAB_032f96c0;
    if (bVar8 == 0) {
      bVar8 = *pbVar7;
      if ((bVar8 - 0x61 < 0x1a) || ((bVar8 + 0x1f & 0xff) < 0x1d)) {
LAB_032f96a4:
        *pbVar7 = bVar8 - 0x20;
        pbVar7 = pbVar7 + 2;
        goto LAB_032f95f4;
      }
      if (bVar8 == 0xff) {
        pbVar7[-1] = 1;
        pbVar7[0] = 0x78;
      }
    }
    else {
      if (bVar8 == 4) {
        bVar8 = *pbVar7;
        if ((byte)(bVar8 - 0x30) < 0x20) goto LAB_032f96a4;
        if (bVar8 != 0x51) goto switchD_032f964c_caseD_6;
        *pbVar7 = 1;
        pbVar7 = pbVar7 + 2;
        goto LAB_032f95f4;
      }
      if (bVar8 == 1) {
        switch(*pbVar7) {
        case 5:
        case 7:
        case 0xd:
        case 0xf:
        case 0x19:
        case 0x1b:
        case 0x42:
        case 0x44:
        case 0x48:
        case 0x53:
        case 0x59:
        case 0x5b:
        case 0x61:
        case 0x65:
        case 0x6f:
        case 0x7a:
        case 0x7c:
        case 0x7e:
          *pbVar7 = *pbVar7 - 1;
          pbVar7 = pbVar7 + 2;
          break;
        default:
          goto switchD_032f964c_caseD_6;
        }
        goto LAB_032f95f4;
      }
    }
switchD_032f964c_caseD_6:
    pbVar7 = pbVar7 + 2;
    goto LAB_032f95f4;
  }
LAB_032f96c0:
  if (*(char *)(param_1 + 4) != '\x01') {
    return 0x8003;
  }
  lVar5 = 0;
  bVar4 = false;
  do {
    if (*(char *)(param_2 + lVar5) == '\0') {
      if ((*(char *)(param_2 + lVar5 + 1) == '\0') || (bVar4)) {
        *(undefined2 *)(param_3 + lVar5) = 0;
        if (bVar4) {
          cVar3 = *(char *)(param_2 + lVar5);
joined_r0x032f9754:
          if ((cVar3 != '\0') || (*(char *)(param_2 + lVar5 + 1) != '\0')) {
            lVar5 = 0x8024;
          }
        }
        return lVar5;
      }
    }
    else if (bVar4) {
      *(undefined2 *)(param_3 + lVar5) = 0;
      cVar3 = *(char *)(param_2 + lVar5);
      goto joined_r0x032f9754;
    }
    pcVar1 = (char *)(param_3 + lVar5);
    lVar2 = param_2 + lVar5;
    *pcVar1 = *(char *)(param_2 + lVar5);
    lVar5 = lVar5 + 2;
    if ((int)((param_4 & 0xffff) - 2) <= (int)lVar5) {
      bVar4 = true;
    }
    pcVar1[1] = *(char *)(lVar2 + 1);
  } while( true );
}

