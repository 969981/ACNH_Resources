
undefined8 FUN_0176d1a0(long *param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  
  (**(code **)(*param_1 + 0x18))();
  lVar7 = 0;
  do {
    if (*(char *)(param_1[1] + lVar7) == '\0') goto LAB_0176d21c;
    lVar2 = param_1[1] + lVar7;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_0176d21c;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_0176d21c;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_0176d21c:
  (**(code **)(DAT_0528cda0 + 0x18))(&DAT_0528cda0);
  lVar2 = 0;
  do {
    iVar6 = (int)lVar7;
    if (DAT_0528cda8[lVar2] == '\0') {
LAB_0176d274:
      iVar1 = (int)lVar2;
      if (iVar6 < iVar1) goto LAB_0176d330;
LAB_0176d28c:
      if ((int)lVar2 < 1) goto LAB_0176d310;
      uVar5 = 0;
      goto LAB_0176d2a0;
    }
    if (DAT_0528cda8[lVar2 + 1] == '\0') {
      lVar2 = lVar2 + 1;
      goto LAB_0176d274;
    }
    if (DAT_0528cda8[lVar2 + 2] == '\0') {
      lVar2 = lVar2 + 2;
      iVar1 = (int)lVar2;
      if (iVar1 <= iVar6) goto LAB_0176d28c;
      goto LAB_0176d330;
    }
    lVar2 = lVar2 + 3;
  } while (lVar2 != 0x80001);
  if (-1 < iVar6) {
LAB_0176d310:
    (**(code **)(DAT_0528cda0 + 0x18))(&DAT_0528cda0);
    return 1;
  }
  goto LAB_0176d330;
  while( true ) {
    pcVar3 = DAT_0528cdb8;
    lVar4 = lVar2;
    while( true ) {
      lVar4 = lVar4 + -1;
      if (*(char *)(lVar7 + uVar5) != *pcVar3) break;
      if ((*(char *)(lVar7 + uVar5) == '\0') || (lVar7 = lVar7 + 1, pcVar3 = pcVar3 + 1, lVar4 == 0)
         ) goto LAB_0176d48c;
    }
    uVar5 = uVar5 + 1;
    if (uVar5 == (iVar6 - iVar1) + 1) break;
LAB_0176d410:
    lVar7 = param_1[1];
    (**(code **)(DAT_0528cdb0 + 0x18))(&DAT_0528cdb0);
    if ((char *)(lVar7 + uVar5) == DAT_0528cdb8) {
LAB_0176d48c:
      if ((int)uVar5 != -1) {
        return 2;
      }
      break;
    }
  }
  goto LAB_0176d494;
  while( true ) {
    pcVar3 = DAT_0528cda8;
    lVar4 = lVar2;
    while( true ) {
      lVar4 = lVar4 + -1;
      if (*(char *)(lVar7 + uVar5) != *pcVar3) break;
      if ((*(char *)(lVar7 + uVar5) == '\0') || (lVar7 = lVar7 + 1, pcVar3 = pcVar3 + 1, lVar4 == 0)
         ) goto LAB_0176d328;
    }
    uVar5 = uVar5 + 1;
    if (uVar5 == (iVar6 - iVar1) + 1) break;
LAB_0176d2a0:
    lVar7 = param_1[1];
    (**(code **)(DAT_0528cda0 + 0x18))(&DAT_0528cda0);
    if ((char *)(lVar7 + uVar5) == DAT_0528cda8) {
LAB_0176d328:
      if ((int)uVar5 != -1) {
        return 1;
      }
      break;
    }
  }
LAB_0176d330:
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar7 = 0;
  do {
    if (*(char *)(param_1[1] + lVar7) == '\0') goto LAB_0176d38c;
    lVar2 = param_1[1] + lVar7;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_0176d38c;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_0176d38c;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_0176d38c:
  (**(code **)(DAT_0528cdb0 + 0x18))(&DAT_0528cdb0);
  lVar2 = 0;
  do {
    iVar6 = (int)lVar7;
    if (DAT_0528cdb8[lVar2] == '\0') {
LAB_0176d3e4:
      iVar1 = (int)lVar2;
      if (iVar6 < iVar1) goto LAB_0176d494;
LAB_0176d3fc:
      if ((int)lVar2 < 1) goto LAB_0176d478;
      uVar5 = 0;
      goto LAB_0176d410;
    }
    if (DAT_0528cdb8[lVar2 + 1] == '\0') {
      lVar2 = lVar2 + 1;
      goto LAB_0176d3e4;
    }
    if (DAT_0528cdb8[lVar2 + 2] == '\0') {
      lVar2 = lVar2 + 2;
      iVar1 = (int)lVar2;
      if (iVar1 <= iVar6) goto LAB_0176d3fc;
      goto LAB_0176d494;
    }
    lVar2 = lVar2 + 3;
  } while (lVar2 != 0x80001);
  if (-1 < iVar6) {
LAB_0176d478:
    (**(code **)(DAT_0528cdb0 + 0x18))(&DAT_0528cdb0);
    return 2;
  }
LAB_0176d494:
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar7 = 0;
  do {
    if (*(char *)(param_1[1] + lVar7) == '\0') goto LAB_0176d4fc;
    lVar2 = param_1[1] + lVar7;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_0176d4fc;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_0176d4fc;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_0176d4fc:
  (**(code **)(DAT_0528cdc0 + 0x18))(&DAT_0528cdc0);
  lVar2 = 0;
  do {
    iVar6 = (int)lVar7;
    if (DAT_0528cdc8[lVar2] == '\0') {
LAB_0176d554:
      iVar1 = (int)lVar2;
      if (iVar6 < iVar1) {
        return 0;
      }
LAB_0176d56c:
      if (0 < (int)lVar2) {
        uVar5 = 0;
        while( true ) {
          lVar7 = param_1[1];
          (**(code **)(DAT_0528cdc0 + 0x18))(&DAT_0528cdc0);
          if ((char *)(lVar7 + uVar5) == DAT_0528cdc8) break;
          pcVar3 = DAT_0528cdc8;
          lVar4 = lVar2;
          while( true ) {
            lVar4 = lVar4 + -1;
            if (*(char *)(lVar7 + uVar5) != *pcVar3) break;
            if ((*(char *)(lVar7 + uVar5) == '\0') ||
               (lVar7 = lVar7 + 1, pcVar3 = pcVar3 + 1, lVar4 == 0)) goto LAB_0176d600;
          }
          uVar5 = uVar5 + 1;
          if (uVar5 == (iVar6 - iVar1) + 1) {
            return 0;
          }
        }
LAB_0176d600:
        if ((int)uVar5 == -1) {
          return 0;
        }
        return 3;
      }
      goto LAB_0176d5ec;
    }
    if (DAT_0528cdc8[lVar2 + 1] == '\0') {
      lVar2 = lVar2 + 1;
      goto LAB_0176d554;
    }
    if (DAT_0528cdc8[lVar2 + 2] == '\0') {
      lVar2 = lVar2 + 2;
      iVar1 = (int)lVar2;
      if (iVar6 < iVar1) {
        return 0;
      }
      goto LAB_0176d56c;
    }
    lVar2 = lVar2 + 3;
  } while (lVar2 != 0x80001);
  if (iVar6 < 0) {
    return 0;
  }
LAB_0176d5ec:
  (**(code **)(DAT_0528cdc0 + 0x18))(&DAT_0528cdc0);
  return 3;
}

