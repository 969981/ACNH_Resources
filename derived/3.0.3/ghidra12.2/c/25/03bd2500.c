
void FUN_03bd2500(long param_1,int param_2,undefined8 param_3,long *param_4,long *param_5,
                 long param_6,long param_7,uint param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *local_448;
  undefined1 *local_440;
  undefined4 local_438;
  undefined1 local_434 [255];
  undefined1 local_335;
  long local_330;
  char *local_328;
  undefined *local_298;
  undefined1 *local_290;
  undefined4 local_288;
  undefined1 local_284 [255];
  undefined1 local_185;
  undefined *local_180;
  undefined1 *local_178;
  undefined4 local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  
  puVar15 = PTR_DAT_04bb21f8;
  local_6d = 0;
  local_170 = 0x100;
  local_16c[0] = 0;
  local_288 = 0x100;
  local_178 = local_16c;
  puVar1 = (undefined8 *)&UNK_0408ef8a;
  if ((param_8 & 1) == 0) {
    puVar1 = &DAT_0407ebb1;
  }
  local_298 = PTR_DAT_04bb21f8 + 0x10;
  local_290 = local_284;
  local_185 = 0;
  local_284[0] = 0;
  local_180 = local_298;
  if ((*(long *)(param_7 + 0xa8) == 0) ||
     (*(int *)(param_7 + 0xb0) != *(int *)(*(long *)(param_7 + 0xa8) + 0x34))) {
    local_328 = "(none)";
LAB_03bd26e8:
    FUN_038d13f0(&local_298,local_328);
  }
  else {
    lVar4 = FUN_00322a20();
    if (lVar4 != 0) {
      plVar5 = *(long **)(param_1 + 0x9a0);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x60))(plVar5,&local_180,lVar4);
      }
      FUN_0074fda4(&local_448," E:%-2d C:%-2d G:%-3d S:%-3d ",*(undefined4 *)(lVar4 + 0x18c),
                   *(undefined4 *)(lVar4 + 0x198),*(undefined4 *)(lVar4 + 0x19c),
                   *(undefined4 *)(lVar4 + 0x1a0));
      lVar13 = *(long *)(param_6 + 0x30);
      lVar14 = *(long *)(param_7 + 0x28);
      (**(code **)(local_448 + 0x18))(&local_448);
      uVar9 = *(ulong *)PTR_DAT_04bb38c8 | (ulong)**(uint **)(param_6 + 0x30);
      uVar12 = uVar9 + 0x100000000;
      if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)**(uint **)(param_6 + 0x30)) {
        uVar12 = uVar9;
      }
      if (lVar13 == lVar14) {
        FUN_038d13f0(&local_298,"%-23s %s%s",local_440,puVar1,uVar12);
      }
      else {
        uVar8 = *(ulong *)PTR_DAT_04bb38c8 | (ulong)**(uint **)(param_7 + 0x28);
        uVar9 = uVar8 + 0x100000000;
        if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)**(uint **)(param_7 + 0x28)) {
          uVar9 = uVar8;
        }
        FUN_038d13f0(&local_298,"%-23s %s%s -> %s",local_440,puVar1,uVar12,uVar9);
      }
      puVar15 = PTR_DAT_04bb21f8;
      FUN_0074fda4((double)(float)*(undefined8 *)(lVar4 + 0xa0),
                   (double)(float)((ulong)*(undefined8 *)(lVar4 + 0xa0) >> 0x20),
                   (double)(float)*(undefined8 *)(lVar4 + 0xa8),&local_330," (%1.1f,%1.1f,%1.1f)");
      (**(code **)(local_330 + 0x18))(&local_330);
      goto LAB_03bd26e8;
    }
  }
  if (*(char *)param_5[1] == '\0') goto LAB_03bd29d8;
  (**(code **)(*param_4 + 0x18))(param_4);
  lVar4 = 0;
  do {
    if (*(char *)(param_4[1] + lVar4) == '\0') goto LAB_03bd275c;
    lVar13 = param_4[1] + lVar4;
    if (*(char *)(lVar13 + 1) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_03bd275c;
    }
    if (*(char *)(lVar13 + 2) == '\0') {
      lVar4 = lVar4 + 2;
      goto LAB_03bd275c;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  lVar4 = 0;
LAB_03bd275c:
  (**(code **)(*param_5 + 0x18))(param_5);
  lVar13 = 0;
  do {
    iVar11 = (int)lVar4;
    if (*(char *)(param_5[1] + lVar13) == '\0') {
LAB_03bd27a8:
      iVar6 = (int)lVar13;
      if (iVar11 < iVar6) goto LAB_03bd286c;
LAB_03bd27c0:
      if ((int)lVar13 < 1) goto LAB_03bd29c8;
      uVar12 = 0;
      goto LAB_03bd27d8;
    }
    lVar14 = param_5[1] + lVar13;
    if (*(char *)(lVar14 + 1) == '\0') {
      lVar13 = lVar13 + 1;
      goto LAB_03bd27a8;
    }
    if (*(char *)(lVar14 + 2) == '\0') {
      lVar13 = lVar13 + 2;
      iVar6 = (int)lVar13;
      if (iVar6 <= iVar11) goto LAB_03bd27c0;
      goto LAB_03bd286c;
    }
    lVar13 = lVar13 + 3;
  } while (lVar13 != 0x80001);
  if (iVar11 < 0) goto LAB_03bd286c;
  goto LAB_03bd29c8;
  while( true ) {
    pcVar7 = (char *)param_5[1];
    lVar14 = lVar13;
    while( true ) {
      lVar14 = lVar14 + -1;
      if (*(char *)(lVar4 + uVar12) != *pcVar7) break;
      if ((*(char *)(lVar4 + uVar12) == '\0') ||
         (lVar4 = lVar4 + 1, pcVar7 = pcVar7 + 1, lVar14 == 0)) goto LAB_03bd2858;
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == (iVar11 - iVar6) + 1) break;
LAB_03bd27d8:
    lVar4 = param_4[1];
    (**(code **)(*param_5 + 0x18))(param_5);
    if ((char *)(lVar4 + uVar12) == (char *)param_5[1]) {
LAB_03bd2858:
      if ((int)uVar12 != -1) goto LAB_03bd29d8;
      break;
    }
  }
LAB_03bd286c:
  (**(code **)(local_298 + 0x18))(&local_298);
  lVar4 = 0;
  do {
    if (local_290[lVar4] == '\0') goto LAB_03bd28c0;
    if (local_290[lVar4 + 1] == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_03bd28c0;
    }
    if (local_290[lVar4 + 2] == '\0') {
      lVar4 = lVar4 + 2;
      goto LAB_03bd28c0;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  lVar4 = 0;
LAB_03bd28c0:
  (**(code **)(*param_5 + 0x18))(param_5);
  lVar13 = 0;
  do {
    iVar11 = (int)lVar4;
    if (*(char *)(param_5[1] + lVar13) == '\0') {
LAB_03bd2914:
      iVar6 = (int)lVar13;
      if (iVar11 < iVar6) {
        return;
      }
LAB_03bd292c:
      if (0 < (int)lVar13) {
        uVar12 = 0;
        while( true ) {
          puVar10 = local_290;
          pcVar7 = local_290 + uVar12;
          (**(code **)(*param_5 + 0x18))(param_5);
          if (pcVar7 == (char *)param_5[1]) break;
          pcVar7 = (char *)param_5[1];
          lVar4 = lVar13;
          while( true ) {
            lVar4 = lVar4 + -1;
            if (puVar10[uVar12] != *pcVar7) break;
            if ((puVar10[uVar12] == '\0') ||
               (puVar10 = puVar10 + 1, pcVar7 = pcVar7 + 1, lVar4 == 0)) goto LAB_03bd2b08;
          }
          uVar12 = uVar12 + 1;
          if (uVar12 == (iVar11 - iVar6) + 1) {
            return;
          }
        }
LAB_03bd2b08:
        if ((int)uVar12 == -1) {
          return;
        }
        goto LAB_03bd29d8;
      }
      goto LAB_03bd29c8;
    }
    lVar14 = param_5[1] + lVar13;
    if (*(char *)(lVar14 + 1) == '\0') {
      lVar13 = lVar13 + 1;
      goto LAB_03bd2914;
    }
    if (*(char *)(lVar14 + 2) == '\0') {
      lVar13 = lVar13 + 2;
      iVar6 = (int)lVar13;
      if (iVar11 < iVar6) {
        return;
      }
      goto LAB_03bd292c;
    }
    lVar13 = lVar13 + 3;
  } while (lVar13 != 0x80001);
  if (iVar11 < 0) {
    return;
  }
LAB_03bd29c8:
  (**(code **)(*param_5 + 0x18))(param_5);
LAB_03bd29d8:
  if (param_2 == 0) {
    (**(code **)(*param_4 + 0x18))(param_4);
    puVar10 = (undefined1 *)param_4[1];
  }
  else {
    local_335 = 0;
    local_440 = local_434;
    local_438 = 0x100;
    local_448 = puVar15 + 0x10;
    local_434[0] = 0;
    (**(code **)(*param_4 + 0x18))(param_4);
    uVar12 = 0;
    do {
      if (*(char *)(param_4[1] + uVar12) == '\0') {
LAB_03bd2a5c:
        iVar11 = (int)uVar12;
joined_r0x03bd2a60:
        if (0 < iVar11) {
          do {
            FUN_038d13f0(&local_448,&DAT_04064e67);
            uVar2 = (int)uVar12 - 1;
            uVar12 = (ulong)uVar2;
          } while (uVar2 != 0);
        }
        break;
      }
      lVar4 = param_4[1] + uVar12;
      if (*(char *)(lVar4 + 1) == '\0') {
        uVar12 = uVar12 + 1;
        goto LAB_03bd2a5c;
      }
      if (*(char *)(lVar4 + 2) == '\0') {
        uVar12 = uVar12 + 2;
        iVar11 = (int)uVar12;
        goto joined_r0x03bd2a60;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    (**(code **)(local_448 + 0x18))(&local_448);
    puVar10 = local_440;
  }
  (**(code **)(local_298 + 0x18))(&local_298);
  puVar3 = local_290;
  (**(code **)(local_180 + 0x18))(&local_180);
  FUN_038d1270(param_3,"%s %s %s\n",puVar10,puVar3,local_178);
  return;
}

