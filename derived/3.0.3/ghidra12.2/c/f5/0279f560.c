
bool FUN_0279f560(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  char *pcVar11;
  char cVar12;
  ulong uVar13;
  uint *puVar14;
  int *piVar15;
  uint uVar16;
  undefined *local_50;
  char *pcStack_48;
  
  puVar3 = PTR_DAT_04bb2208;
  lVar10 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_3 + 0x18))(param_3);
  local_50._0_4_ = FUN_006bd550(param_3[1],0);
  puVar8 = (uint *)FUN_00ad5fc0(lVar10 + 0x1960,&local_50);
  bVar5 = false;
  if (puVar8 != (uint *)0x0) {
    lVar10 = *(long *)puVar3;
    (**(code **)(*param_3 + 0x18))(param_3);
    uVar6 = FUN_006bd550(param_3[1],0);
    local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar6);
    puVar9 = (uint *)FUN_00ad5fc0(lVar10 + 0x1960,&local_50);
    puVar4 = PTR_DAT_04bb6428;
    puVar3 = PTR_DAT_04bb6420;
    bVar5 = false;
    if (puVar9 != (uint *)0x0) {
      pcVar11 = (char *)(param_1 + 0xc40);
      if (*puVar9 != 0) {
        cVar12 = *PTR_DAT_04bb6420;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar4 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
            uVar16 = *puVar9;
          }
          else {
            uVar16 = *(uint *)(puVar4 + 0x20);
            if (-1 < (int)uVar16) {
              if (((ushort *)((ulong)uVar16 + (long)puVar9) != (ushort *)0x0) &&
                 (uVar2 = *(ushort *)((ulong)uVar16 + (long)puVar9), uVar2 < 0x200)) {
                pcVar11 = pcVar11 + uVar2;
              }
              break;
            }
            if (uVar16 != 0xffffffff) break;
            uVar16 = *puVar9;
          }
          if ((uVar16 == 0) || (puVar14 = (uint *)(ulong)uVar16, puVar9 == puVar14)) break;
          lVar10 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar14)) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar9 + (lVar10 - (long)puVar14);
          if (lVar10 == 0) break;
          uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar14));
          *(undefined4 *)(puVar4 + 0x20) = 0xfffffffe;
          if (uVar13 == 0) break;
          piVar15 = (int *)(lVar10 + 4);
          while (piVar15[-1] != 0x54706054) {
            piVar15 = piVar15 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_0279f714;
          }
          iVar1 = 0;
          if (*piVar15 != -1) {
            iVar1 = *piVar15;
          }
          *(int *)(puVar4 + 0x20) = iVar1;
          if (*puVar9 == 0) break;
        } while( true );
      }
LAB_0279f714:
      if (*pcVar11 == '\0') {
        bVar5 = false;
      }
      else {
        pcVar11 = (char *)(param_1 + 0x54a8);
        if (*puVar8 != 0) {
          cVar12 = *puVar3;
          do {
            if (cVar12 == '\0') {
              cVar12 = '\x01';
              *(undefined8 *)puVar4 = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
              *puVar3 = 1;
              *(undefined4 *)(puVar4 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
              uVar16 = *puVar8;
            }
            else {
              uVar16 = *(uint *)(puVar4 + 0x20);
              if (-1 < (int)uVar16) {
                if (((ushort *)((ulong)uVar16 + (long)puVar8) != (ushort *)0x0) &&
                   (uVar2 = *(ushort *)((ulong)uVar16 + (long)puVar8), uVar2 < 0x200)) {
                  pcVar11 = pcVar11 + uVar2;
                }
                break;
              }
              if (uVar16 != 0xffffffff) break;
              uVar16 = *puVar8;
            }
            if ((uVar16 == 0) || (puVar9 = (uint *)(ulong)uVar16, puVar8 == puVar9)) break;
            lVar10 = 0xc;
            if (*(char *)((long)puVar8 + (10 - (long)puVar9)) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar8 + (lVar10 - (long)puVar9);
            if (lVar10 == 0) break;
            uVar13 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar9));
            *(undefined4 *)(puVar4 + 0x20) = 0xfffffffe;
            if (uVar13 == 0) break;
            piVar15 = (int *)(lVar10 + 4);
            while (piVar15[-1] != 0x54706054) {
              piVar15 = piVar15 + 2;
              uVar13 = uVar13 - 1;
              if (uVar13 == 0) goto LAB_0279f810;
            }
            iVar1 = 0;
            if (*piVar15 != -1) {
              iVar1 = *piVar15;
            }
            *(int *)(puVar4 + 0x20) = iVar1;
            if (*puVar8 == 0) break;
          } while( true );
        }
LAB_0279f810:
        if (*pcVar11 == '\0') {
          if (*puVar8 != 0) {
            cVar12 = *puVar3;
            do {
              if (cVar12 == '\0') {
                cVar12 = '\x01';
                *(undefined8 *)puVar4 = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                *puVar3 = 1;
                *(undefined4 *)(puVar4 + 0x50) = 0xffffffff;
                *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
              }
              else {
                uVar16 = *(uint *)(puVar4 + 0x20);
                if (-1 < (int)uVar16) {
                  if ((ushort *)((ulong)uVar16 + (long)puVar8) != (ushort *)0x0) {
                    uVar16 = (uint)*(ushort *)((ulong)uVar16 + (long)puVar8);
                    goto LAB_0279f8fc;
                  }
                  break;
                }
                if (uVar16 != 0xffffffff) break;
              }
              puVar9 = (uint *)(ulong)*puVar8;
              uVar16 = 0;
              if ((*puVar8 == 0) || (puVar8 == puVar9)) goto LAB_0279f8fc;
              lVar10 = 0xc;
              if (*(char *)((long)puVar8 + (10 - (long)puVar9)) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar8 + (lVar10 - (long)puVar9);
              if (lVar10 == 0) break;
              uVar13 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar9));
              *(undefined4 *)(puVar4 + 0x20) = 0xfffffffe;
              if (uVar13 == 0) break;
              piVar15 = (int *)(lVar10 + 4);
              while (piVar15[-1] != 0x54706054) {
                piVar15 = piVar15 + 2;
                uVar13 = uVar13 - 1;
                if (uVar13 == 0) goto LAB_0279f8f8;
              }
              iVar1 = 0;
              if (*piVar15 != -1) {
                iVar1 = *piVar15;
              }
              *(int *)(puVar4 + 0x20) = iVar1;
              if (*puVar8 == 0) break;
            } while( true );
          }
LAB_0279f8f8:
          uVar16 = 0;
LAB_0279f8fc:
          local_50 = PTR_DAT_04bb2020 + 0x10;
          pcStack_48 = "DailyQuestFivePointQuest";
          uVar7 = FUN_0274bce0(param_2,&local_50);
          bVar5 = uVar7 == uVar16;
        }
        else {
          bVar5 = true;
        }
      }
    }
  }
  return bVar5;
}

