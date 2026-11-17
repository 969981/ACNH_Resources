
/* WARNING: Removing unreachable block (ram,0x02aef7d0) */

void FUN_02aef540(long param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  char cVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  int *piVar15;
  long lVar16;
  uint *puVar17;
  char *pcVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  
  puVar6 = PTR_DAT_04bc4838;
  lVar16 = *(long *)PTR_DAT_04bb5008;
  uVar8 = (uint)*(ushort *)(lVar16 + 0x7f0);
  uVar1 = *(short *)(lVar16 + 0x7f2) + 1;
  if (*(ushort *)(lVar16 + 0x7f0) != uVar1) {
    puVar17 = (uint *)PTR_DAT_04bc4838;
    pcVar18 = PTR_DAT_04bc4620;
    puVar19 = (undefined8 *)PTR_DAT_04bc4628;
    pbVar20 = PTR_DAT_04bc4840;
    do {
      uVar2 = uVar8 & 0xffff;
      uVar8 = uVar2 - *(ushort *)(lVar16 + 0x7f0);
      if (((uVar8 < *(uint *)(lVar16 + 2000)) &&
          (puVar10 = *(uint **)(*(long *)(lVar16 + 0x7d8) + (long)(int)uVar8 * 8),
          puVar10 != (uint *)0x0)) || (puVar10 = puVar17, (*pbVar20 & 1) != 0)) {
        if (*puVar10 != 0) goto LAB_02aef614;
LAB_02aef760:
        uVar13 = 0;
      }
      else {
        iVar7 = __cxa_guard_acquire(pbVar20);
        if (iVar7 == 0) {
          puVar10 = (uint *)PTR_DAT_04bc4838;
          pbVar20 = PTR_DAT_04bc4840;
        }
        else {
          *(undefined4 *)puVar6 = 0;
          pbVar20 = PTR_DAT_04bc4840;
          __cxa_guard_release(PTR_DAT_04bc4840);
          puVar10 = (uint *)puVar6;
        }
        puVar17 = puVar10;
        pcVar18 = PTR_DAT_04bc4620;
        puVar19 = (undefined8 *)PTR_DAT_04bc4628;
        if (*puVar10 == 0) goto LAB_02aef760;
LAB_02aef614:
        cVar11 = *pcVar18;
        do {
          if (cVar11 == '\0') {
            cVar11 = '\x01';
            *puVar19 = 0xffffffffffffffff;
            puVar19[1] = 0xffffffffffffffff;
            *pcVar18 = '\x01';
            *(undefined4 *)(puVar19 + 4) = 0xffffffff;
            puVar19[2] = 0xffffffffffffffff;
            puVar19[3] = 0xffffffffffffffff;
          }
          else {
            uVar8 = *(uint *)(puVar19 + 3);
            if (-1 < (int)uVar8) {
              if ((ushort *)((ulong)uVar8 + (long)puVar10) == (ushort *)0x0) goto LAB_02aef760;
              uVar3 = *(ushort *)((ulong)uVar8 + (long)puVar10);
              uVar13 = (ulong)uVar3;
              if (0x1ff < uVar3) {
                return;
              }
              goto LAB_02aef764;
            }
            if (uVar8 != 0xffffffff) goto LAB_02aef760;
          }
          puVar14 = (uint *)(ulong)*puVar10;
          uVar13 = 0;
          if ((*puVar10 == 0) || (puVar10 == puVar14)) goto LAB_02aef764;
          lVar5 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar14)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar10 + (lVar5 - (long)puVar14);
          if (lVar5 == 0) goto LAB_02aef760;
          uVar12 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar14));
          *(undefined4 *)(puVar19 + 3) = 0xfffffffe;
          uVar13 = 0;
          if (uVar12 == 0) goto LAB_02aef764;
          piVar15 = (int *)(lVar5 + 4);
          while (piVar15[-1] != 0x54706054) {
            piVar15 = piVar15 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              uVar13 = 0;
              goto LAB_02aef764;
            }
          }
          iVar7 = 0;
          if (*piVar15 != -1) {
            iVar7 = *piVar15;
          }
          *(int *)(puVar19 + 3) = iVar7;
        } while (*puVar10 != 0);
        uVar13 = 0;
      }
LAB_02aef764:
      lVar5 = (uVar13 >> 5) * 4;
      *(uint *)(param_1 + 0x10 + lVar5) =
           1 << (ulong)((uint)uVar13 & 0x1f) | *(uint *)(param_1 + 0x10 + lVar5);
      uVar9 = uVar2;
      if (uVar2 <= *(ushort *)(lVar16 + 0x7f2)) {
        uVar9 = (uint)*(ushort *)(lVar16 + 0x7f2);
      }
      uVar8 = uVar2;
      do {
        while( true ) {
          if (uVar9 == uVar8) {
            uVar8 = uVar2 + 1;
            goto LAB_02aef5d4;
          }
          uVar4 = (uVar8 + 1 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x7f0);
          if (uVar4 < *(uint *)(lVar16 + 2000)) break;
          uVar8 = uVar8 + 1;
        }
        uVar8 = uVar8 + 1;
      } while (*(long *)(*(long *)(lVar16 + 0x7d8) + (long)(int)uVar4 * 8) == 0);
LAB_02aef5d4:
    } while ((uint)uVar1 != (uVar8 & 0xffff));
  }
  return;
}

