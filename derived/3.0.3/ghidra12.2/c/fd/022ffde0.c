
/* WARNING: Removing unreachable block (ram,0x02300114) */
/* WARNING: Removing unreachable block (ram,0x02300060) */
/* WARNING: Removing unreachable block (ram,0x02300070) */
/* WARNING: Removing unreachable block (ram,0x02300184) */

void FUN_022ffde0(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined *local_58;
  uint local_50;
  int local_4c;
  byte local_48;
  undefined8 local_40;
  undefined8 *local_38;
  int local_30;
  int iStack_2c;
  uint local_28;
  undefined4 local_24;
  
  puVar13 = *(undefined8 **)(param_1 + 0x28);
  sVar9 = *(short *)((long)puVar13 + 0xc);
  if (sVar9 == *(short *)PTR_DAT_04bb6298) {
    local_50 = 0;
    if (DAT_05aed670 == 0) {
      puVar15 = &DAT_055c04a0;
    }
    else {
      puVar15 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar15 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))
                            (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar5 = FUN_006bd550(*puVar15,0);
        puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar5 != 0x758f7eaf) {
          puVar15 = &DAT_055c04a0;
        }
      }
    }
    local_4c = *(int *)(puVar15 + 7);
    local_48 = FUN_017baf44();
    local_48 = local_48 & 1;
    local_58 = PTR_DAT_04bb6268 + 0x10;
    local_30 = (int)*(short *)(puVar13 + 1);
    iStack_2c = (int)*(short *)((long)puVar13 + 10);
    local_38 = &DAT_048f9750;
    local_40 = 0xfffe;
    FUN_0277d4ac(&local_40);
    local_40 = *puVar13;
    cVar3 = *(char *)((long)puVar13 + 0xe);
    if (cVar3 == '\x02') {
      uVar6 = FUN_01a4f798(&local_58,0,&local_38);
      if ((uVar6 & 1) != 0) {
        local_24 = 0;
        lVar8 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xd0);
        if (lVar8 != 0) {
          FUN_012e5af4(lVar8,&local_38);
        }
      }
    }
    else if (cVar3 == '\x01') {
      FUN_011f3390(&local_58,0,&local_40,&local_38);
    }
    else {
      if (cVar3 != '\0') {
        return;
      }
      FUN_011f3880(&local_58,0,&local_40,&local_38);
    }
    if (DAT_0514f7f0 != 0) {
      uVar2 = 3;
      if (*(char *)((long)puVar13 + 0xe) != '\x01') {
        uVar2 = 0;
      }
      FUN_01225ba0(DAT_0514f7f0,&local_38,uVar2);
    }
  }
  else {
    bVar4 = DAT_055c1b60 == &DAT_055c1b58;
    puVar15 = DAT_055c1b60 + -8;
    if ((sVar9 != 0) && (puVar12 = DAT_055c1b60, puVar15 != &DAT_055c1b18)) {
      do {
        puVar12 = (undefined8 *)puVar12[1];
        sVar9 = sVar9 + -1;
        bVar4 = puVar12 == &DAT_055c1b58;
      } while (!bVar4 && sVar9 != 0);
      puVar15 = puVar12 + -8;
    }
    puVar12 = &DAT_055c04a0;
    if (!bVar4) {
      puVar12 = puVar15;
    }
    local_4c = *(int *)(puVar12 + 7);
    uVar6 = 0;
    do {
      piVar1 = &DAT_0516b108 + uVar6;
      uVar14 = (uint)uVar6;
      if (0x38 < uVar14) {
        piVar1 = &DAT_0516b108;
      }
      if (*piVar1 == local_4c) {
        if (uVar14 == 0) {
          return;
        }
        local_50 = uVar14;
        local_48 = FUN_017baf44();
        local_48 = local_48 & 1;
        local_58 = PTR_DAT_04bb6268 + 0x10;
        local_30 = (int)*(short *)(puVar13 + 1);
        iStack_2c = (int)*(short *)((long)puVar13 + 10);
        local_38 = &DAT_048f9750;
        local_40 = 0xfffe;
        FUN_0277d4ac(&local_40);
        local_40 = *puVar13;
        cVar3 = *(char *)((long)puVar13 + 0xe);
        if (cVar3 == '\x02') {
          uVar7 = FUN_01a4f798(&local_58,0,&local_38);
          if ((uVar7 & 1) == 0) {
            return;
          }
          if (uVar14 == 0) {
            lVar8 = 0;
          }
          else {
            if (uVar14 == 0) {
              plVar10 = (long *)(DAT_0519d040 + 0x1f8);
            }
            else {
              plVar10 = (long *)(DAT_0519d040 + 0x30) + uVar6;
              if (0x38 < uVar14) {
                plVar10 = (long *)(DAT_0519d040 + 0x30);
              }
            }
            lVar8 = *plVar10;
          }
          local_24 = 0;
          if (*(long *)(lVar8 + 0xd0) == 0) {
            return;
          }
          local_28 = uVar14;
          FUN_012e5af4(*(long *)(lVar8 + 0xd0),&local_38);
          return;
        }
        if (cVar3 == '\x01') {
          FUN_011f3390(&local_58,0,&local_40,&local_38);
          return;
        }
        if (cVar3 == '\0') {
          FUN_011f3880(&local_58,0,&local_40,&local_38);
          return;
        }
        return;
      }
      uVar11 = 0x39;
      if ((int)uVar14 < 0x39) {
        uVar11 = uVar14 + 1;
      }
      uVar6 = (ulong)uVar11;
    } while (uVar11 != 0x39);
  }
  return;
}

