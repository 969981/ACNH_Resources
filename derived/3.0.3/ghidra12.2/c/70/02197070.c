
undefined8 FUN_02197070(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  char *pcVar15;
  ushort *puVar16;
  long lVar17;
  undefined1 *puVar18;
  uint *puVar19;
  ulong uVar20;
  int *piVar21;
  undefined1 *puVar22;
  undefined *local_80;
  char *pcStack_78;
  undefined *local_70;
  long local_68;
  undefined1 local_60;
  byte local_5f;
  undefined *local_58;
  char *local_50;
  undefined1 local_48;
  byte local_47;
  byte local_24 [4];
  
  puVar6 = PTR_DAT_04bb2208;
  puVar22 = (undefined1 *)(param_1 + 0x818);
  lVar17 = *(long *)PTR_DAT_04bb2208;
  uVar10 = FUN_006bd550("AppWelcomeMigrantsTalk",0);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar10);
  puVar12 = (uint *)FUN_021cb820(lVar17 + 0x660,&local_58);
  puVar7 = PTR_DAT_04bb6380;
  puVar5 = PTR_DAT_04bb6378;
  if (puVar12 != (uint *)0x0) {
    puVar18 = puVar22;
    if (*puVar12 != 0) {
      cVar9 = *PTR_DAT_04bb6378;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar3 = *puVar12;
        }
        else {
          uVar3 = *(uint *)(puVar7 + 8);
          if (-1 < (int)uVar3) {
            if (((ushort *)((ulong)uVar3 + (long)puVar12) != (ushort *)0x0) &&
               (uVar4 = *(ushort *)((ulong)uVar3 + (long)puVar12), uVar4 < 0x80)) {
              puVar18 = puVar22 + uVar4;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
          uVar3 = *puVar12;
        }
        if ((uVar3 == 0) || (puVar19 = (uint *)(ulong)uVar3, puVar12 == puVar19)) break;
        lVar17 = 0xc;
        if (*(char *)((long)puVar12 + (10 - (long)puVar19)) != '\0') {
          lVar17 = 0x1c;
        }
        lVar17 = (long)puVar12 + (lVar17 - (long)puVar19);
        if (lVar17 == 0) break;
        uVar20 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar19));
        *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
        if (uVar20 == 0) break;
        piVar21 = (int *)(lVar17 + 4);
        while (piVar21[-1] != 0x54706054) {
          piVar21 = piVar21 + 2;
          uVar20 = uVar20 - 1;
          if (uVar20 == 0) goto LAB_021971ac;
        }
        iVar11 = 0;
        if (*piVar21 != -1) {
          iVar11 = *piVar21;
        }
        *(int *)(puVar7 + 8) = iVar11;
        if (*puVar12 == 0) break;
      } while( true );
    }
LAB_021971ac:
    *puVar18 = 0;
  }
  FUN_0252d11c(local_24);
  puVar5 = PTR_DAT_04bb2020;
  if (local_24[0] < 8) {
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "MakeVillagePlayerFlag";
    uVar13 = FUN_0274bce0(local_24,&local_58);
    if ((int)uVar13 == 0) {
      return uVar13;
    }
    lVar17 = FUN_0265c2a0((long)*(char *)(param_1 + 0xaf8));
    if (lVar17 == 0) {
      return 0;
    }
    local_60 = 1;
    local_68 = lVar17;
    if ((*(long **)(lVar17 + 0x28) == (long *)0x0) ||
       (puVar14 = (undefined8 *)**(long **)(lVar17 + 0x28), puVar14 == (undefined8 *)0x0)) {
      bVar8 = 0;
    }
    else {
      bVar8 = (**(code **)*puVar14)();
    }
    local_5f = bVar8 & 1;
    local_70 = PTR_DAT_04bb67a0 + 0x10;
    if ((*(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x12678) == '\0') &&
       ((cVar9 = FUN_020fd7d8(), cVar9 == '\a' || (cVar9 == '\x01')))) {
      pcStack_78 = "AppE_WelcomoMigrants_AN";
      if (cVar9 != '\a') {
        pcStack_78 = "AppE_WelcomoMigrants_HA";
      }
      local_80 = puVar5 + 0x10;
      iVar11 = FUN_0273ea30(&local_80);
      if (((iVar11 == 0) && (DAT_05405788 - 3U < 3)) &&
         (pcVar15 = (char *)FUN_0265afd0(), pcVar15 != (char *)0x0)) {
        local_48 = 1;
        local_50 = pcVar15;
        if (*(long **)(pcVar15 + 0x28) == (long *)0x0) {
          local_47 = 0;
        }
        else {
          puVar14 = (undefined8 *)**(long **)(pcVar15 + 0x28);
          local_47 = 0;
          if (puVar14 != (undefined8 *)0x0) {
            local_47 = (**(code **)*puVar14)();
          }
        }
        local_47 = local_47 & 1;
        local_58 = PTR_DAT_04bb4dc8 + 0x10;
        lVar1 = *(long *)(pcVar15 + 0x10) + *(long *)(pcVar15 + 8);
        lVar2 = lVar1 + (ulong)(uint)(int)*(char *)(lVar1 + 0x1e3361) * 0x13230;
        if (9 < (uint)(int)*(char *)(lVar1 + 0x1e3361)) {
          lVar2 = lVar1;
        }
        if ((*(char *)(lVar2 + 0x12678) == '\x04') && (*(char *)(lVar2 + 0x1267a) == '\x01')) {
          FUN_02640184(&local_58);
          lVar17 = *(long *)puVar6;
          uVar10 = FUN_006bd550("AppWelcomeMigrantsTalk",0);
          local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar10);
          lVar17 = FUN_021cb820(lVar17 + 0x660,&local_58);
          if (lVar17 != 0) {
            puVar16 = (ushort *)FUN_00aa97d0(lVar17,2,0x54706054,DAT_054573c8);
            if ((puVar16 != (ushort *)0x0) && (*puVar16 < 0x80)) {
              puVar22 = puVar22 + *puVar16;
            }
            *puVar22 = 1;
          }
          FUN_02640184(&local_70);
          return 1;
        }
        FUN_02640184(&local_58);
      }
    }
    if ((((bVar8 & 1) != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 8), puVar14 != (undefined8 *)0x0)) {
      (**(code **)*puVar14)();
    }
  }
  return 0;
}

