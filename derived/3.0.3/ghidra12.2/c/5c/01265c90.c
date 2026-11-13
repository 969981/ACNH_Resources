
/* WARNING: Removing unreachable block (ram,0x01265fb0) */

undefined2 FUN_01265c90(uint *param_1)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  char cVar13;
  ushort uVar14;
  undefined2 uVar15;
  long lVar16;
  ulong uVar17;
  char *pcVar18;
  undefined8 *puVar19;
  ulong uVar20;
  uint *puVar21;
  int *piVar22;
  undefined2 local_70 [32];
  
  puVar6 = PTR_DAT_04bbbd80;
  puVar5 = PTR_DAT_04bbbd78;
  lVar16 = *(long *)PTR_DAT_04bb27a8;
  uVar10 = (uint)*(ushort *)(lVar16 + 0xb90);
  uVar1 = *(short *)(lVar16 + 0xb92) + 1;
  if (*(ushort *)(lVar16 + 0xb90) != uVar1) {
    uVar20 = 0;
    puVar8 = (uint *)PTR_DAT_04bbbd70;
    puVar9 = (uint *)PTR_DAT_04bbbd58;
    pcVar18 = PTR_DAT_04bbbd60;
    puVar19 = (undefined8 *)PTR_DAT_04bbbd68;
    do {
      uVar2 = uVar10 & 0xffff;
      uVar10 = uVar2 - *(ushort *)(lVar16 + 0xb90);
      if (((*(uint *)(lVar16 + 0xb70) <= uVar10) ||
          (puVar12 = *(uint **)(*(long *)(lVar16 + 0xb78) + (long)(int)uVar10 * 8),
          puVar12 == (uint *)0x0)) && (puVar12 = (uint *)puVar5, (*puVar6 & 1) == 0)) {
        iVar7 = __cxa_guard_acquire(puVar6);
        if (iVar7 != 0) {
          *(undefined4 *)puVar5 = 0;
          __cxa_guard_release(puVar6);
        }
        puVar8 = (uint *)PTR_DAT_04bbbd70;
        puVar9 = (uint *)PTR_DAT_04bbbd58;
        pcVar18 = PTR_DAT_04bbbd60;
        puVar19 = (undefined8 *)PTR_DAT_04bbbd68;
      }
      uVar10 = *puVar12;
      if (uVar10 == 0 || puVar12 == (uint *)(ulong)uVar10) {
LAB_01265d6c:
        uVar14 = 0;
      }
      else {
        puVar21 = (uint *)((long)puVar12 - (long)(ulong)uVar10);
        uVar14 = 0;
        if (*puVar21 != 0) {
          uVar10 = puVar21[1];
          if ((uVar10 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
            lVar3 = 0xc;
            if (*(char *)((long)puVar21 + 10) != '\0') {
              lVar3 = 0x1c;
            }
            lVar3 = (long)puVar21 + lVar3 + (ulong)(ushort)puVar21[2] * 8;
            if (lVar3 != 0) {
              uVar11 = 0;
              if ((ulong)uVar10 != 0) {
                uVar11 = (uint)((ulong)((long)puVar12 - lVar3) / (ulong)uVar10);
              }
              if (*puVar21 <= uVar11) {
                uVar11 = 0xffffffff;
              }
              if ((uVar11 < *puVar9) &&
                 (uVar14 = *(ushort *)(*(long *)(puVar9 + 2) + (long)(int)uVar11 * 2), uVar14 < 0x20
                 )) goto LAB_01265d70;
            }
          }
          goto LAB_01265d6c;
        }
      }
LAB_01265d70:
      if (uVar14 == 0x18) {
        uVar10 = *puVar12;
        if (uVar10 == 0 || puVar12 == (uint *)(ulong)uVar10) {
LAB_01265d90:
          uVar10 = 0;
        }
        else {
          puVar21 = (uint *)((long)puVar12 - (long)(ulong)uVar10);
          uVar10 = 0;
          if (*puVar21 != 0) {
            uVar10 = puVar21[1];
            if ((uVar10 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
              lVar3 = 0xc;
              if (*(char *)((long)puVar21 + 10) != '\0') {
                lVar3 = 0x1c;
              }
              lVar3 = (long)puVar21 + lVar3 + (ulong)(ushort)puVar21[2] * 8;
              if (lVar3 != 0) {
                uVar11 = 0;
                if ((ulong)uVar10 != 0) {
                  uVar11 = (uint)((ulong)((long)puVar12 - lVar3) / (ulong)uVar10);
                }
                if (*puVar21 <= uVar11) {
                  uVar11 = 0xffffffff;
                }
                if ((uVar11 < *puVar8) &&
                   (uVar10 = (uint)*(ushort *)(*(long *)(puVar8 + 2) + (long)(int)uVar11 * 2),
                   uVar10 < 0x18)) goto LAB_01265d94;
              }
            }
            goto LAB_01265d90;
          }
        }
LAB_01265d94:
        if (uVar10 == *param_1) {
          if (0x1f < uVar20) goto LAB_01266050;
          if (*puVar12 == 0) {
LAB_01265f48:
            uVar15 = 0;
          }
          else {
            cVar13 = *pcVar18;
            do {
              if (cVar13 == '\0') {
                cVar13 = '\x01';
                *puVar19 = 0xffffffffffffffff;
                puVar19[1] = 0xffffffffffffffff;
                *pcVar18 = '\x01';
              }
              else {
                uVar10 = *(uint *)(puVar19 + 1);
                if (-1 < (int)uVar10) {
                  if ((undefined2 *)((ulong)uVar10 + (long)puVar12) == (undefined2 *)0x0)
                  goto LAB_01265f48;
                  uVar15 = *(undefined2 *)((ulong)uVar10 + (long)puVar12);
                  goto LAB_01265f4c;
                }
                if (uVar10 != 0xffffffff) goto LAB_01265f48;
              }
              puVar21 = (uint *)(ulong)*puVar12;
              uVar15 = 0;
              if ((*puVar12 == 0) || (puVar12 == puVar21)) goto LAB_01265f4c;
              lVar3 = 0xc;
              if (*(char *)((long)puVar12 + (10 - (long)puVar21)) != '\0') {
                lVar3 = 0x1c;
              }
              lVar3 = (long)puVar12 + (lVar3 - (long)puVar21);
              if (lVar3 == 0) goto LAB_01265f48;
              uVar17 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar21));
              *(undefined4 *)(puVar19 + 1) = 0xfffffffe;
              uVar15 = 0;
              if (uVar17 == 0) goto LAB_01265f4c;
              piVar22 = (int *)(lVar3 + 4);
              while (piVar22[-1] != 0x54706054) {
                piVar22 = piVar22 + 2;
                uVar17 = uVar17 - 1;
                if (uVar17 == 0) {
                  uVar15 = 0;
                  goto LAB_01265f4c;
                }
              }
              iVar7 = 0;
              if (*piVar22 != -1) {
                iVar7 = *piVar22;
              }
              *(int *)(puVar19 + 1) = iVar7;
            } while (*puVar12 != 0);
            uVar15 = 0;
          }
LAB_01265f4c:
          local_70[uVar20] = uVar15;
          uVar20 = uVar20 + 1;
        }
      }
      uVar11 = uVar2;
      if (uVar2 <= *(ushort *)(lVar16 + 0xb92)) {
        uVar11 = (uint)*(ushort *)(lVar16 + 0xb92);
      }
      uVar10 = uVar2;
      do {
        while( true ) {
          if (uVar11 == uVar10) {
            uVar10 = uVar2 + 1;
            goto LAB_01265d24;
          }
          uVar4 = (uVar10 + 1 & 0xffff) - (uint)*(ushort *)(lVar16 + 0xb90);
          if (uVar4 < *(uint *)(lVar16 + 0xb70)) break;
          uVar10 = uVar10 + 1;
        }
        uVar10 = uVar10 + 1;
      } while (*(long *)(*(long *)(lVar16 + 0xb78) + (long)(int)uVar4 * 8) == 0);
LAB_01265d24:
    } while ((uint)uVar1 != (uVar10 & 0xffff));
    if (uVar20 != 0) {
LAB_01266050:
      uVar10 = nn::os::GetSystemTick();
      uVar2 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
      uVar10 = uVar2 ^ uVar2 * 0x800;
      uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
      uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
      uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
      uVar20 = (uVar10 >> 8 ^ uVar2 >> 0x13 ^ uVar10 ^ uVar2) * uVar20;
      uVar17 = uVar20 >> 0x20;
      if (uVar20 >> 0x25 != 0) {
        uVar17 = 0;
      }
      return local_70[uVar17];
    }
  }
  return 0;
}

