
undefined8 FUN_0219a820(long param_1)

{
  undefined *puVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  long lVar16;
  undefined1 *puVar17;
  uint *puVar18;
  int *piVar19;
  undefined1 *puVar20;
  undefined *local_88;
  char *local_80;
  undefined1 local_78;
  byte local_77;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  char *pcStack_58;
  byte local_34 [4];
  
  puVar4 = PTR_DAT_04bb2208;
  puVar20 = (undefined1 *)(param_1 + 0x818);
  lVar16 = *(long *)PTR_DAT_04bb2208;
  uVar7 = FUN_006bd550("MileTourTicketSupportTalk",0);
  local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar7);
  puVar10 = (uint *)FUN_021cb820(lVar16 + 0x660,&local_88);
  puVar1 = PTR_DAT_04bb6380;
  puVar3 = PTR_DAT_04bb6378;
  if (puVar10 != (uint *)0x0) {
    puVar17 = puVar20;
    if (*puVar10 != 0) {
      cVar5 = *PTR_DAT_04bb6378;
      do {
        if (cVar5 == '\0') {
          cVar5 = '\x01';
          *(undefined8 *)puVar1 = 0xffffffffffffffff;
          *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
          uVar9 = *puVar10;
        }
        else {
          uVar9 = *(uint *)(puVar1 + 8);
          if (-1 < (int)uVar9) {
            if (((ushort *)((ulong)uVar9 + (long)puVar10) != (ushort *)0x0) &&
               (uVar2 = *(ushort *)((ulong)uVar9 + (long)puVar10), uVar2 < 0x80)) {
              puVar17 = puVar20 + uVar2;
            }
            break;
          }
          if (uVar9 != 0xffffffff) break;
          uVar9 = *puVar10;
        }
        if ((uVar9 == 0) || (puVar18 = (uint *)(ulong)uVar9, puVar10 == puVar18)) break;
        lVar16 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar18)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar10 + (lVar16 - (long)puVar18);
        if (lVar16 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar18));
        *(undefined4 *)(puVar1 + 8) = 0xfffffffe;
        if (uVar12 == 0) break;
        piVar19 = (int *)(lVar16 + 4);
        while (piVar19[-1] != 0x54706054) {
          piVar19 = piVar19 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_0219a95c;
        }
        iVar8 = 0;
        if (*piVar19 != -1) {
          iVar8 = *piVar19;
        }
        *(int *)(puVar1 + 8) = iVar8;
        if (*puVar10 == 0) break;
      } while( true );
    }
LAB_0219a95c:
    *puVar17 = 0;
  }
  FUN_0252d11c(local_34);
  puVar3 = PTR_DAT_04bb2020;
  if (7 < local_34[0]) {
    return 0;
  }
  if (*(char *)(param_1 + 0xaf9) == '\0') {
    return 0;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_80 = "MakeVillagePlayerFlag";
  local_88 = puVar1;
  uVar11 = FUN_0274bce0(local_34,&local_88);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  local_80 = "ImmQ_A_SetHousing";
  local_88 = puVar1;
  uVar12 = FUN_0273f0a0(&local_88);
  if ((uVar12 & 1) == 0) {
    pcStack_58 = "ImmQ_B_SetHousing";
    local_60 = puVar3 + 0x10;
    uVar12 = FUN_0273f0a0(&local_60);
    if ((uVar12 & 1) == 0) {
      pcStack_68 = "ImmQ_C_SetHousing";
      local_70 = puVar3 + 0x10;
      uVar9 = FUN_0273f0a0(&local_70);
      goto LAB_0219a9fc;
    }
  }
  uVar9 = 1;
LAB_0219a9fc:
  local_80 = "RcmImmQuestComplete";
  local_88 = puVar3 + 0x10;
  uVar12 = FUN_0273f0a0(&local_88);
  if ((uVar12 & 1) == 0) {
    pcStack_58 = "ImmQCompleteDemo";
    local_60 = puVar3 + 0x10;
    iVar8 = FUN_0274bce0(local_34,&local_60);
    if (iVar8 == 0 && ((uVar9 ^ 0xffffffff) & 1) == 0) {
      lVar16 = FUN_0265c2a0((long)*(char *)(param_1 + 0xaf8));
      if (lVar16 == 0) {
        return 0;
      }
      lVar13 = FUN_0265c2a0((long)*(char *)(param_1 + 0xaf8));
      if (lVar13 == 0) {
        cVar5 = '\0';
      }
      else {
        if ((*(long **)(lVar13 + 0x28) == (long *)0x0) ||
           (puVar14 = (undefined8 *)**(long **)(lVar13 + 0x28), puVar14 == (undefined8 *)0x0)) {
          uVar9 = 1;
        }
        else {
          uVar9 = (**(code **)*puVar14)();
          uVar9 = uVar9 ^ 1;
        }
        cVar5 = FUN_020fd7d8(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8));
        if ((((uVar9 & 1) == 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
           (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar14 != (undefined8 *)0x0))
        {
          (**(code **)*puVar14)();
        }
      }
      local_78 = 1;
      local_80 = (char *)lVar16;
      if ((*(long **)(lVar16 + 0x28) == (long *)0x0) ||
         (puVar14 = (undefined8 *)**(long **)(lVar16 + 0x28), puVar14 == (undefined8 *)0x0)) {
        bVar6 = 0;
      }
      else {
        bVar6 = (**(code **)*puVar14)();
      }
      local_77 = bVar6 & 1;
      local_88 = PTR_DAT_04bb67a0 + 0x10;
      if ((cVar5 == '\a') &&
         (lVar13 = *(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8),
         *(char *)(lVar13 + 0x12678) == '\0')) {
        local_60 = puVar3 + 0x10;
        pcStack_58 = "MileTourTicketSupport";
        iVar8 = FUN_02749340(lVar13 + 0x1267c,&local_60);
        if (iVar8 == 0) {
          lVar16 = *(long *)puVar4;
          uVar7 = FUN_006bd550("MileTourTicketSupportTalk",0);
          local_60 = (undefined *)CONCAT44(local_60._4_4_,uVar7);
          lVar16 = FUN_021cb820(lVar16 + 0x660,&local_60);
          if (lVar16 != 0) {
            puVar15 = (ushort *)FUN_00aa97d0(lVar16,2,0x54706054,DAT_054573c8);
            if ((puVar15 != (ushort *)0x0) && (*puVar15 < 0x80)) {
              puVar20 = puVar20 + *puVar15;
            }
            *puVar20 = 1;
          }
          FUN_02640184(&local_88);
          return 1;
        }
      }
      if ((((bVar6 & 1) != 0) && (*(long *)(lVar16 + 0x28) != 0)) &&
         (puVar14 = *(undefined8 **)(*(long *)(lVar16 + 0x28) + 8), puVar14 != (undefined8 *)0x0)) {
        (**(code **)*puVar14)();
      }
    }
  }
  return 0;
}

