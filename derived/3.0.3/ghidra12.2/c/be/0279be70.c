
bool FUN_0279be70(long param_1,uint *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  ushort uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int *piVar9;
  char *pcVar10;
  char cVar11;
  uint uVar12;
  uint *puVar13;
  ulong uVar14;
  
  puVar7 = PTR_DAT_04bb6448;
  puVar6 = PTR_DAT_04bb6440;
  bVar8 = false;
  if (param_2 != (uint *)0x0) {
    if (0 < (int)param_3) {
      if (*param_2 == 0) {
LAB_0279bf7c:
        uVar12 = 0;
      }
      else {
        cVar11 = *PTR_DAT_04bb6440;
        do {
          if (cVar11 == '\0') {
            cVar11 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar6 = 1;
            *(undefined4 *)(puVar7 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
          }
          else {
            uVar12 = *(uint *)(puVar7 + 0x4c);
            if (-1 < (int)uVar12) {
              if ((byte *)((ulong)uVar12 + (long)param_2) == (byte *)0x0) goto LAB_0279bf7c;
              uVar12 = (uint)*(byte *)((ulong)uVar12 + (long)param_2);
              goto LAB_0279bf80;
            }
            if (uVar12 != 0xffffffff) goto LAB_0279bf7c;
          }
          puVar13 = (uint *)(ulong)*param_2;
          uVar12 = 0;
          if ((*param_2 == 0) || (param_2 == puVar13)) goto LAB_0279bf80;
          lVar5 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar13)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)param_2 + (lVar5 - (long)puVar13);
          if (lVar5 == 0) goto LAB_0279bf7c;
          uVar14 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar13));
          *(undefined4 *)(puVar7 + 0x4c) = 0xfffffffe;
          uVar12 = 0;
          if (uVar14 == 0) goto LAB_0279bf80;
          piVar9 = (int *)(lVar5 + 4);
          while (piVar9[-1] != 0x1be772f0) {
            piVar9 = piVar9 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) {
              uVar12 = 0;
              goto LAB_0279bf80;
            }
          }
          iVar1 = 0;
          if (*piVar9 != -1) {
            iVar1 = *piVar9;
          }
          *(int *)(puVar7 + 0x4c) = iVar1;
        } while (*param_2 != 0);
        uVar12 = 0;
      }
LAB_0279bf80:
      puVar7 = PTR_DAT_04bb6448;
      puVar6 = PTR_DAT_04bb6440;
      if (uVar12 < param_3) {
        return false;
      }
      pcVar10 = (char *)(param_1 + 0x56ac);
      if (*param_2 != 0) {
        cVar11 = *PTR_DAT_04bb6440;
        do {
          if (cVar11 == '\0') {
            cVar11 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar6 = 1;
            *(undefined4 *)(puVar7 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
          }
          else {
            uVar12 = *(uint *)(puVar7 + 0x3c);
            if (-1 < (int)uVar12) {
              if (((ushort *)((ulong)uVar12 + (long)param_2) != (ushort *)0x0) &&
                 (uVar4 = *(ushort *)((ulong)uVar12 + (long)param_2), uVar4 < 0x200)) {
                pcVar10 = pcVar10 + (ulong)uVar4 * 6;
              }
              break;
            }
            if (uVar12 != 0xffffffff) break;
          }
          lVar5 = (long)param_2 - (ulong)*param_2;
          if ((*param_2 == 0) || (lVar5 == 0)) break;
          lVar2 = 0xc;
          if (*(char *)(lVar5 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          if (lVar2 + lVar5 == 0) break;
          uVar14 = (ulong)*(ushort *)(lVar5 + 8);
          *(undefined4 *)(puVar7 + 0x3c) = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar9 = (int *)(lVar2 + lVar5 + 4);
          while (piVar9[-1] != 0x54706054) {
            piVar9 = piVar9 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_0279c09c;
          }
          iVar1 = 0;
          if (*piVar9 != -1) {
            iVar1 = *piVar9;
          }
          *(int *)(puVar7 + 0x3c) = iVar1;
          if (*param_2 == 0) break;
        } while( true );
      }
LAB_0279c09c:
      pcVar3 = pcVar10 + (param_3 - 1);
      if (5 < param_3 - 1) {
        pcVar3 = pcVar10;
      }
      bVar8 = *pcVar3 != '\0';
    }
  }
  return bVar8;
}

