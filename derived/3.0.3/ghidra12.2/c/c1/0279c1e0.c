
void FUN_0279c1e0(long param_1,long *param_2,uint param_3)

{
  int iVar1;
  undefined1 *puVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  int *piVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  char cVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  undefined4 local_24;
  
  if (0 < (int)param_3) {
    lVar8 = *(long *)PTR_DAT_04bb2208;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_24 = FUN_006bd550(param_2[1],0);
    puVar6 = (uint *)FUN_01b1ee90(lVar8 + 0x1b80,&local_24);
    puVar5 = PTR_DAT_04bb6448;
    puVar4 = PTR_DAT_04bb6440;
    if (puVar6 != (uint *)0x0) {
      if (*puVar6 == 0) {
LAB_0279c33c:
        uVar12 = 0;
      }
      else {
        cVar11 = *PTR_DAT_04bb6440;
        do {
          if (cVar11 == '\0') {
            cVar11 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
          }
          else {
            uVar12 = *(uint *)(puVar5 + 0x4c);
            if (-1 < (int)uVar12) {
              if ((byte *)((ulong)uVar12 + (long)puVar6) == (byte *)0x0) goto LAB_0279c33c;
              uVar12 = (uint)*(byte *)((ulong)uVar12 + (long)puVar6);
              goto LAB_0279c340;
            }
            if (uVar12 != 0xffffffff) goto LAB_0279c33c;
          }
          puVar14 = (uint *)(ulong)*puVar6;
          uVar12 = 0;
          if ((*puVar6 == 0) || (puVar6 == puVar14)) goto LAB_0279c340;
          lVar8 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar14)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar6 + (lVar8 - (long)puVar14);
          if (lVar8 == 0) goto LAB_0279c33c;
          uVar13 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar14));
          *(undefined4 *)(puVar5 + 0x4c) = 0xfffffffe;
          uVar12 = 0;
          if (uVar13 == 0) goto LAB_0279c340;
          piVar7 = (int *)(lVar8 + 4);
          while (piVar7[-1] != 0x1be772f0) {
            piVar7 = piVar7 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) {
              uVar12 = 0;
              goto LAB_0279c340;
            }
          }
          iVar1 = 0;
          if (*piVar7 != -1) {
            iVar1 = *piVar7;
          }
          *(int *)(puVar5 + 0x4c) = iVar1;
        } while (*puVar6 != 0);
        uVar12 = 0;
      }
LAB_0279c340:
      puVar5 = PTR_DAT_04bb6448;
      puVar4 = PTR_DAT_04bb6440;
      if (param_3 <= uVar12) {
        puVar9 = (undefined1 *)(param_1 + 0x56ac);
        puVar10 = (undefined1 *)(param_1 + 0x1698);
        if (*puVar6 != 0) {
          cVar11 = *PTR_DAT_04bb6440;
          do {
            if (cVar11 == '\0') {
              cVar11 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
              uVar12 = *puVar6;
            }
            else {
              uVar12 = *(uint *)(puVar5 + 0x3c);
              if (-1 < (int)uVar12) {
                if (((ushort *)((ulong)uVar12 + (long)puVar6) != (ushort *)0x0) &&
                   (uVar3 = *(ushort *)((ulong)uVar12 + (long)puVar6), uVar3 < 0x200)) {
                  puVar10 = puVar10 + (ulong)uVar3 * 6;
                }
                break;
              }
              if (uVar12 != 0xffffffff) break;
              uVar12 = *puVar6;
            }
            if ((uVar12 == 0) || (puVar14 = (uint *)(ulong)uVar12, puVar6 == puVar14)) break;
            lVar8 = 0xc;
            if (*(char *)((long)puVar6 + (10 - (long)puVar14)) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar6 + (lVar8 - (long)puVar14);
            if (lVar8 == 0) break;
            uVar13 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar14));
            *(undefined4 *)(puVar5 + 0x3c) = 0xfffffffe;
            if (uVar13 == 0) break;
            piVar7 = (int *)(lVar8 + 4);
            while (piVar7[-1] != 0x54706054) {
              piVar7 = piVar7 + 2;
              uVar13 = uVar13 - 1;
              if (uVar13 == 0) goto LAB_0279c460;
            }
            iVar1 = 0;
            if (*piVar7 != -1) {
              iVar1 = *piVar7;
            }
            *(int *)(puVar5 + 0x3c) = iVar1;
            if (*puVar6 == 0) break;
          } while( true );
        }
LAB_0279c460:
        puVar2 = puVar10 + (param_3 - 1);
        if (6 < param_3) {
          puVar2 = puVar10;
        }
        *puVar2 = 1;
        puVar5 = PTR_DAT_04bb6448;
        puVar4 = PTR_DAT_04bb6440;
        if (*puVar6 != 0) {
          cVar11 = *PTR_DAT_04bb6440;
          do {
            if (cVar11 == '\0') {
              cVar11 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
              uVar12 = *puVar6;
            }
            else {
              uVar12 = *(uint *)(puVar5 + 0x3c);
              if (-1 < (int)uVar12) {
                if (((ushort *)((ulong)uVar12 + (long)puVar6) != (ushort *)0x0) &&
                   (uVar3 = *(ushort *)((ulong)uVar12 + (long)puVar6), uVar3 < 0x200)) {
                  puVar9 = puVar9 + (ulong)uVar3 * 6;
                }
                break;
              }
              if (uVar12 != 0xffffffff) break;
              uVar12 = *puVar6;
            }
            if ((uVar12 == 0) || (puVar14 = (uint *)(ulong)uVar12, puVar6 == puVar14)) break;
            lVar8 = 0xc;
            if (*(char *)((long)puVar6 + (10 - (long)puVar14)) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar6 + (lVar8 - (long)puVar14);
            if (lVar8 == 0) break;
            uVar13 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar14));
            *(undefined4 *)(puVar5 + 0x3c) = 0xfffffffe;
            if (uVar13 == 0) break;
            piVar7 = (int *)(lVar8 + 4);
            while (piVar7[-1] != 0x54706054) {
              piVar7 = piVar7 + 2;
              uVar13 = uVar13 - 1;
              if (uVar13 == 0) goto LAB_0279c57c;
            }
            iVar1 = 0;
            if (*piVar7 != -1) {
              iVar1 = *piVar7;
            }
            *(int *)(puVar5 + 0x3c) = iVar1;
            if (*puVar6 == 0) break;
          } while( true );
        }
LAB_0279c57c:
        puVar10 = puVar9 + (param_3 - 1);
        if (6 < param_3) {
          puVar10 = puVar9;
        }
        *puVar10 = 1;
      }
    }
  }
  return;
}

