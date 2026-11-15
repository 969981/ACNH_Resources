
void FUN_021be300(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  uint *puVar6;
  long lVar7;
  undefined1 *puVar8;
  char cVar9;
  uint *puVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  undefined4 local_64;
  
  puVar5 = PTR_DAT_04bb6380;
  uVar1 = param_2 & 0xffff;
  lVar13 = 0;
  do {
    if ((*(char *)(param_1 + lVar13 * 0xba0 + 0xaf9) != '\0') &&
       ((&DAT_053fee41)[lVar13 * 0xba0] != '\0')) {
      lVar7 = *(long *)PTR_DAT_04bb2208;
      local_64 = FUN_006bd550("SeasonEventPlace",0);
      puVar6 = (uint *)FUN_021cb820(lVar7 + 0x660,&local_64);
      if (puVar6 != (uint *)0x0) {
        puVar8 = &DAT_053feb60 + lVar13 * 0xba0;
        if (*puVar6 != 0) {
          cVar9 = *PTR_DAT_04bb6378;
          do {
            if (cVar9 == '\0') {
              cVar9 = '\x01';
              *PTR_DAT_04bb6378 = 1;
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              uVar3 = *puVar6;
            }
            else {
              uVar3 = *(uint *)(puVar5 + 8);
              if (-1 < (int)uVar3) {
                if (((ushort *)((ulong)uVar3 + (long)puVar6) != (ushort *)0x0) &&
                   (uVar4 = *(ushort *)((ulong)uVar3 + (long)puVar6), uVar4 < 0x80)) {
                  puVar8 = puVar8 + uVar4;
                }
                break;
              }
              if (uVar3 != 0xffffffff) break;
              uVar3 = *puVar6;
            }
            if ((uVar3 == 0) || (puVar10 = (uint *)(ulong)uVar3, puVar6 == puVar10)) break;
            lVar7 = 0xc;
            if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
              lVar7 = 0x1c;
            }
            lVar7 = (long)puVar6 + (lVar7 - (long)puVar10);
            if (lVar7 == 0) break;
            uVar12 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
            *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
            if (uVar12 == 0) break;
            piVar11 = (int *)(lVar7 + 4);
            while (piVar11[-1] != 0x54706054) {
              piVar11 = piVar11 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_021be360;
            }
            iVar2 = 0;
            if (*piVar11 != -1) {
              iVar2 = *piVar11;
            }
            *(int *)(puVar5 + 8) = iVar2;
            if (*puVar6 == 0) break;
          } while( true );
        }
LAB_021be360:
        *puVar8 = 0;
      }
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 10);
  uVar3 = (param_2 & 0xf) - 1;
  if ((uVar3 < 10) && ((&DAT_053fee41)[(ulong)uVar3 * 0xba0] != '\0')) {
    lVar13 = *(long *)PTR_DAT_04bb2208;
    local_64 = FUN_006bd550("SeasonEventPlace",0);
    puVar6 = (uint *)FUN_021cb820(lVar13 + 0x660,&local_64);
    if (puVar6 != (uint *)0x0) {
      puVar8 = &DAT_053feb60 + (ulong)uVar3 * 0xba0;
      if (*puVar6 != 0) {
        cVar9 = *PTR_DAT_04bb6378;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *PTR_DAT_04bb6378 = 1;
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            uVar3 = *puVar6;
          }
          else {
            uVar3 = *(uint *)(puVar5 + 8);
            if (-1 < (int)uVar3) {
              if (((ushort *)((ulong)uVar3 + (long)puVar6) != (ushort *)0x0) &&
                 (uVar4 = *(ushort *)((ulong)uVar3 + (long)puVar6), uVar4 < 0x80)) {
                puVar8 = puVar8 + uVar4;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
            uVar3 = *puVar6;
          }
          if ((uVar3 == 0) || (puVar10 = (uint *)(ulong)uVar3, puVar6 == puVar10)) break;
          lVar13 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar6 + (lVar13 - (long)puVar10);
          if (lVar13 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
          *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar11 = (int *)(lVar13 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_021be5f4;
          }
          iVar2 = 0;
          if (*piVar11 != -1) {
            iVar2 = *piVar11;
          }
          *(int *)(puVar5 + 8) = iVar2;
          if (*puVar6 == 0) break;
        } while( true );
      }
LAB_021be5f4:
      *puVar8 = 2;
    }
  }
  uVar3 = (uVar1 >> 4 & 0xf) - 1;
  if ((uVar3 < 10) && ((&DAT_053fee41)[(ulong)uVar3 * 0xba0] != '\0')) {
    lVar13 = *(long *)PTR_DAT_04bb2208;
    local_64 = FUN_006bd550("SeasonEventPlace",0);
    puVar6 = (uint *)FUN_021cb820(lVar13 + 0x660,&local_64);
    if (puVar6 != (uint *)0x0) {
      puVar8 = &DAT_053feb60 + (ulong)uVar3 * 0xba0;
      if (*puVar6 != 0) {
        cVar9 = *PTR_DAT_04bb6378;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *PTR_DAT_04bb6378 = 1;
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            uVar3 = *puVar6;
          }
          else {
            uVar3 = *(uint *)(puVar5 + 8);
            if (-1 < (int)uVar3) {
              if (((ushort *)((ulong)uVar3 + (long)puVar6) != (ushort *)0x0) &&
                 (uVar4 = *(ushort *)((ulong)uVar3 + (long)puVar6), uVar4 < 0x80)) {
                puVar8 = puVar8 + uVar4;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
            uVar3 = *puVar6;
          }
          if ((uVar3 == 0) || (puVar10 = (uint *)(ulong)uVar3, puVar6 == puVar10)) break;
          lVar13 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar6 + (lVar13 - (long)puVar10);
          if (lVar13 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
          *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar11 = (int *)(lVar13 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_021be744;
          }
          iVar2 = 0;
          if (*piVar11 != -1) {
            iVar2 = *piVar11;
          }
          *(int *)(puVar5 + 8) = iVar2;
          if (*puVar6 == 0) break;
        } while( true );
      }
LAB_021be744:
      *puVar8 = 3;
    }
  }
  if (((0xff < uVar1) && (uVar1 = (uVar1 >> 8) - 1, uVar1 < 10)) &&
     ((&DAT_053fee41)[(ulong)uVar1 * 0xba0] != '\0')) {
    lVar13 = *(long *)PTR_DAT_04bb2208;
    local_64 = FUN_006bd550("SeasonEventPlace",0);
    puVar6 = (uint *)FUN_021cb820(lVar13 + 0x660,&local_64);
    if (puVar6 != (uint *)0x0) {
      puVar8 = &DAT_053feb60 + (ulong)uVar1 * 0xba0;
      if (*puVar6 != 0) {
        cVar9 = *PTR_DAT_04bb6378;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *PTR_DAT_04bb6378 = 1;
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            uVar1 = *puVar6;
          }
          else {
            uVar1 = *(uint *)(puVar5 + 8);
            if (-1 < (int)uVar1) {
              if (((ushort *)((ulong)uVar1 + (long)puVar6) != (ushort *)0x0) &&
                 (uVar4 = *(ushort *)((ulong)uVar1 + (long)puVar6), uVar4 < 0x80)) {
                puVar8 = puVar8 + uVar4;
              }
              break;
            }
            if (uVar1 != 0xffffffff) break;
            uVar1 = *puVar6;
          }
          if ((uVar1 == 0) || (puVar10 = (uint *)(ulong)uVar1, puVar6 == puVar10)) break;
          lVar13 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar6 + (lVar13 - (long)puVar10);
          if (lVar13 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
          *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar11 = (int *)(lVar13 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_021be898;
          }
          iVar2 = 0;
          if (*piVar11 != -1) {
            iVar2 = *piVar11;
          }
          *(int *)(puVar5 + 8) = iVar2;
          if (*puVar6 == 0) break;
        } while( true );
      }
LAB_021be898:
      *puVar8 = 4;
    }
  }
  return;
}

