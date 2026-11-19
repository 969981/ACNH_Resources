
long FUN_038f2fa0(long param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  int iVar10;
  char *pcVar11;
  undefined *local_2b8;
  char *pcStack_2b0;
  undefined *local_2a8;
  char *local_2a0;
  long local_298;
  undefined *local_290;
  char *local_288;
  int local_280;
  char local_27c [255];
  undefined1 local_17d;
  undefined *local_178;
  char *local_170;
  int local_168;
  char local_164 [255];
  undefined1 local_65;
  
  local_65 = 0;
  local_164[0] = '\0';
  local_168 = 0x100;
  local_280 = 0x100;
  local_17d = 0;
  local_170 = local_164;
  puVar2 = PTR_DAT_04bb21f8 + 0x10;
  local_290 = PTR_DAT_04bb4520 + 0x10;
  local_288 = local_27c;
  local_178 = puVar2;
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar11 = (char *)param_2[1];
  if (local_27c != pcVar11) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar9 = 0;
    do {
      if (*(char *)(param_2[1] + lVar9) == '\0') goto LAB_038f308c;
      lVar4 = param_2[1] + lVar9;
      if (*(char *)(lVar4 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_038f308c;
      }
      if (*(char *)(lVar4 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_038f308c;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_038f308c:
    iVar10 = (int)lVar9;
    if (local_280 <= (int)lVar9) {
      iVar10 = local_280 + -1;
    }
    memcpy(local_27c,pcVar11,(long)iVar10);
    local_27c[iVar10] = '\0';
  }
  puVar6 = PTR_PTR_04bb2238;
  puVar5 = PTR_DAT_04bb2020;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  local_290 = puVar2;
LAB_038f3108:
  do {
    while( true ) {
      local_2a0 = "..";
      local_2a8 = puVar3;
      (**(code **)(local_290 + 0x18))(&local_290);
      (**(code **)(local_290 + 0x18))(&local_290);
      pcVar11 = local_288;
      (**(code **)(local_2a8 + 0x18))(&local_2a8);
      if ((pcVar11 == local_2a0) ||
         ((*local_288 == *local_2a0 && ((*local_288 == '\0' || (local_288[1] == local_2a0[1]))))))
      break;
      if (*local_288 == '\0') goto LAB_038f3540;
      local_298 = 0;
      if (*(long *)(param_1 + 0x10) != 0) {
        local_298 = *(long *)(param_1 + 0x10) + -8;
      }
      local_2b8 = puVar5 + 0x10;
      pcStack_2b0 = local_288;
      uVar7 = FUN_038f3570(&local_298,&local_2b8);
      param_1 = local_298;
      if ((uVar7 & 1) == 0) {
LAB_038f353c:
        param_1 = 0;
LAB_038f3540:
        return param_1;
      }
      (**(code **)(*(long *)(local_298 + 0x28) + 0x18))();
      uVar7 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x30) + uVar7) == '\0') {
LAB_038f32c0:
          uVar7 = uVar7 & 0xffffffff;
          goto LAB_038f32c4;
        }
        lVar9 = *(long *)(param_1 + 0x30) + uVar7;
        if (*(char *)(lVar9 + 1) == '\0') {
          uVar7 = uVar7 + 1;
          goto LAB_038f32c0;
        }
        if (*(char *)(lVar9 + 2) == '\0') {
          uVar7 = uVar7 + 2;
          goto LAB_038f32c0;
        }
        uVar7 = uVar7 + 3;
      } while (uVar7 != 0x80001);
      uVar7 = 0;
LAB_038f32c4:
      (**(code **)(local_290 + 0x18))(&local_290);
      pcVar11 = local_170;
      lVar9 = 0;
      do {
        if (local_288[lVar9] == '\0') goto LAB_038f331c;
        if (local_288[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_038f331c;
        }
        if (local_288[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_038f331c;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_038f331c:
      pcVar8 = *(char **)(puVar6 + 8);
      if ((int)uVar7 <= (int)lVar9 && -1 < (int)uVar7) {
        pcVar8 = local_288 + uVar7;
      }
      if (local_170 != pcVar8) {
        lVar9 = 0;
        do {
          if (pcVar8[lVar9] == '\0') goto LAB_038f345c;
          if (pcVar8[lVar9 + 1] == '\0') {
            lVar9 = lVar9 + 1;
            goto LAB_038f345c;
          }
          if (pcVar8[lVar9 + 2] == '\0') {
            lVar9 = lVar9 + 2;
            goto LAB_038f345c;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_038f345c:
        iVar10 = (int)lVar9;
        if (local_168 <= (int)lVar9) {
          iVar10 = local_168 + -1;
        }
        memcpy(local_170,pcVar8,(long)iVar10);
        pcVar11[iVar10] = '\0';
        pcVar8 = local_170;
      }
      if (*pcVar8 == '\0') goto LAB_038f3540;
      (**(code **)(local_178 + 0x18))(&local_178);
      lVar9 = 0;
      do {
        if (local_170[lVar9] == '\0') {
LAB_038f34d4:
          iVar10 = (int)lVar9;
joined_r0x038f34d8:
          if (0 < iVar10) {
            pcVar11 = local_170 + 1;
            goto LAB_038f34f4;
          }
          break;
        }
        if (local_170[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_038f34d4;
        }
        if (local_170[lVar9 + 2] == '\0') {
          iVar10 = (int)lVar9 + 2;
          goto joined_r0x038f34d8;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      pcVar11 = *(char **)(puVar6 + 8);
LAB_038f34f4:
      if (local_288 != pcVar11) {
        lVar9 = 0;
        do {
          if (pcVar11[lVar9] == '\0') goto LAB_038f30dc;
          if (pcVar11[lVar9 + 1] == '\0') goto LAB_038f30d8;
          if (pcVar11[lVar9 + 2] == '\0') goto LAB_038f3534;
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        goto LAB_038f352c;
      }
    }
    plVar1 = (long *)(param_1 + 8);
    param_1 = *plVar1 + -8;
    if (*plVar1 == 0) goto LAB_038f353c;
    local_298 = param_1;
    (**(code **)(local_290 + 0x18))(&local_290);
    pcVar11 = local_170;
    lVar9 = 0;
    do {
      if (local_288[lVar9] == '\0') {
LAB_038f3254:
        iVar10 = (int)lVar9;
joined_r0x038f3258:
        if (1 < iVar10) {
          pcVar8 = local_288 + 2;
          goto LAB_038f3274;
        }
        break;
      }
      if (local_288[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_038f3254;
      }
      if (local_288[lVar9 + 2] == '\0') {
        iVar10 = (int)lVar9 + 2;
        goto joined_r0x038f3258;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    pcVar8 = *(char **)(puVar6 + 8);
LAB_038f3274:
    if (local_170 != pcVar8) {
      lVar9 = 0;
      do {
        if (pcVar8[lVar9] == '\0') goto LAB_038f337c;
        if (pcVar8[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_038f337c;
        }
        if (pcVar8[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_038f337c;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_038f337c:
      iVar10 = (int)lVar9;
      if (local_168 <= (int)lVar9) {
        iVar10 = local_168 + -1;
      }
      memcpy(local_170,pcVar8,(long)iVar10);
      pcVar11[iVar10] = '\0';
    }
    (**(code **)(local_178 + 0x18))(&local_178);
    lVar9 = 0;
    do {
      if (local_170[lVar9] == '\0') {
LAB_038f33f0:
        iVar10 = (int)lVar9;
joined_r0x038f33f4:
        if (0 < iVar10) {
          pcVar11 = local_170 + 1;
          goto LAB_038f3414;
        }
        break;
      }
      if (local_170[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_038f33f0;
      }
      if (local_170[lVar9 + 2] == '\0') {
        iVar10 = (int)lVar9 + 2;
        goto joined_r0x038f33f4;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    pcVar11 = *(char **)(puVar6 + 8);
LAB_038f3414:
  } while (local_288 == pcVar11);
  lVar9 = 0;
  do {
    if (pcVar11[lVar9] == '\0') goto LAB_038f30dc;
    if (pcVar11[lVar9 + 1] == '\0') goto LAB_038f30d8;
    if (pcVar11[lVar9 + 2] == '\0') goto LAB_038f3534;
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
LAB_038f352c:
  lVar9 = 0;
LAB_038f30dc:
  pcVar8 = local_288;
  iVar10 = (int)lVar9;
  if (local_280 <= (int)lVar9) {
    iVar10 = local_280 + -1;
  }
  memcpy(local_288,pcVar11,(long)iVar10);
  pcVar8[iVar10] = '\0';
  goto LAB_038f3108;
LAB_038f30d8:
  lVar9 = lVar9 + 1;
  goto LAB_038f30dc;
LAB_038f3534:
  lVar9 = lVar9 + 2;
  goto LAB_038f30dc;
}

