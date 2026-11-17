
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030ce520(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  undefined1 *__src;
  undefined *local_120;
  char *local_118;
  int local_110;
  undefined1 local_10c [63];
  undefined1 local_cd;
  undefined *local_c8;
  char *local_c0;
  int local_b8;
  char local_b4 [63];
  undefined1 local_75;
  long local_70 [2];
  
  plVar7 = *(long **)(param_1 + 0x58);
  local_70[0] = 0;
  if ((plVar7 == (long *)0x0) || ((**(code **)(*plVar7 + 0x28))(plVar7,local_70), local_70[0] == 0))
  {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = (long *)0x0;
    if (*(long *)(local_70[0] + 0xb8) != 0) {
      plVar7 = (long *)(local_70[0] + 0xb8);
    }
  }
  if (((DAT_056ebff0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_056ebff0), iVar6 != 0)) {
    DAT_056ebfd0 = PTR_DAT_04bb2020 + 0x10;
    DAT_056ebfd8 = "TypeMap";
    DAT_056ebfe8 = &DAT_0407ebb1;
    DAT_056ebfe0 = DAT_056ebfd0;
    __cxa_guard_release(&DAT_056ebff0);
  }
  if (((DAT_056ec008 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_056ec008), iVar6 != 0)) {
    _DAT_056ebff8 = 0x100000002;
    DAT_056ec000 = &DAT_056ebfd0;
    __cxa_guard_release(&DAT_056ec008);
  }
  uVar2 = DAT_056ebffc;
  if (0 < (int)DAT_056ebffc) {
    uVar15 = 0;
    do {
      lVar13 = (long)(int)(DAT_056ebff8 * uVar15);
      if (DAT_056ebff8 == 0 || DAT_056ebffc <= uVar15) {
        lVar13 = 0;
      }
      lVar12 = (long)(int)(DAT_056ebff8 * uVar15 + 1);
      if (DAT_056ebff8 < 2 || DAT_056ebffc <= uVar15) {
        lVar12 = 0;
      }
      uVar8 = FUN_03c68d44(param_2,DAT_056ec000 + lVar13 * 2,DAT_056ec000 + lVar12 * 2);
      uVar15 = uVar15 + 1;
      *(undefined8 *)(param_1 + 0x308) = uVar8;
    } while (uVar2 != uVar15);
  }
  if (plVar7 == (long *)0x0) goto LAB_030ced68;
  pcVar9 = (char *)FUN_00364d70(plVar7,"GridLabelText");
  puVar5 = PTR_DAT_04bb2f70;
  if (pcVar9 == (char *)0x0) goto LAB_030ced68;
  local_75 = 0;
  local_b8 = 0x40;
  local_c8 = PTR_DAT_04bb2f70 + 0x10;
  local_c0 = local_b4;
  if (local_b4 != pcVar9) {
    lVar13 = 0;
    do {
      if (pcVar9[lVar13] == '\0') {
LAB_030ce6a8:
        iVar6 = (int)lVar13;
joined_r0x030ce6ac:
        if (0x3f < iVar6) {
          iVar6 = 0x3f;
        }
        goto LAB_030ce6b4;
      }
      if (pcVar9[lVar13 + 1] == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_030ce6a8;
      }
      if (pcVar9[lVar13 + 2] == '\0') {
        iVar6 = (int)lVar13 + 2;
        goto joined_r0x030ce6ac;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    iVar6 = 0;
LAB_030ce6b4:
    memcpy(local_b4,pcVar9,(long)iVar6);
    local_b4[iVar6] = '\0';
    pcVar9 = local_c0;
  }
  puVar4 = PTR_DAT_04bb2bc0;
  local_c8 = PTR_DAT_04bb2bc0 + 0x10;
  if (*pcVar9 == '\0') goto LAB_030ced68;
  uVar14 = 0;
  local_120 = PTR_DAT_04bb2020 + 0x10;
  local_118 = "_";
  pcVar9[(long)local_b8 + -1] = '\0';
  do {
    if (local_c0[uVar14] == '\0') goto LAB_030ce75c;
    if (local_c0[uVar14 + 1] == '\0') {
      uVar14 = uVar14 + 1;
      goto LAB_030ce75c;
    }
    if (local_c0[uVar14 + 2] == '\0') {
      uVar14 = uVar14 + 2;
      goto LAB_030ce75c;
    }
    uVar14 = uVar14 + 3;
  } while (uVar14 != 0x80001);
  uVar14 = 0;
LAB_030ce75c:
  (**(code **)(PTR_DAT_04bb2020 + 0x28))(&local_120);
  lVar13 = 0;
  do {
    iVar6 = (int)uVar14;
    if (local_118[lVar13] == '\0') {
LAB_030ce7a8:
      uVar2 = iVar6 - (int)lVar13;
      if ((int)uVar2 < 0) goto LAB_030ce920;
LAB_030ce7c0:
      uVar14 = (ulong)uVar2;
      if ((int)lVar13 < 1) goto LAB_030ce844;
      goto LAB_030ce7d0;
    }
    if (local_118[lVar13 + 1] == '\0') {
      lVar13 = lVar13 + 1;
      goto LAB_030ce7a8;
    }
    if (local_118[lVar13 + 2] == '\0') {
      lVar13 = lVar13 + 2;
      uVar2 = iVar6 - (int)lVar13;
      if (-1 < (int)uVar2) goto LAB_030ce7c0;
      goto LAB_030ce920;
    }
    lVar13 = lVar13 + 3;
  } while (lVar13 != 0x80001);
  if (-1 < iVar6) {
LAB_030ce844:
    (**(code **)(local_120 + 0x18))(&local_120);
    iVar6 = (int)uVar14;
joined_r0x030ce83c:
    if (0 < iVar6) {
      (**(code **)(local_c8 + 0x18))(&local_c8);
      lVar13 = 0;
      do {
        if (local_c0[lVar13] == '\0') goto LAB_030ce8b0;
        if (local_c0[lVar13 + 1] == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_030ce8b0;
        }
        if (local_c0[lVar13 + 2] == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_030ce8b0;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_030ce8b0:
      iVar6 = (int)lVar13 - (int)uVar14;
      (**(code **)(local_c8 + 0x18))(&local_c8);
      lVar13 = 0;
      do {
        if (local_c0[lVar13] == '\0') goto LAB_030ce90c;
        if (local_c0[lVar13 + 1] == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_030ce90c;
        }
        if (local_c0[lVar13 + 2] == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_030ce90c;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_030ce90c:
      if (-1 < iVar6) {
        iVar11 = (int)lVar13;
        iVar1 = iVar11;
        if (iVar6 <= iVar11) {
          iVar1 = iVar6;
        }
        local_c0[iVar11 - iVar1] = '\0';
      }
    }
  }
  goto LAB_030ce920;
  while( true ) {
    pcVar10 = local_118;
    lVar12 = lVar13;
    while( true ) {
      lVar12 = lVar12 + -1;
      if (pcVar9[uVar14] != *pcVar10) break;
      if (pcVar9[uVar14] == '\0') goto joined_r0x030ce83c;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
      if (lVar12 == 0) goto joined_r0x030ce83c;
    }
    uVar14 = uVar14 - 1;
    if (iVar6 < 1) break;
LAB_030ce7d0:
    pcVar9 = local_c0;
    pcVar10 = local_c0 + uVar14;
    (**(code **)(local_120 + 0x18))(&local_120);
    iVar6 = (int)uVar14;
    if (pcVar10 == local_118) goto joined_r0x030ce83c;
  }
LAB_030ce920:
  puVar3 = PTR_PTR_04bb2238;
  local_cd = 0;
  local_110 = 0x40;
  local_120 = puVar5 + 0x10;
  local_118 = local_10c;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  __src = *(undefined1 **)(puVar3 + 8);
  if (local_10c != __src) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar13 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar13) == '\0') goto LAB_030ce9bc;
      lVar12 = *(long *)(puVar3 + 8) + lVar13;
      if (*(char *)(lVar12 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_030ce9bc;
      }
      if (*(char *)(lVar12 + 2) == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_030ce9bc;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_030ce9bc:
    iVar6 = (int)lVar13;
    if (local_110 <= (int)lVar13) {
      iVar6 = local_110 + -1;
    }
    memcpy(local_10c,__src,(long)iVar6);
    local_10c[iVar6] = 0;
  }
  local_120 = puVar4 + 0x10;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,0);
  uVar8 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x310) = uVar8;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,1);
  uVar8 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x318) = uVar8;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,2);
  uVar8 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 800) = uVar8;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,3);
  uVar8 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x328) = uVar8;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,4);
  uVar8 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x330) = uVar8;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,5);
  uVar8 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x338) = uVar8;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,6);
  uVar8 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x340) = uVar8;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,7);
  uVar8 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x348) = uVar8;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,8);
  uVar8 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x350) = uVar8;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,9);
  uVar8 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x358) = uVar8;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,10);
  uVar8 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x360) = uVar8;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,0xb);
  uVar8 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x368) = uVar8;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,0xc);
  uVar8 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x370) = uVar8;
LAB_030ced68:
  if (((DAT_056ec050 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_056ec050), iVar6 != 0)) {
    DAT_056ec010 = PTR_DAT_04bb2020 + 0x10;
    DAT_056ec018 = &DAT_04082e60;
    DAT_056ec048 = "MapPattern02";
    DAT_056ec028 = "MapPattern00";
    DAT_056ec038 = "MapPattern01";
    DAT_056ec020 = DAT_056ec010;
    DAT_056ec030 = DAT_056ec010;
    DAT_056ec040 = DAT_056ec010;
    __cxa_guard_release(&DAT_056ec050);
  }
  (**(code **)(DAT_056ec010 + 0x18))(&DAT_056ec010);
  if (plVar7 == (long *)0x0) {
    (**(code **)(DAT_056ec020 + 0x18))(&DAT_056ec020);
    (**(code **)(DAT_056ec030 + 0x18))();
    (**(code **)(DAT_056ec040 + 0x18))(&DAT_056ec040);
  }
  else {
    pcVar9 = (char *)FUN_00364d70(plVar7,DAT_056ec018);
    if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
      local_c8 = PTR_DAT_04bb2020 + 0x10;
      local_c0 = pcVar9;
      if (*pcVar9 == '\0') {
LAB_030cee40:
        FUN_0386fd70(&local_c8);
        uVar8 = FUN_03c688b0(param_2,&local_c8);
      }
      else {
        if (*pcVar9 != '@') {
          lVar13 = 0;
          do {
            if ((lVar13 == 0x80000) || (lVar12 = lVar13 + 1, pcVar9[lVar12] == '\0'))
            goto LAB_030cee40;
            lVar13 = lVar13 + 1;
          } while (pcVar9[lVar12] != '@');
        }
        uVar8 = FUN_03c68b00(param_2,&local_c8);
      }
      *(undefined8 *)(param_1 + 0x378) = uVar8;
    }
    (**(code **)(DAT_056ec020 + 0x18))(&DAT_056ec020);
    pcVar9 = (char *)FUN_00364d70(plVar7,DAT_056ec028);
    if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
      local_c8 = PTR_DAT_04bb2020 + 0x10;
      local_c0 = pcVar9;
      if (*pcVar9 == '\0') {
LAB_030ceedc:
        FUN_0386fd70(&local_c8);
        uVar8 = FUN_03c688b0(param_2,&local_c8);
      }
      else {
        if (*pcVar9 != '@') {
          lVar13 = 0;
          do {
            if ((lVar13 == 0x80000) || (lVar12 = lVar13 + 1, pcVar9[lVar12] == '\0'))
            goto LAB_030ceedc;
            lVar13 = lVar13 + 1;
          } while (pcVar9[lVar12] != '@');
        }
        uVar8 = FUN_03c68b00(param_2,&local_c8);
      }
      *(undefined8 *)(param_1 + 0x380) = uVar8;
    }
    (**(code **)(DAT_056ec030 + 0x18))(&DAT_056ec030);
    pcVar9 = (char *)FUN_00364d70(plVar7,DAT_056ec038);
    if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
      local_c8 = PTR_DAT_04bb2020 + 0x10;
      local_c0 = pcVar9;
      if (*pcVar9 == '\0') {
LAB_030cef7c:
        FUN_0386fd70(&local_c8);
        uVar8 = FUN_03c688b0(param_2,&local_c8);
      }
      else {
        if (*pcVar9 != '@') {
          lVar13 = 0;
          do {
            if ((lVar13 == 0x80000) || (lVar12 = lVar13 + 1, pcVar9[lVar12] == '\0'))
            goto LAB_030cef7c;
            lVar13 = lVar13 + 1;
          } while (pcVar9[lVar12] != '@');
        }
        uVar8 = FUN_03c68b00(param_2,&local_c8);
      }
      *(undefined8 *)(param_1 + 0x388) = uVar8;
    }
    (**(code **)(DAT_056ec040 + 0x18))(&DAT_056ec040);
    pcVar9 = (char *)FUN_00364d70(plVar7,DAT_056ec048);
    if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
      local_c8 = PTR_DAT_04bb2020 + 0x10;
      local_c0 = pcVar9;
      if (*pcVar9 == '\0') {
LAB_030cf01c:
        FUN_0386fd70(&local_c8);
        uVar8 = FUN_03c688b0(param_2,&local_c8);
      }
      else {
        if (*pcVar9 != '@') {
          lVar13 = 0;
          do {
            if ((lVar13 == 0x80000) || (lVar12 = lVar13 + 1, pcVar9[lVar12] == '\0'))
            goto LAB_030cf01c;
            lVar13 = lVar13 + 1;
          } while (pcVar9[lVar12] != '@');
        }
        uVar8 = FUN_03c68b00(param_2,&local_c8);
      }
      *(undefined8 *)(param_1 + 0x390) = uVar8;
    }
    pcVar9 = (char *)FUN_00364d70(plVar7,"MapArea");
    if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
      local_c8 = PTR_DAT_04bb2020 + 0x10;
      local_c0 = pcVar9;
      if (*pcVar9 == '\0') {
LAB_030cf0ac:
        FUN_0386fd70(&local_c8);
        uVar8 = FUN_03c688b0(param_2,&local_c8);
      }
      else {
        if (*pcVar9 != '@') {
          lVar13 = 0;
          do {
            if ((lVar13 == 0x80000) || (lVar12 = lVar13 + 1, pcVar9[lVar12] == '\0'))
            goto LAB_030cf0ac;
            lVar13 = lVar13 + 1;
          } while (pcVar9[lVar12] != '@');
        }
        uVar8 = FUN_03c68b00(param_2,&local_c8);
      }
      *(undefined8 *)(param_1 + 0x398) = uVar8;
    }
  }
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

