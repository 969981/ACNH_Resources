
undefined8 FUN_0219a430(long param_1)

{
  undefined *puVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
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
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  char *local_60;
  undefined1 local_58;
  byte local_57;
  byte local_34 [4];
  
  puVar4 = PTR_DAT_04bb2208;
  puVar20 = (undefined1 *)(param_1 + 0x818);
  lVar16 = *(long *)PTR_DAT_04bb2208;
  uVar7 = FUN_006bd550("MileTourTicketSupportTalk",0);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,uVar7);
  puVar10 = (uint *)FUN_021cb820(lVar16 + 0x660,&local_68);
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
          uVar8 = *puVar10;
        }
        else {
          uVar8 = *(uint *)(puVar1 + 8);
          if (-1 < (int)uVar8) {
            if (((ushort *)((ulong)uVar8 + (long)puVar10) != (ushort *)0x0) &&
               (uVar2 = *(ushort *)((ulong)uVar8 + (long)puVar10), uVar2 < 0x80)) {
              puVar17 = puVar20 + uVar2;
            }
            break;
          }
          if (uVar8 != 0xffffffff) break;
          uVar8 = *puVar10;
        }
        if ((uVar8 == 0) || (puVar18 = (uint *)(ulong)uVar8, puVar10 == puVar18)) break;
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
          if (uVar12 == 0) goto LAB_0219a56c;
        }
        iVar9 = 0;
        if (*piVar19 != -1) {
          iVar9 = *piVar19;
        }
        *(int *)(puVar1 + 8) = iVar9;
        if (*puVar10 == 0) break;
      } while( true );
    }
LAB_0219a56c:
    *puVar17 = 0;
  }
  FUN_0252d11c(local_34);
  puVar3 = PTR_DAT_04bb2020;
  uVar11 = 0;
  if ((local_34[0] < 8) && (*(char *)(param_1 + 0xaf9) != '\0')) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_60 = "MakeVillagePlayerFlag";
    local_68 = puVar1;
    uVar11 = FUN_0274bce0(local_34,&local_68);
    if ((int)uVar11 != 0) {
      local_60 = "MarketBuilt";
      local_68 = puVar1;
      uVar12 = FUN_0273f0a0(&local_68);
      if ((uVar12 & 1) == 0) {
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
            uVar8 = 1;
          }
          else {
            uVar8 = (**(code **)*puVar14)();
            uVar8 = uVar8 ^ 1;
          }
          cVar5 = FUN_020fd7d8(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8));
          if ((((uVar8 & 1) == 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
             (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar14 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar14)();
          }
        }
        local_58 = 1;
        local_60 = (char *)lVar16;
        if ((*(long **)(lVar16 + 0x28) == (long *)0x0) ||
           (puVar14 = (undefined8 *)**(long **)(lVar16 + 0x28), puVar14 == (undefined8 *)0x0)) {
          bVar6 = 0;
        }
        else {
          bVar6 = (**(code **)*puVar14)();
        }
        local_57 = bVar6 & 1;
        local_68 = PTR_DAT_04bb67a0 + 0x10;
        if ((cVar5 == '\x01') &&
           (lVar13 = *(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8),
           *(char *)(lVar13 + 0x12678) == '\0')) {
          puVar1 = puVar3 + 0x10;
          pcStack_70 = "MarketBuildingSupport";
          local_78 = puVar1;
          iVar9 = FUN_02749340(lVar13 + 0x1267c,&local_78);
          if (iVar9 == 1) {
            pcStack_80 = "MarketBuildingSupportToday";
            local_88 = puVar1;
            iVar9 = FUN_02749340(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8) + 0x1267c,
                                 &local_88);
            if (iVar9 == 0) {
              local_98 = puVar3 + 0x10;
              pcStack_90 = "MileTourTicketSupport";
              iVar9 = FUN_02749340(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8) + 0x1267c,
                                   &local_98);
              if (iVar9 == 0) {
                lVar16 = *(long *)puVar4;
                uVar7 = FUN_006bd550("MileTourTicketSupportTalk",0);
                local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar7);
                lVar16 = FUN_021cb820(lVar16 + 0x660,&local_78);
                if (lVar16 != 0) {
                  puVar15 = (ushort *)FUN_00aa97d0(lVar16,2,0x54706054,DAT_054573c8);
                  if ((puVar15 != (ushort *)0x0) && (*puVar15 < 0x80)) {
                    puVar20 = puVar20 + *puVar15;
                  }
                  *puVar20 = 1;
                }
                FUN_02640184(&local_68);
                return 1;
              }
            }
          }
        }
        if ((((bVar6 & 1) != 0) && (*(long *)(lVar16 + 0x28) != 0)) &&
           (puVar14 = *(undefined8 **)(*(long *)(lVar16 + 0x28) + 8), puVar14 != (undefined8 *)0x0))
        {
          (**(code **)*puVar14)();
        }
      }
      uVar11 = 0;
    }
  }
  return uVar11;
}

