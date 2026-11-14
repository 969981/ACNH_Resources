
undefined8 FUN_01952700(long param_1,short *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint *puVar15;
  long lVar16;
  short *psVar17;
  undefined4 uVar18;
  uint *puVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  byte bVar23;
  undefined *puVar24;
  undefined *local_98;
  long local_90;
  undefined1 local_88;
  byte local_87;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  uint *local_70;
  undefined *local_68;
  long local_60;
  undefined8 local_58;
  
  puVar24 = PTR_DAT_04bb43c0;
  local_70 = (uint *)0x0;
  local_80 = PTR_DAT_04bc0510 + 0x10;
  local_78 = *(undefined4 *)param_2;
  uStack_74 = *(undefined4 *)(param_2 + 2);
  lVar22 = *(long *)PTR_DAT_04bb43c0;
  uVar10 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar24 == 0) {
LAB_01952860:
    uVar10 = 0xbc;
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((*(uint *)(lVar22 + 0x1d8) <= uVar10) ||
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_01952860;
    lVar22 = *(long *)PTR_DAT_04bc0428;
    uVar10 = FUN_0277d6c4(param_2);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((*(uint *)(lVar22 + 0x1d8) <= uVar10) ||
       (puVar15 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8),
       puVar15 == (uint *)0x0)) goto LAB_01952860;
    uVar10 = *puVar15;
    local_70 = puVar15;
    if (uVar10 == 0 || puVar15 == (uint *)(ulong)uVar10) {
LAB_01952858:
      uVar10 = 0;
    }
    else {
      puVar19 = (uint *)((long)puVar15 - (long)(ulong)uVar10);
      if (((*puVar19 == 0) || (uVar10 = puVar19[1], uVar10 == 0)) ||
         ((ulong)(ushort)puVar19[2] == 0)) goto LAB_01952858;
      lVar22 = 0xc;
      if (*(char *)((long)puVar19 + 10) != '\0') {
        lVar22 = 0x1c;
      }
      lVar22 = (long)puVar19 + lVar22 + (ulong)(ushort)puVar19[2] * 8;
      if (lVar22 == 0) goto LAB_01952858;
      uVar14 = 0;
      if ((ulong)uVar10 != 0) {
        uVar14 = (uint)((ulong)((long)puVar15 - lVar22) / (ulong)uVar10);
      }
      if (*puVar19 <= uVar14) {
        uVar14 = 0xffffffff;
      }
      if ((DAT_05326ec0 <= uVar14) ||
         (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar14 * 2), uVar10 = (uint)uVar6,
         0xbc < uVar6)) goto LAB_01952858;
    }
  }
  local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar10);
  if (uVar10 != 0x69) {
    return 0;
  }
  local_68 = PTR_DAT_04bb7648 + 0x10;
  local_60 = CONCAT62(local_60._2_6_,*DAT_05ab5ea8);
  lVar22 = FUN_03775a30(&local_68);
  if (lVar22 == 0) {
    return 0;
  }
  local_90 = lVar22 + 0xe0;
  local_88 = 0;
  lVar16 = *(long *)(lVar22 + 0x108);
  if (lVar16 == 0) {
    local_87 = 0;
    local_98 = PTR_DAT_04bbc598 + 0x10;
LAB_01952968:
    puVar24 = (undefined *)(*(long *)(lVar22 + 0xf0) + *(long *)(lVar22 + 0xe8));
    psVar17 = (short *)(puVar24 + 0x4848);
    puVar8 = local_68;
    lVar16 = local_60;
    bVar23 = local_87;
    goto LAB_019529d0;
  }
  if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
    local_87 = 0;
    local_98 = PTR_DAT_04bbc598 + 0x10;
    plVar12 = *(long **)(lVar16 + 0x20);
    if (plVar12 != (long *)0x0) goto LAB_01952904;
LAB_0195299c:
    puVar24 = *(undefined **)(lVar22 + 0xe8) + *(long *)(lVar22 + 0xf0);
    psVar17 = (short *)(puVar24 + 0x4848);
    plVar12 = *(long **)(lVar16 + 0x20);
    puVar9 = *(undefined **)(lVar22 + 0xe8);
    lVar21 = *(long *)(lVar22 + 0xf0);
    bVar23 = local_87;
    puVar8 = local_68;
    lVar16 = local_60;
  }
  else {
    local_87 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
    lVar16 = *(long *)(lVar22 + 0x108);
    local_87 = local_87 & 1;
    local_98 = PTR_DAT_04bbc598 + 0x10;
    if (lVar16 == 0) goto LAB_01952968;
    plVar12 = *(long **)(lVar16 + 0x20);
    if (plVar12 == (long *)0x0) goto LAB_0195299c;
LAB_01952904:
    bVar23 = local_87;
    local_68 = *(undefined **)(lVar22 + 0xe8);
    local_60 = *(long *)(lVar22 + 0xf0);
    local_58 = 0x48a8;
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_68);
    puVar24 = *(undefined **)(lVar22 + 0xe8) + *(long *)(lVar22 + 0xf0);
    psVar17 = (short *)(puVar24 + 0x4848);
    puVar8 = local_68;
    lVar16 = local_60;
    if (*(long *)(lVar22 + 0x108) == 0) goto LAB_019529d0;
    plVar12 = *(long **)(*(long *)(lVar22 + 0x108) + 0x20);
    puVar9 = *(undefined **)(lVar22 + 0xe8);
    lVar21 = *(long *)(lVar22 + 0xf0);
  }
  local_60 = lVar21;
  local_68 = puVar9;
  if (plVar12 != (long *)0x0) {
    local_58 = 0x48a8;
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_68);
    puVar8 = local_68;
    lVar16 = local_60;
  }
LAB_019529d0:
  local_60 = lVar16;
  local_68 = puVar8;
  if ((*psVar17 == -2) && (*(short *)(param_1 + 0xe68) == -2)) {
    lVar16 = 0;
  }
  else {
    psVar17 = (short *)(puVar24 + 0x4850);
    if ((*psVar17 == -2) && (*(short *)(param_1 + 0xe88) == -2)) {
      lVar16 = 1;
    }
    else {
      psVar17 = (short *)(puVar24 + 0x4858);
      if ((*psVar17 == -2) && (*(short *)(param_1 + 0xea8) == -2)) {
        lVar16 = 2;
      }
      else {
        psVar17 = (short *)(puVar24 + 0x4860);
        if ((*psVar17 == -2) && (*(short *)(param_1 + 0xec8) == -2)) {
          lVar16 = 3;
        }
        else {
          psVar17 = (short *)(puVar24 + 0x4868);
          if ((*psVar17 == -2) && (*(short *)(param_1 + 0xee8) == -2)) {
            lVar16 = 4;
          }
          else {
            psVar17 = (short *)(puVar24 + 0x4870);
            if ((*psVar17 == -2) && (*(short *)(param_1 + 0xf08) == -2)) {
              lVar16 = 5;
            }
            else {
              psVar17 = (short *)(puVar24 + 0x4878);
              if ((*psVar17 == -2) && (*(short *)(param_1 + 0xf28) == -2)) {
                lVar16 = 6;
              }
              else {
                psVar17 = (short *)(puVar24 + 0x4880);
                if ((*psVar17 == -2) && (*(short *)(param_1 + 0xf48) == -2)) {
                  lVar16 = 7;
                }
                else {
                  psVar17 = (short *)(puVar24 + 0x4888);
                  if ((*psVar17 == -2) && (*(short *)(param_1 + 0xf68) == -2)) {
                    lVar16 = 8;
                  }
                  else {
                    psVar17 = (short *)(puVar24 + 0x4890);
                    if ((*psVar17 == -2) && (*(short *)(param_1 + 0xf88) == -2)) {
                      lVar16 = 9;
                    }
                    else {
                      psVar17 = (short *)(puVar24 + 0x4898);
                      if ((*psVar17 == -2) && (*(short *)(param_1 + 0xfa8) == -2)) {
                        lVar16 = 10;
                      }
                      else {
                        psVar17 = (short *)(puVar24 + 0x48a0);
                        if ((*psVar17 != -2) || (*(short *)(param_1 + 0xfc8) != -2)) {
                          FUN_02640184(&local_98);
                          return 0;
                        }
                        lVar16 = 0xb;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *psVar17 = *param_2;
  *(char *)(psVar17 + 1) = (char)param_2[1];
  *(undefined1 *)((long)psVar17 + 3) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(psVar17 + 2) = *(undefined4 *)(param_2 + 2);
  FUN_018aa410();
  if (((bVar23 != 0) && (*(long *)(lVar22 + 0x108) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar22 + 0x108) + 0x18), puVar13 != (undefined8 *)0x0)) {
    (**(code **)*puVar13)();
  }
  iVar11 = FUN_0277d6c4(param_2);
  psVar17 = (short *)(param_1 + 0xe68 + lVar16 * 0x20);
  uVar18 = 0x78;
  if (iVar11 != 0x283) {
    uVar18 = 0x15;
  }
  *(undefined1 *)(psVar17 + 0xe) = 0;
  psVar17[8] = 0;
  psVar17[9] = 0;
  psVar17[10] = 0;
  psVar17[0xb] = 0;
  *(undefined4 *)(psVar17 + 0xc) = uVar18;
  *psVar17 = *param_2;
  *(char *)(psVar17 + 1) = (char)param_2[1];
  *(undefined1 *)((long)psVar17 + 3) = *(undefined1 *)((long)param_2 + 3);
  uVar18 = *(undefined4 *)(param_2 + 2);
  psVar17[8] = 0;
  psVar17[9] = 0;
  *(undefined4 *)(psVar17 + 2) = uVar18;
  uVar10 = *(uint *)(param_1 + 0xe60);
  if (0 < (int)uVar10) {
    lVar22 = 0;
    do {
      while( true ) {
        piVar20 = *(int **)(param_1 + 0xe50);
        uVar14 = (uint)lVar22;
        if (uVar14 < uVar10) {
          iVar11 = *(int *)(param_1 + 0xe5c) + uVar14;
          iVar1 = 0;
          if (*(int *)(param_1 + 0xe58) <= iVar11) {
            iVar1 = *(int *)(param_1 + 0xe58);
          }
          piVar20 = piVar20 + (iVar11 - iVar1);
        }
        if (*piVar20 != -1) break;
        uVar10 = uVar10 - 1;
        if (uVar14 < uVar10) {
          lVar21 = lVar22;
          do {
            iVar7 = *(int *)(param_1 + 0xe5c);
            iVar11 = (int)lVar21 + iVar7;
            iVar5 = *(int *)(param_1 + 0xe58);
            iVar1 = 0;
            if (iVar5 <= iVar11 + 1) {
              iVar1 = iVar5;
            }
            iVar4 = 0;
            if (iVar5 <= iVar11) {
              iVar4 = iVar5;
            }
            lVar2 = lVar21 + ((long)iVar7 - (long)iVar1);
            lVar3 = lVar21 + ((long)iVar7 - (long)iVar4);
            lVar21 = lVar21 + 1;
            *(undefined4 *)(*(long *)(param_1 + 0xe50) + lVar3 * 4) =
                 *(undefined4 *)(*(long *)(param_1 + 0xe50) + lVar2 * 4 + 4);
            uVar10 = *(int *)(param_1 + 0xe60) - 1;
          } while ((int)lVar21 < (int)uVar10);
        }
        *(uint *)(param_1 + 0xe60) = uVar10;
        if ((int)uVar10 <= (int)uVar14) goto LAB_01952cf4;
      }
      lVar22 = lVar22 + 1;
    } while ((int)lVar22 < (int)uVar10);
  }
LAB_01952cf4:
  iVar11 = *(int *)(param_1 + 0xe58);
  if ((int)uVar10 < iVar11) {
    *(uint *)(param_1 + 0xe60) = uVar10 + 1;
    iVar1 = *(int *)(param_1 + 0xe5c) + uVar10;
    iVar5 = 0;
    if (iVar11 <= iVar1) {
      iVar5 = iVar11;
    }
    *(int *)(*(long *)(param_1 + 0xe50) + (long)(iVar1 - iVar5) * 4) = (int)lVar16;
  }
  return 1;
}

