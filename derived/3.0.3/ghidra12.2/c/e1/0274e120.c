
bool FUN_0274e120(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  short sVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint *puVar13;
  short *psVar14;
  char cVar15;
  uint *puVar16;
  ulong uVar17;
  int *piVar18;
  uint uVar19;
  
  puVar8 = PTR_DAT_04bb6348;
  puVar7 = PTR_DAT_04bb46b0;
  uVar19 = 0;
  bVar9 = true;
  do {
    if ((*(long *)puVar7 != 0) && (lVar10 = FUN_026eec4c(*(long *)puVar7,uVar19), lVar10 != 0)) {
      if ((*(long **)(lVar10 + 0x18320) == (long *)0x0) ||
         (puVar11 = (undefined8 *)**(long **)(lVar10 + 0x18320), puVar11 == (undefined8 *)0x0)) {
        uVar12 = 0;
      }
      else {
        uVar12 = (**(code **)*puVar11)();
        uVar12 = uVar12 & 0xffffffff;
      }
      lVar2 = *(long *)(lVar10 + 0x18300);
      lVar3 = *(long *)(lVar10 + 0x18308);
      puVar13 = (uint *)FUN_0274eeb0(param_1);
      if (puVar13 == (uint *)0x0) {
        if ((((uVar12 & 1) != 0) && (*(long *)(lVar10 + 0x18320) != 0)) &&
           (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x18320) + 8),
           puVar11 != (undefined8 *)0x0)) {
          (**(code **)*puVar11)();
        }
      }
      else {
        psVar14 = (short *)(lVar3 + lVar2);
        if (*puVar13 != 0) {
          cVar15 = *PTR_DAT_04bb6340;
          do {
            if (cVar15 == '\0') {
              cVar15 = '\x01';
              *PTR_DAT_04bb6340 = 1;
              *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)puVar8 = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
              uVar4 = *puVar13;
            }
            else {
              uVar4 = *(uint *)(puVar8 + 8);
              if (-1 < (int)uVar4) {
                if (((ushort *)((ulong)uVar4 + (long)puVar13) != (ushort *)0x0) &&
                   (uVar5 = *(ushort *)((ulong)uVar4 + (long)puVar13), uVar5 < 0x800)) {
                  psVar14 = psVar14 + uVar5;
                }
                break;
              }
              if (uVar4 != 0xffffffff) break;
              uVar4 = *puVar13;
            }
            if ((uVar4 == 0) || (puVar16 = (uint *)(ulong)uVar4, puVar13 == puVar16)) break;
            lVar2 = 0xc;
            if (*(char *)((long)puVar13 + (10 - (long)puVar16)) != '\0') {
              lVar2 = 0x1c;
            }
            lVar2 = (long)puVar13 + (lVar2 - (long)puVar16);
            if (lVar2 == 0) break;
            uVar17 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar16));
            *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
            if (uVar17 == 0) break;
            piVar18 = (int *)(lVar2 + 4);
            while (piVar18[-1] != 0x54706054) {
              piVar18 = piVar18 + 2;
              uVar17 = uVar17 - 1;
              if (uVar17 == 0) goto LAB_0274e2f0;
            }
            iVar1 = 0;
            if (*piVar18 != -1) {
              iVar1 = *piVar18;
            }
            *(int *)(puVar8 + 8) = iVar1;
            if (*puVar13 == 0) break;
          } while( true );
        }
LAB_0274e2f0:
        sVar6 = *psVar14;
        if ((((uVar12 & 1) != 0) && (*(long *)(lVar10 + 0x18320) != 0)) &&
           (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x18320) + 8),
           puVar11 != (undefined8 *)0x0)) {
          (**(code **)*puVar11)();
        }
        if (sVar6 != 0) {
          return bVar9;
        }
      }
    }
    bVar9 = uVar19 < 7;
    uVar19 = uVar19 + 1;
    if (uVar19 == 8) {
      return bVar9;
    }
  } while( true );
}

