
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0291d890(void)

{
  long lVar1;
  uint *puVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  long *plVar16;
  long *plVar17;
  undefined1 *puVar18;
  byte local_9c [4];
  undefined *local_98;
  undefined1 *local_90;
  int local_88;
  undefined1 auStack_84 [31];
  undefined1 local_65;
  
  puVar5 = PTR_DAT_04bb2640;
  if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar12 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar11 = FUN_006bd550(*puVar12,0);
    if ((iVar11 == 0x758f7eaf) && (DAT_05aed670 != 0)) {
      plVar17 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar12 = (undefined8 *)
                  (**(code **)(**(long **)puVar5 + 0x18))
                            (*(long **)puVar5,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar11 = FUN_006bd550(*puVar12,0);
        plVar17 = (long *)PTR_DAT_04bc3a78;
        if (iVar11 != 0x758f7eaf) {
          plVar17 = &DAT_055c04a0;
        }
      }
      goto LAB_0291d958;
    }
  }
  plVar17 = &DAT_055c04a0;
LAB_0291d958:
  puVar5 = PTR_DAT_04bb2a08;
  local_88 = 0x20;
  local_65 = 0;
  local_98 = PTR_DAT_04bb2a08 + 0x10;
  local_90 = auStack_84;
  (**(code **)(*plVar17 + 0x18))(plVar17);
  puVar18 = (undefined1 *)plVar17[1];
  if (auStack_84 != puVar18) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
    lVar14 = 0;
    do {
      if (*(char *)(plVar17[1] + lVar14) == '\0') goto LAB_0291d9fc;
      lVar1 = plVar17[1] + lVar14;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_0291d9fc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_0291d9fc;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_0291d9fc:
    iVar11 = (int)lVar14;
    if (local_88 <= (int)lVar14) {
      iVar11 = local_88 + -1;
    }
    memcpy(auStack_84,puVar18,(long)iVar11);
    auStack_84[iVar11] = 0;
  }
  puVar4 = PTR_DAT_04bb2028;
  local_98 = PTR_DAT_04bb2028 + 0x10;
  local_90[(long)local_88 + -1] = 0;
  iVar11 = FUN_006bd550(local_90,0);
  uVar10 = DAT_055c11b4;
  uVar9 = DAT_055c11b0;
  uVar8 = DAT_055c11ac;
  uVar7 = DAT_055c11a8;
  uVar6 = DAT_055c11a4;
  if (DAT_055c1b60 != &DAT_055c1b58) {
    plVar16 = DAT_055c1b60 + -8;
    puVar12 = DAT_055c1b60;
    plVar17 = plVar16;
    do {
      if ((int)plVar17[7] == iVar11) {
        if (DAT_04cd19d8 == 0) {
          pbVar15 = &DAT_0548e140;
LAB_0291daf0:
          if (*pbVar15 < 8) goto LAB_0291db68;
LAB_0291dafc:
          if (DAT_0537d558 == (long *)0x0) {
LAB_0291db60:
            pbVar15 = &DAT_0548e168;
            goto LAB_0291db68;
          }
          lVar14 = *DAT_0537d558;
          bVar3 = *(byte *)(lVar14 + 0x473);
          pbVar15 = PTR_DAT_04bb5038;
          if ((long)(char)bVar3 != 0xffffffffffffffff) {
            puVar2 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
            if (7 < bVar3) {
              puVar2 = (uint *)(lVar14 + 0x48);
            }
            if ((*puVar2 & 8) != 0) {
              pbVar15 = (byte *)(lVar14 + 0x471);
            }
          }
          local_9c[0] = *pbVar15;
          if (7 < local_9c[0]) goto LAB_0291db60;
        }
        else {
          pbVar15 = PTR_DAT_04bb32e0;
          if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
            pbVar15 = (byte *)(DAT_04cd19d8 + 0x158);
          }
          if (7 < *pbVar15) {
            if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
              pbVar15 = (byte *)(DAT_054f5738 + 0x11a5);
              goto LAB_0291daf0;
            }
            goto LAB_0291dafc;
          }
LAB_0291db68:
          local_9c[0] = *pbVar15;
          if (7 < local_9c[0]) {
            local_9c[0] = 0xff;
          }
        }
        puVar12 = DAT_055c1b60;
        if (DAT_055c11a0 == 0) {
          return;
        }
        goto LAB_0291dba0;
      }
      puVar12 = (undefined8 *)puVar12[1];
      plVar17 = puVar12 + -8;
    } while (puVar12 != &DAT_055c1b58);
  }
  return;
  while( true ) {
    puVar12 = (undefined8 *)puVar12[1];
    plVar16 = puVar12 + -8;
    if (puVar12 == &DAT_055c1b58) break;
LAB_0291dba0:
    if ((int)plVar16[7] == DAT_055c11a0) goto LAB_0291dbc0;
  }
  plVar16 = &DAT_055c1098;
LAB_0291dbc0:
  local_65 = 0;
  local_88 = 0x20;
  local_98 = puVar5 + 0x10;
  local_90 = auStack_84;
  (**(code **)(*plVar16 + 0x18))(plVar16);
  puVar18 = (undefined1 *)plVar16[1];
  if (auStack_84 != puVar18) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
    lVar14 = 0;
    do {
      if (*(char *)(plVar16[1] + lVar14) == '\0') goto LAB_0291dc5c;
      lVar1 = plVar16[1] + lVar14;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_0291dc5c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_0291dc5c;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_0291dc5c:
    iVar11 = (int)lVar14;
    if (local_88 <= (int)lVar14) {
      iVar11 = local_88 + -1;
    }
    memcpy(auStack_84,puVar18,(long)iVar11);
    auStack_84[iVar11] = 0;
  }
  local_98 = puVar4 + 0x10;
  if (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') {
    return;
  }
  uVar13 = FUN_02930ce0(&DAT_055c10d0,&local_98,local_9c);
  if ((uVar13 & 1) == 0) {
    return;
  }
  DAT_055c1174._0_4_ = uVar6;
  DAT_055c1174._4_4_ = uVar7;
  DAT_055c117c = uVar8;
  DAT_055c1180 = uVar9;
  DAT_055c1184 = uVar10;
  if (7 < local_9c[0]) {
    local_9c[0] = 0xff;
  }
  _DAT_055c1198 = 0x101;
  DAT_055c119a = 0;
  DAT_055c116c = 0;
  if (DAT_05694df8 == 0) {
    DAT_055c116c = 0;
    DAT_055c1188 = local_9c[0];
    _DAT_055c1198 = 0x101;
    DAT_055c119a = 0;
    return;
  }
  lVar14 = *(long *)(DAT_05694df8 + 8);
  if (lVar14 == 0) {
    DAT_055c116c = 0;
    DAT_055c1188 = local_9c[0];
    _DAT_055c1198 = 0x101;
    DAT_055c119a = 0;
    return;
  }
  if (*(int *)(DAT_05694df8 + 0x10) == 0) {
    DAT_055c1188 = local_9c[0];
    *(undefined4 *)(lVar14 + 0x340) = 0;
    *(undefined8 *)(lVar14 + 0x338) = 0x1e00000000;
    *(undefined2 *)(lVar14 + 0x34c) = 0;
    *(undefined1 **)(lVar14 + 0x344) = &DAT_3f8000003f800000;
    return;
  }
  DAT_055c116c = 0;
  DAT_055c1188 = local_9c[0];
  _DAT_055c1198 = 0x101;
  DAT_055c119a = 0;
  return;
}

