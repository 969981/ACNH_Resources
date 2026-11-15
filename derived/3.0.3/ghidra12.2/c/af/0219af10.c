
undefined8 FUN_0219af10(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  long lVar9;
  undefined1 *puVar10;
  char cVar11;
  uint *puVar12;
  ulong uVar13;
  int *piVar14;
  undefined1 *puVar15;
  undefined *local_48;
  char *pcStack_40;
  byte local_34 [4];
  
  puVar4 = PTR_DAT_04bb2208;
  puVar15 = (undefined1 *)(param_1 + 0x818);
  lVar9 = *(long *)PTR_DAT_04bb2208;
  uVar6 = FUN_006bd550("EasterRecipeTalk",0);
  local_48 = (undefined *)CONCAT44(local_48._4_4_,uVar6);
  puVar8 = (uint *)FUN_021cb820(lVar9 + 0x660,&local_48);
  puVar5 = PTR_DAT_04bb6380;
  puVar1 = PTR_DAT_04bb6378;
  if (puVar8 != (uint *)0x0) {
    puVar10 = puVar15;
    if (*puVar8 != 0) {
      cVar11 = *PTR_DAT_04bb6378;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar1 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar2 = *puVar8;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar2) {
            if (((ushort *)((ulong)uVar2 + (long)puVar8) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar8), uVar3 < 0x80)) {
              puVar10 = puVar15 + uVar3;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
          uVar2 = *puVar8;
        }
        if ((uVar2 == 0) || (puVar12 = (uint *)(ulong)uVar2, puVar8 == puVar12)) break;
        lVar9 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar8 + (lVar9 - (long)puVar12);
        if (lVar9 == 0) break;
        uVar13 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar14 = (int *)(lVar9 + 4);
        while (piVar14[-1] != 0x54706054) {
          piVar14 = piVar14 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_0219b04c;
        }
        iVar7 = 0;
        if (*piVar14 != -1) {
          iVar7 = *piVar14;
        }
        *(int *)(puVar5 + 8) = iVar7;
        if (*puVar8 == 0) break;
      } while( true );
    }
LAB_0219b04c:
    *puVar10 = 0;
  }
  if (DAT_05454162 != '\0') {
    FUN_0252d11c(local_34);
    if (7 < local_34[0]) {
      return 0;
    }
    if (*(char *)(param_1 + 0xaf9) == '\0') {
      return 0;
    }
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "EasterCannotGetNnpcRecipeFlag";
    local_48 = puVar1;
    iVar7 = FUN_0274bce0(local_34,&local_48);
    if (iVar7 == 0) {
      pcStack_40 = "EasterNnpcRecipeCount";
      local_48 = puVar1;
      iVar7 = FUN_0274bce0(local_34,&local_48);
      if ((iVar7 != 0) || (DAT_05454160 < 4)) {
        if (iVar7 != 1) {
          return 0;
        }
        if (DAT_05454160 < 8) {
          return 0;
        }
      }
      lVar9 = *(long *)puVar4;
      uVar6 = FUN_006bd550("EasterRecipeTalk",0);
      local_48 = (undefined *)CONCAT44(local_48._4_4_,uVar6);
      puVar8 = (uint *)FUN_021cb820(lVar9 + 0x660,&local_48);
      puVar1 = PTR_DAT_04bb6380;
      puVar4 = PTR_DAT_04bb6378;
      if (puVar8 == (uint *)0x0) {
        return 1;
      }
      if (*puVar8 == 0) {
LAB_0219b244:
        *puVar15 = 1;
        return 1;
      }
      cVar11 = *PTR_DAT_04bb6378;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar1 = 0xffffffffffffffff;
          *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar1 + 8);
          if (-1 < (int)uVar2) {
            if (((ushort *)((ulong)uVar2 + (long)puVar8) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar8), uVar3 < 0x80)) {
              puVar15 = puVar15 + uVar3;
            }
            goto LAB_0219b244;
          }
          if (uVar2 != 0xffffffff) goto LAB_0219b244;
        }
        puVar12 = (uint *)(ulong)*puVar8;
        if ((*puVar8 == 0) || (puVar8 == puVar12)) goto LAB_0219b244;
        lVar9 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar8 + (lVar9 - (long)puVar12);
        if (lVar9 == 0) goto LAB_0219b244;
        uVar13 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
        *(undefined4 *)(puVar1 + 8) = 0xfffffffe;
        if (uVar13 == 0) goto LAB_0219b244;
        piVar14 = (int *)(lVar9 + 4);
        while (piVar14[-1] != 0x54706054) {
          piVar14 = piVar14 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_0219b244;
        }
        iVar7 = 0;
        if (*piVar14 != -1) {
          iVar7 = *piVar14;
        }
        *(int *)(puVar1 + 8) = iVar7;
        if (*puVar8 == 0) goto LAB_0219b244;
      } while( true );
    }
  }
  return 0;
}

