
/* WARNING: Removing unreachable block (ram,0x02af03f4) */

void FUN_02af00d0(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  long lVar11;
  char cVar12;
  uint *puVar13;
  ulong uVar14;
  int *piVar15;
  byte *pbVar16;
  uint *puVar17;
  char *pcVar18;
  long lVar19;
  undefined *local_70;
  long local_68;
  
  puVar6 = PTR_DAT_04bc4628;
  puVar5 = PTR_DAT_04bb5008;
  lVar19 = *(long *)PTR_DAT_04bb5008;
  uVar8 = (uint)*(ushort *)(lVar19 + 0x7f0);
  uVar1 = *(short *)(lVar19 + 0x7f2) + 1;
  if (*(ushort *)(lVar19 + 0x7f0) != uVar1) {
    puVar2 = PTR_DAT_04bc4888 + 0x10;
    pbVar16 = PTR_DAT_04bc4840;
    puVar17 = (uint *)PTR_DAT_04bc4838;
    pcVar18 = PTR_DAT_04bc4620;
    do {
      uVar3 = uVar8 & 0xffff;
      uVar8 = uVar3 - *(ushort *)(lVar19 + 0x7f0);
      if (((uVar8 < *(uint *)(lVar19 + 2000)) &&
          (puVar10 = *(uint **)(*(long *)(lVar19 + 0x7d8) + (long)(int)uVar8 * 8),
          puVar10 != (uint *)0x0)) || (puVar10 = puVar17, (*pbVar16 & 1) != 0)) {
        uVar8 = *puVar10;
      }
      else {
        iVar7 = __cxa_guard_acquire(pbVar16);
        puVar10 = (uint *)PTR_DAT_04bc4838;
        if (iVar7 == 0) {
          pbVar16 = PTR_DAT_04bc4840;
        }
        else {
          *(undefined4 *)PTR_DAT_04bc4838 = 0;
          pbVar16 = PTR_DAT_04bc4840;
          __cxa_guard_release(PTR_DAT_04bc4840);
        }
        uVar8 = *puVar10;
        puVar17 = puVar10;
        pcVar18 = PTR_DAT_04bc4620;
      }
      if (uVar8 != 0) {
        cVar12 = *pcVar18;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *pcVar18 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          }
          else {
            uVar8 = *(uint *)(puVar6 + 0x18);
            if (-1 < (int)uVar8) {
              if ((ushort *)((ulong)uVar8 + (long)puVar10) != (ushort *)0x0) {
                uVar8 = (uint)*(ushort *)((ulong)uVar8 + (long)puVar10);
                goto LAB_02af02f4;
              }
              break;
            }
            if (uVar8 != 0xffffffff) break;
          }
          puVar13 = (uint *)(ulong)*puVar10;
          uVar8 = 0;
          if ((*puVar10 == 0) || (puVar10 == puVar13)) goto LAB_02af02f4;
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar13)) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + (lVar11 - (long)puVar13);
          if (lVar11 == 0) break;
          uVar14 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar13));
          *(undefined4 *)(puVar6 + 0x18) = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar15 = (int *)(lVar11 + 4);
          while (piVar15[-1] != 0x54706054) {
            piVar15 = piVar15 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_02af02f0;
          }
          iVar7 = 0;
          if (*piVar15 != -1) {
            iVar7 = *piVar15;
          }
          *(int *)(puVar6 + 0x18) = iVar7;
          if (*puVar10 == 0) break;
        } while( true );
      }
LAB_02af02f0:
      uVar8 = 0;
LAB_02af02f4:
      lVar11 = *(long *)puVar5;
      uVar9 = uVar8 - *(ushort *)(lVar11 + 0x7f0);
      local_70 = puVar2;
      if (((uVar9 < *(uint *)(lVar11 + 2000)) &&
          (local_68 = *(long *)(*(long *)(lVar11 + 0x7d8) + (long)(int)uVar9 * 8), local_68 != 0))
         && (iVar7 = FUN_02af77b0(&local_70), pbVar16 = PTR_DAT_04bc4840,
            puVar17 = (uint *)PTR_DAT_04bc4838, iVar7 == 1)) {
        if ((uVar8 < 0xd) && ((1 << (ulong)(uVar8 & 0x1f) & 0x1070U) != 0)) goto LAB_02af0388;
      }
      else {
        if (0x1ff < uVar8) {
          return;
        }
LAB_02af0388:
        lVar11 = (ulong)(uVar8 >> 5) * 4;
        *(uint *)(param_1 + 0x10 + lVar11) =
             *(uint *)(param_1 + 0x10 + lVar11) & (1 << (ulong)(uVar8 & 0x1f) ^ 0xffffffffU);
      }
      uVar9 = uVar3;
      if (uVar3 <= *(ushort *)(lVar19 + 0x7f2)) {
        uVar9 = (uint)*(ushort *)(lVar19 + 0x7f2);
      }
      uVar8 = uVar3;
      do {
        while( true ) {
          if (uVar9 == uVar8) {
            uVar8 = uVar3 + 1;
            goto LAB_02af0184;
          }
          uVar4 = (uVar8 + 1 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x7f0);
          if (uVar4 < *(uint *)(lVar19 + 2000)) break;
          uVar8 = uVar8 + 1;
        }
        uVar8 = uVar8 + 1;
      } while (*(long *)(*(long *)(lVar19 + 0x7d8) + (long)(int)uVar4 * 8) == 0);
LAB_02af0184:
    } while ((uint)uVar1 != (uVar8 & 0xffff));
  }
  return;
}

