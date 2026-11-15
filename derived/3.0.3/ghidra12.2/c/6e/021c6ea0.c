
void FUN_021c6ea0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar14;
  char cVar15;
  byte *pbVar16;
  uint *puVar17;
  int *piVar18;
  undefined1 uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  uint local_68;
  undefined4 local_64;
  
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x6622bd46) &&
     (lVar10 = *(long *)PTR_DAT_04bb46b0, lVar10 != 0)) {
    puVar11 = *(undefined8 **)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar11 + 0x38))();
      if (lVar10 == 0) {
        return;
      }
      lVar10 = lVar10 + 0x70;
    }
    else {
      if (puVar11 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar11[0x26] == (long *)0x0) {
        return;
      }
      lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
      if (lVar10 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar10 + 0xd0) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar10 + 0xd0), puVar11 == (undefined8 *)0x0)) {
      local_68 = 0;
    }
    else {
      local_68 = (**(code **)*puVar11)();
    }
    puVar7 = PTR_DAT_04bc27f0;
    lVar21 = 0;
    uVar20 = 0x3f;
    uVar22 = 6;
    do {
      pbVar16 = (byte *)(*(long *)(lVar10 + 0xb8) + *(long *)(lVar10 + 0xb0) + lVar21 * 0x13230);
      uVar12 = (ulong)*pbVar16;
      if (((uVar12 < 0x23) && (bVar4 = pbVar16[1], bVar4 <= (byte)puVar7[uVar12])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar12 * 4) >> (ulong)(bVar4 & 0x1f) & 1) != 0)) {
        puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar1 = *puVar8 ^ *puVar8 << 0xb;
        uVar3 = puVar8[3];
        *puVar8 = puVar8[1];
        puVar8[1] = puVar8[2];
        uVar2 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
        puVar8[2] = uVar3;
        puVar8[3] = uVar2;
        uVar1 = uVar20 - (uVar20 >> 1 & 0x55555555);
        uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
        uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
        uVar1 = uVar1 + (uVar1 >> 8);
        iVar9 = (int)(uVar2 * uVar22 >> 0x20);
        if ((iVar9 < (int)(uVar1 + (uVar1 >> 0x10) & 0x3f)) && (uVar20 != 0)) {
          iVar9 = iVar9 + 2;
          uVar1 = uVar20;
          do {
            iVar9 = iVar9 + -1;
            if (iVar9 < 2) {
              uVar1 = uVar1 - 1 & (uVar1 ^ 0xffffffff);
              uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
              uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
              uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
              uVar1 = uVar1 + (uVar1 >> 8);
              uVar1 = uVar1 + (uVar1 >> 0x10);
              uVar2 = uVar1 & 0x3f;
              uVar19 = (undefined1)uVar2;
              if (uVar2 < 6) {
                uVar20 = uVar20 & (1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU);
              }
              goto LAB_021c7070;
            }
            uVar1 = uVar1 - 1 & uVar1;
          } while (uVar1 != 0);
        }
        uVar19 = 0xff;
LAB_021c7070:
        uVar2 = (int)uVar22 - 1;
        uVar1 = 6;
        if (uVar2 != 0) {
          uVar1 = uVar2;
        }
        uVar22 = (ulong)uVar1;
        uVar1 = 0x3f;
        if (uVar2 != 0) {
          uVar1 = uVar20;
        }
        uVar20 = uVar1;
        if ((&DAT_053fee41)[lVar21 * 0xba0] != '\0') {
          lVar13 = *(long *)PTR_DAT_04bb2208;
          local_64 = FUN_006bd550("EasterExchangeEggKind",0);
          puVar8 = (uint *)FUN_021cb820(lVar13 + 0x660,&local_64);
          puVar6 = PTR_DAT_04bb6380;
          if (puVar8 != (uint *)0x0) {
            puVar14 = &DAT_053feb60 + lVar21 * 0xba0;
            if (*puVar8 != 0) {
              cVar15 = *PTR_DAT_04bb6378;
              do {
                if (cVar15 == '\0') {
                  cVar15 = '\x01';
                  *PTR_DAT_04bb6378 = 1;
                  *(undefined8 *)puVar6 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                  uVar1 = *puVar8;
                }
                else {
                  uVar1 = *(uint *)(puVar6 + 8);
                  if (-1 < (int)uVar1) {
                    if (((ushort *)((ulong)uVar1 + (long)puVar8) != (ushort *)0x0) &&
                       (uVar5 = *(ushort *)((ulong)uVar1 + (long)puVar8), uVar5 < 0x80)) {
                      puVar14 = puVar14 + uVar5;
                    }
                    break;
                  }
                  if (uVar1 != 0xffffffff) break;
                  uVar1 = *puVar8;
                }
                if ((uVar1 == 0) || (puVar17 = (uint *)(ulong)uVar1, puVar8 == puVar17)) break;
                lVar13 = 0xc;
                if (*(char *)((long)puVar8 + (10 - (long)puVar17)) != '\0') {
                  lVar13 = 0x1c;
                }
                lVar13 = (long)puVar8 + (lVar13 - (long)puVar17);
                if (lVar13 == 0) break;
                uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar17));
                *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
                if (uVar12 == 0) break;
                piVar18 = (int *)(lVar13 + 4);
                while (piVar18[-1] != 0x54706054) {
                  piVar18 = piVar18 + 2;
                  uVar12 = uVar12 - 1;
                  if (uVar12 == 0) goto LAB_021c722c;
                }
                iVar9 = 0;
                if (*piVar18 != -1) {
                  iVar9 = *piVar18;
                }
                *(int *)(puVar6 + 8) = iVar9;
                if (*puVar8 == 0) break;
              } while( true );
            }
LAB_021c722c:
            *puVar14 = uVar19;
          }
        }
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 != 10);
    if ((((local_68 & 1) != 0) && (*(long *)(lVar10 + 0xd0) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0xd0) + 8), puVar11 != (undefined8 *)0x0)) {
      (**(code **)*puVar11)();
    }
  }
  return;
}

