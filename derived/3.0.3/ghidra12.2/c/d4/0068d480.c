
uint FUN_0068d480(long *param_1,uint param_2)

{
  bool bVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  undefined2 uVar6;
  short sVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  ushort *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ushort *puVar16;
  code *pcVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  uint *puVar23;
  ulong uVar24;
  int iVar25;
  uint extraout_w13;
  uint extraout_w13_00;
  uint extraout_w13_01;
  uint extraout_w13_02;
  uint extraout_w13_03;
  uint extraout_w13_04;
  long lVar26;
  ulong uVar27;
  ushort *puVar28;
  long lVar29;
  ushort uVar30;
  long *plVar31;
  long *plVar32;
  char *pcVar33;
  long lVar34;
  undefined8 uVar35;
  uint uVar36;
  undefined8 uVar37;
  undefined2 *puVar38;
  int *piVar39;
  long *plVar40;
  long local_110;
  long *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined2 local_e8;
  long local_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  ushort *local_b0;
  ulong uStack_a8;
  long local_a0;
  long *local_98;
  long local_90;
  long *local_88;
  long lStack_80;
  long local_78;
  undefined8 uStack_70;
  
  lVar26 = (long)(int)param_2;
  puVar9 = (undefined8 *)(param_1[7] + lVar26 * 0x20);
  pcVar33 = (char *)((long)puVar9 + 0x1a);
  puVar16 = (ushort *)((long)puVar9 + 0x14);
  plVar32 = puVar9 + 1;
  piVar39 = (int *)PTR_DAT_04bdf390;
LAB_0068d524:
  plVar31 = (long *)*puVar9;
  lVar34 = *plVar31;
  lVar29 = *(long *)(lVar34 + 0x30) + (ulong)*puVar16 * 0x28;
  switch(*(undefined1 *)(lVar29 + 8)) {
  case 0:
    if (*pcVar33 != '\x04') {
      if (*pcVar33 != '\x02') goto LAB_0068dbc8;
      *pcVar33 = '\x03';
      uVar30 = *(ushort *)(lVar29 + 0xe);
      lVar26 = *(long *)(lVar34 + 0x28) + (ulong)*(ushort *)(lVar29 + 0xc) * 0x38;
      local_b0 = *(ushort **)(lVar26 + 0x10);
      lVar26 = *(long *)(lVar26 + 0x18);
      uStack_a8 = (ulong)*local_b0;
      if (uStack_a8 == 0) {
        lVar34 = plVar31[3] + (ulong)*(ushort *)(lVar29 + 0xc) * 0x48;
      }
      else {
        local_b0 = local_b0 + 1;
        lVar34 = FUN_0068e120(param_1,param_2,&local_b0);
        if (lVar34 == 0) goto LAB_0068dbc8;
      }
      puVar16 = *(ushort **)(lVar26 + (ulong)uVar30 * 8);
      local_b0 = puVar16 + 1;
      uStack_a8 = (ulong)*puVar16;
      puVar9 = (undefined8 *)FUN_0068f970(lVar34,&local_b0);
      uVar35 = *(undefined8 *)(lVar34 + 0x30);
      uVar37 = puVar9[1];
      lVar26 = *plVar32;
      FUN_0068a9e8(&local_b0,param_1,param_2);
      uStack_70 = 0;
      local_98 = (long *)uVar35;
      local_90 = uVar37;
      local_88 = param_1;
      lStack_80 = lVar26;
      local_78 = lVar29;
      FUN_0068a804(&local_e0,plVar31,param_1,param_2);
      plVar31 = param_1 + 10;
      plVar32 = (long *)((long)&local_e0 + (long)(int)param_1[0xc]);
      lVar26 = *plVar32;
      *plVar32 = *plVar31;
      *(long **)(lVar26 + 8) = plVar31;
      *(long **)(*plVar31 + 8) = plVar32;
      *plVar31 = lVar26;
      pcVar17 = (code *)*puVar9;
      local_100 = local_d0;
      local_f0 = local_c0;
      local_f8 = (undefined4)local_c8;
      uStack_f4 = local_c8._4_4_;
      local_e8 = local_b8;
      *(long **)(local_e0 + 8) = &local_110;
      local_110 = local_e0;
      local_e0 = *local_d8;
      local_108 = local_d8;
      *local_d8 = (long)&local_110;
      *(long **)(local_e0 + 8) = &local_e0;
      local_d0 = 0;
      local_c8 = 0xffffffffffffffff;
      local_c0 = 0;
      local_b8 = 0x100;
      (*pcVar17)(&local_b0,&local_110);
      uVar12 = 0;
      lVar26 = *local_108;
      *(long **)(local_110 + 8) = local_108;
      *local_108 = local_110;
      *(long **)(lVar26 + 8) = &local_110;
      lVar26 = *local_d8;
      *(long **)(local_e0 + 8) = local_d8;
      *local_d8 = local_e0;
      *(long **)(lVar26 + 8) = &local_e0;
      goto LAB_0068dbcc;
    }
    break;
  case 1:
    if (*pcVar33 == '\x02') {
      lVar34 = *(long *)(lVar34 + 0x28) + (ulong)*(ushort *)(lVar29 + 0xc) * 0x38;
      uVar30 = *(ushort *)(lVar29 + 0xe);
      local_b0 = *(ushort **)(lVar34 + 0x10);
      lVar34 = *(long *)(lVar34 + 0x20);
      uStack_a8 = (ulong)*local_b0;
      if (uStack_a8 == 0) {
        lVar19 = plVar31[3] + (ulong)*(ushort *)(lVar29 + 0xc) * 0x48;
      }
      else {
        local_b0 = local_b0 + 1;
        lVar19 = FUN_0068e120(param_1,param_2,&local_b0);
        if (lVar19 == 0) goto LAB_0068dbc8;
      }
      puVar13 = *(ushort **)(lVar34 + (ulong)uVar30 * 8);
      local_b0 = puVar13 + 1;
      uStack_a8 = (ulong)*puVar13;
      puVar11 = (undefined8 *)FUN_0068fa40(lVar19,&local_b0);
      local_b0 = *(ushort **)(lVar19 + 0x30);
      uStack_a8 = puVar11[1];
      local_90 = *plVar32;
      local_a0 = lVar29;
      local_98 = param_1;
      FUN_0068a9e8(&local_88,param_1,param_2);
      iVar8 = (*(code *)*puVar11)(&local_b0);
      if ((ulong)*(ushort *)(lVar29 + 10) != 0) {
        lVar34 = (ulong)*(ushort *)(lVar29 + 10) << 3;
        puVar13 = (ushort *)(*(long *)(lVar29 + 0x18) + 4);
        while (*(int *)(puVar13 + -2) != iVar8) {
          puVar13 = puVar13 + 4;
          lVar34 = lVar34 + -8;
          if (lVar34 == 0) goto LAB_0068d6f4;
        }
        uVar30 = *puVar13;
        piVar39 = (int *)PTR_DAT_04bdf390;
        goto LAB_0068d5d0;
      }
      goto LAB_0068d6f4;
    }
    goto LAB_0068dbc8;
  case 2:
    goto switchD_0068d550_caseD_2;
  case 3:
    if (*pcVar33 != '\x04') goto LAB_0068dbc8;
    break;
  case 4:
    cVar5 = *pcVar33;
    if (cVar5 == '\x04') {
      uVar30 = *(ushort *)(lVar29 + 10);
      if ((code *)param_1[0xd] != (code *)0x0) {
        (*(code *)param_1[0xd])(param_1,lVar34,lVar29,1);
      }
      goto LAB_0068d5d0;
    }
    if (cVar5 == '\x03') goto LAB_0068dbc8;
    if (cVar5 != '\x02') goto switchD_0068d550_default;
    *pcVar33 = '\x03';
    uVar30 = **(ushort **)(lVar29 + 0x18);
    if (uVar30 == 0) goto LAB_0068ddfc;
    plVar31 = (long *)param_1[5];
    iVar8 = (int)param_1[6];
    plVar40 = plVar31 + (long)iVar8 * 6;
    if (iVar8 == 0) goto LAB_0068dde8;
    if (uVar30 == 0) {
      lVar19 = (long)iVar8 * 0x30;
      goto LAB_0068dec8;
    }
    goto LAB_0068dda0;
  default:
switchD_0068d550_default:
    uVar30 = 0xffff;
    goto LAB_0068d504;
  }
  uVar30 = *(ushort *)(lVar29 + 10);
LAB_0068d5d0:
  if (uVar30 != 0xffff) {
LAB_0068d504:
    *puVar16 = uVar30;
    *pcVar33 = '\x02';
    lVar29 = param_1[7];
    iVar8 = *piVar39;
    *piVar39 = iVar8 + 1;
    *(int *)(lVar29 + lVar26 * 0x20 + 0x10) = iVar8 + 1;
    goto LAB_0068d524;
  }
LAB_0068d6f4:
  if (*(ushort *)(puVar9 + 3) != param_2) {
    bVar1 = false;
    puVar11 = puVar9;
    do {
      puVar11 = (undefined8 *)(param_1[7] + (ulong)*(ushort *)(puVar11 + 3) * 0x20);
      bVar1 = (bool)(*(char *)((long)puVar11 + 0x1a) != '\x05' | bVar1);
    } while (*(ushort *)(puVar11 + 3) != param_2);
    if (bVar1) {
      if (*(char *)(lVar29 + 8) == '\0') {
        *pcVar33 = '\x05';
        uVar12 = 1;
      }
      else {
        *(ushort *)(puVar11 + 3) = *(ushort *)(puVar9 + 3);
        puVar9 = (undefined8 *)(param_1[7] + lVar26 * 0x20);
        plVar32 = puVar9 + 1;
        if (*plVar32 != 0 && *(char *)((long)puVar9 + 0x1b) != '\0') {
          FUN_0068c2b0();
          (**(code **)(*param_1 + 0x18))(param_1,*plVar32);
        }
        *puVar9 = 0;
        *(undefined1 *)((long)puVar9 + 0x1a) = 0;
        puVar9[2] = 0xffffffffffffffff;
        *plVar32 = 0;
        *(undefined2 *)(puVar9 + 3) = 0xffff;
        *(char *)((long)puVar9 + 0x1b) = '\0';
        *(short *)((long)puVar9 + 0x16) = (short)param_1[0x10];
        uVar12 = 1;
        *(undefined1 *)((long)puVar9 + 0x1a) = 1;
        *(uint *)(param_1 + 0x10) = param_2;
        *(int *)((long)param_1 + 0x84) = *(int *)((long)param_1 + 0x84) + -1;
      }
      goto LAB_0068dbcc;
    }
  }
  uVar21 = param_2;
  if ((ulong)*(ushort *)((long)puVar9 + 0x16) != 0xffff) {
    *(undefined1 *)(param_1[7] + (ulong)*(ushort *)((long)puVar9 + 0x16) * 0x20 + 0x1a) = 4;
  }
  do {
    puVar9 = (undefined8 *)(param_1[7] + (long)(int)uVar21 * 0x20);
    plVar32 = puVar9 + 1;
    uVar30 = *(ushort *)(puVar9 + 3);
    if (*plVar32 != 0 && *(char *)((long)puVar9 + 0x1b) != '\0') {
      FUN_0068c2b0();
      (**(code **)(*param_1 + 0x18))(param_1,*plVar32);
    }
    puVar9[2] = 0xffffffffffffffff;
    uVar36 = (uint)uVar30;
    *puVar9 = 0;
    *(ushort *)(puVar9 + 3) = 0xffff;
    *(undefined1 *)((long)puVar9 + 0x1a) = 0;
    *plVar32 = 0;
    *(char *)((long)puVar9 + 0x1b) = '\0';
    *(short *)((long)puVar9 + 0x16) = (short)param_1[0x10];
    uVar12 = 1;
    *(undefined1 *)((long)puVar9 + 0x1a) = 1;
    *(uint *)(param_1 + 0x10) = uVar21;
    *(int *)((long)param_1 + 0x84) = *(int *)((long)param_1 + 0x84) + -1;
    uVar21 = uVar36;
  } while (uVar36 != param_2);
  goto LAB_0068dbcc;
LAB_0068dda0:
  do {
    if ((uint)**(ushort **)(*plVar31 + 0x20) == (uint)uVar30) {
      puVar13 = *(ushort **)(*plVar31 + 0x20) + 1;
      puVar28 = *(ushort **)(lVar29 + 0x18) + 1;
      iVar8 = uVar30 + 1;
      while( true ) {
        cVar5 = (char)*puVar28;
        if (cVar5 == '\0' || cVar5 != (char)*puVar13) break;
        iVar8 = iVar8 + -1;
        puVar28 = (ushort *)((long)puVar28 + 1);
        puVar13 = (ushort *)((long)puVar13 + 1);
        if (iVar8 < 2) goto LAB_0068dde8;
      }
      if (cVar5 == (char)*puVar13) goto LAB_0068dde8;
    }
    plVar31 = plVar31 + 6;
    uVar12 = 0;
    uVar21 = 0;
  } while (plVar31 != plVar40);
LAB_0068e118:
  uVar12 = uVar12 | uVar21;
  goto LAB_0068dbcc;
LAB_0068dde8:
  uVar12 = 0;
  uVar21 = 0;
  if ((plVar31 == plVar40) || (plVar31 == (long *)0x0)) goto LAB_0068e118;
LAB_0068ddfc:
  lVar19 = *(long *)(*plVar31 + 0x38);
  puVar13 = *(ushort **)(lVar29 + 0x20) + 1;
  uVar30 = **(ushort **)(lVar29 + 0x20);
  uVar27 = (ulong)*(ushort *)(lVar19 + 0xc);
  puVar23 = (uint *)((int *)(lVar19 + 8) + uVar27 * 4);
  uVar21 = (uint)uVar30;
  uVar12 = *puVar23;
  if (*(int *)(lVar19 + 8) < (int)*puVar23) {
    do {
      if ((uint)((int)uVar12 >> 3) < uVar21) {
        uVar24 = (ulong)(*(byte *)((long)puVar13 + (ulong)uVar30 + (long)~((int)uVar12 >> 3)) >>
                        ((ulong)uVar12 & 7)) & 1;
      }
      else {
        uVar24 = 0;
      }
      uVar27 = (ulong)*(ushort *)(lVar19 + 8 + uVar27 * 0x10 + uVar24 * 2 + 4);
      puVar23 = (uint *)(lVar19 + 8 + uVar27 * 0x10);
      bVar1 = (int)uVar12 < (int)*puVar23;
      uVar12 = *puVar23;
    } while (bVar1);
  }
  puVar28 = *(ushort **)(puVar23 + 2);
  if (uVar21 == *puVar28) {
    if (uVar21 != 0) {
      puVar28 = puVar28 + 1;
      iVar8 = uVar21 + 1;
      do {
        cVar5 = (char)*puVar13;
        if (cVar5 == '\0' || cVar5 != (char)*puVar28) {
          if (cVar5 != (char)*puVar28) goto LAB_0068df08;
          break;
        }
        iVar8 = iVar8 + -1;
        puVar13 = (ushort *)((long)puVar13 + 1);
        puVar28 = (ushort *)((long)puVar28 + 1);
      } while (1 < iVar8);
    }
    uVar21 = (uint)puVar28;
    uVar27 = (long)puVar23 + (-0x18 - lVar19);
    if (((uVar27 ^ 0xffffffffffffffff) & 0xffffffff0) != 0) {
      lVar19 = *(long *)(*plVar31 + 0x40) + ((long)(uVar27 * 0x10000000) >> 0x20) * 0x20;
      uVar30 = *(ushort *)(lVar19 + 0x1c);
      if (uVar30 == 0xffff) {
        *pcVar33 = '\x04';
        uVar12 = 1;
        goto LAB_0068dbcc;
      }
      if ((*(short *)(lVar29 + 10) == -1) && (*(long *)(lVar29 + 0x10) == 0)) {
        *puVar9 = plVar31;
        *puVar16 = uVar30;
        *pcVar33 = '\x02';
        pcVar33 = (char *)((long)puVar9 + 0x1b);
        if ((*plVar32 != 0) && (*pcVar33 != '\0')) {
          FUN_0068c2b0();
          (**(code **)(*param_1 + 0x18))(param_1,*plVar32);
          uVar21 = extraout_w13_02;
        }
        *pcVar33 = '\0';
        *plVar32 = 0;
        if (*(short *)(lVar19 + 0x1a) != 0) {
          lVar10 = (**(code **)(*param_1 + 0x10))(param_1,0x40,0x10);
          if (lVar10 != 0) {
            FUN_0068c290(lVar10);
          }
          local_b0 = (ushort *)param_1[1];
          uStack_a8 = param_1[2];
          local_a0 = param_1[3];
          local_98 = (long *)param_1[4];
          FUN_0068c3a0(lVar10,&local_b0,lVar19);
          *plVar32 = lVar10;
          *pcVar33 = '\x01';
          uVar21 = extraout_w13_03;
        }
        lVar19 = param_1[7];
        iVar8 = *piVar39;
        *piVar39 = iVar8 + 1;
        *(int *)(lVar19 + lVar26 * 0x20 + 0x10) = iVar8 + 1;
      }
      else {
        iVar8 = FUN_0068d010(param_1);
        puVar9 = (undefined8 *)(param_1[7] + (long)iVar8 * 0x20);
        *puVar9 = plVar31;
        *(ushort *)((long)puVar9 + 0x14) = uVar30;
        *(short *)((long)puVar9 + 0x16) = (short)param_2;
        *(short *)(puVar9 + 3) = (short)iVar8;
        *(undefined1 *)((long)puVar9 + 0x1a) = 2;
        plVar32 = puVar9 + 1;
        pcVar33 = (char *)((long)puVar9 + 0x1b);
        uVar21 = extraout_w13;
        if ((*plVar32 != 0) && (*pcVar33 != '\0')) {
          FUN_0068c2b0();
          (**(code **)(*param_1 + 0x18))(param_1,*plVar32);
          uVar21 = extraout_w13_00;
        }
        *plVar32 = 0;
        *pcVar33 = '\0';
        if (*(short *)(lVar19 + 0x1a) != 0) {
          lVar26 = (**(code **)(*param_1 + 0x10))(param_1,0x40,0x10);
          if (lVar26 != 0) {
            FUN_0068c290(lVar26);
          }
          local_b0 = (ushort *)param_1[1];
          uStack_a8 = param_1[2];
          local_a0 = param_1[3];
          local_98 = (long *)param_1[4];
          FUN_0068c3a0(lVar26,&local_b0,lVar19);
          *plVar32 = lVar26;
          *pcVar33 = '\x01';
          uVar21 = extraout_w13_01;
        }
      }
      if ((code *)param_1[0xd] != (code *)0x0) {
        (*(code *)param_1[0xd])(param_1,lVar34,lVar29,0);
        uVar21 = extraout_w13_04;
      }
      uVar12 = 1;
      goto LAB_0068e118;
    }
  }
  goto LAB_0068df08;
switchD_0068d550_caseD_2:
  if (*pcVar33 == '\x02') {
    *puVar16 = *(ushort *)(lVar29 + 0xc);
    *pcVar33 = '\x03';
    lVar34 = param_1[7];
    iVar8 = *piVar39;
    *piVar39 = iVar8 + 1;
    *(int *)(lVar34 + lVar26 * 0x20 + 0x10) = iVar8 + 1;
    if ((ulong)*(ushort *)(lVar29 + 10) == 0) {
      lVar26 = -1;
      iVar8 = -1;
    }
    else {
      puVar38 = *(undefined2 **)(lVar29 + 0x10);
      puVar2 = puVar38 + *(ushort *)(lVar29 + 10);
      uVar27 = 0xffffffff;
      iVar25 = -1;
      do {
        uVar24 = (ulong)*(uint *)(param_1 + 0x10);
        if (*(uint *)(param_1 + 0x10) == 0xffff) {
          uVar12 = *(uint *)(param_1 + 8);
          uVar24 = (ulong)uVar12;
          lVar26 = (long)(int)uVar12;
          iVar8 = (int)(uVar24 << 1);
          if (*(int *)((long)param_1 + 0x44) < iVar8) {
            puVar9 = (undefined8 *)
                     (**(code **)(*(long *)param_1[9] + 0x10))((long *)param_1[9],lVar26 << 6,0x10);
            puVar11 = (undefined8 *)param_1[7];
            uVar20 = (ulong)(int)param_1[8];
            if ((int)param_1[8] != 0) {
              uVar22 = uVar20 & 3;
              puVar15 = puVar9;
              puVar18 = puVar11;
              if (uVar22 != 0) {
                puVar14 = puVar9;
                do {
                  uVar35 = *puVar18;
                  uVar37 = puVar18[1];
                  uVar22 = uVar22 - 1;
                  puVar15 = puVar18 + 2;
                  uVar4 = puVar18[3];
                  puVar18 = puVar18 + 4;
                  puVar14[2] = *puVar15;
                  puVar14[3] = uVar4;
                  puVar15 = puVar14 + 4;
                  *puVar14 = uVar35;
                  puVar14[1] = uVar37;
                  puVar14 = puVar15;
                } while (uVar22 != 0);
              }
              if (2 < (uVar20 - 1 & 0x7ffffffffffffff)) {
                do {
                  uVar35 = *puVar18;
                  uVar37 = puVar18[1];
                  uVar4 = puVar18[3];
                  puVar15[2] = puVar18[2];
                  puVar15[3] = uVar4;
                  *puVar15 = uVar35;
                  puVar15[1] = uVar37;
                  uVar35 = puVar18[4];
                  uVar37 = puVar18[5];
                  uVar4 = puVar18[7];
                  puVar15[6] = puVar18[6];
                  puVar15[7] = uVar4;
                  puVar15[4] = uVar35;
                  puVar15[5] = uVar37;
                  uVar35 = puVar18[8];
                  uVar37 = puVar18[9];
                  uVar4 = puVar18[0xb];
                  puVar15[10] = puVar18[10];
                  puVar15[0xb] = uVar4;
                  puVar15[8] = uVar35;
                  puVar15[9] = uVar37;
                  uVar35 = puVar18[0xc];
                  uVar37 = puVar18[0xd];
                  puVar14 = puVar18 + 0xe;
                  uVar4 = puVar18[0xf];
                  puVar18 = puVar18 + 0x10;
                  puVar15[0xe] = *puVar14;
                  puVar15[0xf] = uVar4;
                  puVar15[0xc] = uVar35;
                  puVar15[0xd] = uVar37;
                  puVar15 = puVar15 + 0x10;
                } while (puVar18 != puVar11 + uVar20 * 4);
              }
            }
            param_1[7] = (long)puVar9;
            *(int *)((long)param_1 + 0x44) = iVar8;
            if (puVar11 != (undefined8 *)0x0) {
              (**(code **)(*(long *)param_1[9] + 0x18))();
            }
          }
          if ((int)param_1[8] < iVar8) {
            lVar29 = param_1[7];
            lVar34 = (long)(int)param_1[8] * 0x20;
            lVar19 = (-(ulong)(uVar12 >> 0x1f) & 0xfffffffe00000000 | uVar24 << 1) << 5;
            do {
              lVar19 = lVar19 + -0x20;
              puVar9 = (undefined8 *)(lVar29 + lVar34);
              *(undefined4 *)(puVar9 + 2) = 0xffffffff;
              lVar29 = lVar29 + 0x20;
              *(undefined8 *)((long)puVar9 + 0x14) = 0xffffffffffff;
              *puVar9 = 0;
              puVar9[1] = 0;
            } while (lVar34 != lVar19);
          }
          *(int *)(param_1 + 8) = iVar8;
          if ((int)uVar12 < iVar8 + -1) {
            lVar29 = lVar26 << 5;
            lVar26 = lVar26 + -1;
            do {
              sVar7 = (short)lVar26;
              lVar26 = lVar26 + 1;
              *(short *)(param_1[7] + lVar29 + 0x16) = sVar7 + 2;
              lVar34 = param_1[7] + lVar29;
              lVar29 = lVar29 + 0x20;
              *(undefined1 *)(lVar34 + 0x1a) = 1;
            } while (iVar8 + -2 != lVar26);
          }
        }
        uVar20 = -(uVar24 >> 0x1f) & 0xffffffe000000000 | uVar24 << 5;
        iVar8 = (int)uVar24;
        iVar3 = iVar8;
        if (iVar25 != -1) {
          iVar3 = iVar25;
        }
        puVar9 = (undefined8 *)(param_1[7] + uVar20);
        *(uint *)(param_1 + 0x10) = (uint)*(ushort *)((long)puVar9 + 0x16);
        *(undefined4 *)(puVar9 + 2) = 0xffffffff;
        *(undefined8 *)((long)puVar9 + 0x14) = 0xffffffffffff;
        *puVar9 = 0;
        puVar9[1] = 0;
        iVar25 = *piVar39;
        *piVar39 = iVar25 + 1;
        *(int *)(puVar9 + 2) = iVar25 + 1;
        *(undefined1 *)((long)puVar9 + 0x1a) = 0;
        *(int *)((long)param_1 + 0x84) = *(int *)((long)param_1 + 0x84) + 1;
        puVar9 = (undefined8 *)(param_1[7] + uVar20);
        *puVar9 = plVar31;
        uVar6 = *puVar38;
        *(short *)((long)puVar9 + 0x16) = (short)param_2;
        *(short *)(puVar9 + 3) = (short)uVar27;
        plVar40 = puVar9 + 1;
        *(undefined1 *)((long)puVar9 + 0x1a) = 2;
        *(undefined2 *)((long)puVar9 + 0x14) = uVar6;
        pcVar33 = (char *)((long)puVar9 + 0x1b);
        if ((*plVar40 != 0) && (*pcVar33 != '\0')) {
          FUN_0068c2b0();
          (**(code **)(*param_1 + 0x18))(param_1,*plVar40);
        }
        *plVar40 = 0;
        *pcVar33 = '\0';
        puVar38 = puVar38 + 1;
        lVar26 = *plVar32;
        *pcVar33 = '\0';
        *plVar40 = lVar26;
        piVar39 = &DAT_04c811c8;
        uVar27 = uVar24;
        iVar25 = iVar3;
      } while (puVar38 != puVar2);
      lVar26 = (long)iVar3;
    }
    *(short *)(param_1[7] + lVar26 * 0x20 + 0x18) = (short)iVar8;
    uVar12 = 1;
  }
  else {
LAB_0068dbc8:
    uVar12 = 0;
  }
  goto LAB_0068dbcc;
  while( true ) {
    plVar31 = plVar31 + 6;
    lVar19 = lVar19 + -0x30;
    if (lVar19 == 0) break;
LAB_0068dec8:
    if (**(short **)(*plVar31 + 0x20) == 0) goto LAB_0068dde8;
  }
LAB_0068df08:
  uVar12 = 0;
LAB_0068dbcc:
  return uVar12 & 1;
}

