
void FUN_021a11f0(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  long lVar8;
  char *pcVar9;
  char cVar10;
  uint *puVar11;
  ulong uVar12;
  byte bVar13;
  int *piVar14;
  int iVar15;
  undefined4 local_64;
  
  puVar6 = PTR_DAT_04bb6380;
  puVar5 = PTR_DAT_04bb2208;
  iVar15 = 0;
  do {
    if ((*(char *)(param_1 + (long)iVar15 * 0xba0 + 0xaf9) != '\0') &&
       (*(char *)(param_1 + (long)iVar15 * 0xba0 + 0xaf8) != param_2)) {
      lVar8 = *(long *)puVar5;
      local_64 = FUN_006bd550("MarketBuildingTalk",0);
      puVar7 = (uint *)FUN_021cb820(lVar8 + 0x660,&local_64);
      if (puVar7 != (uint *)0x0) {
        pcVar9 = (char *)(param_1 + (long)iVar15 * 0xba0 + 0x818);
        if (*puVar7 != 0) {
          cVar10 = *PTR_DAT_04bb6378;
          do {
            if (cVar10 == '\0') {
              cVar10 = '\x01';
              *PTR_DAT_04bb6378 = 1;
              *(undefined8 *)puVar6 = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
              uVar2 = *puVar7;
            }
            else {
              uVar2 = *(uint *)(puVar6 + 8);
              if (-1 < (int)uVar2) {
                if (((ushort *)((ulong)uVar2 + (long)puVar7) != (ushort *)0x0) &&
                   (uVar4 = *(ushort *)((ulong)uVar2 + (long)puVar7), uVar4 < 0x80)) {
                  pcVar9 = pcVar9 + uVar4;
                }
                break;
              }
              if (uVar2 != 0xffffffff) break;
              uVar2 = *puVar7;
            }
            if ((uVar2 == 0) || (puVar11 = (uint *)(ulong)uVar2, puVar7 == puVar11)) break;
            lVar8 = 0xc;
            if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar7 + (lVar8 - (long)puVar11);
            if (lVar8 == 0) break;
            uVar12 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
            *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
            if (uVar12 == 0) break;
            piVar14 = (int *)(lVar8 + 4);
            while (piVar14[-1] != 0x54706054) {
              piVar14 = piVar14 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_021a13b8;
            }
            iVar1 = 0;
            if (*piVar14 != -1) {
              iVar1 = *piVar14;
            }
            *(int *)(puVar6 + 8) = iVar1;
            if (*puVar7 == 0) break;
          } while( true );
        }
LAB_021a13b8:
        if (*pcVar9 != '\0') goto LAB_021a1270;
      }
      lVar8 = param_1 + (long)iVar15 * 0xba0;
      bVar3 = *(byte *)(lVar8 + 0x4c8);
      *(undefined4 *)(lVar8 + 0x4cc) = 0;
      bVar13 = bVar3 >> 1;
      if (0x1e < bVar13) {
        bVar13 = 0x1f;
      }
      *(byte *)(lVar8 + 0x4c8) = bVar13;
      *(bool *)(lVar8 + 0x4e1) = 0x3f < bVar3;
    }
LAB_021a1270:
    iVar15 = iVar15 + 1;
    if (iVar15 == 10) {
      return;
    }
  } while( true );
}

