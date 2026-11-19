
bool FUN_0386fd70(long *param_1)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_60;
  char *local_58;
  
  puVar2 = PTR_DAT_04bb2020;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  local_58 = "/";
  lVar7 = param_1[1];
  (**(code **)(*param_1 + 0x18))();
  uVar8 = 0;
  do {
    if (*(char *)(param_1[1] + uVar8) == '\0') {
LAB_0386fdf4:
      iVar3 = (int)uVar8;
joined_r0x0386fdf8:
      if (0 < iVar3) {
        uVar6 = (ulong)((int)uVar8 - 1);
        goto LAB_0386fe10;
      }
      break;
    }
    lVar4 = param_1[1] + uVar8;
    if (*(char *)(lVar4 + 1) == '\0') {
      uVar8 = uVar8 + 1;
      goto LAB_0386fdf4;
    }
    if (*(char *)(lVar4 + 2) == '\0') {
      uVar8 = uVar8 + 2;
      iVar3 = (int)uVar8;
      goto joined_r0x0386fdf8;
    }
    uVar8 = uVar8 + 3;
  } while (uVar8 != 0x80001);
  goto LAB_0386fe60;
  while (uVar8 = uVar8 + 1, iVar3 - 1 != uVar8) {
LAB_03870020:
    pcVar1 = (char *)(lVar7 + uVar8);
    (**(code **)(local_60 + 0x18))(&local_60);
    if ((pcVar1 == local_58) ||
       ((*pcVar1 == *local_58 && ((*pcVar1 == '\0' || (pcVar1[1] == local_58[1])))))) {
      if ((int)uVar8 != -1) goto LAB_038700b4;
      break;
    }
  }
  goto LAB_0387006c;
  while( true ) {
    uVar6 = uVar6 - 1;
    uVar8 = (ulong)(iVar3 - 1U);
    if (iVar3 - 1U == 0 || iVar3 < 1) break;
LAB_0386fe10:
    lVar4 = param_1[1];
    (**(code **)(local_60 + 0x18))(&local_60);
    iVar3 = (int)uVar8;
    if (((char *)(lVar4 + uVar6) == local_58) || (*(char *)(lVar4 + uVar6) == *local_58)) {
      if (iVar3 != 0) {
        iVar3 = iVar3 + -1;
        goto LAB_0386fec0;
      }
      break;
    }
  }
LAB_0386fe60:
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar4 = 0;
  do {
    if (*(char *)(param_1[1] + lVar4) == '\0') {
LAB_0386febc:
      iVar3 = (int)lVar4 + 1;
      goto LAB_0386fec0;
    }
    lVar5 = param_1[1] + lVar4;
    if (*(char *)(lVar5 + 1) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_0386febc;
    }
    if (*(char *)(lVar5 + 2) == '\0') {
      lVar4 = lVar4 + 2;
      goto LAB_0386febc;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  iVar3 = 1;
LAB_0386fec0:
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar4 = 0;
  do {
    if (*(char *)(param_1[1] + lVar4) == '\0') {
LAB_0386ff24:
      if (iVar3 != (int)lVar4 + 1) goto LAB_0386ff30;
      goto LAB_0386ffac;
    }
    lVar5 = param_1[1] + lVar4;
    if (*(char *)(lVar5 + 1) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_0386ff24;
    }
    if (*(char *)(lVar5 + 2) == '\0') {
      lVar4 = lVar4 + 2;
      goto LAB_0386ff24;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  if (iVar3 != 1) {
LAB_0386ff30:
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar5 = param_1[1];
    lVar4 = 0;
    do {
      if (*(char *)(lVar5 + lVar4) == '\0') goto LAB_0386ff8c;
      if (*(char *)(lVar5 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0386ff8c;
      }
      if (*(char *)(lVar5 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0386ff8c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0386ff8c:
    lVar7 = *(long *)(PTR_PTR_04bb2238 + 8);
    if (iVar3 < (int)lVar4 && -2 < iVar3) {
      lVar7 = lVar5 + (ulong)(iVar3 + 1);
    }
  }
LAB_0386ffac:
  lVar4 = 0;
  local_60 = puVar2 + 0x10;
  local_58 = "T_";
  do {
    if (*(char *)(lVar7 + lVar4) == '\0') {
LAB_0386fff0:
      iVar3 = (int)lVar4;
joined_r0x0386fff4:
      if (1 < iVar3) {
        uVar8 = 0;
        goto LAB_03870020;
      }
      break;
    }
    if (*(char *)(lVar7 + lVar4 + 1) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_0386fff0;
    }
    if (*(char *)(lVar7 + lVar4 + 2) == '\0') {
      iVar3 = (int)lVar4 + 2;
      goto joined_r0x0386fff4;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
LAB_0387006c:
  uVar6 = 0;
  uVar8 = 1;
  do {
    if (*(char *)(lVar7 + uVar6) == '\0') {
      uVar8 = uVar6 + 1;
      break;
    }
    lVar4 = lVar7 + uVar6;
    if (*(char *)(lVar4 + 1) == '\0') {
      uVar8 = uVar6 + 2;
      break;
    }
    uVar6 = uVar6 + 3;
    if (*(char *)(lVar4 + 2) == '\0') {
      uVar8 = uVar6;
      break;
    }
  } while (uVar6 != 0x80001);
LAB_038700b4:
  return (int)uVar8 == 0;
}

