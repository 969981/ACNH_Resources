
/* WARNING: Removing unreachable block (ram,0x02a7e9f0) */

void FUN_02a7e750(long param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  byte *pbVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  char cVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  int *piVar17;
  long lVar18;
  char *pcVar19;
  undefined8 *puVar20;
  
  puVar6 = PTR_DAT_04bc4598;
  lVar18 = *(long *)PTR_DAT_04bb5008;
  uVar10 = (uint)*(ushort *)(lVar18 + 0xff0);
  uVar1 = *(short *)(lVar18 + 0xff2) + 1;
  if (*(ushort *)(lVar18 + 0xff0) != uVar1) {
    pbVar8 = PTR_DAT_04bc45a0;
    puVar9 = (uint *)PTR_DAT_04bc4590;
    pcVar19 = PTR_DAT_04bc4578;
    puVar20 = (undefined8 *)PTR_DAT_04bc4580;
    do {
      uVar2 = uVar10 & 0xffff;
      uVar10 = uVar2 - *(ushort *)(lVar18 + 0xff0);
      if (((*(uint *)(lVar18 + 0xfd0) <= uVar10) ||
          (puVar12 = *(uint **)(*(long *)(lVar18 + 0xfd8) + (long)(int)uVar10 * 8),
          puVar12 == (uint *)0x0)) && (puVar12 = (uint *)puVar6, (*pbVar8 & 1) == 0)) {
        iVar7 = __cxa_guard_acquire();
        if (iVar7 == 0) {
          pbVar8 = PTR_DAT_04bc45a0;
        }
        else {
          *(undefined4 *)puVar6 = 0;
          pbVar8 = PTR_DAT_04bc45a0;
          __cxa_guard_release(PTR_DAT_04bc45a0);
        }
        puVar9 = (uint *)PTR_DAT_04bc4590;
        pcVar19 = PTR_DAT_04bc4578;
        puVar20 = (undefined8 *)PTR_DAT_04bc4580;
      }
      uVar10 = *puVar12;
      if (uVar10 == 0 || puVar12 == (uint *)(ulong)uVar10) {
LAB_02a7e830:
        uVar10 = 0;
      }
      else {
        puVar16 = (uint *)((long)puVar12 - (long)(ulong)uVar10);
        uVar10 = 0;
        if (*puVar16 != 0) {
          uVar10 = puVar16[1];
          if ((uVar10 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
            lVar5 = 0xc;
            if (*(char *)((long)puVar16 + 10) != '\0') {
              lVar5 = 0x1c;
            }
            lVar5 = (long)puVar16 + lVar5 + (ulong)(ushort)puVar16[2] * 8;
            if (lVar5 != 0) {
              uVar11 = 0;
              if ((ulong)uVar10 != 0) {
                uVar11 = (uint)((ulong)((long)puVar12 - lVar5) / (ulong)uVar10);
              }
              if (*puVar16 <= uVar11) {
                uVar11 = 0xffffffff;
              }
              if ((uVar11 < *puVar9) &&
                 (uVar10 = (uint)*(ushort *)(*(long *)(puVar9 + 2) + (long)(int)uVar11 * 2),
                 uVar10 < 6)) goto LAB_02a7e834;
            }
          }
          goto LAB_02a7e830;
        }
      }
LAB_02a7e834:
      if (uVar10 != param_2) {
        if (*puVar12 == 0) {
LAB_02a7e980:
          uVar15 = 0;
        }
        else {
          cVar13 = *pcVar19;
          do {
            if (cVar13 == '\0') {
              cVar13 = '\x01';
              *puVar20 = 0xffffffffffffffff;
              puVar20[1] = 0xffffffffffffffff;
              *pcVar19 = '\x01';
            }
            else {
              uVar10 = *(uint *)(puVar20 + 1);
              if (-1 < (int)uVar10) {
                if ((ushort *)((ulong)uVar10 + (long)puVar12) == (ushort *)0x0) goto LAB_02a7e980;
                uVar3 = *(ushort *)((ulong)uVar10 + (long)puVar12);
                uVar15 = (ulong)uVar3;
                if (uVar3 < 0x200) goto LAB_02a7e984;
                goto LAB_02a7e99c;
              }
              if (uVar10 != 0xffffffff) goto LAB_02a7e980;
            }
            puVar16 = (uint *)(ulong)*puVar12;
            uVar15 = 0;
            if ((*puVar12 == 0) || (puVar12 == puVar16)) goto LAB_02a7e984;
            lVar5 = 0xc;
            if (*(char *)((long)puVar12 + (10 - (long)puVar16)) != '\0') {
              lVar5 = 0x1c;
            }
            lVar5 = (long)puVar12 + (lVar5 - (long)puVar16);
            if (lVar5 == 0) goto LAB_02a7e980;
            uVar14 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar16));
            *(undefined4 *)(puVar20 + 1) = 0xfffffffe;
            uVar15 = 0;
            if (uVar14 == 0) goto LAB_02a7e984;
            piVar17 = (int *)(lVar5 + 4);
            while (piVar17[-1] != 0x54706054) {
              piVar17 = piVar17 + 2;
              uVar14 = uVar14 - 1;
              if (uVar14 == 0) {
                uVar15 = 0;
                goto LAB_02a7e984;
              }
            }
            iVar7 = 0;
            if (*piVar17 != -1) {
              iVar7 = *piVar17;
            }
            *(int *)(puVar20 + 1) = iVar7;
          } while (*puVar12 != 0);
          uVar15 = 0;
        }
LAB_02a7e984:
        lVar5 = (uVar15 >> 5) * 4;
        *(uint *)(param_1 + 8 + lVar5) =
             *(uint *)(param_1 + 8 + lVar5) & (1 << (ulong)((uint)uVar15 & 0x1f) ^ 0xffffffffU);
      }
LAB_02a7e99c:
      uVar11 = uVar2;
      if (uVar2 <= *(ushort *)(lVar18 + 0xff2)) {
        uVar11 = (uint)*(ushort *)(lVar18 + 0xff2);
      }
      uVar10 = uVar2;
      do {
        while( true ) {
          if (uVar11 == uVar10) {
            uVar10 = uVar2 + 1;
            goto LAB_02a7e7e8;
          }
          uVar4 = (uVar10 + 1 & 0xffff) - (uint)*(ushort *)(lVar18 + 0xff0);
          if (uVar4 < *(uint *)(lVar18 + 0xfd0)) break;
          uVar10 = uVar10 + 1;
        }
        uVar10 = uVar10 + 1;
      } while (*(long *)(*(long *)(lVar18 + 0xfd8) + (long)(int)uVar4 * 8) == 0);
LAB_02a7e7e8:
    } while ((uint)uVar1 != (uVar10 & 0xffff));
  }
  return;
}

