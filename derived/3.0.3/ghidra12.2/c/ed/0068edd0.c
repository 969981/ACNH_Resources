
undefined8 FUN_0068edd0(undefined4 *param_1,long *param_2,long *param_3,uint param_4,ulong param_5)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  char cVar6;
  ushort uVar7;
  ushort uVar8;
  undefined8 uVar9;
  long lVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  ushort *puVar17;
  uint uVar18;
  int *piVar19;
  uint *puVar20;
  undefined4 uVar21;
  char *pcVar22;
  ulong uVar23;
  ushort *puVar24;
  long *plVar25;
  ushort *puVar26;
  long lVar27;
  ushort uVar28;
  
  uVar16 = 1L << (param_5 & 0x3f);
  lVar10 = *(long *)(*param_3 +
                    (-(ulong)(param_4 >> 0x1f) & 0xfffffff000000000 | (ulong)param_4 << 4));
  uVar14 = *(ulong *)(lVar10 + (long)((int)param_5 >> 6) * 8);
  if ((uVar14 & uVar16) != 0) {
    return 1;
  }
  *(ulong *)(lVar10 + ((long)(param_5 << 0x20) >> 0x26) * 8) = uVar14 | uVar16;
  lVar27 = *(long *)(*param_2 + (long)(int)param_4 * 8);
  lVar10 = *(long *)(lVar27 + 0x38);
  uVar14 = (ulong)*(ushort *)(lVar10 + 0xc);
  piVar19 = (int *)(lVar10 + 8);
  puVar20 = (uint *)(piVar19 + uVar14 * 4);
  puVar11 = *(ushort **)(piVar19 + (long)(int)param_5 * 4 + 6) + 1;
  uVar28 = **(ushort **)(piVar19 + (long)(int)param_5 * 4 + 6);
  uVar12 = (uint)uVar28;
  uVar18 = *puVar20;
  if (*piVar19 < (int)*puVar20) {
    do {
      if ((uint)((int)uVar18 >> 3) < uVar12) {
        uVar16 = (ulong)(*(byte *)((long)puVar11 + (ulong)uVar28 + (long)~((int)uVar18 >> 3)) >>
                        ((ulong)uVar18 & 7)) & 1;
      }
      else {
        uVar16 = 0;
      }
      uVar14 = (ulong)*(ushort *)(lVar10 + 8 + uVar14 * 0x10 + uVar16 * 2 + 4);
      puVar20 = (uint *)(lVar10 + 8 + uVar14 * 0x10);
      bVar1 = (int)uVar18 < (int)*puVar20;
      uVar18 = *puVar20;
    } while (bVar1);
  }
  if (uVar12 != 0) {
    iVar15 = uVar12 + 1;
    pcVar22 = (char *)(*(long *)(puVar20 + 2) + 2);
    do {
      if ((char)*puVar11 == '\0' || (char)*puVar11 != *pcVar22) break;
      iVar15 = iVar15 + -1;
      puVar11 = (ushort *)((long)puVar11 + 1);
      pcVar22 = pcVar22 + 1;
    } while (1 < iVar15);
  }
  plVar2 = (long *)(*(long *)(lVar27 + 0x40) +
                   (((long)puVar20 + (-0x18 - lVar10)) * 0x10000000 >> 0x20) * 0x20);
  if ((short)plVar2[3] != 0) {
    uVar28 = 0;
    do {
      lVar10 = *(long *)(lVar27 + 0x30) + (ulong)*(ushort *)(*plVar2 + (ulong)uVar28 * 2) * 0x28;
      puVar11 = *(ushort **)(lVar10 + 0x18);
      puVar24 = *(ushort **)(lVar10 + 0x20);
      puVar17 = puVar11 + 1;
      uVar7 = *puVar11;
      uVar18 = (uint)uVar7;
      puVar11 = puVar24 + 1;
      uVar8 = *puVar24;
      uVar12 = (uint)uVar8;
      if (uVar7 != 0) {
        plVar3 = (long *)*param_2;
        plVar4 = (long *)param_2[1];
        plVar25 = plVar3;
        if (plVar3 != plVar4) {
          if (uVar7 != 0) {
            do {
              if ((uint)**(ushort **)(*plVar25 + 0x20) == (uint)uVar7) {
                puVar24 = *(ushort **)(*plVar25 + 0x20) + 1;
                puVar26 = puVar17;
                iVar15 = uVar7 + 1;
                while( true ) {
                  cVar6 = (char)*puVar26;
                  if (cVar6 == '\0' || cVar6 != (char)*puVar24) break;
                  iVar15 = iVar15 + -1;
                  puVar26 = (ushort *)((long)puVar26 + 1);
                  puVar24 = (ushort *)((long)puVar24 + 1);
                  if (iVar15 < 2) goto LAB_0068ef9c;
                }
                if (cVar6 == (char)*puVar24) goto LAB_0068ef9c;
              }
              plVar25 = plVar25 + 1;
              if (plVar25 == plVar4) goto LAB_0068f0e0;
            } while( true );
          }
          while (**(short **)(*plVar25 + 0x20) != 0) {
            plVar25 = plVar25 + 1;
            if (plVar25 == plVar4) goto LAB_0068f0e0;
          }
        }
LAB_0068ef9c:
        if (plVar25 != plVar4) {
          uVar14 = (ulong)((long)plVar25 - (long)plVar3) >> 3;
          lVar10 = *plVar25;
          uVar18 = (uint)uVar7;
          goto LAB_0068efb0;
        }
LAB_0068f0e0:
        if (param_1 == (undefined4 *)0x0) {
          return 0;
        }
        puVar11 = (ushort *)0x0;
        uVar12 = 0;
        uVar21 = 2;
LAB_0068f17c:
        uVar9 = 0;
        *param_1 = uVar21;
        *(ushort **)(param_1 + 2) = puVar17;
        param_1[4] = uVar18;
        goto LAB_0068f188;
      }
      uVar14 = (ulong)param_4;
      puVar17 = *(ushort **)(lVar27 + 0x20) + 1;
      uVar18 = (uint)**(ushort **)(lVar27 + 0x20);
      lVar10 = lVar27;
LAB_0068efb0:
      lVar10 = *(long *)(lVar10 + 0x38);
      uVar16 = (ulong)*(ushort *)(lVar10 + 0xc);
      puVar20 = (uint *)((int *)(lVar10 + 8) + uVar16 * 4);
      uVar13 = (uint)uVar8;
      uVar5 = *puVar20;
      if (*(int *)(lVar10 + 8) < (int)*puVar20) {
        do {
          if ((uint)((int)uVar5 >> 3) < uVar13) {
            uVar23 = (ulong)(*(byte *)((long)puVar11 + (long)(int)(~((int)uVar5 >> 3) + uVar13)) >>
                            ((ulong)uVar5 & 7)) & 1;
          }
          else {
            uVar23 = 0;
          }
          uVar16 = (ulong)*(ushort *)(lVar10 + 8 + uVar16 * 0x10 + uVar23 * 2 + 4);
          puVar20 = (uint *)(lVar10 + 8 + uVar16 * 0x10);
          bVar1 = (int)uVar5 < (int)*puVar20;
          uVar5 = *puVar20;
        } while (bVar1);
      }
      if (uVar8 != **(ushort **)(puVar20 + 2)) {
LAB_0068f170:
        if (param_1 == (undefined4 *)0x0) {
          return 0;
        }
        uVar21 = 3;
        goto LAB_0068f17c;
      }
      if (uVar8 != 0) {
        puVar24 = *(ushort **)(puVar20 + 2) + 1;
        iVar15 = uVar13 + 1;
        puVar26 = puVar11;
        do {
          cVar6 = (char)*puVar26;
          if (cVar6 == '\0' || cVar6 != (char)*puVar24) {
            if (cVar6 != (char)*puVar24) goto LAB_0068f170;
            break;
          }
          iVar15 = iVar15 + -1;
          puVar26 = (ushort *)((long)puVar26 + 1);
          puVar24 = (ushort *)((long)puVar24 + 1);
        } while (1 < iVar15);
      }
      if ((int)((ulong)((long)puVar20 + (-0x18 - lVar10)) >> 4) == -1) goto LAB_0068f170;
      uVar14 = FUN_0068edd0(param_1,param_2,param_3,uVar14);
      if ((uVar14 & 1) == 0) {
        return 0;
      }
      uVar28 = uVar28 + 1;
    } while (*(ushort *)(plVar2 + 3) != uVar28);
  }
  if (param_1 == (undefined4 *)0x0) {
    return 1;
  }
  puVar11 = (ushort *)0x0;
  uVar12 = 0;
  *param_1 = 0;
  uVar9 = 1;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
LAB_0068f188:
  *(ushort **)(param_1 + 6) = puVar11;
  param_1[8] = uVar12;
  return uVar9;
}

