
undefined8 FUN_03747070(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ushort uVar13;
  char cVar14;
  uint *puVar15;
  int *piVar16;
  int iVar17;
  long lVar18;
  uint *puVar19;
  long lVar20;
  int local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [4];
  ushort local_64 [2];
  
  (**(code **)*param_1)();
  lVar18 = *(long *)PTR_DAT_04bb4958;
  if ((lVar18 != 0) && (uVar8 = FUN_0376baa0(param_2), uVar8 != 0xffff)) {
    local_64[0] = uVar8;
    uVar9 = FUN_0376b780(param_2,*(undefined4 *)(param_2 + 0x20));
    uVar10 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x418);
    if ((uVar10 < *(uint *)(lVar18 + 0x3f8)) &&
       (puVar19 = *(uint **)(*(long *)(lVar18 + 0x400) + (long)(int)uVar10 * 8),
       puVar19 != (uint *)0x0)) {
      *(ushort *)((long)param_1 + 10) = uVar8;
      *(short *)((long)param_1 + 0xe) = (short)uVar9;
      *(undefined2 *)(param_1 + 0x14) = 1;
      local_d0 = *(int *)(param_2 + 0x24);
      *(ushort *)(param_1 + 0x14) = (ushort)(local_d0 << 4) | 1;
      local_a8 = &local_a0;
      local_a0 = &local_98;
      local_c8 = 0;
      local_b0 = &local_a8;
      *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) | 0x40;
      local_98 = &local_90;
      local_90 = 0;
      local_c0 = (undefined8 *)0x0;
      if (local_88 != (undefined8 *)0x0) {
        local_c8 = 0x400000000;
        local_c0 = local_88;
      }
      local_b8 = local_b0;
      uVar11 = FUN_03770770(local_64,&local_c8);
      uVar8 = *(ushort *)(param_1 + 1);
      if ((uVar11 & 1) == 0) {
        *(ushort *)(param_1 + 1) = uVar8 & 0xff7f;
      }
      else {
        *(ushort *)(param_1 + 1) = uVar8 | 0x80;
        if (local_64[0] == *(ushort *)*local_c0) {
          uVar8 = uVar8 | 0xc0;
          puVar12 = local_c0 + 1;
        }
        else {
          uVar8 = uVar8 & 0xffbf | 0x80;
          puVar12 = local_c0;
        }
        *(ushort *)(param_1 + 1) = uVar8;
        *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)*puVar12;
      }
      local_c8 = 0xfffe;
      FUN_0277d4ac(&local_c8);
      local_c0._4_4_ = 0xfffe;
      local_b8._0_4_ = 0;
      FUN_0277d4ac((long)&local_c0 + 4);
      local_b0 = (undefined8 *)0xfffe;
      FUN_0277d4ac(&local_b0);
      local_a8._4_4_ = 0xfffe;
      local_a0._0_4_ = 0;
      FUN_0277d4ac((long)&local_a8 + 4);
      local_98 = (undefined8 *)0xfffe;
      FUN_0277d4ac(&local_98);
      FUN_03751f30(&local_d0,uVar9,0,0);
      local_c8 = CONCAT44(uStack_cc,local_d0);
      FUN_03751f30(&local_d0,uVar9,1,0);
      local_c0._4_4_ = local_d0;
      local_b8._0_4_ = uStack_cc;
      FUN_03751f30(&local_d0,uVar9,2,0);
      local_b0 = (undefined8 *)CONCAT44(uStack_cc,local_d0);
      FUN_03751f30(&local_d0,uVar9,0,1);
      local_a8._4_4_ = local_d0;
      local_a0._0_4_ = uStack_cc;
      FUN_03751f30(&local_d0,uVar9,1,1);
      puVar6 = PTR_DAT_04bb43c0;
      local_c0._0_4_ = (uint)local_c0 & 0xffffff00;
      iVar17 = 0;
      local_b8._4_4_ = local_b8._4_4_ & 0xffffff00;
      local_a8._0_4_ = (uint)local_a8 & 0xffffff00;
      local_a0._4_4_ = CONCAT31(local_a0._5_3_,1);
      local_90 = CONCAT71(local_90._1_7_,1);
      local_98 = (undefined8 *)CONCAT44(uStack_cc,local_d0);
      do {
        lVar18 = (long)iVar17 * 0xc;
        piVar16 = (int *)((long)local_88 + lVar18 + -0x40);
        lVar20 = *(long *)puVar6;
        uVar10 = FUN_0277d6c4(piVar16);
        if (*(long *)puVar6 != 0) {
          lVar20 = *(long *)(lVar20 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar20 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            local_d0 = *piVar16;
            uStack_cc = *(undefined4 *)((long)local_88 + lVar18 + -0x3c);
            uVar11 = FUN_01b0a694(&local_d0);
            if ((uVar11 & 1) != 0) {
              if (*(int *)((long)param_1 + 0x24) <= *(int *)(param_1 + 4)) break;
              puVar12 = (undefined8 *)param_1[6];
              if (puVar12 != (undefined8 *)0x0) {
                param_1[6] = *puVar12;
              }
              iVar5 = *piVar16;
              uVar2 = *(undefined1 *)((long)local_88 + lVar18 + -0x3e);
              uVar3 = *(undefined1 *)((long)local_88 + lVar18 + -0x3d);
              uVar1 = *(undefined4 *)((long)local_88 + lVar18 + -0x3c);
              cVar14 = *(char *)((long)local_88 + (long)iVar17 * 0xc + -0x38);
              *puVar12 = &PTR_LAB_04b464e0;
              *(short *)(puVar12 + 1) = (short)iVar5;
              *(undefined1 *)((long)puVar12 + 10) = uVar2;
              *(undefined1 *)((long)puVar12 + 0xb) = uVar3;
              *(undefined4 *)((long)puVar12 + 0xc) = uVar1;
              *(char *)(puVar12 + 2) = cVar14 << 2;
              if (*(int *)(param_1 + 4) < *(int *)((long)param_1 + 0x24)) {
                *(undefined8 **)(param_1[5] + (long)*(int *)(param_1 + 4) * 8) = puVar12;
                *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
              }
            }
          }
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 != 5);
      puVar7 = PTR_DAT_04bcacd0;
      puVar6 = PTR_DAT_04bcacc8;
      if (*puVar19 != 0) {
        cVar14 = *PTR_DAT_04bcacc8;
        do {
          if (cVar14 != '\0') {
            uVar10 = *(uint *)(puVar7 + 0x18);
            if ((int)uVar10 < 0) {
              if (uVar10 == 0xffffffff) goto LAB_03747464;
LAB_037474dc:
              uVar8 = 0;
            }
            else {
              uVar8 = 0;
              if ((ushort *)((ulong)uVar10 + (long)puVar19) != (ushort *)0x0) {
                uVar8 = *(ushort *)((ulong)uVar10 + (long)puVar19);
              }
            }
LAB_037474f0:
            uVar10 = *puVar19;
            if (uVar10 == 0) goto LAB_037475b8;
            uVar9 = *(uint *)(puVar7 + 0x1c);
            goto LAB_03747510;
          }
          cVar14 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
LAB_03747464:
          puVar15 = (uint *)(ulong)*puVar19;
          uVar8 = 0;
          if ((*puVar19 == 0) || (puVar19 == puVar15)) goto LAB_037474f0;
          lVar18 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar15)) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar19 + (lVar18 - (long)puVar15);
          if (lVar18 == 0) goto LAB_037474dc;
          uVar11 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar15));
          *(undefined4 *)(puVar7 + 0x18) = 0xfffffffe;
          uVar8 = 0;
          if (uVar11 == 0) goto LAB_037474f0;
          piVar16 = (int *)(lVar18 + 4);
          while (piVar16[-1] != -0x47f59dba) {
            piVar16 = piVar16 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) {
              uVar8 = 0;
              goto LAB_037474f0;
            }
          }
          iVar17 = 0;
          if (*piVar16 != -1) {
            iVar17 = *piVar16;
          }
          *(int *)(puVar7 + 0x18) = iVar17;
        } while (*puVar19 != 0);
      }
      uVar13 = 0;
      uVar10 = 0;
      goto LAB_037475cc;
    }
  }
  return 0;
LAB_03747510:
  if ((int)uVar9 < 0) {
    if ((uVar9 != 0xffffffff) || (lVar18 = (long)puVar19 - (ulong)uVar10, lVar18 == 0))
    goto LAB_037475b8;
    lVar20 = 0xc;
    if (*(char *)(lVar18 + 10) != '\0') {
      lVar20 = 0x1c;
    }
    if (lVar20 + lVar18 == 0) goto LAB_037475b8;
    uVar11 = (ulong)*(ushort *)(lVar18 + 8);
    *(undefined4 *)(puVar7 + 0x1c) = 0xfffffffe;
    if (uVar11 == 0) goto LAB_037475b8;
    puVar15 = (uint *)(lVar20 + lVar18 + 4);
    while (puVar15[-1] != 0x856a4bf6) {
      puVar15 = puVar15 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_037475b8;
    }
    uVar9 = 0;
    if (*puVar15 != 0xffffffff) {
      uVar9 = *puVar15;
    }
    *(uint *)(puVar7 + 0x1c) = uVar9;
    uVar10 = *puVar19;
    if (uVar10 == 0) goto LAB_037475b8;
    goto LAB_03747510;
  }
  if ((ushort *)((long)puVar19 + (ulong)uVar9) != (ushort *)0x0) {
    uVar4 = *(ushort *)((long)puVar19 + (ulong)uVar9);
    uVar13 = 6;
    if (-1 < (short)uVar8) {
      uVar13 = uVar8;
    }
    uVar10 = 6;
    if (-1 < (short)uVar4) {
      uVar10 = (uint)uVar4;
    }
    goto LAB_037475cc;
  }
LAB_037475b8:
  uVar10 = 0;
  uVar13 = 6;
  if (-1 < (short)uVar8) {
    uVar13 = uVar8;
  }
LAB_037475cc:
  *(uint *)(param_1 + 2) = (uint)uVar13;
  *(uint *)((long)param_1 + 0x14) = uVar10;
  uVar10 = *puVar19;
  if (uVar10 == 0) {
LAB_037476b8:
    uVar8 = 0xffff;
LAB_037476bc:
    local_c8 = (ulong)uVar8;
    FUN_0277d4ac(&local_c8);
    *(undefined4 *)(param_1 + 3) = (undefined4)local_c8;
    *(undefined4 *)((long)param_1 + 0x1c) = local_c8._4_4_;
    return 1;
  }
  cVar14 = *puVar6;
  do {
    if (cVar14 == '\0') {
      cVar14 = '\x01';
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
      *puVar6 = 1;
      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
      uVar10 = *puVar19;
    }
    else {
      uVar9 = *(uint *)puVar7;
      if (-1 < (int)uVar9) {
        if ((ushort *)((ulong)uVar9 + (long)puVar19) != (ushort *)0x0) {
          uVar8 = *(ushort *)((ulong)uVar9 + (long)puVar19);
          goto LAB_037476bc;
        }
        goto LAB_037476b8;
      }
      if (uVar9 != 0xffffffff) goto LAB_037476b8;
    }
    puVar15 = (uint *)(ulong)uVar10;
    uVar8 = 0xffff;
    if ((puVar15 == (uint *)0x0) || (uVar8 = 0xffff, puVar19 == puVar15)) goto LAB_037476bc;
    lVar18 = 0xc;
    if (*(char *)((long)puVar19 + (10 - (long)puVar15)) != '\0') {
      lVar18 = 0x1c;
    }
    lVar18 = (long)puVar19 + (lVar18 - (long)puVar15);
    if (lVar18 == 0) goto LAB_037476b8;
    uVar11 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar15));
    *(undefined4 *)puVar7 = 0xfffffffe;
    if (uVar11 == 0) goto LAB_037476b8;
    piVar16 = (int *)(lVar18 + 4);
    while (piVar16[-1] != -0x59d9ee3) {
      piVar16 = piVar16 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_037476b8;
    }
    iVar17 = 0;
    if (*piVar16 != -1) {
      iVar17 = *piVar16;
    }
    *(int *)puVar7 = iVar17;
    uVar10 = *puVar19;
    if (uVar10 == 0) goto LAB_037476b8;
  } while( true );
}

