
void FUN_021aebe0(long param_1)

{
  uint *puVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint uVar9;
  long lVar10;
  undefined1 *puVar11;
  char cVar12;
  uint *puVar13;
  ulong uVar14;
  int *piVar15;
  undefined1 *puVar16;
  undefined *local_50;
  char *pcStack_48;
  
  puVar1 = (uint *)(param_1 + 0x7c84);
  uVar9 = *puVar1;
  if (uVar9 == 0xffffffff) {
    return;
  }
  local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
  if ((uVar9 < 10) && ((&DAT_053fee41)[(ulong)uVar9 * 0xba0] != '\0')) {
    FUN_01e2caf8(*(long *)PTR_DAT_04bb3968 + 0xda0,&DAT_053fe850 + (ulong)uVar9 * 0xba0,1,&local_50,
                 0,0);
    uVar9 = *puVar1;
  }
  puVar4 = PTR_DAT_04bb2208;
  lVar10 = param_1 + (ulong)uVar9 * 0xba0;
  if (9 < uVar9) {
    lVar10 = param_1;
  }
  puVar16 = (undefined1 *)(lVar10 + 0x818);
  lVar10 = *(long *)PTR_DAT_04bb2208;
  uVar7 = FUN_006bd550("VisitQuestCallCount",0);
  local_50._0_4_ = uVar7;
  puVar8 = (uint *)FUN_021cb820(lVar10 + 0x660,&local_50);
  puVar6 = PTR_DAT_04bb6380;
  puVar5 = PTR_DAT_04bb6378;
  if (puVar8 != (uint *)0x0) {
    puVar11 = puVar16;
    if (*puVar8 != 0) {
      cVar12 = *PTR_DAT_04bb6378;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          uVar9 = *puVar8;
        }
        else {
          uVar9 = *(uint *)(puVar6 + 8);
          if (-1 < (int)uVar9) {
            if (((ushort *)((ulong)uVar9 + (long)puVar8) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar9 + (long)puVar8), uVar3 < 0x80)) {
              puVar11 = puVar16 + uVar3;
            }
            break;
          }
          if (uVar9 != 0xffffffff) break;
          uVar9 = *puVar8;
        }
        if ((uVar9 == 0) || (puVar13 = (uint *)(ulong)uVar9, puVar8 == puVar13)) break;
        lVar10 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar13)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar8 + (lVar10 - (long)puVar13);
        if (lVar10 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar13));
        *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar15 = (int *)(lVar10 + 4);
        while (piVar15[-1] != 0x54706054) {
          piVar15 = piVar15 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_021aed88;
        }
        iVar2 = 0;
        if (*piVar15 != -1) {
          iVar2 = *piVar15;
        }
        *(int *)(puVar6 + 8) = iVar2;
        if (*puVar8 == 0) break;
      } while( true );
    }
LAB_021aed88:
    *puVar11 = 0;
  }
  lVar10 = *(long *)puVar4;
  local_50._0_4_ = FUN_006bd550("SurpriseVisitEntered",0);
  puVar8 = (uint *)FUN_021cb820(lVar10 + 0x660,&local_50);
  puVar6 = PTR_DAT_04bb6380;
  puVar5 = PTR_DAT_04bb6378;
  if (puVar8 != (uint *)0x0) {
    puVar11 = puVar16;
    if (*puVar8 != 0) {
      cVar12 = *PTR_DAT_04bb6378;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          uVar9 = *puVar8;
        }
        else {
          uVar9 = *(uint *)(puVar6 + 8);
          if (-1 < (int)uVar9) {
            if (((ushort *)((ulong)uVar9 + (long)puVar8) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar9 + (long)puVar8), uVar3 < 0x80)) {
              puVar11 = puVar16 + uVar3;
            }
            break;
          }
          if (uVar9 != 0xffffffff) break;
          uVar9 = *puVar8;
        }
        if ((uVar9 == 0) || (puVar13 = (uint *)(ulong)uVar9, puVar8 == puVar13)) break;
        lVar10 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar13)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar8 + (lVar10 - (long)puVar13);
        if (lVar10 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar13));
        *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar15 = (int *)(lVar10 + 4);
        while (piVar15[-1] != 0x54706054) {
          piVar15 = piVar15 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_021aee88;
        }
        iVar2 = 0;
        if (*piVar15 != -1) {
          iVar2 = *piVar15;
        }
        *(int *)(puVar6 + 8) = iVar2;
        if (*puVar8 == 0) break;
      } while( true );
    }
LAB_021aee88:
    *puVar11 = 0;
  }
  lVar10 = *(long *)puVar4;
  uVar7 = FUN_006bd550("AtHomeAI",0);
  local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar7);
  puVar8 = (uint *)FUN_021cb820(lVar10 + 0x660,&local_50);
  puVar5 = PTR_DAT_04bb6380;
  puVar4 = PTR_DAT_04bb6378;
  if (puVar8 != (uint *)0x0) {
    if (*puVar8 != 0) {
      cVar12 = *PTR_DAT_04bb6378;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar9 = *puVar8;
        }
        else {
          uVar9 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar9) {
            if (((ushort *)((ulong)uVar9 + (long)puVar8) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar9 + (long)puVar8), uVar3 < 0x80)) {
              puVar16 = puVar16 + uVar3;
            }
            break;
          }
          if (uVar9 != 0xffffffff) break;
          uVar9 = *puVar8;
        }
        if ((uVar9 == 0) || (puVar13 = (uint *)(ulong)uVar9, puVar8 == puVar13)) break;
        lVar10 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar13)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar8 + (lVar10 - (long)puVar13);
        if (lVar10 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar13));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar15 = (int *)(lVar10 + 4);
        while (piVar15[-1] != 0x54706054) {
          piVar15 = piVar15 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_021aeff4;
        }
        iVar2 = 0;
        if (*piVar15 != -1) {
          iVar2 = *piVar15;
        }
        *(int *)(puVar5 + 8) = iVar2;
        if (*puVar8 == 0) break;
      } while( true );
    }
LAB_021aeff4:
    *puVar16 = 0;
  }
  puVar4 = PTR_DAT_04bb2020;
  *puVar1 = 0xffffffff;
  local_50 = puVar4 + 0x10;
  pcStack_48 = "NpcVisitPlayerHouse";
  FUN_02743234(&local_50,0);
  return;
}

