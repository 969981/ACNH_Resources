
void FUN_020b3960(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  bool bVar7;
  undefined *puVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  byte *pbVar14;
  long lVar15;
  undefined1 *puVar16;
  long *plVar17;
  float fVar18;
  byte local_88 [4];
  short local_84 [2];
  ulong local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined *local_70;
  char *local_68;
  
  puVar8 = PTR_DAT_04bb2020;
  if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
    return;
  }
  pbVar14 = PTR_DAT_04bb32e0;
  if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
    pbVar14 = (byte *)(DAT_04cd19d8 + 0x158);
  }
  if ((*pbVar14 < 8) ||
     (((*(int *)(DAT_04cd19d8 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
      (pbVar14 = (byte *)(DAT_054f5738 + 0x11a5), *pbVar14 < 8)))) {
LAB_020b3a60:
    local_88[0] = *pbVar14;
    if (7 < local_88[0]) {
      local_88[0] = 0xff;
    }
  }
  else {
    if (DAT_0537d558 == (long *)0x0) {
LAB_020b3a58:
      pbVar14 = &DAT_0548e168;
      goto LAB_020b3a60;
    }
    lVar15 = *DAT_0537d558;
    bVar6 = *(byte *)(lVar15 + 0x473);
    pbVar14 = PTR_DAT_04bb5038;
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      puVar5 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar5 = (uint *)(lVar15 + 0x48);
      }
      if ((*puVar5 & 8) != 0) {
        pbVar14 = (byte *)(lVar15 + 0x471);
      }
    }
    local_88[0] = *pbVar14;
    if (7 < local_88[0]) goto LAB_020b3a58;
  }
  piVar3 = (int *)(param_1 + 0x4e60);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_68 = "StandByRcoVisitMyHomeAfterTkkFirstLive";
  local_70 = puVar1;
  iVar10 = FUN_0274bce0(local_88,&local_70);
  if ((iVar10 == 0) || (7 < local_88[0])) {
LAB_020b3b44:
    bVar7 = false;
  }
  else {
    local_74 = CONCAT31(local_74._1_3_,local_88[0]);
    iVar10 = FUN_02582fe0(&local_74);
    if (iVar10 == -1) goto LAB_020b3b44;
    local_80 = local_80 & 0xffffffff00000000;
    uVar12 = FUN_02b5e950(&local_80,iVar10);
    if ((((uVar12 & 1) == 0) ||
        (uVar12 = FUN_02b5fa90(local_84,local_80 & 0xffffffff), (uVar12 & 1) == 0)) ||
       (local_84[0] == 0)) goto LAB_020b3b44;
    FUN_02b62bd0(&local_74,local_84[0]);
    local_78 = 0;
    local_80 = 0;
    uVar12 = FUN_02b630b0(&local_80,local_84[0]);
    if ((uVar12 & 1) == 0) goto LAB_020b3b44;
    fVar18 = (float)NEON_ucvtf(local_74);
    fVar18 = fVar18 * 1.4629181e-09;
    if (ABS(fVar18) == INFINITY) {
      sinf(fVar18);
      cosf(fVar18);
    }
    bVar7 = true;
  }
  uVar12 = FUN_021a67e0(&DAT_053fe348,local_88);
  local_68 = "RcoStayMyHouseImmQClear";
  local_70 = puVar1;
  iVar10 = FUN_0274bce0(local_88,&local_70);
  if (bVar7) {
    if (*piVar3 < *(int *)(param_1 + 0x4e64)) {
      plVar17 = *(long **)(param_1 + 0x4e70);
      if (plVar17 != (long *)0x0) {
        *(long *)(param_1 + 0x4e70) = *plVar17;
      }
      local_70 = puVar8 + 0x10;
      local_68 = "TkkFirstLiveInviteRco";
      *(undefined4 *)(plVar17 + 2) = 0x20;
      puVar1 = PTR_DAT_04bb2a08;
      pcVar2 = (char *)((long)plVar17 + 0x14);
      *(undefined1 *)((long)plVar17 + 0x33) = 0;
      *plVar17 = (long)(puVar1 + 0x10);
      plVar17[1] = (long)pcVar2;
      (**(code **)(puVar8 + 0x28))(&local_70);
      pcVar9 = local_68;
      if (pcVar2 != local_68) {
        (**(code **)(local_70 + 0x18))(&local_70);
        lVar15 = 0;
        do {
          if (local_68[lVar15] == '\0') goto LAB_020b3d5c;
          if (local_68[lVar15 + 1] == '\0') {
            lVar15 = lVar15 + 1;
            goto LAB_020b3d5c;
          }
          if (local_68[lVar15 + 2] == '\0') {
            lVar15 = lVar15 + 2;
            goto LAB_020b3d5c;
          }
          lVar15 = lVar15 + 3;
        } while (lVar15 != 0x80001);
        lVar15 = 0;
LAB_020b3d5c:
        iVar11 = (int)lVar15;
        if ((int)plVar17[2] <= (int)lVar15) {
          iVar11 = (int)plVar17[2] + -1;
        }
        memcpy(pcVar2,pcVar9,(long)iVar11);
        pcVar2[iVar11] = '\0';
      }
      *plVar17 = (long)&PTR_LAB_048f9700;
      if (*piVar3 < *(int *)(param_1 + 0x4e64)) {
        *(long **)(*(long *)(param_1 + 0x4e68) + (long)*piVar3 * 8) = plVar17;
        *piVar3 = *piVar3 + 1;
      }
    }
    puVar16 = *(undefined1 **)(param_1 + 0xd30);
    *(uint *)(param_1 + 0xd60) = *(uint *)(param_1 + 0xd60) | 2;
    if (puVar16 == &DAT_04066e12) {
      iVar11 = 0;
    }
    else {
      iVar4 = 3;
      if (*(int *)(param_1 + 0xd38) < 4) {
        iVar4 = *(int *)(param_1 + 0xd38) + -1;
      }
      memcpy(puVar16,&DAT_04066e12,(long)iVar4);
      iVar11 = 0;
      puVar16 = puVar16 + iVar4;
LAB_020b3ed8:
      *puVar16 = 0;
    }
    if ((uVar12 & 1) == 0) {
LAB_020b3ee8:
      FUN_021ac130(&DAT_053fe348);
    }
    uVar13 = *(uint *)(param_1 + 0xd60);
    bVar7 = (bool)(bVar7 ^ 1);
    if (iVar11 == 0) {
      bVar7 = true;
    }
    if (!bVar7) {
      uVar13 = uVar13 | 4;
      *(uint *)(param_1 + 0xd60) = uVar13;
    }
    if ((uVar12 & 1) != 0) goto LAB_020b3f28;
  }
  else {
    if ((uVar12 & 1) == 0) {
      if (iVar10 == 0) {
        iVar11 = 3;
      }
      else {
        if (*piVar3 < *(int *)(param_1 + 0x4e64)) {
          plVar17 = *(long **)(param_1 + 0x4e70);
          if (plVar17 != (long *)0x0) {
            *(long *)(param_1 + 0x4e70) = *plVar17;
          }
          local_70 = puVar8 + 0x10;
          local_68 = "ImmQTalkAboutPrize";
          *(undefined4 *)(plVar17 + 2) = 0x20;
          puVar1 = PTR_DAT_04bb2a08;
          pcVar2 = (char *)((long)plVar17 + 0x14);
          *(undefined1 *)((long)plVar17 + 0x33) = 0;
          *plVar17 = (long)(puVar1 + 0x10);
          plVar17[1] = (long)pcVar2;
          (**(code **)(puVar8 + 0x28))(&local_70);
          pcVar9 = local_68;
          if (pcVar2 != local_68) {
            (**(code **)(local_70 + 0x18))(&local_70);
            lVar15 = 0;
            do {
              if (local_68[lVar15] == '\0') goto LAB_020b3e28;
              if (local_68[lVar15 + 1] == '\0') {
                lVar15 = lVar15 + 1;
                goto LAB_020b3e28;
              }
              if (local_68[lVar15 + 2] == '\0') {
                lVar15 = lVar15 + 2;
                goto LAB_020b3e28;
              }
              lVar15 = lVar15 + 3;
            } while (lVar15 != 0x80001);
            lVar15 = 0;
LAB_020b3e28:
            iVar11 = (int)lVar15;
            if ((int)plVar17[2] <= (int)lVar15) {
              iVar11 = (int)plVar17[2] + -1;
            }
            memcpy(pcVar2,pcVar9,(long)iVar11);
            pcVar2[iVar11] = '\0';
          }
          *plVar17 = (long)&PTR_LAB_048f9700;
          if (*piVar3 < *(int *)(param_1 + 0x4e64)) {
            *(long **)(*(long *)(param_1 + 0x4e68) + (long)*piVar3 * 8) = plVar17;
            *piVar3 = *piVar3 + 1;
          }
        }
        puVar16 = *(undefined1 **)(param_1 + 0xd30);
        *(uint *)(param_1 + 0xd60) = *(uint *)(param_1 + 0xd60) | 2;
        if (puVar16 != &DAT_04066e12) {
          iVar11 = 3;
          if (*(int *)(param_1 + 0xd38) < 4) {
            iVar11 = *(int *)(param_1 + 0xd38) + -1;
          }
          memcpy(puVar16,&DAT_04066e12,(long)iVar11);
          puVar16 = puVar16 + iVar11;
          iVar11 = 2;
          goto LAB_020b3ed8;
        }
        iVar11 = 2;
      }
      goto LAB_020b3ee8;
    }
    local_68 = "TownNewsReserve";
    local_70 = puVar8 + 0x10;
    iVar11 = FUN_0274bce0(local_88,&local_70);
    if (iVar11 == 0) {
      local_68 = "CanSetPlayerBirthdayCallNpc";
      local_70 = puVar8 + 0x10;
      FUN_02743234(&local_70,1);
      uVar13 = *(uint *)(param_1 + 0xd60);
      goto LAB_020b3f38;
    }
    uVar13 = *(uint *)(param_1 + 0xd60);
    iVar11 = 3;
LAB_020b3f28:
    uVar13 = uVar13 | 4;
    *(uint *)(param_1 + 0xd60) = uVar13;
  }
  if (iVar11 == 2) {
    return;
  }
LAB_020b3f38:
  if (iVar10 != 0) {
    *(uint *)(param_1 + 0xd60) = uVar13 | 4;
  }
  return;
}

