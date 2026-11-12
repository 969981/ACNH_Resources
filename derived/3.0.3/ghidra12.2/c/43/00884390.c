
bool FUN_00884390(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *__s;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint *puVar11;
  char *pcVar12;
  uint *puVar13;
  ulong *puVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  char cVar19;
  uint uVar20;
  undefined *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  char *pcStack_88;
  long local_80;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_68;
  
  local_68 = param_3;
  puVar14 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar14 == 0) {
    local_90 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_90 >> 0x20) < '\x05') {
      local_80 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
      local_80 = local_80 + -0x15180;
      local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
    }
    puVar14 = &local_90;
    uVar9 = (ulong)local_90 >> 0x30;
    local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
    local_90 = (undefined *)(CONCAT26((short)uVar9,(undefined6)local_90) & 0xff00ffffffffffff);
  }
  uVar18 = *puVar14;
  local_70 = uVar18;
  FUN_0087a0f0(&local_80,param_1,param_2,&local_70);
  uVar9 = FUN_0087af00(param_1,&local_80);
  if ((uVar9 & 1) == 0) {
    return false;
  }
  uVar9 = FUN_00879630(param_1,&local_80,0);
  if ((uVar9 & 1) == 0) {
    return false;
  }
  (**(code **)(local_80 + 0x18))(&local_80);
  uVar7 = FUN_006bd550(local_78,0);
  local_90._0_4_ = uVar7;
  uVar10 = FUN_0088c0d0(param_1 + 8,&local_90);
  uVar9 = FUN_00875c10(param_1,uVar10,uVar18 & 0xffffffff,uVar18 >> 0x10 & 0xffffffff,
                       uVar18 >> 0x18 & 0xffffffff);
  if ((uVar9 & 1) == 0) {
    return false;
  }
  (**(code **)(local_80 + 0x18))(&local_80);
  uVar7 = FUN_006bd550(local_78,0);
  local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar7);
  puVar11 = (uint *)FUN_0088c0d0(param_1 + 8,&local_90);
  __s = PTR_DAT_04bb3250;
  puVar5 = PTR_DAT_04bb3248;
  if (puVar11 == (uint *)0x0) {
    return false;
  }
  if (*puVar11 != 0) {
    cVar19 = *PTR_DAT_04bb3248;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *puVar5 = 1;
        memset(__s,0xff,0x288);
      }
      else {
        uVar20 = *(uint *)(__s + 0x148);
        if (-1 < (int)uVar20) {
          pcVar12 = (char *)((ulong)uVar20 + (long)puVar11);
          goto LAB_008845d8;
        }
        if (uVar20 != 0xffffffff) break;
      }
      puVar13 = (uint *)(ulong)*puVar11;
      pcVar12 = (char *)0x0;
      if ((*puVar11 == 0) || (puVar11 == puVar13)) goto LAB_008845d8;
      lVar3 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar13)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)puVar11 + (lVar3 - (long)puVar13);
      if (lVar3 == 0) break;
      uVar9 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar13));
      *(undefined4 *)(__s + 0x148) = 0xfffffffe;
      pcVar12 = (char *)0x0;
      if (uVar9 == 0) goto LAB_008845d8;
      piVar15 = (int *)(lVar3 + 4);
      while (piVar15[-1] != 0x443c0fb7) {
        piVar15 = piVar15 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          pcVar12 = (char *)0x0;
          goto LAB_008845d8;
        }
      }
      iVar8 = 0;
      if (*piVar15 != -1) {
        iVar8 = *piVar15;
      }
      *(int *)(__s + 0x148) = iVar8;
    } while (*puVar11 != 0);
  }
  pcVar12 = (char *)0x0;
LAB_008845d8:
  puVar4 = PTR_DAT_04bb2020;
  pcVar1 = *(char **)PTR_PTR_04bb3260;
  if (pcVar12 != (char *)0x0) {
    pcVar1 = pcVar12;
  }
  if (*pcVar1 == 'F') {
    if ((((((pcVar1[1] != 'i') || (pcVar1[2] != 's')) || (pcVar1[3] != 'h')) ||
         ((pcVar1[4] != 'i' || (pcVar1[5] != 'n')))) ||
        (((pcVar1[6] != 'g' || ((pcVar1[7] != 'C' || (pcVar1[8] != 'o')))) || (pcVar1[9] != 'n'))))
       || ((((pcVar1[10] != 'v' || (pcVar1[0xb] != 'e')) || (pcVar1[0xc] != 'n')) ||
           (((pcVar1[0xd] != 't' || (pcVar1[0xe] != 'i')) ||
            ((pcVar1[0xf] != 'o' || (pcVar1[0x10] != 'n')))))))) goto LAB_0088480c;
    local_90 = PTR_DAT_04bb2020 + 0x10;
    pcStack_88 = "CatchFishFesQuestStart";
    iVar8 = FUN_02743000(&local_90);
    if (iVar8 != 0) {
      return true;
    }
    pcStack_98 = "NNPC_CatchFishFesAction_Continue";
  }
  else {
    if ((((*pcVar1 != 'I') || (pcVar1[1] != 'n')) ||
        ((pcVar1[2] != 's' || (((pcVar1[3] != 'e' || (pcVar1[4] != 'c')) || (pcVar1[5] != 't'))))))
       || (((((pcVar1[6] != 'C' || (pcVar1[7] != 'o')) || (pcVar1[8] != 'n')) ||
            ((pcVar1[9] != 'v' || (pcVar1[10] != 'e')))) ||
           ((pcVar1[0xb] != 'n' ||
            ((((pcVar1[0xc] != 't' || (pcVar1[0xd] != 'i')) || (pcVar1[0xe] != 'o')) ||
             (pcVar1[0xf] != 'n')))))))) goto LAB_0088480c;
    local_90 = PTR_DAT_04bb2020 + 0x10;
    pcStack_88 = "CatchInsectFesQuestStart";
    iVar8 = FUN_02743000(&local_90);
    if (iVar8 != 0) {
      return true;
    }
    pcStack_98 = "NNPC_CatchInsectFesAction_Continue";
  }
  local_a0 = puVar4 + 0x10;
  iVar8 = FUN_02743000(&local_a0);
  if (iVar8 != 0) {
    return true;
  }
LAB_0088480c:
  if (*puVar11 != 0) {
    cVar19 = *puVar5;
    do {
      if (cVar19 != '\0') {
        uVar20 = *(uint *)(__s + 0x25c);
        if ((int)uVar20 < 0) {
          if (uVar20 == 0xffffffff) goto LAB_0088486c;
        }
        else if ((byte *)((ulong)uVar20 + (long)puVar11) != (byte *)0x0) {
          uVar20 = (uint)*(byte *)((ulong)uVar20 + (long)puVar11);
          goto LAB_00884908;
        }
        goto LAB_00884904;
      }
      cVar19 = '\x01';
      *puVar5 = 1;
      memset(__s,0xff,0x288);
LAB_0088486c:
      puVar13 = (uint *)(ulong)*puVar11;
      uVar20 = 0;
      if ((*puVar11 == 0) || (puVar11 == puVar13)) {
LAB_00884908:
        uVar17 = *puVar11;
        if (uVar17 == 0) goto LAB_008849a8;
        uVar16 = *(uint *)(__s + 0x260);
        goto LAB_00884928;
      }
      lVar3 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar13)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)puVar11 + (lVar3 - (long)puVar13);
      if (lVar3 == 0) {
LAB_00884904:
        uVar20 = 0;
        goto LAB_00884908;
      }
      uVar9 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar13));
      *(undefined4 *)(__s + 0x25c) = 0xfffffffe;
      if (uVar9 == 0) goto LAB_00884904;
      piVar15 = (int *)(lVar3 + 4);
      while (piVar15[-1] != -0x29fa3bf3) {
        piVar15 = piVar15 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_00884904;
      }
      iVar8 = 0;
      if (*piVar15 != -1) {
        iVar8 = *piVar15;
      }
      *(int *)(__s + 0x25c) = iVar8;
    } while (*puVar11 != 0);
  }
  uVar20 = 0;
LAB_008849a8:
  uVar17 = 0;
LAB_008849ac:
  uVar9 = FUN_00a8117c(&local_68);
  if ((uVar9 & 1) == 0) {
    cVar19 = (char)((ulong)param_3 >> 0x20);
    iVar8 = cVar19 + 0x18;
    if ('\x04' < cVar19) {
      iVar8 = (int)cVar19;
    }
    uVar16 = uVar20 + 0x18;
    if (4 < uVar20) {
      uVar16 = uVar20;
    }
    uVar20 = uVar17 + 0x18;
    if (5 < uVar17) {
      uVar20 = uVar17;
    }
    bVar6 = (int)uVar16 <= iVar8 && iVar8 < (int)uVar20;
  }
  else {
    bVar6 = uVar17 == 5;
  }
  return bVar6;
LAB_00884928:
  if (-1 < (int)uVar16) {
    if ((byte *)((long)puVar11 + (ulong)uVar16) != (byte *)0x0) {
      uVar17 = (uint)*(byte *)((long)puVar11 + (ulong)uVar16);
      goto LAB_008849ac;
    }
    goto LAB_008849a8;
  }
  if ((uVar16 != 0xffffffff) || (lVar3 = (long)puVar11 - (ulong)uVar17, lVar3 == 0))
  goto LAB_008849a8;
  lVar2 = 0xc;
  if (*(char *)(lVar3 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar3 == 0) goto LAB_008849a8;
  uVar9 = (ulong)*(ushort *)(lVar3 + 8);
  *(undefined4 *)(__s + 0x260) = 0xfffffffe;
  if (uVar9 == 0) goto LAB_008849a8;
  puVar13 = (uint *)(lVar2 + lVar3 + 4);
  while (puVar13[-1] != 0x69834ab9) {
    puVar13 = puVar13 + 2;
    uVar9 = uVar9 - 1;
    if (uVar9 == 0) goto LAB_008849a8;
  }
  uVar16 = 0;
  if (*puVar13 != 0xffffffff) {
    uVar16 = *puVar13;
  }
  *(uint *)(__s + 0x260) = uVar16;
  uVar17 = *puVar11;
  if (uVar17 == 0) goto LAB_008849a8;
  goto LAB_00884928;
}

