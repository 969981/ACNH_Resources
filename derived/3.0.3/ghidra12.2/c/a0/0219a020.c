
undefined8 FUN_0219a020(long param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  byte bVar8;
  undefined4 uVar9;
  int iVar10;
  uint *puVar11;
  undefined8 uVar12;
  long lVar13;
  ushort *puVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  char cVar18;
  uint *puVar19;
  ulong uVar20;
  int *piVar21;
  undefined1 *puVar22;
  undefined *local_90;
  char *pcStack_88;
  undefined *local_80;
  long local_78;
  undefined1 local_70;
  byte local_6f;
  undefined *local_68;
  char *local_60;
  undefined1 local_58;
  byte local_57;
  byte local_34 [4];
  
  puVar6 = PTR_DAT_04bb2208;
  puVar22 = (undefined1 *)(param_1 + 0x818);
  lVar15 = *(long *)PTR_DAT_04bb2208;
  uVar9 = FUN_006bd550("MarketBuildingTalk",0);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,uVar9);
  puVar11 = (uint *)FUN_021cb820(lVar15 + 0x660,&local_68);
  puVar1 = PTR_DAT_04bb6380;
  puVar5 = PTR_DAT_04bb6378;
  if (puVar11 != (uint *)0x0) {
    puVar16 = puVar22;
    if (*puVar11 != 0) {
      cVar18 = *PTR_DAT_04bb6378;
      do {
        if (cVar18 == '\0') {
          cVar18 = '\x01';
          *(undefined8 *)puVar1 = 0xffffffffffffffff;
          *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
          uVar3 = *puVar11;
        }
        else {
          uVar3 = *(uint *)(puVar1 + 8);
          if (-1 < (int)uVar3) {
            if (((ushort *)((ulong)uVar3 + (long)puVar11) != (ushort *)0x0) &&
               (uVar4 = *(ushort *)((ulong)uVar3 + (long)puVar11), uVar4 < 0x80)) {
              puVar16 = puVar22 + uVar4;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
          uVar3 = *puVar11;
        }
        if ((uVar3 == 0) || (puVar19 = (uint *)(ulong)uVar3, puVar11 == puVar19)) break;
        lVar15 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar19)) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar11 + (lVar15 - (long)puVar19);
        if (lVar15 == 0) break;
        uVar20 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar19));
        *(undefined4 *)(puVar1 + 8) = 0xfffffffe;
        if (uVar20 == 0) break;
        piVar21 = (int *)(lVar15 + 4);
        while (piVar21[-1] != 0x54706054) {
          piVar21 = piVar21 + 2;
          uVar20 = uVar20 - 1;
          if (uVar20 == 0) goto LAB_0219a15c;
        }
        iVar10 = 0;
        if (*piVar21 != -1) {
          iVar10 = *piVar21;
        }
        *(int *)(puVar1 + 8) = iVar10;
        if (*puVar11 == 0) break;
      } while( true );
    }
LAB_0219a15c:
    *puVar16 = 0;
  }
  FUN_0252d11c(local_34);
  puVar5 = PTR_DAT_04bb2020;
  if (7 < local_34[0]) {
    return 0;
  }
  if (*(char *)(param_1 + 0xaf9) == '\0') {
    return 0;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_60 = "MakeVillagePlayerFlag";
  local_68 = puVar1;
  uVar12 = FUN_0274bce0(local_34,&local_68);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  local_60 = "RcmTookQuestReq";
  local_68 = puVar1;
  uVar12 = FUN_0274bce0(local_34,&local_68);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  lVar15 = *(long *)PTR_DAT_04bb46b0;
  if (lVar15 != 0) {
    puVar17 = *(undefined8 **)(lVar15 + 0x10);
    if ((*(byte *)(lVar15 + 0x453) & 1) == 0) {
      lVar15 = (**(code **)(*(long *)*puVar17 + 0x38))();
      if (lVar15 == 0) {
        return 0;
      }
      lVar15 = lVar15 + 0x70;
    }
    else {
      if (puVar17 == (undefined8 *)0x0) {
        return 0;
      }
      if ((long *)puVar17[0x26] == (long *)0x0) {
        return 0;
      }
      lVar15 = (**(code **)(*(long *)puVar17[0x26] + 0x38))();
      if (lVar15 == 0) {
        return 0;
      }
    }
    local_60 = (char *)(lVar15 + 0x1a0b48);
    local_58 = 1;
    if ((*(long **)(lVar15 + 0x1a0b70) == (long *)0x0) ||
       (puVar17 = (undefined8 *)**(long **)(lVar15 + 0x1a0b70), puVar17 == (undefined8 *)0x0)) {
      bVar7 = 0;
    }
    else {
      bVar7 = (**(code **)*puVar17)();
    }
    local_57 = bVar7 & 1;
    local_68 = PTR_DAT_04bb64b8 + 0x10;
    uVar3 = *(uint *)(*(long *)(lVar15 + 0x1a0b58) + *(long *)(lVar15 + 0x1a0b50));
    if (3 < uVar3) {
      uVar3 = 0;
    }
    local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar3);
    if (((int)uVar3 < 2) && (lVar13 = FUN_0265c2a0((long)*(char *)(param_1 + 0xaf8)), lVar13 != 0))
    {
      local_70 = 1;
      local_78 = lVar13;
      if ((*(long **)(lVar13 + 0x28) == (long *)0x0) ||
         (puVar17 = (undefined8 *)**(long **)(lVar13 + 0x28), puVar17 == (undefined8 *)0x0)) {
        bVar8 = 0;
      }
      else {
        bVar8 = (**(code **)*puVar17)();
      }
      local_6f = bVar8 & 1;
      local_80 = PTR_DAT_04bb67a0 + 0x10;
      lVar2 = *(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8);
      if (*(char *)(lVar2 + 0x12678) == '\0') {
        local_90 = puVar5 + 0x10;
        pcStack_88 = "MarketBuildingSupport";
        iVar10 = FUN_02749340(lVar2 + 0x1267c,&local_90);
        if (iVar10 == 0) {
          lVar15 = *(long *)puVar6;
          uVar9 = FUN_006bd550("MarketBuildingTalk",0);
          local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar9);
          lVar15 = FUN_021cb820(lVar15 + 0x660,&local_90);
          if (lVar15 != 0) {
            puVar14 = (ushort *)FUN_00aa97d0(lVar15,2,0x54706054,DAT_054573c8);
            if ((puVar14 != (ushort *)0x0) && (*puVar14 < 0x80)) {
              puVar22 = puVar22 + *puVar14;
            }
            *puVar22 = 1;
          }
          FUN_02640184(&local_80);
          FUN_02640184(&local_68);
          return 1;
        }
      }
      if ((((bVar8 & 1) != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
         (puVar17 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar17 != (undefined8 *)0x0)) {
        (**(code **)*puVar17)();
      }
    }
    if ((((bVar7 & 1) != 0) && (*(long *)(lVar15 + 0x1a0b70) != 0)) &&
       (puVar17 = *(undefined8 **)(*(long *)(lVar15 + 0x1a0b70) + 8), puVar17 != (undefined8 *)0x0))
    {
      (**(code **)*puVar17)();
    }
  }
  return 0;
}

