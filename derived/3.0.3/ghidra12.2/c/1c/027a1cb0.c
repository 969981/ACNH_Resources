
bool FUN_027a1cb0(byte *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ushort *puVar13;
  uint *puVar14;
  uint uVar15;
  ushort *puVar16;
  uint *puVar17;
  int *piVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  char cVar23;
  undefined *local_40;
  char *pcStack_38;
  byte local_14 [4];
  
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "MainmenuRndDailyQuest";
  iVar9 = FUN_0274bce0(param_1,&local_40);
  if (iVar9 == 0) {
    return false;
  }
  local_14[0] = *param_1;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar10 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_14,1);
  if (lVar10 == 0) {
    return false;
  }
  if (*(long **)(lVar10 + 0x18358) == (long *)0x0) {
    uVar12 = 0;
  }
  else {
    puVar11 = (undefined8 *)**(long **)(lVar10 + 0x18358);
    uVar12 = 0;
    if (puVar11 != (undefined8 *)0x0) {
      uVar12 = (**(code **)*puVar11)();
    }
  }
  puVar7 = PTR_DAT_04bb6428;
  puVar6 = PTR_DAT_04bb6420;
  lVar20 = *(long *)PTR_DAT_04bb2208;
  uVar2 = *(uint *)(lVar20 + 0x1b20);
  uVar21 = uVar2;
  if ((int)uVar2 < 1) {
    if (*(long *)(lVar20 + 0x1a10) == 0) {
      bVar8 = false;
      goto joined_r0x027a2120;
    }
    puVar14 = *(uint **)(*(long *)(lVar20 + 0x1a10) + 8);
    if ((puVar14 == (uint *)0x0) || (uVar21 = *puVar14, uVar21 == 0)) {
      bVar8 = false;
      goto joined_r0x027a2120;
    }
  }
  uVar22 = 0;
  bVar8 = true;
  cVar23 = *PTR_DAT_04bb6420;
  do {
    if ((int)uVar2 < 1) {
      if ((((*(long *)(lVar20 + 0x1a10) != 0) &&
           (puVar14 = *(uint **)(*(long *)(lVar20 + 0x1a10) + 8), puVar14 != (uint *)0x0)) &&
          ((*(uint *)(lVar20 + 0x1a28) <= uVar22 ||
           (*(char *)(*(long *)(lVar20 + 0x1a30) + (long)(int)uVar22) != '\0')))) &&
         (((uVar22 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))) {
        iVar9 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          iVar9 = 0x1c;
        }
        puVar14 = (uint *)((ulong)(puVar14[1] * uVar22 + (uint)(ushort)puVar14[2] * 8 + iVar9) +
                          (long)puVar14);
        goto joined_r0x027a2094;
      }
    }
    else if (uVar22 < uVar2) {
      uVar15 = uVar22;
      if (*(uint *)(lVar20 + 0x1b10) <= uVar22) {
        uVar15 = 0;
      }
      puVar14 = *(uint **)(*(long *)(lVar20 + 0x1b18) + (ulong)uVar15 * 8);
joined_r0x027a2094:
      if (puVar14 != (uint *)0x0) {
        puVar13 = (ushort *)(*(long *)(lVar10 + 0x18340) + *(long *)(lVar10 + 0x18338));
        puVar16 = puVar13 + 0x200;
        if (*puVar14 != 0) {
          do {
            if (cVar23 == '\0') {
              cVar23 = '\x01';
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
              uVar15 = *(uint *)(puVar7 + 0x20);
              if (-1 < (int)uVar15) {
                if (((ushort *)((ulong)uVar15 + (long)puVar14) != (ushort *)0x0) &&
                   (uVar4 = *(ushort *)((ulong)uVar15 + (long)puVar14), uVar4 < 0x200)) {
                  puVar16 = (ushort *)((long)puVar16 + (ulong)uVar4);
                }
                break;
              }
              if (uVar15 != 0xffffffff) break;
            }
            lVar5 = (long)puVar14 - (ulong)*puVar14;
            if ((*puVar14 == 0) || (lVar5 == 0)) break;
            lVar1 = 0xc;
            if (*(char *)(lVar5 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            if (lVar1 + lVar5 == 0) break;
            uVar19 = (ulong)*(ushort *)(lVar5 + 8);
            *(undefined4 *)(puVar7 + 0x20) = 0xfffffffe;
            if (uVar19 == 0) break;
            piVar18 = (int *)(lVar1 + lVar5 + 4);
            while (piVar18[-1] != 0x54706054) {
              piVar18 = piVar18 + 2;
              uVar19 = uVar19 - 1;
              if (uVar19 == 0) goto LAB_027a1ec0;
            }
            iVar9 = 0;
            if (*piVar18 != -1) {
              iVar9 = *piVar18;
            }
            *(int *)(puVar7 + 0x20) = iVar9;
            if (*puVar14 == 0) break;
          } while( true );
        }
LAB_027a1ec0:
        if ((char)*puVar16 != '\0') {
          if (*puVar14 == 0) {
            uVar15 = 0;
          }
          else {
            do {
              if (cVar23 == '\0') {
                cVar23 = '\x01';
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
                puVar17 = (uint *)(ulong)*puVar14;
                if (*puVar14 == 0) goto LAB_027a1f88;
              }
              else {
                uVar15 = *(uint *)(puVar7 + 0x14);
                if (-1 < (int)uVar15) {
                  puVar17 = (uint *)((ulong)uVar15 + (long)puVar14);
                  if (puVar17 != (uint *)0x0) {
                    puVar17 = (uint *)(ulong)(ushort)*puVar17;
                  }
                  goto LAB_027a1f88;
                }
                if (uVar15 != 0xffffffff) {
                  puVar17 = (uint *)0x0;
                  goto LAB_027a1f88;
                }
                puVar17 = (uint *)(ulong)*puVar14;
                if (*puVar14 == 0) {
                  puVar17 = (uint *)0x0;
                  goto LAB_027a1f88;
                }
              }
              if (puVar14 == puVar17) {
                puVar17 = (uint *)0x0;
                goto LAB_027a1f88;
              }
              lVar5 = 0xc;
              if (*(char *)((long)puVar14 + (10 - (long)puVar17)) != '\0') {
                lVar5 = 0x1c;
              }
              lVar5 = (long)puVar14 + (lVar5 - (long)puVar17);
              if (lVar5 == 0) {
                puVar17 = (uint *)0x0;
                goto LAB_027a1f88;
              }
              puVar17 = (uint *)(ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar17));
              *(undefined4 *)(puVar7 + 0x14) = 0xfffffffe;
              if (puVar17 == (uint *)0x0) goto LAB_027a1f88;
              piVar18 = (int *)(lVar5 + 4);
              while (piVar18[-1] != 0x110b14c) {
                piVar18 = piVar18 + 2;
                puVar17 = (uint *)((long)puVar17 + -1);
                if (puVar17 == (uint *)0x0) goto LAB_027a1f88;
              }
              iVar9 = 0;
              if (*piVar18 != -1) {
                iVar9 = *piVar18;
              }
              *(int *)(puVar7 + 0x14) = iVar9;
              uVar15 = 0;
            } while (*puVar14 != 0);
          }
LAB_027a1dac:
          if (*puVar13 == uVar15) break;
        }
      }
    }
    uVar22 = uVar22 + 1;
    bVar8 = uVar22 < uVar21;
  } while (uVar22 != uVar21);
joined_r0x027a2120:
  if ((uVar12 & 1) == 0) {
    return bVar8;
  }
  if (*(long *)(lVar10 + 0x18358) == 0) {
    return bVar8;
  }
  puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x18358) + 8);
  if (puVar11 == (undefined8 *)0x0) {
    return bVar8;
  }
  (**(code **)*puVar11)();
  return bVar8;
LAB_027a1f88:
  uVar15 = (uint)puVar17;
  if (*puVar14 == 0) goto LAB_027a1dac;
  if (cVar23 == '\0') {
    cVar23 = '\x01';
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
    uVar3 = *(uint *)(puVar7 + 0x20);
    if (-1 < (int)uVar3) {
      if (((ushort *)((ulong)uVar3 + (long)puVar14) != (ushort *)0x0) &&
         (uVar4 = *(ushort *)((ulong)uVar3 + (long)puVar14), uVar4 < 0x200)) {
        puVar13 = puVar13 + uVar4;
      }
      goto LAB_027a1dac;
    }
    if (uVar3 != 0xffffffff) goto LAB_027a1dac;
  }
  lVar5 = (long)puVar14 - (ulong)*puVar14;
  if ((*puVar14 == 0) || (lVar5 == 0)) goto LAB_027a1dac;
  lVar1 = 0xc;
  if (*(char *)(lVar5 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  if (lVar1 + lVar5 == 0) goto LAB_027a1dac;
  uVar19 = (ulong)*(ushort *)(lVar5 + 8);
  *(undefined4 *)(puVar7 + 0x20) = 0xfffffffe;
  if (uVar19 == 0) goto LAB_027a1dac;
  piVar18 = (int *)(lVar1 + lVar5 + 4);
  while (piVar18[-1] != 0x54706054) {
    piVar18 = piVar18 + 2;
    uVar19 = uVar19 - 1;
    if (uVar19 == 0) goto LAB_027a1dac;
  }
  iVar9 = 0;
  if (*piVar18 != -1) {
    iVar9 = *piVar18;
  }
  *(int *)(puVar7 + 0x20) = iVar9;
  goto LAB_027a1f88;
}

