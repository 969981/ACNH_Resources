
void FUN_0219cad0(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  long lVar7;
  undefined1 *puVar8;
  byte bVar9;
  char cVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  byte *pbVar14;
  int local_14;
  
  if (param_2 == 0) {
    lVar7 = *(long *)PTR_DAT_04bb2208;
    local_14 = FUN_006bd550("ContinuousReactionTalkCount",0);
    puVar6 = (uint *)FUN_021cb820(lVar7 + 0x660,&local_14);
    puVar5 = PTR_DAT_04bb6380;
    puVar4 = PTR_DAT_04bb6378;
    if (puVar6 != (uint *)0x0) {
      puVar8 = (undefined1 *)(param_1 + 0x818);
      if (*puVar6 != 0) {
        cVar10 = *PTR_DAT_04bb6378;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            uVar2 = *puVar6;
          }
          else {
            uVar2 = *(uint *)(puVar5 + 8);
            if (-1 < (int)uVar2) {
              if (((ushort *)((ulong)uVar2 + (long)puVar6) != (ushort *)0x0) &&
                 (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar6), uVar3 < 0x80)) {
                puVar8 = puVar8 + uVar3;
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
            uVar2 = *puVar6;
          }
          if ((uVar2 == 0) || (puVar11 = (uint *)(ulong)uVar2, puVar6 == puVar11)) break;
          lVar7 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar11)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar6 + (lVar7 - (long)puVar11);
          if (lVar7 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar11));
          *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar13 = (int *)(lVar7 + 4);
          while (piVar13[-1] != 0x54706054) {
            piVar13 = piVar13 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_0219ce28;
          }
          iVar1 = 0;
          if (*piVar13 != -1) {
            iVar1 = *piVar13;
          }
          *(int *)(puVar5 + 8) = iVar1;
          if (*puVar6 == 0) break;
        } while( true );
      }
LAB_0219ce28:
      *puVar8 = 0;
    }
    *(undefined4 *)(param_1 + 0x4e4) = 0;
  }
  else {
    local_14 = *(int *)(param_1 + 0x4e4);
    pbVar14 = (byte *)(param_1 + 0x818);
    lVar7 = *(long *)PTR_DAT_04bb2208;
    if (local_14 == param_2) {
      local_14 = FUN_006bd550("ContinuousReactionTalkCount",0);
      puVar6 = (uint *)FUN_021cb820(lVar7 + 0x660,&local_14);
      puVar5 = PTR_DAT_04bb6380;
      puVar4 = PTR_DAT_04bb6378;
      if (puVar6 != (uint *)0x0) {
        if (*puVar6 != 0) {
          cVar10 = *PTR_DAT_04bb6378;
          do {
            if (cVar10 == '\0') {
              cVar10 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              uVar2 = *puVar6;
            }
            else {
              uVar2 = *(uint *)(puVar5 + 8);
              if (-1 < (int)uVar2) {
                if (((ushort *)((ulong)uVar2 + (long)puVar6) != (ushort *)0x0) &&
                   (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar6), uVar3 < 0x80)) {
                  pbVar14 = pbVar14 + uVar3;
                }
                break;
              }
              if (uVar2 != 0xffffffff) break;
              uVar2 = *puVar6;
            }
            if ((uVar2 == 0) || (puVar11 = (uint *)(ulong)uVar2, puVar6 == puVar11)) break;
            lVar7 = 0xc;
            if (*(char *)((long)puVar6 + (10 - (long)puVar11)) != '\0') {
              lVar7 = 0x1c;
            }
            lVar7 = (long)puVar6 + (lVar7 - (long)puVar11);
            if (lVar7 == 0) break;
            uVar12 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar11));
            *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
            if (uVar12 == 0) break;
            piVar13 = (int *)(lVar7 + 4);
            while (piVar13[-1] != 0x54706054) {
              piVar13 = piVar13 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_0219ce50;
            }
            iVar1 = 0;
            if (*piVar13 != -1) {
              iVar1 = *piVar13;
            }
            *(int *)(puVar5 + 8) = iVar1;
            if (*puVar6 == 0) break;
          } while( true );
        }
LAB_0219ce50:
        bVar9 = 0xff;
        if ((*pbVar14 + 1 & 0x100) == 0) {
          bVar9 = *pbVar14 + 1;
        }
        *pbVar14 = bVar9;
      }
    }
    else {
      local_14 = FUN_006bd550("ContinuousReactionTalkCount",0);
      puVar6 = (uint *)FUN_021cb820(lVar7 + 0x660,&local_14);
      puVar5 = PTR_DAT_04bb6380;
      puVar4 = PTR_DAT_04bb6378;
      if (puVar6 != (uint *)0x0) {
        if (*puVar6 != 0) {
          cVar10 = *PTR_DAT_04bb6378;
          do {
            if (cVar10 == '\0') {
              cVar10 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              uVar2 = *puVar6;
            }
            else {
              uVar2 = *(uint *)(puVar5 + 8);
              if (-1 < (int)uVar2) {
                if (((ushort *)((ulong)uVar2 + (long)puVar6) != (ushort *)0x0) &&
                   (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar6), uVar3 < 0x80)) {
                  pbVar14 = pbVar14 + uVar3;
                }
                break;
              }
              if (uVar2 != 0xffffffff) break;
              uVar2 = *puVar6;
            }
            if ((uVar2 == 0) || (puVar11 = (uint *)(ulong)uVar2, puVar6 == puVar11)) break;
            lVar7 = 0xc;
            if (*(char *)((long)puVar6 + (10 - (long)puVar11)) != '\0') {
              lVar7 = 0x1c;
            }
            lVar7 = (long)puVar6 + (lVar7 - (long)puVar11);
            if (lVar7 == 0) break;
            uVar12 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar11));
            *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
            if (uVar12 == 0) break;
            piVar13 = (int *)(lVar7 + 4);
            while (piVar13[-1] != 0x54706054) {
              piVar13 = piVar13 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_0219ce88;
            }
            iVar1 = 0;
            if (*piVar13 != -1) {
              iVar1 = *piVar13;
            }
            *(int *)(puVar5 + 8) = iVar1;
            if (*puVar6 == 0) break;
          } while( true );
        }
LAB_0219ce88:
        *pbVar14 = 1;
      }
      *(int *)(param_1 + 0x4e4) = param_2;
    }
  }
  return;
}

