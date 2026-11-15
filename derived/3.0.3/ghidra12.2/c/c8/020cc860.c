
uint FUN_020cc860(long param_1,uint *param_2)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  char *pcVar12;
  ulong uVar13;
  undefined *local_a0;
  undefined8 *puStack_98;
  undefined *local_90;
  char *local_88;
  undefined *local_80;
  char *local_78;
  int local_70;
  char local_6c [31];
  undefined1 local_4d;
  undefined1 local_44 [4];
  
  uVar5 = *param_2;
  if (uVar5 == **(uint **)(param_1 + 0x10)) {
LAB_020cc88c:
    uVar5 = 0;
  }
  else {
    if ((uVar5 == 0) || (*(long *)PTR_DAT_04bb27c0 == 0)) {
LAB_020cc94c:
      uVar5 = 1;
      bVar4 = false;
      plVar11 = (long *)0x0;
      if (*(char *)(param_1 + 0x18) == '\0') goto LAB_020cc974;
LAB_020cc954:
      if (plVar11 == (long *)0x0) {
        return 0;
      }
      if (!bVar4) {
        return 0;
      }
    }
    else {
      plVar11 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                          ((ulong)(uVar5 >> 0x11) & 0x7ff8));
      if (plVar11 == (long *)0x0) {
        bVar4 = false;
        uVar5 = 1;
        cVar2 = *(char *)(param_1 + 0x18);
      }
      else {
        if (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0) || (*(uint *)(plVar11 + 0x46) != uVar5))
        goto LAB_020cc94c;
        bVar4 = (int)plVar11[0x2a] == 1;
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        uVar5 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb37d0);
        uVar5 = uVar5 & 1;
        cVar2 = *(char *)(param_1 + 0x18);
      }
      if (cVar2 != '\0') goto LAB_020cc954;
LAB_020cc974:
      if (plVar11 == (long *)0x0) {
        return 0;
      }
    }
    if (uVar5 == 0) {
      return 0;
    }
    local_70 = 0x20;
    local_4d = 0;
    local_80 = PTR_DAT_04bb2a08 + 0x10;
    local_78 = local_6c;
    (**(code **)(plVar11[0x7c] + 0x18))(plVar11 + 0x7c);
    pcVar12 = (char *)plVar11[0x7d];
    if (local_6c != pcVar12) {
      (**(code **)(plVar11[0x7c] + 0x18))(plVar11 + 0x7c);
      lVar7 = 0;
      do {
        if (*(char *)(plVar11[0x7d] + lVar7) == '\0') goto LAB_020cca20;
        lVar1 = plVar11[0x7d] + lVar7;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_020cca20;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_020cca20;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_020cca20:
      iVar6 = (int)lVar7;
      if (local_70 <= (int)lVar7) {
        iVar6 = local_70 + -1;
      }
      memcpy(local_6c,pcVar12,(long)iVar6);
      local_6c[iVar6] = '\0';
    }
    puVar3 = PTR_DAT_04bb2020;
    uVar13 = 0;
    local_80 = PTR_DAT_04bb2028 + 0x10;
    local_90 = PTR_DAT_04bb2020 + 0x10;
    local_88 = "ABCD";
    local_78[(long)local_70 + -1] = '\0';
    do {
      if (local_78[uVar13] == '\0') goto LAB_020ccacc;
      if (local_78[uVar13 + 1] == '\0') {
        uVar13 = uVar13 + 1;
        goto LAB_020ccacc;
      }
      if (local_78[uVar13 + 2] == '\0') {
        uVar13 = uVar13 + 2;
        goto LAB_020ccacc;
      }
      uVar13 = uVar13 + 3;
    } while (uVar13 != 0x80001);
    uVar13 = 0;
LAB_020ccacc:
    (**(code **)(puVar3 + 0x28))(&local_90);
    lVar7 = 0;
    do {
      if (local_88[lVar7] == '\0') goto LAB_020ccb20;
      if (local_88[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_020ccb20;
      }
      if (local_88[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_020ccb20;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_020ccb20:
    (**(code **)(local_90 + 0x18))(&local_90);
    iVar6 = local_70;
    pcVar12 = local_78;
    if ((0 < (int)uVar13) && (iVar10 = (int)lVar7, 0 < iVar10)) {
      if (3 < iVar10) {
        iVar10 = 4;
      }
      uVar13 = uVar13 & 0xffffffff;
      pcVar8 = local_78;
      do {
        cVar2 = *pcVar8;
        if (cVar2 == *local_88) {
          lVar7 = 0;
LAB_020ccb68:
          *pcVar8 = (&DAT_04074aae)[lVar7];
        }
        else if (iVar10 != 1) {
          if (cVar2 == local_88[1]) {
            lVar7 = 1;
          }
          else {
            if (iVar10 == 2) goto LAB_020ccb70;
            if (cVar2 == local_88[2]) {
              lVar7 = 2;
            }
            else {
              if ((iVar10 == 3) || (cVar2 != local_88[3])) goto LAB_020ccb70;
              lVar7 = 3;
            }
          }
          goto LAB_020ccb68;
        }
LAB_020ccb70:
        uVar13 = uVar13 - 1;
        pcVar8 = pcVar8 + 1;
      } while (uVar13 != 0);
    }
    local_a0 = puVar3 + 0x10;
    local_88 = "A";
    puStack_98 = &DAT_0407ebb1;
    local_44[0] = 0;
    local_90 = local_a0;
    (**(code **)(local_80 + 0x18))(&local_80);
    pcVar8 = local_78;
    (**(code **)(local_80 + 0x18))(&local_80);
    lVar7 = 0;
    do {
      if (local_78[lVar7] == '\0') goto LAB_020ccc6c;
      if (local_78[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_020ccc6c;
      }
      if (local_78[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_020ccc6c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_020ccc6c:
    FUN_038d0770(pcVar12,0,iVar6,pcVar8,lVar7,&local_90,&local_a0,local_44);
    plVar11 = *(long **)(param_1 + 8);
    (**(code **)(local_80 + 0x18))(&local_80);
    (**(code **)(local_80 + 0x18))(&local_80);
    pcVar12 = local_78;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcVar8 = (char *)plVar11[1];
    if (pcVar12 != pcVar8) {
      if (*local_78 != *pcVar8) goto LAB_020cc88c;
      if (*local_78 != '\0') {
        local_78 = local_78 + 2;
        uVar13 = 0;
        do {
          uVar9 = uVar13;
          if (uVar9 == 0x80000) goto LAB_020ccd5c;
          if (local_78[uVar9 - 1] != pcVar8[uVar9 + 1]) {
            local_78 = (char *)0x0;
            goto LAB_020ccd5c;
          }
          if (local_78[uVar9 - 1] == '\0') goto LAB_020ccd38;
          if (local_78[uVar9] != pcVar8[uVar9 + 2]) {
            local_78 = (char *)0x0;
            uVar9 = uVar9 | 1;
            goto LAB_020ccd5c;
          }
          uVar13 = uVar9 + 2;
        } while (local_78[uVar9] != '\0');
        uVar9 = uVar9 + 1;
LAB_020ccd38:
        local_78 = (char *)0x1;
LAB_020ccd5c:
        return (uint)(uVar9 < 0x80000) & (uint)local_78;
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}

