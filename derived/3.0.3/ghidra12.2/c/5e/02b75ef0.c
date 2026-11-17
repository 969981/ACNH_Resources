
/* WARNING: Removing unreachable block (ram,0x02b76330) */

void FUN_02b75ef0(long param_1,uint param_2)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int *piVar10;
  short sVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  short sVar15;
  uint *puVar16;
  char *pcVar17;
  char cVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  uint *puVar21;
  ulong uVar22;
  
  puVar8 = PTR_DAT_04bc4698;
  puVar7 = PTR_DAT_04bc4690;
  lVar14 = *(long *)PTR_DAT_04bb5008;
  if (param_2 != 0) {
    if ((int)*(uint *)(lVar14 + 0x1e0) < 1) {
      if ((((*(long *)(lVar14 + 0xd0) == 0) ||
           (puVar16 = *(uint **)(*(long *)(lVar14 + 0xd0) + 8), puVar16 == (uint *)0x0)) ||
          ((param_2 < *(uint *)(lVar14 + 0xe8) &&
           (*(char *)(*(long *)(lVar14 + 0xf0) + (long)(int)param_2) == '\0')))) ||
         (((*puVar16 <= param_2 || (puVar16[1] == 0)) || ((ushort)puVar16[2] == 0))))
      goto LAB_02b76098;
      iVar9 = 0xc;
      if (*(char *)((long)puVar16 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      puVar16 = (uint *)((ulong)(puVar16[1] * param_2 + (uint)(ushort)puVar16[2] * 8 + iVar9) +
                        (long)puVar16);
    }
    else {
      if (*(uint *)(lVar14 + 0x1e0) <= param_2) goto LAB_02b76098;
      if (*(uint *)(lVar14 + 0x1d0) <= param_2) {
        param_2 = 0;
      }
      puVar16 = *(uint **)(*(long *)(lVar14 + 0x1d8) + (ulong)param_2 * 8);
    }
    if ((puVar16 != (uint *)0x0) && (uVar12 = *puVar16, uVar12 != 0)) {
      cVar18 = *PTR_DAT_04bc4690;
      do {
        if (cVar18 == '\0') {
          cVar18 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined4 *)(puVar8 + 0x18) = 0xffffffff;
          uVar12 = *puVar16;
        }
        else {
          uVar3 = *(uint *)(puVar8 + 0x18);
          if (-1 < (int)uVar3) {
            sVar15 = 0;
            if ((short *)((ulong)uVar3 + (long)puVar16) != (short *)0x0) {
              sVar15 = *(short *)((ulong)uVar3 + (long)puVar16);
            }
            goto LAB_02b7609c;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar21 = (uint *)(ulong)uVar12;
        sVar15 = 0;
        if ((puVar21 == (uint *)0x0) || (sVar15 = 0, puVar16 == puVar21)) goto LAB_02b7609c;
        lVar6 = 0xc;
        if (*(char *)((long)puVar16 + (10 - (long)puVar21)) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar16 + (lVar6 - (long)puVar21);
        if (lVar6 == 0) break;
        uVar22 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar21));
        *(undefined4 *)(puVar8 + 0x18) = 0xfffffffe;
        sVar15 = 0;
        if (uVar22 == 0) goto LAB_02b7609c;
        piVar10 = (int *)(lVar6 + 4);
        while (piVar10[-1] != 0x54706054) {
          piVar10 = piVar10 + 2;
          uVar22 = uVar22 - 1;
          if (uVar22 == 0) {
            sVar15 = 0;
            goto LAB_02b7609c;
          }
        }
        sVar15 = 0;
        iVar9 = 0;
        if (*piVar10 != -1) {
          iVar9 = *piVar10;
        }
        *(int *)(puVar8 + 0x18) = iVar9;
        uVar12 = *puVar16;
        if (uVar12 == 0) goto LAB_02b7609c;
      } while( true );
    }
  }
LAB_02b76098:
  sVar15 = 0;
LAB_02b7609c:
  puVar7 = PTR_DAT_04bc4b18;
  uVar1 = *(short *)(lVar14 + 0x1df2) + 1;
  uVar12 = (uint)*(ushort *)(lVar14 + 0x1df0);
  if (*(ushort *)(lVar14 + 0x1df0) != uVar1) {
    pcVar17 = PTR_DAT_04bc4680;
    puVar19 = (undefined8 *)PTR_DAT_04bc4688;
    pbVar20 = PTR_DAT_04bc4b20;
    do {
      uVar3 = uVar12 & 0xffff;
      uVar12 = uVar3 - *(ushort *)(lVar14 + 0x1df0);
      if (((uVar12 < *(uint *)(lVar14 + 0x1dd0)) &&
          (puVar16 = *(uint **)(*(long *)(lVar14 + 0x1dd8) + (long)(int)uVar12 * 8),
          puVar16 != (uint *)0x0)) || (puVar16 = (uint *)puVar7, (*pbVar20 & 1) != 0)) {
        uVar12 = 0;
        if (*puVar16 != 0) goto LAB_02b76164;
      }
      else {
        iVar9 = __cxa_guard_acquire(pbVar20);
        if (iVar9 == 0) {
          pbVar20 = PTR_DAT_04bc4b20;
        }
        else {
          *(undefined4 *)puVar7 = 0;
          pbVar20 = PTR_DAT_04bc4b20;
          __cxa_guard_release(PTR_DAT_04bc4b20);
        }
        pcVar17 = PTR_DAT_04bc4680;
        puVar19 = (undefined8 *)PTR_DAT_04bc4688;
        if (*(int *)puVar7 == 0) {
          uVar12 = 0;
        }
        else {
LAB_02b76164:
          cVar18 = *pcVar17;
          do {
            if (cVar18 != '\0') {
              uVar13 = *(uint *)(puVar19 + 1);
              if (-1 < (int)uVar13) {
                uVar12 = 0;
                if (((ushort *)((ulong)uVar13 + (long)puVar16) != (ushort *)0x0) &&
                   (uVar4 = *(ushort *)((ulong)uVar13 + (long)puVar16), uVar12 = (uint)uVar4,
                   0x1ff < uVar4)) {
                  return;
                }
                goto LAB_02b76230;
              }
              if (uVar13 == 0xffffffff) goto LAB_02b76190;
LAB_02b7620c:
              uVar12 = 0;
              uVar13 = *puVar16;
              uVar5 = 0;
              if (uVar13 == 0) goto LAB_02b762b0;
LAB_02b76238:
              uVar12 = uVar5;
              uVar22 = (ulong)*(uint *)((long)puVar19 + 4);
              goto LAB_02b7623c;
            }
            cVar18 = '\x01';
            *puVar19 = 0xffffffffffffffff;
            puVar19[1] = 0xffffffffffffffff;
            *pcVar17 = '\x01';
            puVar19[2] = 0xffffffffffffffff;
LAB_02b76190:
            puVar21 = (uint *)(ulong)*puVar16;
            uVar12 = 0;
            if ((*puVar16 == 0) || (puVar16 == puVar21)) {
LAB_02b76230:
              uVar13 = *puVar16;
              uVar5 = uVar12;
              if (uVar13 != 0) goto LAB_02b76238;
              goto LAB_02b762b0;
            }
            lVar6 = 0xc;
            if (*(char *)((long)puVar16 + (10 - (long)puVar21)) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar16 + (lVar6 - (long)puVar21);
            if (lVar6 == 0) goto LAB_02b7620c;
            uVar22 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar21));
            *(undefined4 *)(puVar19 + 1) = 0xfffffffe;
            uVar12 = 0;
            if (uVar22 == 0) goto LAB_02b76230;
            piVar10 = (int *)(lVar6 + 4);
            while (piVar10[-1] != 0x54706054) {
              piVar10 = piVar10 + 2;
              uVar22 = uVar22 - 1;
              if (uVar22 == 0) {
                uVar12 = 0;
                goto LAB_02b76230;
              }
            }
            iVar9 = 0;
            if (*piVar10 != -1) {
              iVar9 = *piVar10;
            }
            *(int *)(puVar19 + 1) = iVar9;
          } while (*puVar16 != 0);
          uVar12 = 0;
        }
      }
LAB_02b762b0:
      sVar11 = 0;
LAB_02b762b4:
      if ((uVar12 < 0x200) && (sVar11 != sVar15)) {
        lVar6 = (ulong)(uVar12 >> 5) * 4;
        *(uint *)(param_1 + 0xe0 + lVar6) =
             *(uint *)(param_1 + 0xe0 + lVar6) & (1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU);
      }
      uVar13 = uVar3;
      if (uVar3 <= *(ushort *)(lVar14 + 0x1df2)) {
        uVar13 = (uint)*(ushort *)(lVar14 + 0x1df2);
      }
      uVar12 = uVar3;
      do {
        while( true ) {
          if (uVar13 == uVar12) {
            uVar12 = uVar3 + 1;
            goto LAB_02b76124;
          }
          uVar5 = (uVar12 + 1 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1df0);
          if (uVar5 < *(uint *)(lVar14 + 0x1dd0)) break;
          uVar12 = uVar12 + 1;
        }
        uVar12 = uVar12 + 1;
      } while (*(long *)(*(long *)(lVar14 + 0x1dd8) + (long)(int)uVar5 * 8) == 0);
LAB_02b76124:
    } while ((uint)uVar1 != (uVar12 & 0xffff));
  }
  return;
LAB_02b7623c:
  if (-1 < (int)uVar22) {
    sVar11 = 0;
    if ((short *)(uVar22 + (long)puVar16) != (short *)0x0) {
      sVar11 = *(short *)(uVar22 + (long)puVar16);
    }
    goto LAB_02b762b4;
  }
  if ((uVar22 != 0xffffffff) || (lVar6 = (long)puVar16 - (ulong)uVar13, lVar6 == 0))
  goto LAB_02b762b0;
  lVar2 = 0xc;
  if (*(char *)(lVar6 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar6 == 0) goto LAB_02b762b0;
  uVar22 = (ulong)*(ushort *)(lVar6 + 8);
  *(undefined4 *)((long)puVar19 + 4) = 0xfffffffe;
  if (uVar22 == 0) goto LAB_02b762b0;
  puVar21 = (uint *)(lVar2 + lVar6 + 4);
  while (puVar21[-1] != 0xc1577d) {
    puVar21 = puVar21 + 2;
    uVar22 = uVar22 - 1;
    if (uVar22 == 0) goto LAB_02b762b0;
  }
  uVar22 = 0;
  if (*puVar21 != 0xffffffff) {
    uVar22 = (ulong)*puVar21;
  }
  *(int *)((long)puVar19 + 4) = (int)uVar22;
  uVar13 = *puVar16;
  if (uVar13 == 0) goto LAB_02b762b0;
  goto LAB_02b7623c;
}

