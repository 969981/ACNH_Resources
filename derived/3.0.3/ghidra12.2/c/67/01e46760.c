
void FUN_01e46760(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  undefined8 local_70;
  char *local_68;
  
  puVar3 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_68 = "IsHalloweenLessThanThreeDays";
  local_70 = puVar1;
  iVar4 = FUN_0273ea30(&local_70);
  if (iVar4 != 1) {
    return;
  }
  lVar2 = param_1 + 0x3e0;
  local_68 = "sza";
  local_70 = puVar1;
  (**(code **)(*(long *)(param_1 + 0x3e0) + 0x18))(lVar2);
  lVar10 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 1000) + lVar10) == '\0') goto LAB_01e4681c;
    lVar7 = *(long *)(param_1 + 1000) + lVar10;
    if (*(char *)(lVar7 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_01e4681c;
    }
    if (*(char *)(lVar7 + 2) == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_01e4681c;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_01e4681c:
  (**(code **)(local_70 + 0x18))(&local_70);
  lVar7 = 0;
  do {
    iVar4 = (int)lVar10;
    if (local_68[lVar7] == '\0') {
LAB_01e46868:
      iVar6 = (int)lVar7;
      if (iVar4 < iVar6) goto LAB_01e46914;
LAB_01e46880:
      if ((int)lVar7 < 1) goto LAB_01e468f8;
      uVar5 = 0;
      goto LAB_01e46894;
    }
    if (local_68[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_01e46868;
    }
    if (local_68[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      iVar6 = (int)lVar7;
      if (iVar6 <= iVar4) goto LAB_01e46880;
      goto LAB_01e46914;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  if (-1 < iVar4) {
LAB_01e468f8:
    (**(code **)(local_70 + 0x18))(&local_70);
LAB_01e46970:
    local_70 = (undefined *)0x32d4;
    goto LAB_01e46eb4;
  }
  goto LAB_01e46914;
  while( true ) {
    pcVar8 = local_68;
    lVar9 = lVar7;
    while( true ) {
      lVar9 = lVar9 + -1;
      if (*(char *)(lVar10 + uVar5) != *pcVar8) break;
      if ((*(char *)(lVar10 + uVar5) == '\0') ||
         (lVar10 = lVar10 + 1, pcVar8 = pcVar8 + 1, lVar9 == 0)) goto LAB_01e46a7c;
    }
    uVar5 = uVar5 + 1;
    if (uVar5 == (iVar4 - iVar6) + 1) break;
LAB_01e46a00:
    lVar10 = *(long *)(param_1 + 1000);
    (**(code **)(local_70 + 0x18))(&local_70);
    if ((char *)(lVar10 + uVar5) == local_68) {
LAB_01e46a7c:
      if ((int)uVar5 != -1) goto LAB_01e46eb0;
      break;
    }
  }
  goto LAB_01e46a84;
  while( true ) {
    pcVar8 = local_68;
    lVar9 = lVar7;
    while( true ) {
      lVar9 = lVar9 + -1;
      if (*(char *)(lVar10 + uVar5) != *pcVar8) break;
      if ((*(char *)(lVar10 + uVar5) == '\0') ||
         (lVar10 = lVar10 + 1, pcVar8 = pcVar8 + 1, lVar9 == 0)) goto LAB_01e46bdc;
    }
    uVar5 = uVar5 + 1;
    if (uVar5 == (iVar4 - iVar6) + 1) break;
LAB_01e46b64:
    lVar10 = *(long *)(param_1 + 1000);
    (**(code **)(local_70 + 0x18))(&local_70);
    if ((char *)(lVar10 + uVar5) == local_68) {
LAB_01e46bdc:
      if ((int)uVar5 != -1) goto LAB_01e46c40;
      break;
    }
  }
  goto LAB_01e46be4;
  while( true ) {
    pcVar8 = local_68;
    lVar9 = lVar7;
    while( true ) {
      lVar9 = lVar9 + -1;
      if (*(char *)(lVar10 + uVar5) != *pcVar8) break;
      if ((*(char *)(lVar10 + uVar5) == '\0') ||
         (lVar10 = lVar10 + 1, pcVar8 = pcVar8 + 1, lVar9 == 0)) goto LAB_01e46d4c;
    }
    uVar5 = uVar5 + 1;
    if (uVar5 == (iVar4 - iVar6) + 1) break;
LAB_01e46cd0:
    lVar10 = *(long *)(param_1 + 1000);
    (**(code **)(local_70 + 0x18))(&local_70);
    if ((char *)(lVar10 + uVar5) == local_68) {
LAB_01e46d4c:
      if ((int)uVar5 != -1) goto LAB_01e46dac;
      break;
    }
  }
  goto LAB_01e46d54;
  while (uVar5 = uVar5 + 1, (int)lVar10 - 2 != uVar5) {
LAB_01e46de0:
    pcVar8 = (char *)(*(long *)(param_1 + 1000) + uVar5);
    (**(code **)(local_70 + 0x18))(&local_70);
    if ((pcVar8 == local_68) ||
       ((*pcVar8 == *local_68 &&
        ((*pcVar8 == '\0' ||
         ((pcVar8[1] == local_68[1] && ((pcVar8[1] == '\0' || (pcVar8[2] == local_68[2])))))))))) {
      if ((int)uVar5 != -1) {
        local_70 = (undefined *)0x345f;
        goto LAB_01e46eb4;
      }
      break;
    }
  }
  goto LAB_01e46e44;
  while( true ) {
    pcVar8 = local_68;
    lVar9 = lVar7;
    while( true ) {
      lVar9 = lVar9 + -1;
      if (*(char *)(lVar10 + uVar5) != *pcVar8) break;
      if ((*(char *)(lVar10 + uVar5) == '\0') ||
         (lVar10 = lVar10 + 1, pcVar8 = pcVar8 + 1, lVar9 == 0)) goto LAB_01e4690c;
    }
    uVar5 = uVar5 + 1;
    if (uVar5 == (iVar4 - iVar6) + 1) break;
LAB_01e46894:
    lVar10 = *(long *)(param_1 + 1000);
    (**(code **)(local_70 + 0x18))(&local_70);
    if ((char *)(lVar10 + uVar5) == local_68) {
LAB_01e4690c:
      if ((int)uVar5 != -1) goto LAB_01e46970;
      break;
    }
  }
LAB_01e46914:
  local_70 = puVar3 + 0x10;
  local_68 = "rco";
  (**(code **)(*(long *)(param_1 + 0x3e0) + 0x18))(lVar2);
  lVar10 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 1000) + lVar10) == '\0') goto LAB_01e46984;
    lVar7 = *(long *)(param_1 + 1000) + lVar10;
    if (*(char *)(lVar7 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_01e46984;
    }
    if (*(char *)(lVar7 + 2) == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_01e46984;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_01e46984:
  (**(code **)(local_70 + 0x18))(&local_70);
  lVar7 = 0;
  do {
    iVar4 = (int)lVar10;
    if (local_68[lVar7] == '\0') {
LAB_01e469d4:
      iVar6 = (int)lVar7;
      if (iVar4 < iVar6) goto LAB_01e46a84;
LAB_01e469ec:
      if ((int)lVar7 < 1) goto LAB_01e46a68;
      uVar5 = 0;
      goto LAB_01e46a00;
    }
    if (local_68[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_01e469d4;
    }
    if (local_68[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      iVar6 = (int)lVar7;
      if (iVar6 <= iVar4) goto LAB_01e469ec;
      goto LAB_01e46a84;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  if (iVar4 < 0) {
LAB_01e46a84:
    local_70 = puVar3 + 0x10;
    local_68 = "rct";
    (**(code **)(*(long *)(param_1 + 0x3e0) + 0x18))(lVar2);
    lVar10 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 1000) + lVar10) == '\0') goto LAB_01e46aec;
      lVar7 = *(long *)(param_1 + 1000) + lVar10;
      if (*(char *)(lVar7 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_01e46aec;
      }
      if (*(char *)(lVar7 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_01e46aec;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_01e46aec:
    (**(code **)(local_70 + 0x18))(&local_70);
    lVar7 = 0;
    do {
      iVar4 = (int)lVar10;
      if (local_68[lVar7] == '\0') {
LAB_01e46b38:
        iVar6 = (int)lVar7;
        if (iVar4 < iVar6) goto LAB_01e46be4;
LAB_01e46b50:
        if ((int)lVar7 < 1) goto LAB_01e46bc8;
        uVar5 = 0;
        goto LAB_01e46b64;
      }
      if (local_68[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01e46b38;
      }
      if (local_68[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        iVar6 = (int)lVar7;
        if (iVar6 <= iVar4) goto LAB_01e46b50;
        goto LAB_01e46be4;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    if (-1 < iVar4) {
LAB_01e46bc8:
      (**(code **)(local_70 + 0x18))(&local_70);
LAB_01e46c40:
      local_70 = (undefined *)0x32e0;
      goto LAB_01e46eb4;
    }
LAB_01e46be4:
    local_70 = puVar3 + 0x10;
    local_68 = "rcm";
    (**(code **)(*(long *)(param_1 + 0x3e0) + 0x18))(lVar2);
    lVar10 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 1000) + lVar10) == '\0') goto LAB_01e46c54;
      lVar7 = *(long *)(param_1 + 1000) + lVar10;
      if (*(char *)(lVar7 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_01e46c54;
      }
      if (*(char *)(lVar7 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_01e46c54;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_01e46c54:
    (**(code **)(local_70 + 0x18))(&local_70);
    lVar7 = 0;
    do {
      iVar4 = (int)lVar10;
      if (local_68[lVar7] == '\0') {
LAB_01e46ca4:
        iVar6 = (int)lVar7;
        if (iVar4 < iVar6) goto LAB_01e46d54;
LAB_01e46cbc:
        if ((int)lVar7 < 1) goto LAB_01e46d38;
        uVar5 = 0;
        goto LAB_01e46cd0;
      }
      if (local_68[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01e46ca4;
      }
      if (local_68[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        iVar6 = (int)lVar7;
        if (iVar6 <= iVar4) goto LAB_01e46cbc;
        goto LAB_01e46d54;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    if (-1 < iVar4) {
LAB_01e46d38:
      (**(code **)(local_70 + 0x18))(&local_70);
LAB_01e46dac:
      local_70 = (undefined *)0x32df;
      goto LAB_01e46eb4;
    }
LAB_01e46d54:
    local_70 = puVar3 + 0x10;
    local_68 = "dod";
    (**(code **)(*(long *)(param_1 + 0x3e0) + 0x18))(lVar2);
    lVar10 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 1000) + lVar10) == '\0') {
LAB_01e46dc0:
        if (2 < (int)lVar10) {
          uVar5 = 0;
          goto LAB_01e46de0;
        }
        break;
      }
      lVar7 = *(long *)(param_1 + 1000) + lVar10;
      if (*(char *)(lVar7 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_01e46dc0;
      }
      if (*(char *)(lVar7 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_01e46dc0;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
LAB_01e46e44:
    local_68 = "hgh";
    local_70 = puVar3 + 0x10;
    uVar5 = FUN_0144b250(lVar2,&local_70);
    if ((uVar5 & 1) != 0) {
      local_70 = (undefined *)0x32de;
      goto LAB_01e46eb4;
    }
    local_68 = "kpgB";
    local_70 = puVar3 + 0x10;
    uVar5 = FUN_0144b250(lVar2,&local_70);
    if ((uVar5 & 1) != 0) {
      local_70 = (undefined *)0x3455;
      goto LAB_01e46eb4;
    }
    local_68 = "kpmB";
    local_70 = puVar3 + 0x10;
    uVar5 = FUN_0144b250(lVar2,&local_70);
    if ((uVar5 & 1) == 0) {
      local_68 = "kpsB";
      local_70 = puVar3 + 0x10;
      uVar5 = FUN_0144b250(lVar2,&local_70);
      if ((uVar5 & 1) == 0) {
        return;
      }
      local_70 = (undefined *)0x346a;
      goto LAB_01e46eb4;
    }
  }
  else {
LAB_01e46a68:
    (**(code **)(local_70 + 0x18))(&local_70);
  }
LAB_01e46eb0:
  local_70 = (undefined *)0x3454;
LAB_01e46eb4:
  FUN_0277d4ac(&local_70);
  *(undefined4 *)(param_2 + 0x10) = (undefined4)local_70;
  *(undefined4 *)(param_2 + 0x14) = local_70._4_4_;
  return;
}

