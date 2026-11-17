
/* WARNING: Removing unreachable block (ram,0x02af0030) */

void FUN_02aefd20(long param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  char cVar12;
  ushort uVar13;
  int *piVar14;
  uint *puVar15;
  ushort uVar16;
  long lVar17;
  uint *puVar18;
  char *pcVar19;
  undefined8 *puVar20;
  
  puVar5 = PTR_DAT_04bc4838;
  uVar16 = 0;
  switch(param_2) {
  case 1:
    uVar16 = 1;
    break;
  case 2:
    uVar16 = 2;
    break;
  case 3:
  case 4:
    uVar16 = 3;
    break;
  case 5:
    uVar16 = 4;
    break;
  case 6:
    uVar16 = 5;
    break;
  case 7:
  case 8:
    uVar16 = 6;
  }
  lVar17 = *(long *)PTR_DAT_04bb5008;
  uVar8 = (uint)*(ushort *)(lVar17 + 0x7f0);
  uVar1 = *(short *)(lVar17 + 0x7f2) + 1;
  if (*(ushort *)(lVar17 + 0x7f0) != uVar1) {
    pbVar7 = PTR_DAT_04bc4840;
    puVar18 = (uint *)PTR_DAT_04bc46c0;
    pcVar19 = PTR_DAT_04bc4620;
    puVar20 = (undefined8 *)PTR_DAT_04bc4628;
    do {
      uVar2 = uVar8 & 0xffff;
      uVar8 = uVar2 - *(ushort *)(lVar17 + 0x7f0);
      if (((uVar8 < *(uint *)(lVar17 + 2000)) &&
          (puVar10 = *(uint **)(*(long *)(lVar17 + 0x7d8) + (long)(int)uVar8 * 8),
          puVar10 != (uint *)0x0)) || (puVar10 = (uint *)puVar5, (*pbVar7 & 1) != 0)) {
        uVar8 = 0;
        if (*puVar10 != 0) goto LAB_02aefe58;
      }
      else {
        iVar6 = __cxa_guard_acquire();
        if (iVar6 == 0) {
          pbVar7 = PTR_DAT_04bc4840;
        }
        else {
          *(undefined4 *)puVar5 = 0;
          pbVar7 = PTR_DAT_04bc4840;
          __cxa_guard_release(PTR_DAT_04bc4840);
        }
        puVar18 = (uint *)PTR_DAT_04bc46c0;
        pcVar19 = PTR_DAT_04bc4620;
        puVar20 = (undefined8 *)PTR_DAT_04bc4628;
        if (*(int *)puVar5 == 0) {
          uVar8 = 0;
        }
        else {
LAB_02aefe58:
          cVar12 = *pcVar19;
          do {
            if (cVar12 != '\0') {
              uVar9 = *(uint *)(puVar20 + 3);
              if ((int)uVar9 < 0) {
                if (uVar9 == 0xffffffff) goto LAB_02aefe88;
LAB_02aefefc:
                uVar8 = 0;
              }
              else {
                uVar8 = 0;
                if (((ushort *)((ulong)uVar9 + (long)puVar10) != (ushort *)0x0) &&
                   (uVar13 = *(ushort *)((ulong)uVar9 + (long)puVar10), uVar8 = (uint)uVar13,
                   0x1ff < uVar13)) {
                  return;
                }
              }
              goto LAB_02aeff20;
            }
            cVar12 = '\x01';
            *puVar20 = 0xffffffffffffffff;
            puVar20[1] = 0xffffffffffffffff;
            *pcVar19 = '\x01';
            *(undefined4 *)(puVar20 + 4) = 0xffffffff;
            puVar20[2] = 0xffffffffffffffff;
            puVar20[3] = 0xffffffffffffffff;
LAB_02aefe88:
            puVar15 = (uint *)(ulong)*puVar10;
            uVar8 = 0;
            if ((*puVar10 == 0) || (puVar10 == puVar15)) goto LAB_02aeff20;
            lVar3 = 0xc;
            if (*(char *)((long)puVar10 + (10 - (long)puVar15)) != '\0') {
              lVar3 = 0x1c;
            }
            lVar3 = (long)puVar10 + (lVar3 - (long)puVar15);
            if (lVar3 == 0) goto LAB_02aefefc;
            uVar11 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar15));
            *(undefined4 *)(puVar20 + 3) = 0xfffffffe;
            uVar8 = 0;
            if (uVar11 == 0) goto LAB_02aeff20;
            piVar14 = (int *)(lVar3 + 4);
            while (piVar14[-1] != 0x54706054) {
              piVar14 = piVar14 + 2;
              uVar11 = uVar11 - 1;
              if (uVar11 == 0) {
                uVar8 = 0;
                goto LAB_02aeff20;
              }
            }
            iVar6 = 0;
            if (*piVar14 != -1) {
              iVar6 = *piVar14;
            }
            *(int *)(puVar20 + 3) = iVar6;
          } while (*puVar10 != 0);
          uVar8 = 0;
        }
      }
LAB_02aeff20:
      uVar9 = *puVar10;
      uVar13 = 0;
      if ((uVar9 != 0) && (puVar10 != (uint *)(ulong)uVar9)) {
        puVar15 = (uint *)((long)puVar10 - (long)(ulong)uVar9);
        uVar13 = 0;
        if (*puVar15 != 0) {
          uVar9 = puVar15[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
            lVar3 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              lVar3 = 0x1c;
            }
            lVar3 = (long)puVar15 + lVar3 + (ulong)(ushort)puVar15[2] * 8;
            if (lVar3 != 0) {
              uVar4 = 0;
              if ((ulong)uVar9 != 0) {
                uVar4 = (uint)((ulong)((long)puVar10 - lVar3) / (ulong)uVar9);
              }
              if (*puVar15 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((uVar4 < *puVar18) &&
                 (uVar13 = *(ushort *)(*(long *)(puVar18 + 2) + (long)(int)uVar4 * 2), uVar13 < 7))
              goto LAB_02aeffa4;
            }
          }
          uVar13 = 0;
        }
      }
LAB_02aeffa4:
      if ((uVar8 < 0x200) && (uVar13 != uVar16)) {
        lVar3 = (ulong)(uVar8 >> 5) * 4;
        *(uint *)(param_1 + 0x10 + lVar3) =
             *(uint *)(param_1 + 0x10 + lVar3) & (1 << (ulong)(uVar8 & 0x1f) ^ 0xffffffffU);
      }
      uVar9 = uVar2;
      if (uVar2 <= *(ushort *)(lVar17 + 0x7f2)) {
        uVar9 = (uint)*(ushort *)(lVar17 + 0x7f2);
      }
      uVar8 = uVar2;
      do {
        while( true ) {
          if (uVar9 == uVar8) {
            uVar8 = uVar2 + 1;
            goto LAB_02aefe18;
          }
          uVar4 = (uVar8 + 1 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x7f0);
          if (uVar4 < *(uint *)(lVar17 + 2000)) break;
          uVar8 = uVar8 + 1;
        }
        uVar8 = uVar8 + 1;
      } while (*(long *)(*(long *)(lVar17 + 0x7d8) + (long)(int)uVar4 * 8) == 0);
LAB_02aefe18:
    } while ((uint)uVar1 != (uVar8 & 0xffff));
  }
  return;
}

