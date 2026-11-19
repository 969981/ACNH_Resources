
long FUN_038f2a70(long param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  undefined **local_290;
  char *pcStack_288;
  undefined **local_280;
  char *local_278;
  int local_270;
  char local_26c [255];
  undefined1 local_16d;
  undefined **local_168;
  char *local_160;
  int local_158;
  char local_154 [255];
  undefined1 local_55;
  undefined8 local_38;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  if (((char *)param_2[1] != "/") && (*(char *)param_2[1] != '/')) {
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    if (((char *)param_2[1] != "./") && (*(char *)param_2[1] != '.')) {
      lVar7 = FUN_038f2fa0(param_1,param_2);
      return lVar7;
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar7 = 0;
    do {
      if (((*(char *)(param_2[1] + lVar7) == '\0') ||
          (lVar5 = param_2[1] + lVar7, *(char *)(lVar5 + 1) == '\0')) ||
         (*(char *)(lVar5 + 2) == '\0')) break;
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = FUN_038f2fa0(param_1,local_154 + 0x124);
    return lVar7;
  }
  do {
    lVar7 = param_1;
    param_1 = *(long *)(lVar7 + 8) + -8;
  } while (*(long *)(lVar7 + 8) != 0);
  local_158 = 0x100;
  local_55 = 0;
  local_168 = &PTR_LAB_04914140;
  local_160 = local_154;
  local_38 = lVar7;
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar8 = (char *)param_2[1];
  if (local_154 != pcVar8) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_038f2cb0;
      lVar1 = param_2[1] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_038f2cb0;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_038f2cb0;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_038f2cb0:
    iVar6 = (int)lVar5;
    if (local_158 <= (int)lVar5) {
      iVar6 = local_158 + -1;
    }
    memcpy(local_154,pcVar8,(long)iVar6);
    local_154[iVar6] = '\0';
  }
  puVar2 = PTR_PTR_04bb2238;
  local_270 = 0x100;
  local_16d = 0;
  local_278 = local_26c;
  local_26c[0] = '\0';
  local_280 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
  local_168 = local_280;
  do {
    (*(code *)local_168[3])(&local_168);
    pcVar8 = local_278;
    lVar5 = 0;
    do {
      if (local_160[lVar5] == '\0') {
LAB_038f2d94:
        iVar6 = (int)lVar5;
joined_r0x038f2d98:
        if (0 < iVar6) {
          pcVar4 = local_160 + 1;
          goto LAB_038f2db4;
        }
        break;
      }
      if (local_160[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_038f2d94;
      }
      if (local_160[lVar5 + 2] == '\0') {
        iVar6 = (int)lVar5 + 2;
        goto joined_r0x038f2d98;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    pcVar4 = *(char **)(puVar2 + 8);
LAB_038f2db4:
    if (local_278 != pcVar4) {
      lVar5 = 0;
      do {
        if (pcVar4[lVar5] == '\0') goto LAB_038f2e00;
        if (pcVar4[lVar5 + 1] == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_038f2e00;
        }
        if (pcVar4[lVar5 + 2] == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_038f2e00;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_038f2e00:
      iVar6 = (int)lVar5;
      if (local_270 <= (int)lVar5) {
        iVar6 = local_270 + -1;
      }
      memcpy(local_278,pcVar4,(long)iVar6);
      pcVar8[iVar6] = '\0';
      pcVar4 = local_278;
    }
    if (*pcVar4 == '\0') {
      return lVar7;
    }
    local_290 = &PTR_LAB_048f9770;
    local_38 = 0;
    if (*(long *)(lVar7 + 0x10) != 0) {
      local_38 = *(long *)(lVar7 + 0x10) + -8;
    }
    pcStack_288 = pcVar4;
    uVar3 = FUN_038f3570(&local_38,&local_290);
    lVar7 = local_38;
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    (**(code **)(*(long *)(local_38 + 0x28) + 0x18))();
    uVar3 = 0;
    do {
      if (*(char *)(*(long *)(lVar7 + 0x30) + uVar3) == '\0') {
LAB_038f2eb4:
        uVar3 = uVar3 & 0xffffffff;
        goto LAB_038f2eb8;
      }
      lVar5 = *(long *)(lVar7 + 0x30) + uVar3;
      if (*(char *)(lVar5 + 1) == '\0') {
        uVar3 = uVar3 + 1;
        goto LAB_038f2eb4;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        uVar3 = uVar3 + 2;
        goto LAB_038f2eb4;
      }
      uVar3 = uVar3 + 3;
    } while (uVar3 != 0x80001);
    uVar3 = 0;
LAB_038f2eb8:
    (*(code *)local_280[3])(&local_280);
    pcVar8 = local_160;
    lVar5 = 0;
    do {
      if (local_278[lVar5] == '\0') goto LAB_038f2f14;
      if (local_278[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_038f2f14;
      }
      if (local_278[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_038f2f14;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_038f2f14:
    pcVar4 = *(char **)(puVar2 + 8);
    if ((int)uVar3 <= (int)lVar5 && -1 < (int)uVar3) {
      pcVar4 = local_278 + uVar3;
    }
    if (local_160 != pcVar4) {
      lVar5 = 0;
      do {
        if (pcVar4[lVar5] == '\0') goto LAB_038f2d1c;
        if (pcVar4[lVar5 + 1] == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_038f2d1c;
        }
        if (pcVar4[lVar5 + 2] == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_038f2d1c;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_038f2d1c:
      iVar6 = (int)lVar5;
      if (local_158 <= (int)lVar5) {
        iVar6 = local_158 + -1;
      }
      memcpy(local_160,pcVar4,(long)iVar6);
      pcVar8[iVar6] = '\0';
      pcVar4 = local_160;
    }
    if (*pcVar4 == '\0') {
      return lVar7;
    }
  } while( true );
}

