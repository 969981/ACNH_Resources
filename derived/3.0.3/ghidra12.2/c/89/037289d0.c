
ulong FUN_037289d0(long param_1,undefined8 param_2,ulong param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint *puVar16;
  char cVar17;
  int *piVar18;
  uint *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  uint *puVar22;
  long lVar23;
  undefined8 local_78;
  char *local_70;
  uint local_64;
  ulong local_60;
  undefined4 local_58;
  
  uVar8 = FUN_03722560();
  if (uVar8 == 0xffffffff) {
    return 0;
  }
  if (uVar8 < *(uint *)(param_1 + 0xe0)) {
    lVar23 = *(long *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar8 * 8);
  }
  else {
    lVar23 = 0;
  }
  lVar13 = *(long *)PTR_DAT_04bb2720;
  if (lVar13 == 0) {
    puVar20 = &DAT_055c04a0;
  }
  else {
    puVar20 = &DAT_055c04a0;
    if (*(long *)(lVar13 + 0x330) != 0) {
      puVar20 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
      iVar9 = FUN_006bd550(*puVar20,0);
      puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar20 = &DAT_055c04a0;
      }
    }
  }
  iVar9 = *(int *)(puVar20 + 7);
  if (DAT_05ac0a90 == iVar9) {
    lVar13 = 0;
    uVar12 = DAT_05ac0a94;
  }
  else if (DAT_05ac0aa0 == iVar9) {
    lVar13 = 1;
    uVar12 = DAT_05ac0aa4;
  }
  else if (DAT_05ac0ab0 == iVar9) {
    lVar13 = 2;
    uVar12 = DAT_05ac0ab4;
  }
  else if (DAT_05ac0ac0 == iVar9) {
    lVar13 = 3;
    uVar12 = DAT_05ac0ac4;
  }
  else {
    if (DAT_05ac0ad0 == iVar9) {
      lVar13 = 4;
    }
    else if (DAT_05ac0ae0 == iVar9) {
      lVar13 = 5;
    }
    else if (DAT_05ac0af0 == iVar9) {
      lVar13 = 6;
    }
    else if (DAT_05ac0b00 == iVar9) {
      lVar13 = 7;
    }
    else if (DAT_05ac0b10 == iVar9) {
      lVar13 = 8;
    }
    else {
      if (DAT_05ac0b20 != iVar9) {
        return 0;
      }
      lVar13 = 9;
    }
    uVar12 = (&DAT_05ac0a94)[lVar13 * 4];
    if (DAT_05ac0ad0 == iVar9) {
      lVar13 = 4;
    }
    else if (DAT_05ac0ae0 == iVar9) {
      lVar13 = 5;
    }
    else if (DAT_05ac0af0 == iVar9) {
      lVar13 = 6;
    }
    else if (DAT_05ac0b00 == iVar9) {
      lVar13 = 7;
    }
    else if (DAT_05ac0b10 == iVar9) {
      lVar13 = 8;
    }
    else {
      if (DAT_05ac0b20 != iVar9) {
        return 0;
      }
      lVar13 = 9;
    }
  }
  local_64 = (&DAT_05ac0a98)[lVar13 * 4];
  if ((*(ushort *)(lVar23 + 0x114) >> 6 & 1) != 0) {
    plVar21 = (long *)(lVar23 + 0x10);
    (**(code **)(*plVar21 + 0x18))(plVar21);
    (**(code **)(*plVar21 + 0x18))(plVar21);
    if (*(undefined1 **)(lVar23 + 0x18) == &DAT_04081e70) {
LAB_03728f0c:
      local_78 = PTR_DAT_04bb2020 + 0x10;
      local_70 = "BoaGetTurnipToday";
      iVar9 = FUN_02758850(&local_78);
      uVar8 = 6;
      if (iVar9 == 0) {
        uVar8 = 7;
      }
      uVar14 = (ulong)uVar8;
      goto LAB_037290b8;
    }
    uVar14 = 0;
    bVar7 = true;
    do {
      cVar17 = (*(undefined1 **)(lVar23 + 0x18))[uVar14];
      if (cVar17 != (&DAT_04081e70)[uVar14]) break;
      if (cVar17 == '\0') {
        if (bVar7) goto LAB_03728f0c;
        break;
      }
      bVar7 = uVar14 < 0x80000;
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x80001);
  }
  if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)
      ) && (*(int *)(lVar23 + 0x3c) == 0)) {
    local_78._0_3_ = 0x80023;
    FUN_020fd3a0(&local_78,lVar23 + 0x10);
    uVar8 = FUN_021d7d60(&local_78);
    if (((uVar8 < 10) && ((&DAT_053fee41)[(ulong)uVar8 * 0xba0] != '\0')) &&
       (((&DAT_053fede8)[(ulong)uVar8 * 0x174] != 0 &&
        (*(int *)((&DAT_053fede8)[(ulong)uVar8 * 0x174] + 4) == 1)))) {
      local_78 = (undefined *)CONCAT53(local_78._3_5_,0x80023);
      FUN_020fd3a0(&local_78,lVar23 + 0x10);
      uVar14 = (ulong)local_78 & 0xff;
      if (((0x22 < uVar14) || ((byte)PTR_DAT_04bc27f0[uVar14] < local_78._1_1_)) ||
         (((*(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(local_78._1_1_ & 0x1f) & 1) == 0 ||
          ((uVar8 = FUN_021d7d60(&local_78), uVar8 == 0xffffffff ||
           ((*(ushort *)(param_1 + 0x17210) >> (ulong)(uVar8 & 0x1f) & 1) == 0)))))) {
        uVar14 = (ulong)DAT_05abbc50;
        goto LAB_037290b8;
      }
    }
  }
  puVar6 = PTR_DAT_04bc3980;
  puVar5 = PTR_DAT_04bc3978;
  puVar4 = PTR_DAT_04bb4960;
  puVar1 = (uint *)(param_1 + 0x1460);
  puVar19 = puVar1 + local_64;
  if (2 < local_64) {
    puVar19 = puVar1;
  }
  uVar8 = *puVar19;
  local_78 = PTR_DAT_04bcab10 + 0x10;
  if ((int)DAT_05ab0ed0 < 1) {
    if ((((DAT_05ab0dc0 == 0) || (puVar19 = *(uint **)(DAT_05ab0dc0 + 8), puVar19 == (uint *)0x0))
        || ((uVar8 < DAT_05ab0dd8 && (*(char *)(DAT_05ab0de0 + (int)uVar8) == '\0')))) ||
       (((*puVar19 <= uVar8 || (puVar19[1] == 0)) || ((ushort)puVar19[2] == 0)))) goto LAB_03728ea4;
    iVar9 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    local_70 = (char *)((ulong)(puVar19[1] * uVar8 + (uint)(ushort)puVar19[2] * 8 + iVar9) +
                       (long)puVar19);
  }
  else if (uVar8 < DAT_05ab0ed0) {
    if (DAT_05ab0ec0 <= uVar8) {
      uVar8 = 0;
    }
    local_70 = *(char **)(DAT_05ab0ec8 + (ulong)uVar8 * 8);
  }
  else {
LAB_03728ea4:
    local_70 = (char *)0x0;
  }
  puVar19 = (uint *)(lVar23 + 0xd8);
  if (*puVar19 == 0) {
    uVar14 = 0;
    goto LAB_037290b8;
  }
  lVar13 = *(long *)PTR_DAT_04bb4960;
  if (lVar13 == 0) goto LAB_03729064;
  local_58 = 0;
  local_60 = 0;
  switch(uVar12) {
  case 0:
    uVar8 = 1;
    goto LAB_03728f80;
  case 1:
    local_60 = 0x300000002;
    local_58 = 4;
    break;
  case 2:
    local_60 = 0x600000005;
    local_58 = 10;
    break;
  case 3:
    local_60 = 0x900000007;
    break;
  case 4:
    uVar8 = 8;
LAB_03728f80:
    local_60 = (ulong)uVar8;
  }
  uVar14 = (ulong)local_64;
  if (2 < local_64) {
    uVar14 = 0;
  }
  uVar8 = *(uint *)((long)&local_60 + uVar14 * 4);
  uVar10 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x7f8);
  if ((uVar10 < *(uint *)(lVar13 + 0x7d8)) &&
     (puVar22 = *(uint **)(*(long *)(lVar13 + 0x7e0) + (long)(int)uVar10 * 8),
     puVar22 != (uint *)0x0)) {
    uVar15 = 0;
    uVar10 = *puVar22;
    if ((uVar10 != 0) && (puVar22 != (uint *)(ulong)uVar10)) {
      puVar16 = (uint *)((long)puVar22 - (long)(ulong)uVar10);
      uVar15 = 0;
      if (*puVar16 != 0) {
        uVar10 = puVar16[1];
        if ((uVar10 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar16 + lVar13 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar13 != 0) {
            uVar15 = 0;
            if ((ulong)uVar10 != 0) {
              uVar15 = (uint)((ulong)((long)puVar22 - lVar13) / (ulong)uVar10);
            }
            if (*puVar16 <= uVar15) {
              uVar15 = 0xffffffff;
            }
            if ((uVar15 < *(uint *)PTR_DAT_04bc3970) &&
               (uVar15 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc3970 + 8) + (long)(int)uVar15 * 2),
               uVar15 < 0x15)) goto LAB_03729054;
          }
        }
        uVar15 = 0;
      }
    }
LAB_03729054:
    if (*puVar19 == uVar15) goto LAB_03729064;
    uVar10 = *puVar19;
    uVar15 = *puVar22;
    if (uVar15 != 0) {
      cVar17 = *PTR_DAT_04bc3978;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
          uVar15 = *puVar22;
        }
        else {
          uVar2 = *(uint *)(puVar6 + 0x24);
          if (-1 < (int)uVar2) {
            if (((byte *)((ulong)uVar2 + (long)puVar22) != (byte *)0x0) &&
               (bVar3 = *(byte *)((ulong)uVar2 + (long)puVar22), uVar15 = (uint)bVar3, bVar3 < 0x15)
               ) goto LAB_037291e0;
            break;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar16 = (uint *)(ulong)uVar15;
        uVar15 = 0;
        if ((puVar16 == (uint *)0x0) || (puVar22 == puVar16)) goto LAB_037291e0;
        lVar13 = 0xc;
        if (*(char *)((long)puVar22 + (10 - (long)puVar16)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar22 + (lVar13 - (long)puVar16);
        uVar15 = 0;
        if (lVar13 == 0) goto LAB_037291e0;
        uVar14 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar16));
        *(undefined4 *)(puVar6 + 0x24) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar18 = (int *)(lVar13 + 4);
        while (piVar18[-1] != 0x3297a85e) {
          piVar18 = piVar18 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_037291dc;
        }
        iVar9 = 0;
        if (*piVar18 != -1) {
          iVar9 = *piVar18;
        }
        *(int *)(puVar6 + 0x24) = iVar9;
        uVar15 = *puVar22;
        if (uVar15 == 0) break;
      } while( true );
    }
LAB_037291dc:
    uVar15 = 0;
LAB_037291e0:
    if (uVar10 == uVar15) {
      uVar12 = 1;
    }
    else {
      uVar10 = *puVar19;
      local_60._0_4_ = uVar8;
      uVar8 = FUN_03738a30(puVar22);
      if (uVar10 == uVar8) {
        uVar12 = 2;
      }
      else {
        uVar8 = *puVar19;
        uVar10 = FUN_03738b30(puVar22);
        uVar12 = 3;
        if (uVar8 != uVar10) {
          uVar12 = 0;
        }
      }
    }
  }
  else {
LAB_03729064:
    uVar12 = 0;
  }
  if ((param_3 & 1) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined4 *)(lVar23 + 0xe4);
  }
  local_60 = CONCAT44(local_60._4_4_,uVar11);
  uVar14 = (ulong)local_64;
  if (2 < local_64) {
    uVar14 = 0;
  }
  if (puVar1[uVar14] == 0) {
    uVar14 = FUN_036aecf0(*(undefined8 *)puVar4,puVar19,lVar23 + 0x118,&local_60);
  }
  else {
    uVar14 = FUN_036a1bbc(&local_78,uVar12,lVar23 + 0x118,&local_60);
  }
LAB_037290b8:
  *(int *)(lVar23 + 0xe4) = (int)uVar14;
  return uVar14;
}

