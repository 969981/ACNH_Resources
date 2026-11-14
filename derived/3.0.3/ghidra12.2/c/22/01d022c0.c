
undefined8 FUN_01d022c0(undefined8 *param_1,uint *param_2,ushort *param_3,uint param_4)

{
  uint *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 uVar15;
  ushort uVar16;
  undefined *puVar17;
  byte bVar18;
  int iVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  char cVar25;
  long *plVar26;
  char *pcVar27;
  undefined2 uVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  uint *puVar34;
  int *piVar35;
  uint *puVar36;
  undefined2 *puVar37;
  undefined2 *puVar38;
  undefined *puVar39;
  ushort *puVar40;
  undefined8 uVar41;
  undefined8 local_1d8;
  undefined8 *local_1d0;
  ulong local_1c8;
  uint local_1c0;
  ushort local_1bc;
  byte local_1ba;
  byte local_1b9;
  undefined *local_1b8;
  int *local_1b0;
  undefined4 local_1a8;
  undefined *local_1a0;
  char *local_198;
  undefined4 local_190;
  undefined1 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined *local_170;
  undefined1 *puStack_168;
  undefined4 local_160;
  undefined1 local_15c [63];
  undefined1 local_11d;
  undefined *local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined1 local_104 [63];
  undefined1 local_c5;
  undefined8 local_c0;
  undefined6 uStack_b8;
  undefined2 local_b2;
  undefined6 uStack_b0;
  undefined1 auStack_aa [2];
  int local_a8 [2];
  long local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar20 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x38))(),
     lVar20 == 0)) {
    return 2;
  }
  if ((*(long **)(&LAB_00284e28 + lVar20) == (long *)0x0) ||
     (puVar21 = (undefined8 *)**(long **)(&LAB_00284e28 + lVar20), puVar21 == (undefined8 *)0x0)) {
    uVar22 = 0;
  }
  else {
    uVar22 = (**(code **)*puVar21)();
    uVar22 = uVar22 & 0xffffffff;
  }
  local_1bc = *param_3;
  local_1ba = (byte)param_3[1];
  local_1b9 = *(byte *)((long)param_3 + 3);
  nn::time::IsValidDate((uint)local_1bc,(uint)local_1ba,(uint)local_1b9);
  puVar39 = PTR_DAT_04bb2020;
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0xb6e9) = 0;
  }
  else if (9 < param_4) {
    *param_1 = 0x220a002801;
    puVar39 = puVar39 + 0x10;
    local_198 = "MarketBuilt";
    local_1a0 = puVar39;
    bVar18 = FUN_0273f0a0(&local_1a0);
    *(byte *)(param_1 + 4) = bVar18 & 1;
    local_198 = "Market2Built";
    local_1a0 = puVar39;
    bVar18 = FUN_0273f0a0(&local_1a0);
    *(byte *)((long)param_1 + 0x21) = bVar18 & 1;
    local_198 = "BuiltTownOffice";
    local_1a0 = puVar39;
    bVar18 = FUN_0273f0a0(&local_1a0);
    *(byte *)((long)param_1 + 0x22) = bVar18 & 1;
    local_198 = "Museum2Built";
    local_1a0 = puVar39;
    bVar18 = FUN_0273f0a0(&local_1a0);
    *(byte *)((long)param_1 + 0x23) = bVar18 & 1;
    uVar41 = 1;
    goto joined_r0x01d035c4;
  }
  lVar7 = *(long *)(&LAB_00284e10 + lVar20) + *(long *)(&LAB_00284e08 + lVar20);
  puVar40 = (ushort *)(lVar7 + (ulong)param_4 * 0x4058);
  uVar23 = nn::time::IsValidDate
                     ((uint)*puVar40,(uint)(byte)puVar40[1],(uint)*(byte *)((long)puVar40 + 3));
  if (((uVar23 & 1) == 0) || (uVar23 = FUN_0280d718(puVar40,&local_1bc), (uVar23 & 1) != 0)) {
LAB_01d02450:
    uVar41 = 0;
  }
  else {
    puVar1 = (uint *)(param_1 + 0xb6e9);
    uVar23 = (ulong)param_4;
    puVar21 = param_1 + 5 + (ulong)*puVar1 * 0x124a;
    if (9 < *puVar1) {
      puVar21 = param_1 + 5;
    }
    nn::time::IsValidDate((uint)*puVar40,(uint)(byte)puVar40[1],(uint)*(byte *)((long)puVar40 + 3));
    uVar24 = nn::time::IsValidDate
                       ((uint)*puVar40,(uint)(byte)puVar40[1],(uint)*(byte *)((long)puVar40 + 3));
    uVar29 = (uint)*puVar40;
    if ((uVar24 & 1) == 0) {
      uVar29 = 2000;
    }
    uVar24 = nn::time::IsValidDate
                       ((uint)*puVar40,(uint)(byte)puVar40[1],(uint)*(byte *)((long)puVar40 + 3));
    uVar30 = (uint)(byte)puVar40[1];
    if ((uVar24 & 1) == 0) {
      uVar30 = 1;
    }
    uVar24 = nn::time::IsValidDate
                       ((uint)*puVar40,(uint)(byte)puVar40[1],(uint)*(byte *)((long)puVar40 + 3));
    uVar15 = *(undefined1 *)((long)puVar40 + 3);
    if ((uVar24 & 1) == 0) {
      uVar15 = 1;
    }
    FUN_0074fda4(&local_1a0,"%04d-%02d-%02d",uVar29,uVar30,uVar15);
    (**(code **)(local_1a0 + 0x18))(&local_1a0);
    lVar31 = 0;
    do {
      if (local_198[lVar31] == '\0') goto LAB_01d0257c;
      if (local_198[lVar31 + 1] == '\0') {
        lVar31 = lVar31 + 1;
        goto LAB_01d0257c;
      }
      if (local_198[lVar31 + 2] == '\0') {
        lVar31 = lVar31 + 2;
        goto LAB_01d0257c;
      }
      lVar31 = lVar31 + 3;
    } while (lVar31 != 0x80001);
    lVar31 = 0;
LAB_01d0257c:
    uVar29 = (uint)lVar31;
    if (0xe < (int)uVar29) {
      uVar29 = 0xf;
    }
    *puVar21 = 0;
    puVar21[1] = 0;
    (**(code **)(local_1a0 + 0x18))(&local_1a0);
    memcpy(puVar21,local_198,(ulong)uVar29);
    puVar21[2] = 0;
    puVar21[3] = 0;
    puVar21[4] = 0;
    lVar32 = lVar7 + uVar23 * 0x4058;
    lVar31 = 0;
    uVar29 = 0;
    *(short *)(puVar21 + 2) = (short)*(undefined4 *)(lVar32 + 0xc);
    *(short *)((long)puVar21 + 0x12) = (short)*(undefined4 *)(lVar32 + 0x10);
    *(short *)((long)puVar21 + 0x14) = (short)*(undefined4 *)(lVar32 + 0x14);
    *(short *)((long)puVar21 + 0x16) = (short)*(undefined4 *)(lVar32 + 0x18);
    *(short *)(puVar21 + 3) = (short)*(undefined4 *)(lVar32 + 0x1c);
    *(short *)((long)puVar21 + 0x1a) = (short)*(undefined4 *)(lVar32 + 0x20);
    *(short *)((long)puVar21 + 0x1c) = (short)*(undefined4 *)(lVar32 + 0x24);
    *(short *)((long)puVar21 + 0x1e) = (short)*(undefined4 *)(lVar32 + 0x28);
    *(short *)(puVar21 + 4) = (short)*(undefined4 *)(lVar32 + 0x2c);
    puVar17 = PTR_DAT_04bb2bc0;
    puVar39 = PTR_DAT_04bb2030;
    puVar12 = auStack_aa;
    if (auStack_aa <= (undefined1 *)((long)&local_c0 + 2U)) {
      puVar12 = (undefined1 *)((long)&local_c0 + 2U);
    }
    *(short *)((long)puVar21 + 0x22) = (short)*(undefined4 *)(lVar32 + 0x30);
    puVar5 = PTR_DAT_04bc0cd8;
    puVar4 = PTR_DAT_04bb5128;
    *(short *)((long)puVar21 + 0x24) = (short)*(undefined4 *)(lVar32 + 0x34);
    *(short *)((long)puVar21 + 0x26) = (short)*(undefined4 *)(lVar32 + 0x38);
    do {
      piVar35 = (int *)(lVar32 + 0x40 + lVar31 * 0x80);
      if (*piVar35 != 0) {
        local_18c = 0;
        local_1c8 = CONCAT44(local_1c8._4_4_,0x1f);
        local_190 = 0xb;
        puVar9 = puVar21 + 5 + (ulong)uVar29 * 8;
        if (7 < uVar29) {
          puVar9 = puVar21 + 5;
        }
        *(undefined1 *)((long)puVar9 + 0x1e) = 0;
        local_178 = 0xffffffff;
        local_160 = 0x40;
        local_11d = 0;
        local_15c[0] = 0;
        local_108 = 0x40;
        local_c5 = 0;
        local_104[0] = 0;
        uStack_b0 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_b2 = 0;
        local_188 = 0xffffffff;
        uStack_180 = 0xffffffff00000000;
        local_1d8 = puVar39 + 0x10;
        local_1d0 = puVar9;
        local_1a0 = puVar4 + 0x10;
        local_198 = (char *)&local_c0;
        local_170 = puVar17 + 0x10;
        puStack_168 = local_15c;
        local_118 = puVar17 + 0x10;
        puStack_110 = local_104;
        memset(&local_c0,0,(ulong)(puVar12 + (-0xe1 - (long)&local_1a0)) & 0xfffffffffffffffc | 2);
        local_1b0 = piVar35 + 1;
        local_1b8._0_4_ = 10;
        FUN_0082b014(&local_1a0);
        local_6c = 0;
        local_70 = 1;
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_98 = puVar5 + 0x10;
        FUN_02906b00(&local_98,&local_1a0,&local_1b8);
        uVar41 = (**(code **)(local_1a0 + 0x18))(&local_1a0);
        (**(code **)(local_1d8 + 0x18))(&local_1d8);
        iVar19 = FUN_038d4f60(&local_98,local_1d0,local_1c8 & 0xffffffff,uVar41,0xffffffff);
        local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,iVar19);
        if (iVar19 != 0) {
          *(undefined1 *)local_1d0 = 0;
          goto joined_r0x01d035c4;
        }
        uVar30 = piVar35[6];
        if (1 < uVar30) {
          uVar30 = 0;
        }
        local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,uVar30);
        *(short *)(puVar9 + 4) = (short)uVar30;
        puVar9[5] = *(undefined8 *)(piVar35 + 8);
        bVar18 = *(byte *)(piVar35 + 0x1e);
        if ((0xb < (bVar18 - 1 & 0xff)) ||
           (cVar25 = *(char *)((long)piVar35 + 0x79),
           (byte)(&DAT_0417b531)[bVar18 - 1] <= (byte)(cVar25 - 1U))) {
          bVar18 = 1;
          cVar25 = '\x01';
        }
        FUN_0074fda4(&local_1a0,"02d-%02d",bVar18,cVar25);
        (**(code **)(local_1a0 + 0x18))(&local_1a0);
        lVar33 = 0;
        do {
          if (local_198[lVar33] == '\0') goto LAB_01d026bc;
          if (local_198[lVar33 + 1] == '\0') {
            lVar33 = lVar33 + 1;
            goto LAB_01d026bc;
          }
          if (local_198[lVar33 + 2] == '\0') {
            lVar33 = lVar33 + 2;
            goto LAB_01d026bc;
          }
          lVar33 = lVar33 + 3;
        } while (lVar33 != 0x80001);
        lVar33 = 0;
LAB_01d026bc:
        uVar30 = (uint)lVar33;
        if (0xe < (int)uVar30) {
          uVar30 = 0xf;
        }
        puVar9[6] = 0;
        puVar9[7] = 0;
        (**(code **)(local_1a0 + 0x18))(&local_1a0);
        memcpy(puVar9 + 6,local_198,(ulong)uVar30);
        uVar29 = uVar29 + 1;
      }
      lVar31 = lVar31 + 1;
    } while (lVar31 != 8);
    lVar31 = lVar7 + uVar23 * 0x4058;
    *(uint *)(puVar21 + 0x45) = uVar29;
    puVar39 = PTR_DAT_04bb2030;
    if (*(short *)(lVar31 + 0x440) == -1) {
      *(undefined4 *)(puVar21 + 0x48) = 0;
      puVar39 = PTR_DAT_04bb2030;
    }
    else {
      if (*(short *)(lVar7 + uVar23 * 0x4058 + 0x442) == -1) {
        uVar29 = 1;
      }
      else if (*(short *)(lVar7 + uVar23 * 0x4058 + 0x444) == -1) {
        uVar29 = 2;
      }
      else if (*(short *)(lVar7 + uVar23 * 0x4058 + 0x446) == -1) {
        uVar29 = 3;
      }
      else if (*(short *)(lVar7 + uVar23 * 0x4058 + 0x448) == -1) {
        uVar29 = 4;
      }
      else if (*(short *)(lVar7 + uVar23 * 0x4058 + 0x44a) == -1) {
        uVar29 = 5;
      }
      else if (*(short *)(lVar7 + uVar23 * 0x4058 + 0x44c) == -1) {
        uVar29 = 6;
      }
      else if (*(short *)(lVar7 + uVar23 * 0x4058 + 0x44e) == -1) {
        uVar29 = 7;
      }
      else if (*(short *)(lVar7 + uVar23 * 0x4058 + 0x450) == -1) {
        uVar29 = 8;
      }
      else {
        uVar29 = 9;
        if (*(short *)(lVar7 + uVar23 * 0x4058 + 0x452) != -1) {
          uVar29 = 10;
        }
      }
      puVar2 = (undefined2 *)(lVar31 + 0x440);
      puVar3 = (undefined2 *)((long)puVar21 + 0x22c);
      *(uint *)(puVar21 + 0x48) = uVar29;
      if (uVar29 == 1) {
        uVar24 = 0;
      }
      else {
        uVar24 = 0;
        puVar38 = (undefined2 *)((long)puVar21 + 0x22e);
        puVar37 = (undefined2 *)(lVar7 + uVar23 * 0x4058 + 0x442);
        do {
          puVar11 = puVar37 + -1;
          if (9 < uVar24) {
            puVar11 = puVar2;
          }
          puVar10 = puVar38 + -1;
          if (9 < uVar24) {
            puVar10 = puVar3;
          }
          *puVar10 = *puVar11;
          puVar11 = puVar38;
          puVar10 = puVar37;
          if (9 < uVar24 + 1) {
            puVar11 = puVar3;
            puVar10 = puVar2;
          }
          uVar24 = uVar24 + 2;
          puVar37 = puVar37 + 2;
          puVar38 = puVar38 + 2;
          *puVar11 = *puVar10;
        } while (uVar24 != ((ulong)uVar29 & 0xe));
      }
      if ((uVar29 & 1) != 0) {
        if (9 < uVar24) {
          uVar24 = 0;
        }
        puVar3[uVar24] = puVar2[uVar24];
      }
    }
    puVar17 = PTR_DAT_04bc0610;
    puVar12 = auStack_aa;
    if (auStack_aa <= (undefined1 *)((long)&local_c0 + 2U)) {
      puVar12 = (undefined1 *)((long)&local_c0 + 2U);
    }
    uVar29 = 0;
    iVar19 = 0;
    lVar7 = lVar7 + uVar23 * 0x4058 + 0x454;
    puVar4 = PTR_DAT_04bb2bc0 + 0x10;
    puVar5 = PTR_DAT_04bb5128 + 0x10;
    puVar6 = PTR_DAT_04bc0cd8 + 0x10;
    plVar26 = (long *)PTR_DAT_04bb49a0;
    pcVar27 = PTR_DAT_04bc0608;
    do {
      uVar16 = *(ushort *)(lVar7 + (long)iVar19 * 0x1e);
      if (uVar16 != 0xffff) {
        lVar31 = *plVar26;
        if (*(long *)(lVar31 + 0x468) != 0) {
          uVar30 = (uint)uVar16 - *(int *)(lVar31 + 0x458);
          if (*(int *)(lVar31 + 0x458) <= (int)(uint)uVar16) {
            if ((int)uVar30 < (int)*(uint *)(lVar31 + 0x460)) {
              if (*(uint *)(lVar31 + 0x460) <= uVar30) {
                uVar30 = 0;
              }
              puVar34 = *(uint **)(*(long *)(lVar31 + 0x468) + (long)(int)uVar30 * 8);
              if (puVar34 != (uint *)0x0) {
                puVar13 = (uint *)((long)(puVar21 + 0x49) + (ulong)uVar29 * 0x12 * 4);
                if (0x1ff < uVar29) {
                  puVar13 = (uint *)(puVar21 + 0x49);
                }
                if (*puVar34 == 0) {
LAB_01d02cf8:
                  uVar30 = 0;
                }
                else {
                  cVar25 = *pcVar27;
                  do {
                    if (cVar25 == '\0') {
                      cVar25 = '\x01';
                      *(undefined8 *)puVar17 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
                      *pcVar27 = '\x01';
                      *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
                    }
                    else {
                      uVar30 = *(uint *)(puVar17 + 8);
                      if (-1 < (int)uVar30) {
                        if ((ushort *)((ulong)uVar30 + (long)puVar34) == (ushort *)0x0)
                        goto LAB_01d02cf8;
                        uVar30 = (uint)*(ushort *)((ulong)uVar30 + (long)puVar34);
                        goto LAB_01d02cfc;
                      }
                      if (uVar30 != 0xffffffff) goto LAB_01d02cf8;
                    }
                    puVar36 = (uint *)(ulong)*puVar34;
                    uVar30 = 0;
                    if ((*puVar34 == 0) || (puVar34 == puVar36)) goto LAB_01d02cfc;
                    lVar31 = 0xc;
                    if (*(char *)((long)puVar34 + (10 - (long)puVar36)) != '\0') {
                      lVar31 = 0x1c;
                    }
                    lVar31 = (long)puVar34 + (lVar31 - (long)puVar36);
                    if (lVar31 == 0) goto LAB_01d02cf8;
                    uVar23 = (ulong)*(ushort *)((long)puVar34 + (8 - (long)puVar36));
                    *(undefined4 *)(puVar17 + 8) = 0xfffffffe;
                    uVar30 = 0;
                    if (uVar23 == 0) goto LAB_01d02cfc;
                    piVar35 = (int *)(lVar31 + 4);
                    while (piVar35[-1] != 0x54706054) {
                      piVar35 = piVar35 + 2;
                      uVar23 = uVar23 - 1;
                      if (uVar23 == 0) {
                        uVar30 = 0;
                        goto LAB_01d02cfc;
                      }
                    }
                    iVar8 = 0;
                    if (*piVar35 != -1) {
                      iVar8 = *piVar35;
                    }
                    *(int *)(puVar17 + 8) = iVar8;
                  } while (*puVar34 != 0);
                  uVar30 = 0;
                }
LAB_01d02cfc:
                *puVar13 = uVar30;
                *(undefined1 *)(puVar13 + 3) = 0;
                *(undefined1 *)(puVar13 + 6) = 0;
                *(undefined1 *)(puVar13 + 0x10) = 0;
                if (*puVar34 != 0) {
                  cVar25 = *pcVar27;
                  do {
                    if (cVar25 != '\0') {
                      uVar30 = *(uint *)(puVar17 + 0x28);
                      if ((int)uVar30 < 0) {
                        if ((uVar30 == 0xffffffff) && (uVar30 = *puVar34, uVar30 != 0))
                        goto LAB_01d02d58;
                      }
                      else if (((char *)((ulong)uVar30 + (long)puVar34) != (char *)0x0) &&
                              (*(char *)((ulong)uVar30 + (long)puVar34) != '\0')) {
                        lVar31 = lVar7 + (long)iVar19 * 0x1e;
                        *(undefined1 *)(puVar13 + 0x10) = 1;
                        local_1b0 = (int *)((long)puVar13 + 0x19);
                        local_1d8 = *(undefined **)(lVar31 + 2);
                        local_1d0 = *(undefined8 **)(lVar31 + 10);
                        local_1c8 = *(ulong *)(lVar31 + 0x12);
                        local_1c0 = *(uint *)(lVar31 + 0x1a);
                        *(undefined1 *)((long)puVar13 + 0x37) = 0;
                        local_178 = 0xffffffff;
                        local_18c = 0;
                        local_11d = 0;
                        local_15c[0] = 0;
                        local_c5 = 0;
                        local_104[0] = 0;
                        local_190 = 0xb;
                        local_1a8 = 0x1f;
                        uStack_b0 = 0;
                        local_188 = 0xffffffff;
                        uStack_180 = 0xffffffff00000000;
                        local_160 = 0x40;
                        local_108 = 0x40;
                        local_c0 = 0;
                        uStack_b8 = 0;
                        local_b2 = 0;
                        local_1b8 = puVar39 + 0x10;
                        local_1a0 = puVar5;
                        local_198 = (char *)&local_c0;
                        local_170 = puVar4;
                        puStack_168 = local_15c;
                        local_118 = puVar4;
                        puStack_110 = local_104;
                        memset(&local_c0,0,
                               (ulong)(puVar12 + (-0xe1 - (long)&local_1a0)) & 0xfffffffffffffffc |
                               2);
                        local_a8[0] = 10;
                        local_a0 = (long)&local_1d8 + 4;
                        FUN_0082b014(&local_1a0);
                        local_6c = 0;
                        local_70 = 1;
                        local_80 = 0;
                        uStack_78 = 0;
                        local_90 = 0;
                        uStack_88 = 0;
                        local_98 = puVar6;
                        FUN_02906b00(&local_98,&local_1a0,local_a8);
                        uVar41 = (**(code **)(local_1a0 + 0x18))(&local_1a0);
                        (**(code **)(local_1b8 + 0x18))(&local_1b8);
                        local_a8[0] = FUN_038d4f60(&local_98,local_1b0,local_1a8,uVar41,0xffffffff);
                        if (local_a8[0] != 0) {
                          *(undefined1 *)local_1b0 = 0;
                          plVar26 = (long *)PTR_DAT_04bb49a0;
                          pcVar27 = PTR_DAT_04bc0608;
                          goto LAB_01d02bd0;
                        }
                        uVar30 = local_1c0;
                        if (1 < local_1c0) {
                          uVar30 = 0;
                        }
                        local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,uVar30);
                        *(char *)(puVar13 + 0xe) = (char)uVar30;
                        puVar13[0xf] = (uint)local_1d8;
                        plVar26 = (long *)PTR_DAT_04bb49a0;
                        pcVar27 = PTR_DAT_04bc0608;
                        goto LAB_01d02bc8;
                      }
LAB_01d02f84:
                      uVar30 = *puVar34;
                      if (uVar30 != 0) {
                        uVar23 = (ulong)*(uint *)(puVar17 + 0x2c);
                        goto LAB_01d02fa0;
                      }
                      break;
                    }
                    cVar25 = '\x01';
                    *(undefined8 *)puVar17 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
                    *pcVar27 = '\x01';
                    *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
                    uVar30 = *puVar34;
                    if (uVar30 == 0) goto LAB_01d02f84;
LAB_01d02d58:
                    puVar36 = (uint *)(ulong)uVar30;
                    if (puVar34 == puVar36) goto LAB_01d02f84;
                    lVar31 = 0xc;
                    if (*(char *)((long)puVar34 + (10 - (long)puVar36)) != '\0') {
                      lVar31 = 0x1c;
                    }
                    lVar31 = (long)puVar34 + (lVar31 - (long)puVar36);
                    if (lVar31 == 0) goto LAB_01d02f84;
                    uVar23 = (ulong)*(ushort *)((long)puVar34 + (8 - (long)puVar36));
                    *(undefined4 *)(puVar17 + 0x28) = 0xfffffffe;
                    if (uVar23 == 0) goto LAB_01d02f84;
                    piVar35 = (int *)(lVar31 + 4);
                    while (piVar35[-1] != -0x56e5e378) {
                      piVar35 = piVar35 + 2;
                      uVar23 = uVar23 - 1;
                      if (uVar23 == 0) goto LAB_01d02f84;
                    }
                    iVar8 = 0;
                    if (*piVar35 != -1) {
                      iVar8 = *piVar35;
                    }
                    *(int *)(puVar17 + 0x28) = iVar8;
                  } while (*puVar34 != 0);
                }
LAB_01d03040:
                *(undefined1 *)(puVar13 + 3) = 1;
                uVar30 = *puVar34;
                if (uVar30 != 0) {
                  cVar25 = *pcVar27;
                  do {
                    if (cVar25 == '\0') {
                      cVar25 = '\x01';
                      *(undefined8 *)puVar17 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
                      *pcVar27 = '\x01';
                      *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
                      uVar30 = *puVar34;
                    }
                    else {
                      uVar14 = *(uint *)(puVar17 + 0x10);
                      if (-1 < (int)uVar14) {
                        if (((byte *)((ulong)uVar14 + (long)puVar34) != (byte *)0x0) &&
                           (bVar18 = *(byte *)((ulong)uVar14 + (long)puVar34), bVar18 < 0x12))
                        goto LAB_01d03124;
                        break;
                      }
                      if (uVar14 != 0xffffffff) break;
                    }
                    puVar36 = (uint *)(ulong)uVar30;
                    bVar18 = 0;
                    if ((puVar36 == (uint *)0x0) || (bVar18 = 0, puVar34 == puVar36))
                    goto LAB_01d03124;
                    lVar31 = 0xc;
                    if (*(char *)((long)puVar34 + (10 - (long)puVar36)) != '\0') {
                      lVar31 = 0x1c;
                    }
                    lVar31 = (long)puVar34 + (lVar31 - (long)puVar36);
                    bVar18 = 0;
                    if (lVar31 == 0) goto LAB_01d03124;
                    uVar23 = (ulong)*(ushort *)((long)puVar34 + (8 - (long)puVar36));
                    *(undefined4 *)(puVar17 + 0x10) = 0xfffffffe;
                    if (uVar23 == 0) break;
                    piVar35 = (int *)(lVar31 + 4);
                    while (piVar35[-1] != -0x1c342f70) {
                      piVar35 = piVar35 + 2;
                      uVar23 = uVar23 - 1;
                      if (uVar23 == 0) goto LAB_01d03120;
                    }
                    iVar8 = 0;
                    if (*piVar35 != -1) {
                      iVar8 = *piVar35;
                    }
                    *(int *)(puVar17 + 0x10) = iVar8;
                    uVar30 = *puVar34;
                    if (uVar30 == 0) break;
                  } while( true );
                }
LAB_01d03120:
                bVar18 = 0;
LAB_01d03124:
                uVar28 = 0;
                if (bVar18 != 0) {
                  uVar28 = *(undefined2 *)(lVar7 + (long)iVar19 * 0x1e + 2);
                }
                *(undefined2 *)(puVar13 + 1) = uVar28;
                uVar30 = *puVar34;
                if (uVar30 != 0) {
                  cVar25 = *pcVar27;
                  do {
                    if (cVar25 == '\0') {
                      cVar25 = '\x01';
                      *(undefined8 *)puVar17 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
                      *pcVar27 = '\x01';
                      *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
                      uVar30 = *puVar34;
                    }
                    else {
                      uVar14 = *(uint *)(puVar17 + 0x14);
                      if (-1 < (int)uVar14) {
                        if (((byte *)((ulong)uVar14 + (long)puVar34) != (byte *)0x0) &&
                           (bVar18 = *(byte *)((ulong)uVar14 + (long)puVar34), bVar18 < 0x12))
                        goto LAB_01d03234;
                        break;
                      }
                      if (uVar14 != 0xffffffff) break;
                    }
                    puVar36 = (uint *)(ulong)uVar30;
                    bVar18 = 0;
                    if ((puVar36 == (uint *)0x0) || (bVar18 = 0, puVar34 == puVar36))
                    goto LAB_01d03234;
                    lVar31 = 0xc;
                    if (*(char *)((long)puVar34 + (10 - (long)puVar36)) != '\0') {
                      lVar31 = 0x1c;
                    }
                    lVar31 = (long)puVar34 + (lVar31 - (long)puVar36);
                    bVar18 = 0;
                    if (lVar31 == 0) goto LAB_01d03234;
                    uVar23 = (ulong)*(ushort *)((long)puVar34 + (8 - (long)puVar36));
                    *(undefined4 *)(puVar17 + 0x14) = 0xfffffffe;
                    if (uVar23 == 0) break;
                    piVar35 = (int *)(lVar31 + 4);
                    while (piVar35[-1] != 0x5b77b7f5) {
                      piVar35 = piVar35 + 2;
                      uVar23 = uVar23 - 1;
                      if (uVar23 == 0) {
                        bVar18 = 0;
                        goto LAB_01d03234;
                      }
                    }
                    iVar8 = 0;
                    if (*piVar35 != -1) {
                      iVar8 = *piVar35;
                    }
                    *(int *)(puVar17 + 0x14) = iVar8;
                    uVar30 = *puVar34;
                  } while (uVar30 != 0);
                }
                bVar18 = 0;
LAB_01d03234:
                uVar28 = 0;
                if (bVar18 != 0) {
                  uVar28 = *(undefined2 *)(lVar7 + (long)iVar19 * 0x1e + 4);
                }
                *(undefined2 *)((long)puVar13 + 6) = uVar28;
                uVar30 = *puVar34;
                if (uVar30 != 0) {
                  cVar25 = *pcVar27;
                  do {
                    if (cVar25 == '\0') {
                      cVar25 = '\x01';
                      *(undefined8 *)puVar17 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
                      *pcVar27 = '\x01';
                      *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
                      uVar30 = *puVar34;
                    }
                    else {
                      uVar14 = *(uint *)(puVar17 + 0x18);
                      if (-1 < (int)uVar14) {
                        if (((byte *)((ulong)uVar14 + (long)puVar34) != (byte *)0x0) &&
                           (bVar18 = *(byte *)((ulong)uVar14 + (long)puVar34), bVar18 < 0x12))
                        goto LAB_01d03324;
                        break;
                      }
                      if (uVar14 != 0xffffffff) break;
                    }
                    puVar36 = (uint *)(ulong)uVar30;
                    bVar18 = 0;
                    if ((puVar36 == (uint *)0x0) || (bVar18 = 0, puVar34 == puVar36))
                    goto LAB_01d03324;
                    lVar31 = 0xc;
                    if (*(char *)((long)puVar34 + (10 - (long)puVar36)) != '\0') {
                      lVar31 = 0x1c;
                    }
                    lVar31 = (long)puVar34 + (lVar31 - (long)puVar36);
                    bVar18 = 0;
                    if (lVar31 == 0) goto LAB_01d03324;
                    uVar23 = (ulong)*(ushort *)((long)puVar34 + (8 - (long)puVar36));
                    *(undefined4 *)(puVar17 + 0x18) = 0xfffffffe;
                    if (uVar23 == 0) break;
                    piVar35 = (int *)(lVar31 + 4);
                    while (piVar35[-1] != 0x49c2181b) {
                      piVar35 = piVar35 + 2;
                      uVar23 = uVar23 - 1;
                      if (uVar23 == 0) goto LAB_01d03320;
                    }
                    iVar8 = 0;
                    if (*piVar35 != -1) {
                      iVar8 = *piVar35;
                    }
                    *(int *)(puVar17 + 0x18) = iVar8;
                    uVar30 = *puVar34;
                    if (uVar30 == 0) break;
                  } while( true );
                }
LAB_01d03320:
                bVar18 = 0;
LAB_01d03324:
                uVar28 = 0;
                if (bVar18 != 0) {
                  uVar28 = *(undefined2 *)(lVar7 + (long)iVar19 * 0x1e + 6);
                }
                *(undefined2 *)(puVar13 + 2) = uVar28;
                uVar30 = *puVar34;
                if (uVar30 != 0) {
                  cVar25 = *pcVar27;
                  do {
                    if (cVar25 == '\0') {
                      cVar25 = '\x01';
                      *(undefined8 *)puVar17 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
                      *pcVar27 = '\x01';
                      *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
                      uVar30 = *puVar34;
                    }
                    else {
                      uVar14 = *(uint *)(puVar17 + 0x1c);
                      if (-1 < (int)uVar14) {
                        if (((byte *)((ulong)uVar14 + (long)puVar34) != (byte *)0x0) &&
                           (bVar18 = *(byte *)((ulong)uVar14 + (long)puVar34), uVar30 = (uint)bVar18
                           , bVar18 < 0x12)) goto LAB_01d03434;
                        break;
                      }
                      if (uVar14 != 0xffffffff) break;
                    }
                    puVar36 = (uint *)(ulong)uVar30;
                    uVar30 = 0;
                    if ((puVar36 == (uint *)0x0) || (uVar30 = 0, puVar34 == puVar36))
                    goto LAB_01d03434;
                    lVar31 = 0xc;
                    if (*(char *)((long)puVar34 + (10 - (long)puVar36)) != '\0') {
                      lVar31 = 0x1c;
                    }
                    lVar31 = (long)puVar34 + (lVar31 - (long)puVar36);
                    uVar30 = 0;
                    if (lVar31 == 0) goto LAB_01d03434;
                    uVar23 = (ulong)*(ushort *)((long)puVar34 + (8 - (long)puVar36));
                    *(undefined4 *)(puVar17 + 0x1c) = 0xfffffffe;
                    if (uVar23 == 0) break;
                    piVar35 = (int *)(lVar31 + 4);
                    while (piVar35[-1] != -0xe818082) {
                      piVar35 = piVar35 + 2;
                      uVar23 = uVar23 - 1;
                      if (uVar23 == 0) {
                        uVar30 = 0;
                        goto LAB_01d03434;
                      }
                    }
                    iVar8 = 0;
                    if (*piVar35 != -1) {
                      iVar8 = *piVar35;
                    }
                    *(int *)(puVar17 + 0x1c) = iVar8;
                    uVar30 = *puVar34;
                  } while (uVar30 != 0);
                }
                uVar30 = 0;
LAB_01d03434:
                local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,uVar30);
                uVar28 = 0;
                if (uVar30 != 0) {
                  uVar28 = *(undefined2 *)(lVar7 + (long)iVar19 * 0x1e + 8);
                }
                *(undefined2 *)((long)puVar13 + 10) = uVar28;
LAB_01d02bc8:
                uVar29 = uVar29 + 1;
              }
            }
          }
        }
      }
LAB_01d02bd0:
      iVar19 = iVar19 + 1;
    } while (iVar19 != 0x200);
    *(uint *)(puVar21 + 0x1249) = uVar29;
    *puVar1 = *puVar1 + 1;
    uVar23 = nn::time::IsValidDate
                       ((uint)*puVar40,(uint)(byte)puVar40[1],(uint)*(byte *)((long)puVar40 + 3));
    if ((((uVar23 & 1) != 0) && (*puVar40 == local_1bc)) && ((byte)puVar40[1] == local_1ba)) {
      if (*(byte *)((long)puVar40 + 3) != local_1b9) goto LAB_01d02450;
      uVar23 = 0;
      uVar29 = 0;
      do {
        piVar35 = (int *)((long)puVar40 + uVar23);
        uVar23 = uVar23 + 4;
        uVar29 = (*piVar35 * 0x16a88000 | (uint)(*piVar35 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                 uVar29;
        uVar29 = (uVar29 >> 0x13 | uVar29 << 0xd) * 5 + 0xe6546b64;
      } while (uVar23 < 0x4055);
      uVar29 = (uVar29 ^ uVar29 >> 0x10 ^ 0x4058) * -0x7a143595;
      uVar29 = (uVar29 ^ uVar29 >> 0xd) * -0x3d4d51cb;
      *param_2 = uVar29 ^ uVar29 >> 0x10;
    }
joined_r0x01d035c4:
    uVar41 = 0;
  }
joined_r0x01d035c4:
  if ((((uVar22 & 1) != 0) && (*(long *)(&LAB_00284e28 + lVar20) != 0)) &&
     (puVar21 = *(undefined8 **)(*(long *)(&LAB_00284e28 + lVar20) + 8),
     puVar21 != (undefined8 *)0x0)) {
    (**(code **)*puVar21)();
  }
  return uVar41;
LAB_01d02fa0:
  if (-1 < (int)uVar23) {
    if (((char *)(uVar23 + (long)puVar34) != (char *)0x0) &&
       (*(char *)(uVar23 + (long)puVar34) != '\0')) {
      *(undefined1 *)(puVar13 + 6) = 1;
      *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(lVar7 + (long)iVar19 * 0x1e + 2);
      goto LAB_01d02bc8;
    }
    goto LAB_01d03040;
  }
  if ((uVar23 != 0xffffffff) || (lVar31 = (long)puVar34 - (ulong)uVar30, lVar31 == 0))
  goto LAB_01d03040;
  lVar32 = 0xc;
  if (*(char *)(lVar31 + 10) != '\0') {
    lVar32 = 0x1c;
  }
  if (lVar32 + lVar31 == 0) goto LAB_01d03040;
  uVar23 = (ulong)*(ushort *)(lVar31 + 8);
  *(undefined4 *)(puVar17 + 0x2c) = 0xfffffffe;
  if (uVar23 == 0) goto LAB_01d03040;
  puVar36 = (uint *)(lVar32 + lVar31 + 4);
  while (puVar36[-1] != 0x83da3b2a) {
    puVar36 = puVar36 + 2;
    uVar23 = uVar23 - 1;
    if (uVar23 == 0) goto LAB_01d03040;
  }
  uVar23 = 0;
  if (*puVar36 != 0xffffffff) {
    uVar23 = (ulong)*puVar36;
  }
  *(int *)(puVar17 + 0x2c) = (int)uVar23;
  uVar30 = *puVar34;
  if (uVar30 == 0) goto LAB_01d03040;
  goto LAB_01d02fa0;
}

