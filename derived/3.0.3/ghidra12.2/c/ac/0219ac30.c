
undefined8 FUN_0219ac30(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  undefined8 uVar10;
  ushort *puVar11;
  long lVar12;
  undefined1 *puVar13;
  char cVar14;
  uint *puVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  char *pcStack_50;
  byte local_44 [4];
  
  puVar5 = PTR_DAT_04bb2208;
  puVar18 = (undefined1 *)(param_1 + 0x818);
  lVar12 = *(long *)PTR_DAT_04bb2208;
  uVar6 = FUN_006bd550("IslandRepTalk",0);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar6);
  puVar9 = (uint *)FUN_021cb820(lVar12 + 0x660,&local_58);
  puVar1 = PTR_DAT_04bb6380;
  puVar4 = PTR_DAT_04bb6378;
  if (puVar9 != (uint *)0x0) {
    puVar13 = puVar18;
    if (*puVar9 != 0) {
      cVar14 = *PTR_DAT_04bb6378;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar1 = 0xffffffffffffffff;
          *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
          uVar2 = *puVar9;
        }
        else {
          uVar2 = *(uint *)(puVar1 + 8);
          if (-1 < (int)uVar2) {
            if (((ushort *)((ulong)uVar2 + (long)puVar9) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar9), uVar3 < 0x80)) {
              puVar13 = puVar18 + uVar3;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
          uVar2 = *puVar9;
        }
        if ((uVar2 == 0) || (puVar15 = (uint *)(ulong)uVar2, puVar9 == puVar15)) break;
        lVar12 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar15)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar9 + (lVar12 - (long)puVar15);
        if (lVar12 == 0) break;
        uVar16 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar15));
        *(undefined4 *)(puVar1 + 8) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar17 = (int *)(lVar12 + 4);
        while (piVar17[-1] != 0x54706054) {
          piVar17 = piVar17 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_0219ad6c;
        }
        iVar7 = 0;
        if (*piVar17 != -1) {
          iVar7 = *piVar17;
        }
        *(int *)(puVar1 + 8) = iVar7;
        if (*puVar9 == 0) break;
      } while( true );
    }
LAB_0219ad6c:
    *puVar13 = 0;
  }
  FUN_0252d11c(local_44);
  puVar4 = PTR_DAT_04bb2020;
  uVar10 = 0;
  if ((local_44[0] < 8) && (*(char *)(param_1 + 0xaf9) != '\0')) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_50 = "MakeVillagePlayerFlag";
    local_58 = puVar1;
    uVar10 = FUN_0274bce0(local_44,&local_58);
    if ((int)uVar10 != 0) {
      pcStack_50 = "CountAppE_RepTalk";
      local_58 = puVar1;
      iVar7 = FUN_0273ea30(&local_58);
      pcStack_50 = "RcoHeardAboutEvalutationDetail";
      local_58 = puVar1;
      uVar10 = FUN_0274bce0(local_44,&local_58);
      if ((int)uVar10 != 0) {
        puVar1 = puVar4 + 0x10;
        pcStack_60 = "NnpcAppE_Rep_OccuredToday";
        local_68 = puVar1;
        iVar8 = FUN_0274bce0(local_44,&local_68);
        if (iVar8 == 0) {
          pcStack_70 = "IslandDevQuestComplete";
          local_78 = puVar1;
          iVar8 = FUN_0273ea30(&local_78);
          if (iVar8 == 0) {
            local_88 = puVar4 + 0x10;
            pcStack_80 = "AppE_Rep_HappenToday";
            iVar8 = FUN_027490f0((long)*(char *)(param_1 + 0xaf8),&local_88);
            if (9 < iVar7) {
              return 0;
            }
            if (iVar8 != 0) {
              return 0;
            }
            lVar12 = *(long *)puVar5;
            uVar6 = FUN_006bd550("IslandRepTalk",0);
            local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar6);
            lVar12 = FUN_021cb820(lVar12 + 0x660,&local_58);
            if (lVar12 == 0) {
              return 1;
            }
            puVar11 = (ushort *)FUN_00aa97d0(lVar12,2,0x54706054,DAT_054573c8);
            if ((puVar11 != (ushort *)0x0) && (*puVar11 < 0x80)) {
              puVar18 = puVar18 + *puVar11;
            }
            *puVar18 = 1;
            return 1;
          }
        }
        uVar10 = 0;
      }
    }
  }
  return uVar10;
}

