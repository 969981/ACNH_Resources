
void FUN_02cdcbf0(undefined8 *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  void *__s;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  byte bVar20;
  long lVar21;
  byte *pbVar22;
  long *plVar23;
  undefined1 *puVar24;
  undefined *local_fe8;
  uint local_fe0;
  undefined *local_fd8;
  undefined1 *local_fd0;
  int local_fc8;
  undefined1 local_fc4 [63];
  undefined1 local_f85;
  bool local_f80;
  uint local_f74;
  undefined *local_f70;
  undefined1 auStack_f68 [1876];
  uint local_814;
  uint local_810;
  uint local_80c;
  int local_808;
  undefined **local_800 [4];
  undefined *local_7e0;
  char *local_7d8 [234];
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  undefined1 auStack_70 [16];
  
  puVar7 = PTR_DAT_04bbfe60;
  local_f70 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_f68,0,0x754);
  uVar13 = nn::os::GetSystemTick();
  local_814 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
  local_810 = (local_814 ^ local_814 >> 0x1e) * 0x6c078965 + 2;
  local_80c = (local_810 ^ local_810 >> 0x1e) * 0x6c078965 + 3;
  local_808 = (local_80c ^ local_80c >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_f70);
  memset(__s,0,0x754);
  memset(&local_7e0,0,0x754);
  pbVar22 = (byte *)(param_1 + 1);
  if ((((*pbVar22 < 8) && (uVar13 = FUN_02582d8c(pbVar22,1), uVar13 < 8)) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar13 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar13 * 0x13f0 + 0x13d6) != '\0')) {
    bVar20 = *pbVar22;
    if (7 < bVar20) {
      bVar20 = 0xff;
    }
    local_fe8 = (undefined *)CONCAT71(local_fe8._1_7_,bVar20);
    lVar16 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_fe8,1);
    if (lVar16 != 0) {
      lVar21 = lVar16 + 0x194b0;
      if (*(long *)(lVar16 + 0x194b8) == 0) {
        lVar21 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      if ((*(long **)(lVar21 + 0x1090) == (long *)0x0) ||
         (puVar17 = (undefined8 *)**(long **)(lVar21 + 0x1090), puVar17 == (undefined8 *)0x0)) {
        memcpy(&local_7e0,(void *)(*(long *)(lVar21 + 0x1078) + *(long *)(lVar21 + 0x1070)),0x754);
      }
      else {
        uVar18 = (**(code **)*puVar17)();
        memcpy(&local_7e0,(void *)(*(long *)(lVar21 + 0x1078) + *(long *)(lVar21 + 0x1070)),0x754);
        if ((((uVar18 & 1) != 0) && (*(long *)(lVar21 + 0x1090) != 0)) &&
           (puVar17 = *(undefined8 **)(*(long *)(lVar21 + 0x1090) + 8), puVar17 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar17)();
        }
      }
    }
  }
  memcpy(auStack_f68,&local_7e0,0x754);
  plVar23 = param_1 + 2;
  uVar18 = (**(code **)(*plVar23 + 8))(plVar23);
  if ((uVar18 & 1) != 0) {
    (**(code **)*plVar23)(plVar23,&local_f70);
  }
  uVar13 = FUN_02f5a2f0(2);
  if ((int)uVar13 < 0) {
    bVar9 = false;
  }
  else {
    if (0x11 < uVar13) {
      uVar13 = 0;
    }
    if (*(char *)(&DAT_056c6838)[(ulong)uVar13 * 7] == '\0') {
      bVar9 = true;
    }
    else {
      iVar14 = FUN_0274bce0(pbVar22,&DAT_056c6830 + (ulong)uVar13 * 7);
      bVar9 = iVar14 != 0;
    }
  }
  local_7d8[0] = "UnlockMyDesignProCategory";
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  local_7e0 = puVar2;
  iVar14 = FUN_0274bce0(pbVar22,&local_7e0);
  bVar10 = true;
  if (iVar14 == 0) {
    local_7d8[0] = "MainmenuUnlockMydesingPro";
    local_7e0 = puVar2;
    iVar14 = FUN_0274bce0(pbVar22,&local_7e0);
    bVar10 = iVar14 != 0;
  }
  puVar2 = PTR_DAT_04bb43c0;
  local_fd0 = local_fc4;
  local_fc8 = 0x40;
  uVar18 = 0;
  local_f85 = 0;
  local_fc4[0] = 0;
  local_fe8 = PTR_DAT_04bc4ee8 + 0x10;
  local_f80 = true;
  local_fd8 = PTR_DAT_04bb2bc0 + 0x10;
  do {
    puVar8 = local_fd0;
    plVar23 = &DAT_0566bb40 + uVar18 * 0xe;
    local_fe0 = (&DAT_0566bb38)[uVar18 * 0x1c];
    local_f74 = local_fe0;
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puVar24 = (undefined1 *)(&DAT_0566bb48)[uVar18 * 0xe];
    if (puVar8 != puVar24) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
      lVar16 = 0;
      do {
        if (*(char *)((&DAT_0566bb48)[uVar18 * 0xe] + lVar16) == '\0') goto LAB_02cdd02c;
        lVar21 = (&DAT_0566bb48)[uVar18 * 0xe] + lVar16;
        if (*(char *)(lVar21 + 1) == '\0') {
          lVar16 = lVar16 + 1;
          goto LAB_02cdd02c;
        }
        if (*(char *)(lVar21 + 2) == '\0') {
          lVar16 = lVar16 + 2;
          goto LAB_02cdd02c;
        }
        lVar16 = lVar16 + 3;
      } while (lVar16 != 0x80001);
      lVar16 = 0;
LAB_02cdd02c:
      iVar14 = (int)lVar16;
      if (local_fc8 <= (int)lVar16) {
        iVar14 = local_fc8 + -1;
      }
      memcpy(puVar8,puVar24,(long)iVar14);
      puVar8[iVar14] = 0;
    }
    local_f80 = false;
    bVar12 = bVar10;
    if (((local_f74 == 0x20) || (bVar12 = bVar9, local_f74 == 0x1f)) ||
       (bVar12 = bVar10, local_f74 == 0x1d)) {
      bVar11 = true;
      cVar5 = *(char *)((long)param_1 + 10);
joined_r0x02cdd08c:
      if (cVar5 != '\0') goto LAB_02cdd090;
LAB_02cdd0f4:
      if (*(char *)((long)param_1 + 9) == '\0') {
        if (*(char *)((long)param_1 + 0xb) == '\0') {
          if (bVar11) goto LAB_02cdd134;
          goto LAB_02cdda44;
        }
        bVar3 = false;
        if (local_f74 - 0x21 < 0xfffffffe) {
          bVar3 = bVar11;
        }
        if (!bVar3) goto LAB_02cdda44;
        goto LAB_02cdd134;
      }
      if ((local_f74 - 0x1d < 4) || (local_f74 == 0)) goto LAB_02cdd134;
    }
    else {
      bVar11 = local_f74 != 3 || *(char *)((long)param_1 + 0xc) != '\0';
      if (local_f74 == 0x26) {
        bVar12 = false;
        bVar11 = *(char *)((long)param_1 + 0xb) != '\0';
        cVar5 = *(char *)((long)param_1 + 10);
        goto joined_r0x02cdd08c;
      }
      bVar12 = false;
      if (*(char *)((long)param_1 + 10) == '\0') goto LAB_02cdd0f4;
LAB_02cdd090:
      if ((local_f74 < 0x1f) && ((1 << (ulong)(local_f74 & 0x1f) & 0x60000001U) != 0)) {
LAB_02cdd134:
        if (bVar12) {
          bVar12 = true;
        }
        else {
          bVar12 = true;
          if ((local_f74 != 0) && (local_f74 != 0x26)) {
            local_7e0 = puVar7 + 0x10;
            memset(local_7d8,0,0x754);
            uVar13 = nn::os::GetSystemTick();
            local_84 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
            local_80 = (local_84 ^ local_84 >> 0x1e) * 0x6c078965 + 2;
            local_7c = (local_80 ^ local_80 >> 0x1e) * 0x6c078965 + 3;
            local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 4;
            memcpy(local_7d8,auStack_f68,0x754);
            bVar12 = false;
            switch(local_f74) {
            case 3:
              uVar13 = 0;
              local_800[0] = &PTR_FUN_04b2a408;
              do {
                (**(code **)(local_7e0 + 0x10))(auStack_70,&local_7e0,uVar13);
                lVar16 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
                uVar6 = 1 << (ulong)(uVar13 & 0x1f);
                if ((*(uint *)(lVar16 + (ulong)(uVar13 >> 5) * 4) & uVar6) != 0) {
                  lVar16 = *(long *)puVar2;
                  uVar15 = FUN_0277d6c4(auStack_70);
                  if (*(long *)puVar2 != 0) {
                    lVar16 = *(long *)(lVar16 + 0x57e58);
                    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                    if (((uVar15 < *(uint *)(lVar16 + 0x1d8)) &&
                        (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
                       (uVar19 = (*(code *)*local_800[0])(local_800,auStack_70), (uVar19 & 1) != 0))
                    goto LAB_02cdd230;
                  }
                  lVar16 = (**(code **)(local_7e0 + 0x18))(&local_7e0);
                  lVar21 = (ulong)(uVar13 >> 5) * 4;
                  *(uint *)(lVar16 + lVar21) = *(uint *)(lVar16 + lVar21) & (uVar6 ^ 0xffffffff);
                }
LAB_02cdd230:
                uVar13 = uVar13 + 1;
              } while (uVar13 != 15000);
              break;
            default:
              goto switchD_02cdd1f0_caseD_4;
            case 0x1d:
              uVar13 = 0;
              local_800[0] = &PTR_FUN_04b2a250;
              do {
                (**(code **)(local_7e0 + 0x10))(auStack_70,&local_7e0,uVar13);
                lVar16 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
                uVar6 = 1 << (ulong)(uVar13 & 0x1f);
                if ((*(uint *)(lVar16 + (ulong)(uVar13 >> 5) * 4) & uVar6) != 0) {
                  lVar16 = *(long *)puVar2;
                  uVar15 = FUN_0277d6c4(auStack_70);
                  if (*(long *)puVar2 != 0) {
                    lVar16 = *(long *)(lVar16 + 0x57e58);
                    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                    if (((uVar15 < *(uint *)(lVar16 + 0x1d8)) &&
                        (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
                       (uVar19 = (*(code *)*local_800[0])(local_800,auStack_70), (uVar19 & 1) != 0))
                    goto LAB_02cdd310;
                  }
                  lVar16 = (**(code **)(local_7e0 + 0x18))(&local_7e0);
                  lVar21 = (ulong)(uVar13 >> 5) * 4;
                  *(uint *)(lVar16 + lVar21) = *(uint *)(lVar16 + lVar21) & (uVar6 ^ 0xffffffff);
                }
LAB_02cdd310:
                uVar13 = uVar13 + 1;
              } while (uVar13 != 15000);
              break;
            case 0x1e:
              uVar13 = 0;
              local_800[0] = &PTR_FUN_04b2a278;
              do {
                (**(code **)(local_7e0 + 0x10))(auStack_70,&local_7e0,uVar13);
                lVar16 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
                uVar6 = 1 << (ulong)(uVar13 & 0x1f);
                if ((*(uint *)(lVar16 + (ulong)(uVar13 >> 5) * 4) & uVar6) != 0) {
                  lVar16 = *(long *)puVar2;
                  uVar15 = FUN_0277d6c4(auStack_70);
                  if (*(long *)puVar2 != 0) {
                    lVar16 = *(long *)(lVar16 + 0x57e58);
                    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                    if (((uVar15 < *(uint *)(lVar16 + 0x1d8)) &&
                        (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
                       (uVar19 = (*(code *)*local_800[0])(local_800,auStack_70), (uVar19 & 1) != 0))
                    goto LAB_02cdd3f0;
                  }
                  lVar16 = (**(code **)(local_7e0 + 0x18))(&local_7e0);
                  lVar21 = (ulong)(uVar13 >> 5) * 4;
                  *(uint *)(lVar16 + lVar21) = *(uint *)(lVar16 + lVar21) & (uVar6 ^ 0xffffffff);
                }
LAB_02cdd3f0:
                uVar13 = uVar13 + 1;
              } while (uVar13 != 15000);
              break;
            case 0x1f:
              uVar13 = 0;
              local_800[0] = &PTR_FUN_04b2a2a0;
              do {
                (**(code **)(local_7e0 + 0x10))(auStack_70,&local_7e0,uVar13);
                lVar16 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
                uVar6 = 1 << (ulong)(uVar13 & 0x1f);
                if ((*(uint *)(lVar16 + (ulong)(uVar13 >> 5) * 4) & uVar6) != 0) {
                  lVar16 = *(long *)puVar2;
                  uVar15 = FUN_0277d6c4(auStack_70);
                  if (*(long *)puVar2 != 0) {
                    lVar16 = *(long *)(lVar16 + 0x57e58);
                    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                    if (((uVar15 < *(uint *)(lVar16 + 0x1d8)) &&
                        (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
                       (uVar19 = (*(code *)*local_800[0])(local_800,auStack_70), (uVar19 & 1) != 0))
                    goto LAB_02cdd4d0;
                  }
                  lVar16 = (**(code **)(local_7e0 + 0x18))(&local_7e0);
                  lVar21 = (ulong)(uVar13 >> 5) * 4;
                  *(uint *)(lVar16 + lVar21) = *(uint *)(lVar16 + lVar21) & (uVar6 ^ 0xffffffff);
                }
LAB_02cdd4d0:
                uVar13 = uVar13 + 1;
              } while (uVar13 != 15000);
              break;
            case 0x20:
              uVar13 = 0;
              local_800[0] = &PTR_FUN_04b2a2c8;
              do {
                (**(code **)(local_7e0 + 0x10))(auStack_70,&local_7e0,uVar13);
                lVar16 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
                uVar6 = 1 << (ulong)(uVar13 & 0x1f);
                if ((*(uint *)(lVar16 + (ulong)(uVar13 >> 5) * 4) & uVar6) != 0) {
                  lVar16 = *(long *)puVar2;
                  uVar15 = FUN_0277d6c4(auStack_70);
                  if (*(long *)puVar2 != 0) {
                    lVar16 = *(long *)(lVar16 + 0x57e58);
                    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                    if (((uVar15 < *(uint *)(lVar16 + 0x1d8)) &&
                        (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
                       (uVar19 = (*(code *)*local_800[0])(local_800,auStack_70), (uVar19 & 1) != 0))
                    goto LAB_02cdd5b0;
                  }
                  lVar16 = (**(code **)(local_7e0 + 0x18))(&local_7e0);
                  lVar21 = (ulong)(uVar13 >> 5) * 4;
                  *(uint *)(lVar16 + lVar21) = *(uint *)(lVar16 + lVar21) & (uVar6 ^ 0xffffffff);
                }
LAB_02cdd5b0:
                uVar13 = uVar13 + 1;
              } while (uVar13 != 15000);
              break;
            case 0x21:
              uVar13 = 0;
              local_800[0] = &PTR_FUN_04b2a2f0;
              do {
                (**(code **)(local_7e0 + 0x10))(auStack_70,&local_7e0,uVar13);
                lVar16 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
                uVar6 = 1 << (ulong)(uVar13 & 0x1f);
                if ((*(uint *)(lVar16 + (ulong)(uVar13 >> 5) * 4) & uVar6) != 0) {
                  lVar16 = *(long *)puVar2;
                  uVar15 = FUN_0277d6c4(auStack_70);
                  if (*(long *)puVar2 != 0) {
                    lVar16 = *(long *)(lVar16 + 0x57e58);
                    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                    if (((uVar15 < *(uint *)(lVar16 + 0x1d8)) &&
                        (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
                       (uVar19 = (*(code *)*local_800[0])(local_800,auStack_70), (uVar19 & 1) != 0))
                    goto LAB_02cdd690;
                  }
                  lVar16 = (**(code **)(local_7e0 + 0x18))(&local_7e0);
                  lVar21 = (ulong)(uVar13 >> 5) * 4;
                  *(uint *)(lVar16 + lVar21) = *(uint *)(lVar16 + lVar21) & (uVar6 ^ 0xffffffff);
                }
LAB_02cdd690:
                uVar13 = uVar13 + 1;
              } while (uVar13 != 15000);
              break;
            case 0x22:
              uVar13 = 0;
              local_800[0] = &PTR_FUN_04b2a318;
              do {
                (**(code **)(local_7e0 + 0x10))(auStack_70,&local_7e0,uVar13);
                lVar16 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
                uVar6 = 1 << (ulong)(uVar13 & 0x1f);
                if ((*(uint *)(lVar16 + (ulong)(uVar13 >> 5) * 4) & uVar6) != 0) {
                  lVar16 = *(long *)puVar2;
                  uVar15 = FUN_0277d6c4(auStack_70);
                  if (*(long *)puVar2 != 0) {
                    lVar16 = *(long *)(lVar16 + 0x57e58);
                    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                    if (((uVar15 < *(uint *)(lVar16 + 0x1d8)) &&
                        (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
                       (uVar19 = (*(code *)*local_800[0])(local_800,auStack_70), (uVar19 & 1) != 0))
                    goto LAB_02cdd770;
                  }
                  lVar16 = (**(code **)(local_7e0 + 0x18))(&local_7e0);
                  lVar21 = (ulong)(uVar13 >> 5) * 4;
                  *(uint *)(lVar16 + lVar21) = *(uint *)(lVar16 + lVar21) & (uVar6 ^ 0xffffffff);
                }
LAB_02cdd770:
                uVar13 = uVar13 + 1;
              } while (uVar13 != 15000);
              break;
            case 0x23:
              uVar13 = 0;
              local_800[0] = &PTR_FUN_04b2a340;
              do {
                (**(code **)(local_7e0 + 0x10))(auStack_70,&local_7e0,uVar13);
                lVar16 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
                uVar6 = 1 << (ulong)(uVar13 & 0x1f);
                if ((*(uint *)(lVar16 + (ulong)(uVar13 >> 5) * 4) & uVar6) != 0) {
                  lVar16 = *(long *)puVar2;
                  uVar15 = FUN_0277d6c4(auStack_70);
                  if (*(long *)puVar2 != 0) {
                    lVar16 = *(long *)(lVar16 + 0x57e58);
                    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                    if (((uVar15 < *(uint *)(lVar16 + 0x1d8)) &&
                        (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
                       (uVar19 = (*(code *)*local_800[0])(local_800,auStack_70), (uVar19 & 1) != 0))
                    goto LAB_02cdd850;
                  }
                  lVar16 = (**(code **)(local_7e0 + 0x18))(&local_7e0);
                  lVar21 = (ulong)(uVar13 >> 5) * 4;
                  *(uint *)(lVar16 + lVar21) = *(uint *)(lVar16 + lVar21) & (uVar6 ^ 0xffffffff);
                }
LAB_02cdd850:
                uVar13 = uVar13 + 1;
              } while (uVar13 != 15000);
              break;
            case 0x24:
              uVar13 = 0;
              local_800[0] = &PTR_FUN_04b2a368;
              do {
                (**(code **)(local_7e0 + 0x10))(auStack_70,&local_7e0,uVar13);
                lVar16 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
                uVar6 = 1 << (ulong)(uVar13 & 0x1f);
                if ((*(uint *)(lVar16 + (ulong)(uVar13 >> 5) * 4) & uVar6) != 0) {
                  lVar16 = *(long *)puVar2;
                  uVar15 = FUN_0277d6c4(auStack_70);
                  if (*(long *)puVar2 != 0) {
                    lVar16 = *(long *)(lVar16 + 0x57e58);
                    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                    if (((uVar15 < *(uint *)(lVar16 + 0x1d8)) &&
                        (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
                       (uVar19 = (*(code *)*local_800[0])(local_800,auStack_70), (uVar19 & 1) != 0))
                    goto LAB_02cdd930;
                  }
                  lVar16 = (**(code **)(local_7e0 + 0x18))(&local_7e0);
                  lVar21 = (ulong)(uVar13 >> 5) * 4;
                  *(uint *)(lVar16 + lVar21) = *(uint *)(lVar16 + lVar21) & (uVar6 ^ 0xffffffff);
                }
LAB_02cdd930:
                uVar13 = uVar13 + 1;
              } while (uVar13 != 15000);
            }
            lVar21 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
            lVar16 = 0;
            iVar14 = 0;
            do {
              puVar1 = (uint *)(lVar21 + lVar16);
              lVar16 = lVar16 + 4;
              uVar13 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
              uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
              uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
              uVar13 = uVar13 + (uVar13 >> 8);
              iVar14 = (uVar13 + (uVar13 >> 0x10) & 0x3f) + iVar14;
            } while (lVar16 != 0x754);
            bVar12 = iVar14 != 0;
          }
        }
switchD_02cdd1f0_caseD_4:
        local_f80 = bVar12;
      }
    }
LAB_02cdda44:
    lVar16 = *(long *)((uint *)*param_1 + 2);
    uVar19 = uVar18;
    if (*(uint *)*param_1 <= uVar18) {
      uVar19 = 0;
    }
    lVar21 = lVar16 + uVar19 * 0x70;
    *(uint *)(lVar21 + 8) = local_fe0;
    puVar24 = *(undefined1 **)(lVar21 + 0x18);
    (**(code **)(local_fd8 + 0x18))(&local_fd8);
    puVar8 = local_fd0;
    if (puVar24 != local_fd0) {
      (**(code **)(local_fd8 + 0x18))(&local_fd8);
      lVar21 = 0;
      do {
        if (local_fd0[lVar21] == '\0') goto LAB_02cdcf54;
        if (local_fd0[lVar21 + 1] == '\0') {
          lVar21 = lVar21 + 1;
          goto LAB_02cdcf54;
        }
        if (local_fd0[lVar21 + 2] == '\0') {
          lVar21 = lVar21 + 2;
          goto LAB_02cdcf54;
        }
        lVar21 = lVar21 + 3;
      } while (lVar21 != 0x80001);
      lVar21 = 0;
LAB_02cdcf54:
      iVar4 = *(int *)(lVar16 + uVar19 * 0x70 + 0x20);
      iVar14 = (int)lVar21;
      if (iVar4 <= (int)lVar21) {
        iVar14 = iVar4 + -1;
      }
      memcpy(puVar24,puVar8,(long)iVar14);
      puVar24[iVar14] = 0;
    }
    uVar18 = uVar18 + 1;
    *(bool *)(lVar16 + uVar19 * 0x70 + 0x68) = local_f80;
    if (uVar18 == 0xb) {
      return;
    }
  } while( true );
}

