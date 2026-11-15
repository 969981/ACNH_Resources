
int FUN_021b9110(void)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  byte *pbVar8;
  long lVar9;
  char cVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  long lVar15;
  undefined4 local_64;
  
  puVar6 = PTR_DAT_04bb6380;
  puVar4 = PTR_DAT_04bb2208;
  lVar15 = 0;
  iVar14 = 0;
  do {
    if ((&DAT_053fee41)[lVar15 * 0xba0] != '\0') {
      lVar9 = *(long *)puVar4;
      local_64 = FUN_006bd550("SeasonEventPlace",0);
      puVar7 = (uint *)FUN_021cb820(lVar9 + 0x660,&local_64);
      if (puVar7 != (uint *)0x0) {
        pbVar8 = &DAT_053feb60 + lVar15 * 0xba0;
        if (*puVar7 != 0) {
          cVar10 = *PTR_DAT_04bb6378;
          do {
            puVar5 = PTR_DAT_04bb6378;
            if (cVar10 == '\0') {
              cVar10 = '\x01';
              *(undefined8 *)puVar6 = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
              *puVar5 = 1;
              *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
              uVar2 = *puVar7;
            }
            else {
              uVar2 = *(uint *)(puVar6 + 8);
              if (-1 < (int)uVar2) {
                if (((ushort *)((ulong)uVar2 + (long)puVar7) != (ushort *)0x0) &&
                   (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar7), uVar3 < 0x80)) {
                  pbVar8 = pbVar8 + uVar3;
                }
                break;
              }
              if (uVar2 != 0xffffffff) break;
              uVar2 = *puVar7;
            }
            if ((uVar2 == 0) || (puVar11 = (uint *)(ulong)uVar2, puVar7 == puVar11)) break;
            lVar9 = 0xc;
            if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar7 + (lVar9 - (long)puVar11);
            if (lVar9 == 0) break;
            uVar12 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
            *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
            if (uVar12 == 0) break;
            piVar13 = (int *)(lVar9 + 4);
            while (piVar13[-1] != 0x54706054) {
              piVar13 = piVar13 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_021b9170;
            }
            iVar1 = 0;
            if (*piVar13 != -1) {
              iVar1 = *piVar13;
            }
            *(int *)(puVar6 + 8) = iVar1;
            if (*puVar7 == 0) break;
          } while( true );
        }
LAB_021b9170:
        if (1 < *pbVar8) {
          iVar14 = iVar14 + 1;
        }
      }
    }
    lVar15 = lVar15 + 1;
    if (lVar15 == 10) {
      return iVar14;
    }
  } while( true );
}

