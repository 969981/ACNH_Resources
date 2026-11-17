
/* WARNING: Removing unreachable block (ram,0x02a7e744) */

void FUN_02a7e3d0(long param_1,short param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  char cVar10;
  short sVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  int *piVar15;
  long lVar16;
  uint *puVar17;
  char *pcVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  
  lVar16 = *(long *)PTR_DAT_04bb5008;
  uVar7 = (uint)*(ushort *)(lVar16 + 0xff0);
  uVar1 = *(short *)(lVar16 + 0xff2) + 1;
  if (*(ushort *)(lVar16 + 0xff0) != uVar1) {
    puVar17 = (uint *)PTR_DAT_04bc4598;
    pcVar18 = PTR_DAT_04bc4578;
    puVar19 = (undefined8 *)PTR_DAT_04bc4580;
    pbVar20 = PTR_DAT_04bc45a0;
    do {
      uVar2 = uVar7 & 0xffff;
      uVar7 = uVar2 - *(ushort *)(lVar16 + 0xff0);
      if (((uVar7 < *(uint *)(lVar16 + 0xfd0)) &&
          (puVar9 = *(uint **)(*(long *)(lVar16 + 0xfd8) + (long)(int)uVar7 * 8),
          puVar9 != (uint *)0x0)) || (puVar9 = puVar17, (*pbVar20 & 1) != 0)) {
        if (*puVar9 != 0) goto LAB_02a7e4a8;
LAB_02a7e600:
        sVar11 = 0;
      }
      else {
        iVar6 = __cxa_guard_acquire(pbVar20);
        puVar9 = (uint *)PTR_DAT_04bc4598;
        if (iVar6 == 0) {
          pbVar20 = PTR_DAT_04bc45a0;
        }
        else {
          *(undefined4 *)PTR_DAT_04bc4598 = 0;
          pbVar20 = PTR_DAT_04bc45a0;
          __cxa_guard_release(PTR_DAT_04bc45a0);
        }
        puVar17 = puVar9;
        pcVar18 = PTR_DAT_04bc4578;
        puVar19 = (undefined8 *)PTR_DAT_04bc4580;
        if (*puVar9 == 0) goto LAB_02a7e600;
LAB_02a7e4a8:
        cVar10 = *pcVar18;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *puVar19 = 0xffffffffffffffff;
            puVar19[1] = 0xffffffffffffffff;
            *pcVar18 = '\x01';
          }
          else {
            uVar7 = *(uint *)((long)puVar19 + 4);
            if (-1 < (int)uVar7) {
              if ((short *)((ulong)uVar7 + (long)puVar9) == (short *)0x0) goto LAB_02a7e600;
              sVar11 = *(short *)((ulong)uVar7 + (long)puVar9);
              goto LAB_02a7e604;
            }
            if (uVar7 != 0xffffffff) goto LAB_02a7e600;
          }
          puVar14 = (uint *)(ulong)*puVar9;
          sVar11 = 0;
          if ((*puVar9 == 0) || (puVar9 == puVar14)) goto LAB_02a7e604;
          lVar5 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar14)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar9 + (lVar5 - (long)puVar14);
          if (lVar5 == 0) goto LAB_02a7e600;
          uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar14));
          *(undefined4 *)((long)puVar19 + 4) = 0xfffffffe;
          sVar11 = 0;
          if (uVar13 == 0) goto LAB_02a7e604;
          piVar15 = (int *)(lVar5 + 4);
          while (piVar15[-1] != -0x11631973) {
            piVar15 = piVar15 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) {
              sVar11 = 0;
              goto LAB_02a7e604;
            }
          }
          iVar6 = 0;
          if (*piVar15 != -1) {
            iVar6 = *piVar15;
          }
          *(int *)((long)puVar19 + 4) = iVar6;
        } while (*puVar9 != 0);
        sVar11 = 0;
      }
LAB_02a7e604:
      if (sVar11 != param_2) {
        if (*puVar9 == 0) {
LAB_02a7e6d4:
          uVar13 = 0;
        }
        else {
          cVar10 = *pcVar18;
          do {
            if (cVar10 == '\0') {
              cVar10 = '\x01';
              *puVar19 = 0xffffffffffffffff;
              puVar19[1] = 0xffffffffffffffff;
              *pcVar18 = '\x01';
            }
            else {
              uVar7 = *(uint *)(puVar19 + 1);
              if (-1 < (int)uVar7) {
                if ((ushort *)((ulong)uVar7 + (long)puVar9) == (ushort *)0x0) goto LAB_02a7e6d4;
                uVar3 = *(ushort *)((ulong)uVar7 + (long)puVar9);
                uVar13 = (ulong)uVar3;
                if (0x1ff < uVar3) goto LAB_02a7e6f0;
                goto LAB_02a7e6d8;
              }
              if (uVar7 != 0xffffffff) goto LAB_02a7e6d4;
            }
            puVar14 = (uint *)(ulong)*puVar9;
            uVar13 = 0;
            if ((*puVar9 == 0) || (puVar9 == puVar14)) goto LAB_02a7e6d8;
            lVar5 = 0xc;
            if (*(char *)((long)puVar9 + (10 - (long)puVar14)) != '\0') {
              lVar5 = 0x1c;
            }
            lVar5 = (long)puVar9 + (lVar5 - (long)puVar14);
            if (lVar5 == 0) goto LAB_02a7e6d4;
            uVar12 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar14));
            *(undefined4 *)(puVar19 + 1) = 0xfffffffe;
            uVar13 = 0;
            if (uVar12 == 0) goto LAB_02a7e6d8;
            piVar15 = (int *)(lVar5 + 4);
            while (piVar15[-1] != 0x54706054) {
              piVar15 = piVar15 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) {
                uVar13 = 0;
                goto LAB_02a7e6d8;
              }
            }
            iVar6 = 0;
            if (*piVar15 != -1) {
              iVar6 = *piVar15;
            }
            *(int *)(puVar19 + 1) = iVar6;
          } while (*puVar9 != 0);
          uVar13 = 0;
        }
LAB_02a7e6d8:
        lVar5 = (uVar13 >> 5) * 4;
        *(uint *)(param_1 + 8 + lVar5) =
             *(uint *)(param_1 + 8 + lVar5) & (1 << (ulong)((uint)uVar13 & 0x1f) ^ 0xffffffffU);
      }
LAB_02a7e6f0:
      uVar8 = uVar2;
      if (uVar2 <= *(ushort *)(lVar16 + 0xff2)) {
        uVar8 = (uint)*(ushort *)(lVar16 + 0xff2);
      }
      uVar7 = uVar2;
      do {
        while( true ) {
          if (uVar8 == uVar7) {
            uVar7 = uVar2 + 1;
            goto LAB_02a7e468;
          }
          uVar4 = (uVar7 + 1 & 0xffff) - (uint)*(ushort *)(lVar16 + 0xff0);
          if (uVar4 < *(uint *)(lVar16 + 0xfd0)) break;
          uVar7 = uVar7 + 1;
        }
        uVar7 = uVar7 + 1;
      } while (*(long *)(*(long *)(lVar16 + 0xfd8) + (long)(int)uVar4 * 8) == 0);
LAB_02a7e468:
    } while ((uint)uVar1 != (uVar7 & 0xffff));
  }
  return;
}

