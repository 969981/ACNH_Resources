
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030f5430(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  bool bVar16;
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
  if (((plVar7 == (long *)0x0) || ((**(code **)(*plVar7 + 0x28))(plVar7,local_70), local_70[0] == 0)
      ) || (plVar7 = (long *)(local_70[0] + 0xb8), *plVar7 == 0)) {
    plVar7 = (long *)0x0;
    bVar16 = true;
    goto LAB_030f5bcc;
  }
  pcVar8 = (char *)FUN_00364d70(plVar7,"GridLabelText");
  puVar5 = PTR_DAT_04bb2f70;
  if (pcVar8 != (char *)0x0) {
    local_75 = 0;
    local_b8 = 0x40;
    local_c8 = PTR_DAT_04bb2f70 + 0x10;
    local_c0 = local_b4;
    if (local_b4 != pcVar8) {
      lVar10 = 0;
      do {
        if (pcVar8[lVar10] == '\0') {
LAB_030f5528:
          iVar6 = (int)lVar10;
          if (0x3f < iVar6) {
            iVar6 = 0x3f;
          }
          goto LAB_030f5534;
        }
        if (pcVar8[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_030f5528;
        }
        if (pcVar8[lVar10 + 2] == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_030f5528;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      iVar6 = 0;
LAB_030f5534:
      memcpy(local_b4,pcVar8,(long)iVar6);
      local_b4[iVar6] = '\0';
      pcVar8 = local_c0;
    }
    puVar4 = PTR_DAT_04bb2bc0;
    local_c8 = PTR_DAT_04bb2bc0 + 0x10;
    if (*pcVar8 != '\0') {
      uVar15 = 0;
      local_120 = PTR_DAT_04bb2020 + 0x10;
      local_118 = "_";
      pcVar8[(long)local_b8 + -1] = '\0';
      do {
        if (local_c0[uVar15] == '\0') goto LAB_030f55cc;
        if (local_c0[uVar15 + 1] == '\0') {
          uVar15 = uVar15 + 1;
          goto LAB_030f55cc;
        }
        if (local_c0[uVar15 + 2] == '\0') {
          uVar15 = uVar15 + 2;
          goto LAB_030f55cc;
        }
        uVar15 = uVar15 + 3;
      } while (uVar15 != 0x80001);
      uVar15 = 0;
LAB_030f55cc:
      (**(code **)(PTR_DAT_04bb2020 + 0x28))(&local_120);
      lVar10 = 0;
      do {
        if (local_118[lVar10] == '\0') {
LAB_030f5620:
          uVar2 = (int)uVar15 - (int)lVar10;
          uVar15 = (ulong)uVar2;
          if ((int)uVar2 < 0) goto LAB_030f5780;
          if (0 < (int)lVar10) goto LAB_030f5638;
          goto LAB_030f569c;
        }
        if (local_118[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_030f5620;
        }
        if (local_118[lVar10 + 2] == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_030f5620;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      if (-1 < (int)uVar15) {
LAB_030f569c:
        (**(code **)(local_120 + 0x18))(&local_120);
LAB_030f56ac:
        if (0 < (int)uVar15) {
          (**(code **)(local_c8 + 0x18))(&local_c8);
          lVar10 = 0;
          do {
            if (local_c0[lVar10] == '\0') goto LAB_030f570c;
            if (local_c0[lVar10 + 1] == '\0') {
              lVar10 = lVar10 + 1;
              goto LAB_030f570c;
            }
            if (local_c0[lVar10 + 2] == '\0') {
              lVar10 = lVar10 + 2;
              goto LAB_030f570c;
            }
            lVar10 = lVar10 + 3;
          } while (lVar10 != 0x80001);
          lVar10 = 0;
LAB_030f570c:
          iVar6 = (int)lVar10 - (int)uVar15;
          (**(code **)(local_c8 + 0x18))(&local_c8);
          lVar10 = 0;
          do {
            if (local_c0[lVar10] == '\0') goto LAB_030f576c;
            if (local_c0[lVar10 + 1] == '\0') {
              lVar10 = lVar10 + 1;
              goto LAB_030f576c;
            }
            if (local_c0[lVar10 + 2] == '\0') {
              lVar10 = lVar10 + 2;
              goto LAB_030f576c;
            }
            lVar10 = lVar10 + 3;
          } while (lVar10 != 0x80001);
          lVar10 = 0;
LAB_030f576c:
          if (-1 < iVar6) {
            iVar12 = (int)lVar10;
            iVar1 = iVar12;
            if (iVar6 <= iVar12) {
              iVar1 = iVar6;
            }
            local_c0[iVar12 - iVar1] = '\0';
          }
        }
      }
      goto LAB_030f5780;
    }
  }
  goto LAB_030f5bc8;
  while( true ) {
    pcVar11 = local_118;
    lVar13 = lVar10;
    while( true ) {
      lVar13 = lVar13 + -1;
      if (pcVar8[uVar15] != *pcVar11) break;
      if ((pcVar8[uVar15] == '\0') || (pcVar8 = pcVar8 + 1, pcVar11 = pcVar11 + 1, lVar13 == 0))
      goto LAB_030f56ac;
    }
    iVar6 = (int)uVar15;
    uVar15 = uVar15 - 1;
    if (iVar6 < 1) break;
LAB_030f5638:
    pcVar8 = local_c0;
    pcVar11 = local_c0 + uVar15;
    (**(code **)(local_120 + 0x18))(&local_120);
    if (pcVar11 == local_118) goto LAB_030f56ac;
  }
LAB_030f5780:
  puVar3 = PTR_PTR_04bb2238;
  local_cd = 0;
  local_110 = 0x40;
  local_120 = puVar5 + 0x10;
  local_118 = local_10c;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  __src = *(undefined1 **)(puVar3 + 8);
  if (local_10c != __src) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar10 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar10) == '\0') goto LAB_030f581c;
      lVar13 = *(long *)(puVar3 + 8) + lVar10;
      if (*(char *)(lVar13 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_030f581c;
      }
      if (*(char *)(lVar13 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_030f581c;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_030f581c:
    iVar6 = (int)lVar10;
    if (local_110 <= (int)lVar10) {
      iVar6 = local_110 + -1;
    }
    memcpy(local_10c,__src,(long)iVar6);
    local_10c[iVar6] = 0;
  }
  local_120 = puVar4 + 0x10;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,0);
  uVar9 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x3d0) = uVar9;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,1);
  uVar9 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x3d8) = uVar9;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,2);
  uVar9 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x3e0) = uVar9;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,3);
  uVar9 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 1000) = uVar9;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,4);
  uVar9 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x3f0) = uVar9;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,5);
  uVar9 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x3f8) = uVar9;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,6);
  uVar9 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x400) = uVar9;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,7);
  uVar9 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x408) = uVar9;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,8);
  uVar9 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x410) = uVar9;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,9);
  uVar9 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x418) = uVar9;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,10);
  uVar9 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x420) = uVar9;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,0xb);
  uVar9 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x428) = uVar9;
  *local_118 = 0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  FUN_038d1270(&local_120,"%s_%02d",local_c0,0xc);
  uVar9 = FUN_03462900(param_1,param_2,&local_120,local_70);
  *(undefined8 *)(param_1 + 0x430) = uVar9;
LAB_030f5bc8:
  bVar16 = false;
LAB_030f5bcc:
  if (((DAT_056f0ad0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_056f0ad0), iVar6 != 0)) {
    DAT_056f0a90 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f0a98 = &DAT_04082e60;
    DAT_056f0ac8 = "MapPattern02";
    DAT_056f0aa8 = "MapPattern00";
    DAT_056f0ab8 = "MapPattern01";
    DAT_056f0aa0 = DAT_056f0a90;
    DAT_056f0ab0 = DAT_056f0a90;
    DAT_056f0ac0 = DAT_056f0a90;
    __cxa_guard_release(&DAT_056f0ad0);
  }
  (**(code **)(DAT_056f0a90 + 0x18))(&DAT_056f0a90);
  if (bVar16) {
    (**(code **)(DAT_056f0aa0 + 0x18))(&DAT_056f0aa0);
    (**(code **)(DAT_056f0ab0 + 0x18))();
    (**(code **)(DAT_056f0ac0 + 0x18))(&DAT_056f0ac0);
  }
  else {
    pcVar8 = (char *)FUN_00364d70(plVar7,DAT_056f0a98);
    if ((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) {
      local_c8 = PTR_DAT_04bb2020 + 0x10;
      local_c0 = pcVar8;
      if (*pcVar8 == '\0') {
LAB_030f5cac:
        FUN_0386fd70(&local_c8);
        uVar9 = FUN_03c688b0(param_2,&local_c8);
      }
      else {
        if (*pcVar8 != '@') {
          lVar10 = 0;
          do {
            if ((lVar10 == 0x80000) || (lVar13 = lVar10 + 1, pcVar8[lVar13] == '\0'))
            goto LAB_030f5cac;
            lVar10 = lVar10 + 1;
          } while (pcVar8[lVar13] != '@');
        }
        uVar9 = FUN_03c68b00(param_2,&local_c8);
      }
      *(undefined8 *)(param_1 + 0x438) = uVar9;
    }
    (**(code **)(DAT_056f0aa0 + 0x18))(&DAT_056f0aa0);
    pcVar8 = (char *)FUN_00364d70(plVar7,DAT_056f0aa8);
    if ((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) {
      local_c8 = PTR_DAT_04bb2020 + 0x10;
      local_c0 = pcVar8;
      if (*pcVar8 == '\0') {
LAB_030f5d40:
        FUN_0386fd70(&local_c8);
        uVar9 = FUN_03c688b0(param_2,&local_c8);
      }
      else {
        if (*pcVar8 != '@') {
          lVar10 = 0;
          do {
            if ((lVar10 == 0x80000) || (lVar13 = lVar10 + 1, pcVar8[lVar13] == '\0'))
            goto LAB_030f5d40;
            lVar10 = lVar10 + 1;
          } while (pcVar8[lVar13] != '@');
        }
        uVar9 = FUN_03c68b00(param_2,&local_c8);
      }
      *(undefined8 *)(param_1 + 0x440) = uVar9;
    }
    (**(code **)(DAT_056f0ab0 + 0x18))(&DAT_056f0ab0);
    pcVar8 = (char *)FUN_00364d70(plVar7,DAT_056f0ab8);
    if ((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) {
      local_c8 = PTR_DAT_04bb2020 + 0x10;
      local_c0 = pcVar8;
      if (*pcVar8 == '\0') {
LAB_030f5ddc:
        FUN_0386fd70(&local_c8);
        uVar9 = FUN_03c688b0(param_2,&local_c8);
      }
      else {
        if (*pcVar8 != '@') {
          lVar10 = 0;
          do {
            if ((lVar10 == 0x80000) || (lVar13 = lVar10 + 1, pcVar8[lVar13] == '\0'))
            goto LAB_030f5ddc;
            lVar10 = lVar10 + 1;
          } while (pcVar8[lVar13] != '@');
        }
        uVar9 = FUN_03c68b00(param_2,&local_c8);
      }
      *(undefined8 *)(param_1 + 0x448) = uVar9;
    }
    (**(code **)(DAT_056f0ac0 + 0x18))(&DAT_056f0ac0);
    pcVar8 = (char *)FUN_00364d70(plVar7,DAT_056f0ac8);
    if ((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) {
      local_c8 = PTR_DAT_04bb2020 + 0x10;
      local_c0 = pcVar8;
      if (*pcVar8 == '\0') {
LAB_030f5e7c:
        FUN_0386fd70(&local_c8);
        uVar9 = FUN_03c688b0(param_2,&local_c8);
      }
      else {
        if (*pcVar8 != '@') {
          lVar10 = 0;
          do {
            if ((lVar10 == 0x80000) || (lVar13 = lVar10 + 1, pcVar8[lVar13] == '\0'))
            goto LAB_030f5e7c;
            lVar10 = lVar10 + 1;
          } while (pcVar8[lVar13] != '@');
        }
        uVar9 = FUN_03c68b00(param_2,&local_c8);
      }
      *(undefined8 *)(param_1 + 0x450) = uVar9;
    }
    pcVar8 = (char *)FUN_00364d70(plVar7,"MapArea");
    if ((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) {
      local_c8 = PTR_DAT_04bb2020 + 0x10;
      local_c0 = pcVar8;
      if (*pcVar8 == '\0') {
LAB_030f5f0c:
        FUN_0386fd70(&local_c8);
        uVar9 = FUN_03c688b0(param_2,&local_c8);
      }
      else {
        if (*pcVar8 != '@') {
          lVar10 = 0;
          do {
            if ((lVar10 == 0x80000) || (lVar13 = lVar10 + 1, pcVar8[lVar13] == '\0'))
            goto LAB_030f5f0c;
            lVar10 = lVar10 + 1;
          } while (pcVar8[lVar13] != '@');
        }
        uVar9 = FUN_03c68b00(param_2,&local_c8);
      }
      *(undefined8 *)(param_1 + 0x460) = uVar9;
    }
  }
  if (((DAT_056f0af8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_056f0af8), iVar6 != 0)) {
    DAT_056f0ad8 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f0ae0 = "MapPos";
    DAT_056f0af0 = &DAT_0407ebb1;
    DAT_056f0ae8 = DAT_056f0ad8;
    __cxa_guard_release(&DAT_056f0af8);
  }
  if (((DAT_056f0b10 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_056f0b10), iVar6 != 0)) {
    _DAT_056f0b00 = 0x100000002;
    DAT_056f0b08 = &DAT_056f0ad8;
    __cxa_guard_release(&DAT_056f0b10);
  }
  uVar2 = DAT_056f0b04;
  if (0 < (int)DAT_056f0b04) {
    uVar14 = 0;
    do {
      lVar10 = (long)(int)(DAT_056f0b00 * uVar14);
      if (DAT_056f0b00 == 0 || DAT_056f0b04 <= uVar14) {
        lVar10 = 0;
      }
      lVar13 = (long)(int)(DAT_056f0b00 * uVar14 + 1);
      if (DAT_056f0b00 < 2 || DAT_056f0b04 <= uVar14) {
        lVar13 = 0;
      }
      uVar9 = FUN_03c68d44(param_2,DAT_056f0b08 + lVar10 * 2,DAT_056f0b08 + lVar13 * 2);
      uVar14 = uVar14 + 1;
      *(undefined8 *)(param_1 + 0x458) = uVar9;
    } while (uVar2 != uVar14);
  }
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

