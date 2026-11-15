
/* WARNING: Removing unreachable block (ram,0x01fdca18) */
/* WARNING: Removing unreachable block (ram,0x01fdc7e8) */

void FUN_01fda3b0(long param_1,uint param_2)

{
  uint *puVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  int *piVar7;
  int *piVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined8 uVar20;
  long *plVar21;
  long *plVar22;
  int iVar23;
  long lVar24;
  float *pfVar25;
  long lVar26;
  int iVar27;
  long lVar28;
  uint *puVar29;
  ulong uVar30;
  int iVar31;
  ulong uVar32;
  int *piVar33;
  ulong uVar34;
  char cVar35;
  undefined8 *puVar36;
  uint *puVar37;
  ulong uVar38;
  ulong uVar39;
  long lVar40;
  int *piVar41;
  uint *puVar42;
  float fVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  int local_5d44;
  undefined8 local_5d40;
  undefined8 local_5d38;
  float local_5d30;
  float fStack_5d2c;
  undefined8 local_5d28;
  undefined8 *local_5d20;
  undefined8 local_5d18;
  undefined8 local_5d10;
  undefined8 local_5d08;
  undefined8 local_5d00;
  undefined8 local_5cf8;
  undefined4 local_5cf0;
  byte local_5cec;
  undefined8 local_5ce8;
  undefined8 local_5ce0;
  undefined1 local_5cd8;
  undefined4 local_5cd4;
  undefined1 auStack_5ccc [8];
  uint local_5cc4;
  undefined4 local_5cc0 [2];
  long local_5cb8;
  long lStack_5cb0;
  long local_5ca0;
  undefined8 local_5c98;
  float local_5c90;
  undefined8 local_5c88;
  float local_5c80;
  undefined4 local_5c7c;
  undefined1 local_5c78;
  float local_5c74;
  float fStack_5c70;
  float local_5c6c;
  undefined1 local_5c68;
  undefined4 local_5c60;
  undefined4 local_5c5c;
  undefined1 local_5c58;
  undefined1 auStack_5c50 [24];
  int local_5c38;
  int local_5c34;
  int local_5c28;
  int local_5c24;
  float local_5c20;
  undefined4 local_5c1c;
  float local_5c18;
  undefined4 local_5c10;
  undefined4 local_5c0c;
  undefined1 local_5be8;
  undefined1 auStack_5be4 [20];
  undefined4 local_5bd0;
  undefined8 *local_5ba8;
  int local_5ba0;
  uint local_5b14;
  long local_5b10;
  undefined8 local_5b08;
  undefined8 *local_5b00;
  long *local_5af8;
  long *local_5af0;
  long local_5ae8 [2];
  long local_5ad8;
  long local_5ad0;
  undefined1 auStack_5ac8 [1400];
  undefined8 local_5550;
  undefined8 auStack_5548 [180];
  long local_4fa8;
  undefined8 *local_4fa0;
  int *local_4f98;
  ulong *local_4f90;
  uint *local_4f88;
  uint *local_4f80;
  undefined8 local_4f78;
  undefined1 *local_4f70;
  long *local_4f68;
  long *local_4f60;
  long local_4f58 [2];
  long local_4f48;
  long local_4f40;
  undefined1 auStack_4f38 [1560];
  undefined8 local_4920;
  undefined1 local_4918 [1600];
  undefined8 local_42d8;
  undefined8 local_42d0;
  long *local_42c8;
  ulong *local_42c0;
  long local_42b8 [2];
  long local_42a8;
  long local_42a0;
  undefined1 auStack_4298 [1560];
  undefined8 local_3c80;
  undefined1 local_3c78 [1600];
  ulong local_3638;
  undefined **local_3630;
  long lStack_3628;
  float local_3610 [2];
  undefined8 uStack_3608;
  undefined4 local_3600 [196];
  undefined8 local_32f0;
  undefined8 local_32e8;
  long *local_32e0;
  long *local_32d8;
  long local_32d0 [2];
  long local_32c0;
  long local_32b8;
  undefined1 auStack_32b0 [1560];
  undefined8 local_2c98;
  undefined8 local_2c90 [200];
  undefined8 local_2650;
  undefined8 local_2648;
  undefined8 local_2640;
  undefined8 *local_2638;
  undefined8 local_2630;
  long alStack_2608 [990];
  undefined8 local_718;
  undefined8 auStack_6f0 [200];
  uint local_ac [3];
  
  puVar1 = (uint *)(param_1 + 0x123bc);
  *puVar1 = param_2;
  *(undefined4 *)(param_1 + 0xaf8c) = 0x10;
  puVar10 = PTR_DAT_04bb4960;
  lVar28 = *(long *)PTR_DAT_04bb4960;
  local_5b14 = param_2;
  if (lVar28 == 0) {
LAB_01fda648:
    bVar13 = (*(ushort *)(param_1 + 0x1242c) >> 8 & 1) != 0;
    if (bVar13) {
      uVar20 = 0x5b;
    }
    else {
      uVar20 = 1;
    }
    FUN_01ea5580(param_1,uVar20,0,!bVar13);
    return;
  }
  if ((int)*(uint *)(lVar28 + 0x5c0) < 1) {
    if ((((*(long *)(lVar28 + 0x4b0) == 0) ||
         (puVar42 = *(uint **)(*(long *)(lVar28 + 0x4b0) + 8), puVar42 == (uint *)0x0)) ||
        ((param_2 < *(uint *)(lVar28 + 0x4c8) &&
         (*(char *)(*(long *)(lVar28 + 0x4d0) + (long)(int)param_2) == '\0')))) ||
       (((*puVar42 <= param_2 || (puVar42[1] == 0)) || ((ushort)puVar42[2] == 0))))
    goto LAB_01fda648;
    iVar16 = 0xc;
    if (*(char *)((long)puVar42 + 10) != '\0') {
      iVar16 = 0x1c;
    }
    puVar42 = (uint *)((ulong)(puVar42[1] * param_2 + (uint)(ushort)puVar42[2] * 8 + iVar16) +
                      (long)puVar42);
  }
  else {
    if (*(uint *)(lVar28 + 0x5c0) <= param_2) goto LAB_01fda648;
    if (*(uint *)(lVar28 + 0x5b0) <= param_2) {
      param_2 = 0;
    }
    puVar42 = *(uint **)(*(long *)(lVar28 + 0x5b8) + (ulong)param_2 * 8);
  }
  if (puVar42 == (uint *)0x0) goto LAB_01fda648;
  *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) & 0xfbffffffffffffff;
  FUN_01fe2dd0(param_1,&local_5b14);
  lVar28 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  local_2650 = (undefined *)
               CONCAT44(local_2650._4_4_,*(undefined4 *)(*(long *)(param_1 + 8) + 0x230));
  FUN_021e8490(&local_2650,lVar28 + 0x278,param_1 + 0x188,1,0);
  FUN_01e63f1c(local_5cc0);
  uVar18 = *puVar42;
  if (uVar18 == 0 || puVar42 == (uint *)(ulong)uVar18) {
LAB_01fda4ac:
    local_5cc4 = 0;
  }
  else {
    puVar37 = (uint *)((long)puVar42 - (long)(ulong)uVar18);
    local_5cc4 = 0;
    if (*puVar37 != 0) {
      uVar18 = puVar37[1];
      if ((uVar18 != 0) && ((ulong)(ushort)puVar37[2] != 0)) {
        lVar40 = 0xc;
        if (*(char *)((long)puVar37 + 10) != '\0') {
          lVar40 = 0x1c;
        }
        lVar40 = (long)puVar37 + lVar40 + (ulong)(ushort)puVar37[2] * 8;
        if (lVar40 != 0) {
          uVar17 = 0;
          if ((ulong)uVar18 != 0) {
            uVar17 = (uint)((ulong)((long)puVar42 - lVar40) / (ulong)uVar18);
          }
          if (*puVar37 <= uVar17) {
            uVar17 = 0xffffffff;
          }
          if ((uVar17 < *(uint *)PTR_DAT_04bc23d0) &&
             (local_5cc4 = (uint)*(ushort *)
                                  (*(long *)(PTR_DAT_04bc23d0 + 8) + (long)(int)uVar17 * 2),
             local_5cc4 < 0xd)) goto LAB_01fda4b0;
        }
      }
      goto LAB_01fda4ac;
    }
  }
LAB_01fda4b0:
  if (local_5cc4 == 10) {
    local_5d40 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_5d40);
    fStack_5d2c = (float)((uint)fStack_5d2c & 0xffffff00);
    local_5d18 = (undefined *)0x0;
    local_5d28 = PTR_DAT_04bbc1a0 + 0x10;
    local_5d20 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
    local_5d08 = (undefined *)0x0;
    local_5d10 = local_5d20;
    if (*(int *)(*(long *)(param_1 + 8) + 0x750) == 3) {
LAB_01fdb13c:
      FUN_01fe41d0(param_1,local_5cc0);
      goto LAB_01fdc2b0;
    }
    FUN_01fd6d50(auStack_5ccc,puVar1);
    local_5b10 = *(long *)PTR_DAT_04bb4970;
    if (local_5b10 == 0) goto LAB_01fdd770;
    lVar28 = 0xc6;
    local_2648 = (undefined8 *)0x0;
    local_2640 = &local_2630;
    local_2650 = (undefined *)0x0;
    local_2630 = alStack_2608;
    plVar21 = local_2630;
    do {
      lVar28 = lVar28 + -2;
      *plVar21 = (long)(plVar21 + 5);
      plVar21[5] = (long)(plVar21 + 10);
      plVar21 = plVar21 + 10;
    } while (lVar28 != 0);
    local_718 = 0;
    if (auStack_6f0 != (undefined8 *)0x0) {
      local_2650 = (undefined *)0xc800000000;
      local_2648 = auStack_6f0;
    }
    local_2638 = local_2640;
    FUN_01521078(&local_2650);
    puVar10 = PTR_DAT_04bb27c0;
    local_32e8 = (undefined8 *)0x0;
    local_32e0 = local_32d0;
    local_32f0 = (long *)0x0;
    lVar28 = 0;
    while( true ) {
      plVar21 = (long *)((long)local_32d0 + lVar28 + 8);
      *plVar21 = (long)local_32d0 + lVar28 + 0x10;
      *(long **)((long)local_32d0 + lVar28) = plVar21;
      *(undefined1 **)((long)local_32d0 + lVar28 + 0x10) = auStack_32b0 + lVar28 + -8;
      if (lVar28 == 0x620) break;
      *(undefined1 **)(auStack_32b0 + lVar28 + -8) = auStack_32b0 + lVar28;
      lVar28 = lVar28 + 0x20;
    }
    local_2c98 = 0;
    if (local_2c90 != (undefined8 *)0x0) {
      local_32f0 = (long *)0xc800000000;
      local_32e8 = local_2c90;
    }
    lVar28 = 0;
    local_32d8 = local_32e0;
    do {
      lVar40 = lVar28 + 0x14;
      *(undefined4 *)((long)local_3600 + lVar28) = 0x7f7fffff;
      *(undefined8 *)((long)local_3610 + lVar28) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)local_3610 + lVar28 + 8) = 0x7f7fffff7f7fffff;
      lVar28 = lVar40;
    } while (lVar40 != 800);
    lVar28 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    local_3638 = *(ulong *)(lVar28 + 0x278);
    local_3630 = (undefined **)CONCAT44(local_3630._4_4_,*(undefined4 *)(lVar28 + 0x280));
    if (*(int *)(param_1 + 0x123c0) == 0) {
      puVar42 = (uint *)PTR_DAT_04bb3238;
    }
    else {
      puVar42 = (uint *)**(undefined8 **)(param_1 + 0x123c8);
    }
    uVar18 = *puVar42;
    if ((uVar18 != 0) && (lVar28 = *(long *)PTR_DAT_04bb27c0, lVar28 != 0)) {
      lVar40 = *(long *)(*(long *)(*(long *)(lVar28 + 0x1c0) + 8) +
                        ((ulong)(uVar18 >> 0x11) & 0x7ff8));
      if ((lVar40 == 0) ||
         (((*(uint *)(lVar40 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar40 + 0x230) != uVar18)))) {
        lVar40 = 0;
      }
      if (*(int *)(lVar28 + 0x288) == 1 || *(int *)(lVar28 + 0x288) == -1) {
        plVar21 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar28 = *(long *)puVar10;
        iVar16 = (**(code **)(*plVar21 + 0x60))();
        if (iVar16 < 0x11) {
          uVar18 = 1;
        }
        else {
          if (4 < *(uint *)(lVar28 + 0x5e8)) goto LAB_01fdb2ac;
          uVar18 = 0x1aU >> (ulong)(*(uint *)(lVar28 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_01fdb2ac:
        uVar18 = 0;
      }
      if (lVar40 != 0) {
        uVar18 = uVar18 ^ 1;
        if (*(int *)(lVar40 + 0x150) != 1) {
          uVar18 = 1;
        }
        if (uVar18 == 0) {
          local_3638 = *(ulong *)(*(long *)(lVar40 + 0x68) + 0x278);
          local_3630 = (undefined **)
                       CONCAT44(local_3630._4_4_,*(undefined4 *)(*(long *)(lVar40 + 0x68) + 0x280));
        }
      }
    }
    local_42d8 = &PTR_LAB_04a6ab88;
    local_42d0 = (long *)auStack_5ccc;
    local_42c8 = &local_5b10;
    FUN_01fe1430(&local_32f0,local_3610,&local_3638,&local_2650,&local_42d8);
    puVar10 = PTR_DAT_04bb7ea0;
    if (1 < (int)(float)local_32f0) {
      uVar17 = 0;
      uVar18 = (int)(float)local_32f0 - 1;
      do {
        if ((int)uVar18 <= (int)uVar17) break;
        puVar42 = (uint *)local_32e8[uVar17];
        uVar32 = (ulong)uVar17;
        uVar34 = (ulong)uVar18;
        uVar30 = uVar32;
        uVar18 = uVar17;
        do {
          uVar38 = (ulong)*puVar42;
          puVar37 = (uint *)local_32e8[uVar30 + 1];
          if (199 < *puVar42) {
            uVar38 = 0;
          }
          uVar39 = (ulong)*puVar37;
          if (199 < *puVar37) {
            uVar39 = 0;
          }
          if (0.0 < local_3610[uVar38] - local_3610[uVar39]) {
            uVar18 = (uint)uVar30;
            local_32e8[uVar30 + 1] = puVar42;
            local_32e8[uVar30] = puVar37;
          }
          else {
            puVar42 = puVar37;
          }
          uVar30 = uVar30 + 1;
        } while (uVar34 != uVar30);
        if ((int)uVar18 <= (int)uVar17) break;
        puVar42 = (uint *)local_32e8[uVar18];
        uVar30 = (ulong)uVar18;
        uVar17 = uVar18;
        do {
          uVar34 = (ulong)*puVar42;
          puVar37 = (uint *)local_32e8[uVar30 - 1];
          if (199 < *puVar42) {
            uVar34 = 0;
          }
          uVar38 = (ulong)*puVar37;
          if (199 < *puVar37) {
            uVar38 = 0;
          }
          if (local_3610[uVar34] - local_3610[uVar38] < 0.0) {
            uVar17 = (uint)uVar30;
            local_32e8[uVar30 - 1] = puVar42;
            local_32e8[uVar30] = puVar37;
          }
          else {
            puVar42 = puVar37;
          }
          uVar30 = uVar30 - 1;
        } while ((long)uVar32 < (long)uVar30);
      } while (uVar17 != uVar18);
    }
    iVar16 = *(int *)(*(long *)PTR_DAT_04bb4e28 + 0xe0);
    if (iVar16 != 0) {
      lVar28 = 0;
      lVar40 = (long)iVar16 << 3;
      lVar24 = *(long *)(*(long *)PTR_DAT_04bb4e28 + 0xe8);
      do {
        if (*(int *)(*(long *)(param_1 + 8) + 0x230) == *(int *)(*(long *)(lVar24 + lVar28 * 8) + 8)
           ) {
          uVar18 = *(uint *)(*(long *)(lVar24 + lVar28 * 8) + 0xd8);
          goto LAB_01fdbc90;
        }
        lVar28 = lVar28 + 1;
        lVar40 = lVar40 + -8;
      } while (lVar40 != 0);
    }
    uVar18 = 0;
LAB_01fdbc90:
    local_42d0 = (long *)0x0;
    local_42d8 = (undefined **)0x0;
    local_42c8 = local_42b8;
    lVar28 = 0;
    while( true ) {
      plVar21 = (long *)((long)local_42b8 + lVar28 + 8);
      *plVar21 = (long)local_42b8 + lVar28 + 0x10;
      *(long **)((long)local_42b8 + lVar28) = plVar21;
      *(undefined1 **)((long)local_42b8 + lVar28 + 0x10) = auStack_4298 + lVar28 + -8;
      if (lVar28 == 0x620) break;
      *(undefined1 **)(auStack_4298 + lVar28 + -8) = auStack_4298 + lVar28;
      lVar28 = lVar28 + 0x20;
    }
    local_3c80 = 0;
    if (local_3c78 != (undefined1 *)0x0) {
      local_42d8 = (undefined **)0xc800000000;
      local_42d0 = (long *)local_3c78;
    }
    local_4f70 = (undefined1 *)0x0;
    local_4f68 = local_4f58;
    local_4f78 = 0;
    lVar28 = 0;
    while( true ) {
      plVar21 = (long *)((long)local_4f58 + lVar28 + 8);
      *plVar21 = (long)local_4f58 + lVar28 + 0x10;
      *(long **)((long)local_4f58 + lVar28) = plVar21;
      *(undefined1 **)((long)local_4f58 + lVar28 + 0x10) = auStack_4f38 + lVar28 + -8;
      if (lVar28 == 0x620) break;
      *(undefined1 **)(auStack_4f38 + lVar28 + -8) = auStack_4f38 + lVar28;
      lVar28 = lVar28 + 0x20;
    }
    local_4920 = 0;
    if (local_4918 != (undefined1 *)0x0) {
      local_4f78 = 0xc800000000;
      local_4f70 = local_4918;
    }
    local_4f60 = local_4f68;
    local_42c0 = (ulong *)local_42c8;
    if ((float)local_32f0 != 0.0) {
      puVar3 = local_32e8 + (int)(float)local_32f0;
      puVar36 = local_32e8;
      do {
        lVar28 = local_5b10;
        piVar41 = (int *)*puVar36;
        if ((*(long *)(local_5b10 + 0xb0) != 0) &&
           (*(long *)(*(long *)(local_5b10 + 0xb0) + 8) != 0 && *(short *)local_2648[*piVar41] != -2
           )) {
          uVar17 = FUN_0277d6c4();
          plVar21 = local_42c8;
          uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
          if ((uVar17 < *(uint *)(lVar28 + 0x1d8)) &&
             (puVar42 = *(uint **)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar17 * 8),
             puVar42 != (uint *)0x0)) {
            local_5b08 = CONCAT44(local_5b08._4_4_,uVar18);
            uVar17 = *puVar42;
            if (uVar17 != 0) {
              cVar35 = *PTR_DAT_04bb7e98;
              while( true ) {
                puVar9 = PTR_DAT_04bb7e98;
                if (cVar35 == '\0') {
                  cVar35 = '\x01';
                  *(undefined8 *)puVar10 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
                  *puVar9 = 1;
                  *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x58) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x78) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x80) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x88) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x90) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x98) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0xa0) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0xa8) = 0xffffffffffffffff;
                  uVar17 = *puVar42;
                }
                else {
                  uVar4 = *(uint *)(puVar10 + 0xa4);
                  if (-1 < (int)uVar4) {
                    if ((ulong)uVar4 + (long)puVar42 != 0) {
                      uVar17 = uVar18 + 7;
                      if (-1 < (int)uVar18) {
                        uVar17 = uVar18;
                      }
                      if ((*(byte *)((ulong)uVar4 + (long)puVar42 + (ulong)(uint)((int)uVar17 >> 3))
                           >> (ulong)(uVar18 & 7) & 1) != 0) {
                        if ((int)(uint)local_42d8 < local_42d8._4_4_) {
                          if (local_42c8 != (long *)0x0) {
                            local_42c8 = (long *)*local_42c8;
                          }
                          *(int *)plVar21 = *piVar41;
                          if ((int)(uint)local_42d8 < local_42d8._4_4_) {
                            *(long **)((long)local_42d0 + (long)(int)(uint)local_42d8 * 8) = plVar21
                            ;
                            local_42d8 = (undefined **)
                                         CONCAT44(local_42d8._4_4_,(uint)local_42d8 + 1);
                          }
                        }
                        goto LAB_01fdbda0;
                      }
                    }
                    break;
                  }
                  if (uVar4 != 0xffffffff) break;
                }
                puVar37 = (uint *)(ulong)uVar17;
                if ((puVar37 == (uint *)0x0) || (puVar42 == puVar37)) break;
                lVar28 = 0xc;
                if (*(char *)((long)puVar42 + (10 - (long)puVar37)) != '\0') {
                  lVar28 = 0x1c;
                }
                lVar28 = (long)puVar42 + (lVar28 - (long)puVar37);
                if (lVar28 == 0) break;
                uVar30 = (ulong)*(ushort *)((long)puVar42 + (8 - (long)puVar37));
                *(undefined4 *)(puVar10 + 0xa4) = 0xfffffffe;
                if (uVar30 == 0) break;
                piVar33 = (int *)(lVar28 + 4);
                while (piVar33[-1] != 0x705a5d0b) {
                  piVar33 = piVar33 + 2;
                  uVar30 = uVar30 - 1;
                  if (uVar30 == 0) goto LAB_01fdbf80;
                }
                iVar16 = 0;
                if (*piVar33 != -1) {
                  iVar16 = *piVar33;
                }
                *(int *)(puVar10 + 0xa4) = iVar16;
                uVar17 = *puVar42;
                if (uVar17 == 0) break;
              }
            }
          }
        }
LAB_01fdbf80:
        plVar21 = local_4f68;
        if ((int)(uint)local_4f78 < local_4f78._4_4_) {
          if (local_4f68 != (long *)0x0) {
            local_4f68 = (long *)*local_4f68;
          }
          *(int *)plVar21 = *piVar41;
          if ((int)(uint)local_4f78 < local_4f78._4_4_) {
            *(long **)(local_4f70 + (long)(int)(uint)local_4f78 * 8) = plVar21;
            local_4f78 = CONCAT44(local_4f78._4_4_,(uint)local_4f78 + 1);
          }
        }
LAB_01fdbda0:
        puVar36 = puVar36 + 1;
      } while (puVar36 != puVar3);
    }
    local_4fa0 = &local_5d40;
    local_4f98 = (int *)&local_2650;
    local_4f90 = &local_3638;
    local_5af0 = local_5ae8;
    local_5b00 = (undefined8 *)0x0;
    lVar28 = 0;
    while( true ) {
      plVar21 = (long *)((long)local_5ae8 + lVar28 + 8);
      *plVar21 = (long)local_5ae8 + lVar28 + 0x10;
      *(long **)((long)local_5ae8 + lVar28) = plVar21;
      *(undefined1 **)((long)local_5ae8 + lVar28 + 0x10) = auStack_5ac8 + lVar28 + -8;
      if (lVar28 == 0x580) break;
      *(undefined1 **)(auStack_5ac8 + lVar28 + -8) = auStack_5ac8 + lVar28;
      lVar28 = lVar28 + 0x20;
    }
    local_5550 = 0;
    local_5af8 = local_5af0;
    if (auStack_5548 == (undefined8 *)0x0) {
      local_5b08 = 0;
      local_4fa8 = param_1;
    }
    else {
      local_5b08 = 0xb400000000;
      local_5b00 = auStack_5548;
      local_4fa8 = param_1;
      if (0 < (int)(uint)local_42d8) {
        lVar28 = 0;
        uVar18 = (uint)local_42d8;
        if (0xb3 < (int)(uint)local_42d8) {
          uVar18 = 0xb4;
        }
        iVar16 = 0;
        do {
          plVar21 = local_5af8;
          if (iVar16 < local_5b08._4_4_) {
            if (local_5af8 != (long *)0x0) {
              local_5af8 = (long *)*local_5af8;
            }
            *(undefined4 *)plVar21 = **(undefined4 **)((long)local_42d0 + lVar28);
            iVar16 = (int)local_5b08;
            if ((int)local_5b08 < local_5b08._4_4_) {
              auStack_5548[(int)local_5b08] = plVar21;
              iVar16 = (int)local_5b08 + 1;
              local_5b08 = CONCAT44(local_5b08._4_4_,iVar16);
            }
          }
          lVar28 = lVar28 + 8;
        } while ((ulong)uVar18 * 8 != lVar28);
      }
    }
    uVar30 = FUN_01fe56b0(&local_4fa8,&local_5b08);
    if ((uVar30 & 1) == 0) {
      local_5af0 = local_5ae8;
      local_5b00 = (undefined8 *)0x0;
      lVar28 = 0;
      while( true ) {
        plVar21 = (long *)((long)local_5ae8 + lVar28 + 8);
        *plVar21 = (long)local_5ae8 + lVar28 + 0x10;
        *(long **)((long)local_5ae8 + lVar28) = plVar21;
        *(undefined1 **)((long)local_5ae8 + lVar28 + 0x10) = auStack_5ac8 + lVar28 + -8;
        if (lVar28 == 0x580) break;
        *(undefined1 **)(auStack_5ac8 + lVar28 + -8) = auStack_5ac8 + lVar28;
        lVar28 = lVar28 + 0x20;
      }
      local_5550 = 0;
      local_5af8 = local_5af0;
      if (auStack_5548 == (undefined8 *)0x0) {
        local_5b08 = 0;
      }
      else {
        local_5b08 = 0xb400000000;
        local_5b00 = auStack_5548;
        if (0 < (int)(uint)local_4f78) {
          lVar28 = 0;
          uVar18 = (uint)local_4f78;
          if (0xb3 < (int)(uint)local_4f78) {
            uVar18 = 0xb4;
          }
          iVar16 = 0;
          do {
            plVar21 = local_5af8;
            if (iVar16 < local_5b08._4_4_) {
              if (local_5af8 != (long *)0x0) {
                local_5af8 = (long *)*local_5af8;
              }
              *(undefined4 *)plVar21 = **(undefined4 **)(local_4f70 + lVar28);
              iVar16 = (int)local_5b08;
              if ((int)local_5b08 < local_5b08._4_4_) {
                auStack_5548[(int)local_5b08] = plVar21;
                iVar16 = (int)local_5b08 + 1;
                local_5b08 = CONCAT44(local_5b08._4_4_,iVar16);
              }
            }
            lVar28 = lVar28 + 8;
          } while ((ulong)uVar18 * 8 != lVar28);
        }
      }
      uVar30 = FUN_01fe56b0(&local_4fa8,&local_5b08);
      if ((uVar30 & 1) == 0) goto LAB_01fdd770;
    }
    local_5cc0[0] = 0x57;
    *(code **)(param_1 + 0x12440) = FUN_01fe55f8;
    local_5c28 = (int)local_5d08;
    local_5c10 = (undefined4)local_5d40;
    local_5c0c = local_5d40._4_4_;
    local_5ca0 = param_1 + 0x12430;
    *(long *)(param_1 + 0x12438) = param_1;
    local_5c24 = local_5d08._4_4_;
    *(undefined8 *)(param_1 + 0x12448) = 0;
    local_5c38 = (int)local_5d18;
    local_5c34 = local_5d18._4_4_;
    local_5be8 = fStack_5d2c._0_1_;
    local_5c20 = ((float)(int)local_5d18 * 5.0 + (float)(int)local_5d08 * 5.0 + 5.0) * 0.5;
    local_5c18 = ((float)local_5d18._4_4_ * 5.0 + (float)local_5d08._4_4_ * 5.0 + 5.0) * 0.5;
    goto LAB_01fdc2b0;
  }
  if (local_5cc4 == 9) {
    local_5d40 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_5d40);
    fStack_5d2c = (float)((uint)fStack_5d2c & 0xffffff00);
    local_5d18 = (undefined *)0x0;
    local_5d28 = PTR_DAT_04bbc1a0 + 0x10;
    local_5d20 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
    local_5d08 = (undefined *)0x0;
    local_5d10 = local_5d20;
    if (*(int *)(*(long *)(param_1 + 8) + 0x750) - 1U < 2) {
      if ((*puVar1 == 0x16) || (*puVar1 == 0x10)) {
        fVar43 = *(float *)(lVar28 + 0x278);
        local_2650 = PTR_DAT_04bbc1a0 + 0x10;
        fVar46 = *(float *)(lVar28 + 0x280);
        local_42d8 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
        local_32e8 = (undefined8 *)((ulong)local_32e8 & 0xffffffff00000000);
        iVar16 = (int)((float)(int)(fVar43 + -2.5) / 5.0) - (uint)(fVar43 + -2.5 < 0.0);
        iVar23 = (int)((float)(int)(fVar46 + -2.5) / 5.0) - (uint)(fVar46 + -2.5 < 0.0);
        local_2640 = (undefined8 *)CONCAT44(iVar23,iVar16);
        local_2630 = (long *)CONCAT44(iVar23 + 1,iVar16 + 1);
        local_42d0 = (long *)CONCAT44((int)((float)(int)fVar46 / 5.0) - (uint)(fVar46 < 0.0),
                                      (int)((float)(int)fVar43 / 5.0) - (uint)(fVar43 < 0.0));
        lVar28 = *(long *)PTR_DAT_04bb2720;
        local_2648 = local_42d8;
        local_2638 = local_42d8;
        if (lVar28 == 0) {
          puVar36 = &DAT_055c04a0;
        }
        else {
          puVar36 = &DAT_055c04a0;
          if (*(long *)(lVar28 + 0x330) != 0) {
            puVar36 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar28 + 0x338));
            iVar16 = FUN_006bd550(*puVar36,0);
            puVar36 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar16 != 0x758f7eaf) {
              puVar36 = &DAT_055c04a0;
            }
          }
        }
        local_32e8 = (undefined8 *)CONCAT44(*(undefined4 *)(puVar36 + 7),(undefined4)local_32e8);
        uVar15 = FUN_017baf44();
        local_32e0 = (long *)(CONCAT71(local_32e0._1_7_,uVar15) & 0xffffffffffffff01);
        local_32f0 = (long *)(PTR_DAT_04bb3140 + 0x10);
        uVar20 = FUN_01a5190c(&local_32f0,0,&local_42d8,0);
        uVar30 = FUN_01fd595c(&local_2650,uVar20);
        if ((uVar30 & 1) == 0) goto LAB_01fdd770;
      }
      goto LAB_01fdb13c;
    }
    FUN_01fd6d50(auStack_5ccc,puVar1);
    local_5b10 = *(long *)PTR_DAT_04bb4970;
    if (local_5b10 == 0) goto LAB_01fdd770;
    lVar28 = 0xc6;
    local_2648 = (undefined8 *)0x0;
    local_2640 = &local_2630;
    local_2650 = (undefined *)0x0;
    local_2630 = alStack_2608;
    plVar21 = local_2630;
    do {
      lVar28 = lVar28 + -2;
      *plVar21 = (long)(plVar21 + 5);
      plVar21[5] = (long)(plVar21 + 10);
      plVar21 = plVar21 + 10;
    } while (lVar28 != 0);
    local_718 = 0;
    if (auStack_6f0 != (undefined8 *)0x0) {
      local_2650 = (undefined *)0xc800000000;
      local_2648 = auStack_6f0;
    }
    local_2638 = local_2640;
    FUN_01521078(&local_2650);
    puVar10 = PTR_DAT_04bb27c0;
    local_32e8 = (undefined8 *)0x0;
    local_32e0 = local_32d0;
    local_32f0 = (long *)0x0;
    lVar28 = 0;
    while( true ) {
      plVar21 = (long *)((long)local_32d0 + lVar28 + 8);
      *plVar21 = (long)local_32d0 + lVar28 + 0x10;
      *(long **)((long)local_32d0 + lVar28) = plVar21;
      *(undefined1 **)((long)local_32d0 + lVar28 + 0x10) = auStack_32b0 + lVar28 + -8;
      if (lVar28 == 0x620) break;
      *(undefined1 **)(auStack_32b0 + lVar28 + -8) = auStack_32b0 + lVar28;
      lVar28 = lVar28 + 0x20;
    }
    local_2c98 = 0;
    if (local_2c90 != (undefined8 *)0x0) {
      local_32f0 = (long *)0xc800000000;
      local_32e8 = local_2c90;
    }
    lVar28 = 0;
    local_32d8 = local_32e0;
    do {
      lVar40 = lVar28 + 0x14;
      *(undefined4 *)((long)local_3600 + lVar28) = 0x7f7fffff;
      *(undefined8 *)((long)local_3610 + lVar28) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)local_3610 + lVar28 + 8) = 0x7f7fffff7f7fffff;
      lVar28 = lVar40;
    } while (lVar40 != 800);
    lVar28 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    local_3638 = *(ulong *)(lVar28 + 0x278);
    local_3630 = (undefined **)CONCAT44(local_3630._4_4_,*(undefined4 *)(lVar28 + 0x280));
    if (*(int *)(param_1 + 0x123c0) == 0) {
      puVar42 = (uint *)PTR_DAT_04bb3238;
    }
    else {
      puVar42 = (uint *)**(undefined8 **)(param_1 + 0x123c8);
    }
    uVar18 = *puVar42;
    if ((uVar18 != 0) && (lVar28 = *(long *)PTR_DAT_04bb27c0, lVar28 != 0)) {
      lVar40 = *(long *)(*(long *)(*(long *)(lVar28 + 0x1c0) + 8) +
                        ((ulong)(uVar18 >> 0x11) & 0x7ff8));
      if ((lVar40 == 0) ||
         (((*(uint *)(lVar40 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar40 + 0x230) != uVar18)))) {
        lVar40 = 0;
      }
      if (*(int *)(lVar28 + 0x288) == 1 || *(int *)(lVar28 + 0x288) == -1) {
        plVar21 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar28 = *(long *)puVar10;
        iVar16 = (**(code **)(*plVar21 + 0x60))();
        if (iVar16 < 0x11) {
          uVar18 = 1;
        }
        else {
          if (4 < *(uint *)(lVar28 + 0x5e8)) goto LAB_01fdb2a4;
          uVar18 = 0x1aU >> (ulong)(*(uint *)(lVar28 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_01fdb2a4:
        uVar18 = 0;
      }
      if (lVar40 != 0) {
        uVar18 = uVar18 ^ 1;
        if (*(int *)(lVar40 + 0x150) != 1) {
          uVar18 = 1;
        }
        if (uVar18 == 0) {
          local_3638 = *(ulong *)(*(long *)(lVar40 + 0x68) + 0x278);
          local_3630 = (undefined **)
                       CONCAT44(local_3630._4_4_,*(undefined4 *)(*(long *)(lVar40 + 0x68) + 0x280));
        }
      }
    }
    local_42d8 = &PTR_LAB_04a6ab60;
    local_42d0 = (long *)auStack_5ccc;
    local_42c8 = &local_5b10;
    FUN_01fe1430(&local_32f0,local_3610,&local_3638,&local_2650,&local_42d8);
    puVar10 = PTR_DAT_04bb7ea0;
    if (1 < (int)(float)local_32f0) {
      uVar17 = 0;
      uVar18 = (int)(float)local_32f0 - 1;
      do {
        if ((int)uVar18 <= (int)uVar17) break;
        puVar42 = (uint *)local_32e8[uVar17];
        uVar32 = (ulong)uVar17;
        uVar34 = (ulong)uVar18;
        uVar30 = uVar32;
        uVar18 = uVar17;
        do {
          uVar38 = (ulong)*puVar42;
          puVar37 = (uint *)local_32e8[uVar30 + 1];
          if (199 < *puVar42) {
            uVar38 = 0;
          }
          uVar39 = (ulong)*puVar37;
          if (199 < *puVar37) {
            uVar39 = 0;
          }
          if (0.0 < local_3610[uVar38] - local_3610[uVar39]) {
            uVar18 = (uint)uVar30;
            local_32e8[uVar30 + 1] = puVar42;
            local_32e8[uVar30] = puVar37;
          }
          else {
            puVar42 = puVar37;
          }
          uVar30 = uVar30 + 1;
        } while (uVar34 != uVar30);
        if ((int)uVar18 <= (int)uVar17) break;
        puVar42 = (uint *)local_32e8[uVar18];
        uVar30 = (ulong)uVar18;
        uVar17 = uVar18;
        do {
          uVar34 = (ulong)*puVar42;
          puVar37 = (uint *)local_32e8[uVar30 - 1];
          if (199 < *puVar42) {
            uVar34 = 0;
          }
          uVar38 = (ulong)*puVar37;
          if (199 < *puVar37) {
            uVar38 = 0;
          }
          if (local_3610[uVar34] - local_3610[uVar38] < 0.0) {
            uVar17 = (uint)uVar30;
            local_32e8[uVar30 - 1] = puVar42;
            local_32e8[uVar30] = puVar37;
          }
          else {
            puVar42 = puVar37;
          }
          uVar30 = uVar30 - 1;
        } while ((long)uVar32 < (long)uVar30);
      } while (uVar17 != uVar18);
    }
    iVar16 = *(int *)(*(long *)PTR_DAT_04bb4e28 + 0xe0);
    if (iVar16 != 0) {
      lVar28 = 0;
      lVar40 = (long)iVar16 << 3;
      lVar24 = *(long *)(*(long *)PTR_DAT_04bb4e28 + 0xe8);
      do {
        if (*(int *)(*(long *)(param_1 + 8) + 0x230) == *(int *)(*(long *)(lVar24 + lVar28 * 8) + 8)
           ) {
          uVar18 = *(uint *)(*(long *)(lVar24 + lVar28 * 8) + 0xd8);
          goto LAB_01fdb4b0;
        }
        lVar28 = lVar28 + 1;
        lVar40 = lVar40 + -8;
      } while (lVar40 != 0);
    }
    uVar18 = 0;
LAB_01fdb4b0:
    local_42d0 = (long *)0x0;
    local_42d8 = (undefined **)0x0;
    local_42c8 = local_42b8;
    lVar28 = 0;
    while( true ) {
      plVar21 = (long *)((long)local_42b8 + lVar28 + 8);
      *plVar21 = (long)local_42b8 + lVar28 + 0x10;
      *(long **)((long)local_42b8 + lVar28) = plVar21;
      *(undefined1 **)((long)local_42b8 + lVar28 + 0x10) = auStack_4298 + lVar28 + -8;
      if (lVar28 == 0x620) break;
      *(undefined1 **)(auStack_4298 + lVar28 + -8) = auStack_4298 + lVar28;
      lVar28 = lVar28 + 0x20;
    }
    local_3c80 = 0;
    if (local_3c78 != (undefined1 *)0x0) {
      local_42d8 = (undefined **)0xc800000000;
      local_42d0 = (long *)local_3c78;
    }
    local_4f70 = (undefined1 *)0x0;
    local_4f68 = local_4f58;
    local_4f78 = 0;
    lVar28 = 0;
    while( true ) {
      plVar21 = (long *)((long)local_4f58 + lVar28 + 8);
      *plVar21 = (long)local_4f58 + lVar28 + 0x10;
      *(long **)((long)local_4f58 + lVar28) = plVar21;
      *(undefined1 **)((long)local_4f58 + lVar28 + 0x10) = auStack_4f38 + lVar28 + -8;
      if (lVar28 == 0x620) break;
      *(undefined1 **)(auStack_4f38 + lVar28 + -8) = auStack_4f38 + lVar28;
      lVar28 = lVar28 + 0x20;
    }
    local_4920 = 0;
    if (local_4918 != (undefined1 *)0x0) {
      local_4f78 = 0xc800000000;
      local_4f70 = local_4918;
    }
    local_4f60 = local_4f68;
    local_42c0 = (ulong *)local_42c8;
    if ((float)local_32f0 != 0.0) {
      puVar3 = local_32e8 + (int)(float)local_32f0;
      puVar36 = local_32e8;
      do {
        lVar28 = local_5b10;
        piVar41 = (int *)*puVar36;
        if ((*(long *)(local_5b10 + 0xb0) != 0) &&
           (*(long *)(*(long *)(local_5b10 + 0xb0) + 8) != 0 && *(short *)local_2648[*piVar41] != -2
           )) {
          uVar17 = FUN_0277d6c4();
          plVar21 = local_42c8;
          uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
          if ((uVar17 < *(uint *)(lVar28 + 0x1d8)) &&
             (puVar42 = *(uint **)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar17 * 8),
             puVar42 != (uint *)0x0)) {
            local_5b08 = CONCAT44(local_5b08._4_4_,uVar18);
            uVar17 = *puVar42;
            if (uVar17 != 0) {
              cVar35 = *PTR_DAT_04bb7e98;
              while( true ) {
                puVar9 = PTR_DAT_04bb7e98;
                if (cVar35 == '\0') {
                  cVar35 = '\x01';
                  *(undefined8 *)puVar10 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
                  *puVar9 = 1;
                  *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x58) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x78) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x80) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x88) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x90) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x98) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0xa0) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0xa8) = 0xffffffffffffffff;
                  uVar17 = *puVar42;
                }
                else {
                  uVar4 = *(uint *)(puVar10 + 0xa4);
                  if (-1 < (int)uVar4) {
                    if ((ulong)uVar4 + (long)puVar42 != 0) {
                      uVar17 = uVar18 + 7;
                      if (-1 < (int)uVar18) {
                        uVar17 = uVar18;
                      }
                      if ((*(byte *)((ulong)uVar4 + (long)puVar42 + (ulong)(uint)((int)uVar17 >> 3))
                           >> (ulong)(uVar18 & 7) & 1) != 0) {
                        if ((int)(uint)local_42d8 < local_42d8._4_4_) {
                          if (local_42c8 != (long *)0x0) {
                            local_42c8 = (long *)*local_42c8;
                          }
                          *(int *)plVar21 = *piVar41;
                          if ((int)(uint)local_42d8 < local_42d8._4_4_) {
                            *(long **)((long)local_42d0 + (long)(int)(uint)local_42d8 * 8) = plVar21
                            ;
                            local_42d8 = (undefined **)
                                         CONCAT44(local_42d8._4_4_,(uint)local_42d8 + 1);
                          }
                        }
                        goto LAB_01fdb5c0;
                      }
                    }
                    break;
                  }
                  if (uVar4 != 0xffffffff) break;
                }
                puVar37 = (uint *)(ulong)uVar17;
                if ((puVar37 == (uint *)0x0) || (puVar42 == puVar37)) break;
                lVar28 = 0xc;
                if (*(char *)((long)puVar42 + (10 - (long)puVar37)) != '\0') {
                  lVar28 = 0x1c;
                }
                lVar28 = (long)puVar42 + (lVar28 - (long)puVar37);
                if (lVar28 == 0) break;
                uVar30 = (ulong)*(ushort *)((long)puVar42 + (8 - (long)puVar37));
                *(undefined4 *)(puVar10 + 0xa4) = 0xfffffffe;
                if (uVar30 == 0) break;
                piVar33 = (int *)(lVar28 + 4);
                while (piVar33[-1] != 0x705a5d0b) {
                  piVar33 = piVar33 + 2;
                  uVar30 = uVar30 - 1;
                  if (uVar30 == 0) goto LAB_01fdb7a0;
                }
                iVar16 = 0;
                if (*piVar33 != -1) {
                  iVar16 = *piVar33;
                }
                *(int *)(puVar10 + 0xa4) = iVar16;
                uVar17 = *puVar42;
                if (uVar17 == 0) break;
              }
            }
          }
        }
LAB_01fdb7a0:
        plVar21 = local_4f68;
        if ((int)(uint)local_4f78 < local_4f78._4_4_) {
          if (local_4f68 != (long *)0x0) {
            local_4f68 = (long *)*local_4f68;
          }
          *(int *)plVar21 = *piVar41;
          if ((int)(uint)local_4f78 < local_4f78._4_4_) {
            *(long **)(local_4f70 + (long)(int)(uint)local_4f78 * 8) = plVar21;
            local_4f78 = CONCAT44(local_4f78._4_4_,(uint)local_4f78 + 1);
          }
        }
LAB_01fdb5c0:
        puVar36 = puVar36 + 1;
      } while (puVar36 != puVar3);
    }
    local_4fa0 = &local_5d40;
    local_4f98 = (int *)&local_2650;
    local_4f90 = &local_3638;
    local_5af0 = local_5ae8;
    local_5b00 = (undefined8 *)0x0;
    lVar28 = 0;
    while( true ) {
      plVar21 = (long *)((long)local_5ae8 + lVar28 + 8);
      *plVar21 = (long)local_5ae8 + lVar28 + 0x10;
      *(long **)((long)local_5ae8 + lVar28) = plVar21;
      *(undefined1 **)((long)local_5ae8 + lVar28 + 0x10) = auStack_5ac8 + lVar28 + -8;
      if (lVar28 == 0x580) break;
      *(undefined1 **)(auStack_5ac8 + lVar28 + -8) = auStack_5ac8 + lVar28;
      lVar28 = lVar28 + 0x20;
    }
    local_5550 = 0;
    local_5af8 = local_5af0;
    if (auStack_5548 == (undefined8 *)0x0) {
      local_5b08 = 0;
      local_4fa8 = param_1;
    }
    else {
      local_5b08 = 0xb400000000;
      local_5b00 = auStack_5548;
      local_4fa8 = param_1;
      if (0 < (int)(uint)local_42d8) {
        lVar28 = 0;
        uVar18 = (uint)local_42d8;
        if (0xb3 < (int)(uint)local_42d8) {
          uVar18 = 0xb4;
        }
        iVar16 = 0;
        do {
          plVar21 = local_5af8;
          if (iVar16 < local_5b08._4_4_) {
            if (local_5af8 != (long *)0x0) {
              local_5af8 = (long *)*local_5af8;
            }
            *(undefined4 *)plVar21 = **(undefined4 **)((long)local_42d0 + lVar28);
            iVar16 = (int)local_5b08;
            if ((int)local_5b08 < local_5b08._4_4_) {
              auStack_5548[(int)local_5b08] = plVar21;
              iVar16 = (int)local_5b08 + 1;
              local_5b08 = CONCAT44(local_5b08._4_4_,iVar16);
            }
          }
          lVar28 = lVar28 + 8;
        } while ((ulong)uVar18 * 8 != lVar28);
      }
    }
    uVar30 = FUN_01fe5370(&local_4fa8,&local_5b08);
    if ((uVar30 & 1) == 0) {
      local_5af0 = local_5ae8;
      local_5b00 = (undefined8 *)0x0;
      lVar28 = 0;
      while( true ) {
        plVar21 = (long *)((long)local_5ae8 + lVar28 + 8);
        *plVar21 = (long)local_5ae8 + lVar28 + 0x10;
        *(long **)((long)local_5ae8 + lVar28) = plVar21;
        *(undefined1 **)((long)local_5ae8 + lVar28 + 0x10) = auStack_5ac8 + lVar28 + -8;
        if (lVar28 == 0x580) break;
        *(undefined1 **)(auStack_5ac8 + lVar28 + -8) = auStack_5ac8 + lVar28;
        lVar28 = lVar28 + 0x20;
      }
      local_5550 = 0;
      local_5af8 = local_5af0;
      if (auStack_5548 == (undefined8 *)0x0) {
        local_5b08 = 0;
      }
      else {
        local_5b08 = 0xb400000000;
        local_5b00 = auStack_5548;
        if (0 < (int)(uint)local_4f78) {
          lVar28 = 0;
          uVar18 = (uint)local_4f78;
          if (0xb3 < (int)(uint)local_4f78) {
            uVar18 = 0xb4;
          }
          iVar16 = 0;
          do {
            plVar21 = local_5af8;
            if (iVar16 < local_5b08._4_4_) {
              if (local_5af8 != (long *)0x0) {
                local_5af8 = (long *)*local_5af8;
              }
              *(undefined4 *)plVar21 = **(undefined4 **)(local_4f70 + lVar28);
              iVar16 = (int)local_5b08;
              if ((int)local_5b08 < local_5b08._4_4_) {
                auStack_5548[(int)local_5b08] = plVar21;
                iVar16 = (int)local_5b08 + 1;
                local_5b08 = CONCAT44(local_5b08._4_4_,iVar16);
              }
            }
            lVar28 = lVar28 + 8;
          } while ((ulong)uVar18 * 8 != lVar28);
        }
      }
      uVar30 = FUN_01fe5370(&local_4fa8,&local_5b08);
      if ((uVar30 & 1) == 0) goto LAB_01fdd770;
    }
    *(long *)(param_1 + 0x12438) = param_1;
    *(undefined8 *)(param_1 + 0x12448) = 0;
    local_5c10 = (undefined4)local_5d40;
    local_5c0c = local_5d40._4_4_;
    local_5c1c = local_5d38._4_4_;
    local_5c20 = (float)local_5d38;
    local_5c38 = (int)local_5d18;
    local_5c34 = local_5d18._4_4_;
    local_5c18 = local_5d30;
    local_5c28 = (int)local_5d08;
    local_5c24 = local_5d08._4_4_;
    *(code **)(param_1 + 0x12440) = FUN_01fe55f8;
    local_5be8 = fStack_5d2c._0_1_;
    local_5cc0[0] = 0x56;
    local_5ca0 = param_1 + 0x12430;
    goto LAB_01fdc2b0;
  }
  if (local_5cc4 == 8) {
    local_5cc0[0] = 10;
    local_5bd0 = 1;
    FUN_01fe32b0(param_1,auStack_5be4,&local_5b14);
    puVar9 = PTR_DAT_04bc23c8;
    puVar10 = PTR_DAT_04bc23c0;
    if (*puVar42 == 0) {
      puVar36 = (undefined8 *)0x0;
    }
    else {
      cVar35 = *PTR_DAT_04bc23c0;
      do {
        if (cVar35 == '\0') {
          cVar35 = '\x01';
          *(undefined8 *)puVar9 = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
          *puVar10 = 1;
          *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar18 = *(uint *)(puVar9 + 0x34);
          if (-1 < (int)uVar18) {
            puVar36 = (undefined8 *)((ulong)uVar18 + (long)puVar42);
            goto LAB_01fdad9c;
          }
          if (uVar18 != 0xffffffff) break;
        }
        puVar37 = (uint *)(ulong)*puVar42;
        puVar36 = (undefined8 *)0x0;
        if ((*puVar42 == 0) || (puVar42 == puVar37)) goto LAB_01fdad9c;
        lVar28 = 0xc;
        if (*(char *)((long)puVar42 + (10 - (long)puVar37)) != '\0') {
          lVar28 = 0x1c;
        }
        lVar28 = (long)puVar42 + (lVar28 - (long)puVar37);
        if (lVar28 == 0) break;
        uVar30 = (ulong)*(ushort *)((long)puVar42 + (8 - (long)puVar37));
        *(undefined4 *)(puVar9 + 0x34) = 0xfffffffe;
        puVar36 = (undefined8 *)0x0;
        if (uVar30 == 0) goto LAB_01fdad9c;
        piVar41 = (int *)(lVar28 + 4);
        while (piVar41[-1] != 0x6c6fdb31) {
          piVar41 = piVar41 + 2;
          uVar30 = uVar30 - 1;
          if (uVar30 == 0) {
            puVar36 = (undefined8 *)0x0;
            goto LAB_01fdad9c;
          }
        }
        iVar16 = 0;
        if (*piVar41 != -1) {
          iVar16 = *piVar41;
        }
        *(int *)(puVar9 + 0x34) = iVar16;
      } while (*puVar42 != 0);
      puVar36 = (undefined8 *)0x0;
    }
LAB_01fdad9c:
    puVar3 = &DAT_0407ebb1;
    if (puVar36 != (undefined8 *)0x0) {
      puVar3 = puVar36;
    }
    if (local_5ba8 != puVar3) {
      lVar28 = 0;
      do {
        if (*(char *)((long)puVar3 + lVar28) == '\0') goto LAB_01fdaf70;
        if (*(char *)((long)puVar3 + lVar28 + 1) == '\0') {
          lVar28 = lVar28 + 1;
          goto LAB_01fdaf70;
        }
        if (*(char *)((long)puVar3 + lVar28 + 2) == '\0') {
          lVar28 = lVar28 + 2;
          goto LAB_01fdaf70;
        }
        lVar28 = lVar28 + 3;
      } while (lVar28 != 0x80001);
      lVar28 = 0;
LAB_01fdaf70:
      iVar16 = (int)lVar28;
      if (local_5ba0 <= (int)lVar28) {
        iVar16 = local_5ba0 + -1;
      }
      memcpy(local_5ba8,puVar3,(long)iVar16);
      *(undefined1 *)((long)local_5ba8 + (long)iVar16) = 0;
    }
    lVar28 = *(long *)(param_1 + 8);
    *(code **)(param_1 + 0x12480) = FUN_01fde1f0;
    *(undefined1 **)(param_1 + 0x12460) = &LAB_01fe36c0;
    local_5cb8 = param_1 + 0x12470;
    lStack_5cb0 = param_1 + 0x12450;
    *(long *)(param_1 + 0x12478) = param_1;
    *(undefined8 *)(param_1 + 0x12488) = 0;
    *(long *)(param_1 + 0x12458) = param_1;
    local_5ca0 = param_1 + 0x12430;
    *(undefined8 *)(param_1 + 0x12468) = 0;
    *(long *)(param_1 + 0x12438) = param_1;
    *(undefined1 **)(param_1 + 0x12440) = &LAB_01fdeb2c;
    *(undefined8 *)(param_1 + 0x12448) = 0;
    (**(code **)(*(long *)(lVar28 + 0x3e0) + 0x18))(lVar28 + 0x3e0);
    (**(code **)(*(long *)(lVar28 + 0x3e0) + 0x18))(lVar28 + 0x3e0);
    if (*(undefined1 **)(lVar28 + 1000) == &DAT_04081e70) {
LAB_01fdb070:
      lVar28 = *(long *)PTR_DAT_04bb5ce0;
      if (lVar28 == 0) {
        iVar16 = 0;
        iVar23 = 0;
        iVar27 = 0x10;
        iVar31 = 0x10;
      }
      else {
        iVar16 = *(int *)(lVar28 + 0xd88);
        iVar23 = *(int *)(lVar28 + 0xd8c);
        iVar31 = *(int *)(lVar28 + 0xd98);
        iVar27 = *(int *)(lVar28 + 0xd9c);
      }
      iVar19 = iVar16;
      if (iVar31 <= iVar16) {
        iVar19 = iVar31;
      }
      if (iVar16 <= iVar31) {
        iVar16 = iVar31;
      }
      lVar28 = *(long *)(param_1 + 0x89b8);
      if (iVar27 <= iVar23) {
        iVar23 = iVar27;
      }
      *(int *)(lVar28 + 0xb8) = iVar19;
      *(int *)(lVar28 + 0xbc) = iVar23;
      *(int *)(lVar28 + 200) = iVar16;
      *(int *)(lVar28 + 0xcc) = iVar23 + 2;
      *(undefined1 *)(*(long *)(param_1 + 0x89b8) + 0x170) = 1;
      local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
    }
    else {
      uVar30 = 0;
      bVar13 = true;
      do {
        cVar35 = (*(undefined1 **)(lVar28 + 1000))[uVar30];
        local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
        if (cVar35 != (&DAT_04081e70)[uVar30]) break;
        if (cVar35 == '\0') {
          local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
          if (bVar13) goto LAB_01fdb070;
          break;
        }
        bVar13 = uVar30 < 0x80000;
        uVar30 = uVar30 + 1;
        local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
      } while (uVar30 != 0x80001);
    }
    goto LAB_01fdc2b0;
  }
  FUN_01fd6d50(auStack_5ccc,puVar1);
  puVar12 = PTR_DAT_04bbc1a0;
  puVar9 = PTR_DAT_04bb2010;
  local_5d30 = 0.0;
  fStack_5d2c = 0.0;
  local_5d28._0_4_ = 0.0;
  local_5d28._4_4_ = 0.0;
  local_5cec = 0;
  local_5d40 = PTR_DAT_04bc1558 + 0x10;
  local_5d38 = 0;
  local_5d20 = (undefined8 *)(PTR_DAT_04bbc1a0 + 0x10);
  local_5d18 = PTR_DAT_04bb2010 + 0x10;
  local_5d10 = (undefined8 *)0x0;
  local_5d00 = (long *)0x0;
  local_5cf8 = 0xffffffff00000000;
  local_5cf0 = 0xffffffff;
  local_5ce8 = 0xfffe;
  local_5d08 = local_5d18;
  FUN_0277d4ac(&local_5ce8);
  puVar11 = PTR_DAT_04bb27c0;
  lVar28 = *(long *)puVar10;
  local_5cd8 = 0;
  local_5cd4 = 0;
  local_5d44 = 0;
  local_5ce0 = 0x3bf800000;
  local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
  if (lVar28 == 0) goto LAB_01fdd770;
  uVar18 = *puVar1;
  if ((int)*(uint *)(lVar28 + 0x5c0) < 1) {
    local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
    if (*(long *)(lVar28 + 0x4b0) == 0) goto LAB_01fdd770;
    puVar37 = *(uint **)(*(long *)(lVar28 + 0x4b0) + 8);
    local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
    if ((puVar37 == (uint *)0x0) ||
       (((uVar18 < *(uint *)(lVar28 + 0x4c8) &&
         (local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28),
         *(char *)(*(long *)(lVar28 + 0x4d0) + (long)(int)uVar18) == '\0')) ||
        (local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28), *puVar37 <= uVar18)
        ))) goto LAB_01fdd770;
    local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
    if (puVar37[1] == 0) goto LAB_01fdd770;
    local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
    if ((ushort)puVar37[2] == 0) goto LAB_01fdd770;
    iVar16 = 0xc;
    if (*(char *)((long)puVar37 + 10) != '\0') {
      iVar16 = 0x1c;
    }
    puVar37 = (uint *)((ulong)(puVar37[1] * uVar18 + (uint)(ushort)puVar37[2] * 8 + iVar16) +
                      (long)puVar37);
  }
  else {
    local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
    if (*(uint *)(lVar28 + 0x5c0) <= uVar18) goto LAB_01fdd770;
    if (*(uint *)(lVar28 + 0x5b0) <= uVar18) {
      uVar18 = 0;
    }
    puVar37 = *(uint **)(*(long *)(lVar28 + 0x5b8) + (ulong)uVar18 * 8);
  }
  local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
  if (puVar37 == (uint *)0x0) goto LAB_01fdd770;
  uVar18 = *puVar37;
  uVar17 = 0;
  if ((uVar18 != 0) && (puVar37 != (uint *)(ulong)uVar18)) {
    puVar29 = (uint *)((long)puVar37 - (long)(ulong)uVar18);
    uVar17 = 0;
    if (*puVar29 != 0) {
      uVar18 = puVar29[1];
      if ((uVar18 != 0) && ((ulong)(ushort)puVar29[2] != 0)) {
        lVar28 = 0xc;
        if (*(char *)((long)puVar29 + 10) != '\0') {
          lVar28 = 0x1c;
        }
        lVar28 = (long)puVar29 + lVar28 + (ulong)(ushort)puVar29[2] * 8;
        if (lVar28 != 0) {
          uVar17 = 0;
          if ((ulong)uVar18 != 0) {
            uVar17 = (uint)((ulong)((long)puVar37 - lVar28) / (ulong)uVar18);
          }
          if (*puVar29 <= uVar17) {
            uVar17 = 0xffffffff;
          }
          if ((uVar17 < *(uint *)PTR_DAT_04bc23e0) &&
             (uVar17 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc23e0 + 8) + (long)(int)uVar17 * 2),
             uVar17 < 4)) goto LAB_01fdab40;
        }
      }
      uVar17 = 0;
    }
  }
LAB_01fdab40:
  local_2650 = (undefined *)CONCAT44(local_2650._4_4_,uVar17);
  local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
  if (3 < uVar17) goto LAB_01fdd770;
  switch(uVar17) {
  case 1:
    if (*(int *)(param_1 + 0x123c0) == 0) {
      puVar37 = (uint *)PTR_DAT_04bb3238;
    }
    else {
      puVar37 = (uint *)**(undefined8 **)(param_1 + 0x123c8);
    }
    if (*puVar37 == 0) {
      local_42d8 = (undefined **)CONCAT44(local_42d8._4_4_,*(undefined4 *)PTR_DAT_04bb3238);
      uVar30 = FUN_01fd5450(param_1,&local_42d8,0);
      local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
      if ((uVar30 & 1) == 0) goto LAB_01fdd770;
      FUN_0071ca50(&local_32f0,&local_42d8,0);
      plVar21 = local_32f0;
      if (local_32f0 != (long *)0x0) {
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar16 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        uVar30 = (**(code **)(*plVar21 + 0x20))(plVar21,PTR_DAT_04bb37d0);
        if ((uVar30 & 1) == 0) {
          local_32e8._0_3_ = (uint3)(ushort)local_32e8;
        }
      }
      local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
      if (local_32f0 == (long *)0x0) goto LAB_01fdd770;
      local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
      if ((char)local_32e8 == '\0') goto LAB_01fdd770;
      local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
      if (local_32e8._2_1_ == '\0') goto LAB_01fdd770;
      local_2650 = puVar12 + 0x10;
      lVar28 = local_32f0[0xd];
      local_2640 = (undefined8 *)0x0;
      local_2630 = (long *)0x0;
      local_5d28._4_4_ = *(float *)(lVar28 + 0x280);
      local_5cf8 = CONCAT44(local_5cf8._4_4_,(uint)local_42d8);
      fStack_5d2c = (float)*(undefined8 *)(lVar28 + 0x278);
      local_5d28._0_4_ = (float)((ulong)*(undefined8 *)(lVar28 + 0x278) >> 0x20);
      local_2648 = (undefined8 *)(puVar9 + 0x10);
      local_2638 = local_2648;
      FUN_012e1d60(&local_2650,lVar28 + 0x278,2,2);
      local_5d10 = local_2640;
      local_5d00 = local_2630;
    }
    else {
      local_5cf8 = CONCAT44(local_5cf8._4_4_,*puVar37);
      lVar28 = *(long *)PTR_DAT_04bb27c0;
      if (lVar28 != 0) {
        uVar18 = *puVar37;
        if ((((uVar18 == 0) ||
             (plVar21 = *(long **)(*(long *)(*(long *)(lVar28 + 0x1c0) + 8) +
                                  ((ulong)(uVar18 >> 0x11) & 0x7ff8)), plVar21 == (long *)0x0)) ||
            ((*(uint *)(plVar21 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar21 + 0x46) != uVar18)) {
          plVar21 = (long *)0x0;
        }
        if ((*(int *)(lVar28 + 0x288) == 1) || (*(int *)(lVar28 + 0x288) == -1)) {
          plVar22 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar28 = *(long *)puVar11;
          iVar16 = (**(code **)(*plVar22 + 0x60))();
          if (iVar16 < 0x11) {
            uVar18 = 1;
          }
          else if (*(uint *)(lVar28 + 0x5e8) < 5) {
            uVar18 = 0x1aU >> (ulong)(*(uint *)(lVar28 + 0x5e8) & 0x1f) & 1;
          }
          else {
            uVar18 = 0;
          }
        }
        else {
          uVar18 = 0;
        }
        if (plVar21 != (long *)0x0) {
          lVar28 = plVar21[0x2a];
          if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar16 != 0)) {
            *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb37d8);
          }
          uVar30 = (**(code **)(*plVar21 + 0x20))(plVar21,PTR_DAT_04bb37d0);
          uVar17 = 0;
          if ((int)lVar28 == 1) {
            uVar17 = uVar18;
          }
          if (((uVar30 & 1) != 0) && (uVar17 != 0)) {
            lVar28 = plVar21[0xd];
            fStack_5d2c = *(float *)(lVar28 + 0x278);
            local_5d28._4_4_ = *(float *)(lVar28 + 0x280);
            local_5d28._0_4_ = *(float *)(lVar28 + 0x27c);
            iVar16 = (int)((float)(int)(fStack_5d2c + -2.5) / 5.0) -
                     (uint)(fStack_5d2c + -2.5 < 0.0);
            iVar23 = (int)((float)(int)(local_5d28._4_4_ + -2.5) / 5.0) -
                     (uint)(local_5d28._4_4_ + -2.5 < 0.0);
            local_5d10 = (undefined8 *)CONCAT44(iVar23,iVar16);
            local_5d00 = (long *)CONCAT44(iVar23 + 1,iVar16 + 1);
          }
        }
      }
    }
    break;
  case 2:
    FUN_01fd6d50(&local_5b10,puVar1);
    puVar9 = PTR_DAT_04bb43c0;
    lVar28 = *(long *)puVar10;
    local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
    if (lVar28 == 0) goto LAB_01fdd770;
    uVar18 = *puVar1;
    if ((int)*(uint *)(lVar28 + 0x5c0) < 1) {
      local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
      if (*(long *)(lVar28 + 0x4b0) == 0) goto LAB_01fdd770;
      puVar37 = *(uint **)(*(long *)(lVar28 + 0x4b0) + 8);
      local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
      if ((puVar37 == (uint *)0x0) ||
         (((uVar18 < *(uint *)(lVar28 + 0x4c8) &&
           (local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28),
           *(char *)(*(long *)(lVar28 + 0x4d0) + (long)(int)uVar18) == '\0')) ||
          (local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28),
          *puVar37 <= uVar18)))) goto LAB_01fdd770;
      local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
      if (puVar37[1] == 0) goto LAB_01fdd770;
      local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
      if ((ushort)puVar37[2] == 0) goto LAB_01fdd770;
      iVar16 = 0xc;
      if (*(char *)((long)puVar37 + 10) != '\0') {
        iVar16 = 0x1c;
      }
      puVar37 = (uint *)((ulong)(puVar37[1] * uVar18 + (uint)(ushort)puVar37[2] * 8 + iVar16) +
                        (long)puVar37);
    }
    else {
      local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
      if (*(uint *)(lVar28 + 0x5c0) <= uVar18) goto LAB_01fdd770;
      if (*(uint *)(lVar28 + 0x5b0) <= uVar18) {
        uVar18 = 0;
      }
      puVar37 = *(uint **)(*(long *)(lVar28 + 0x5b8) + (ulong)uVar18 * 8);
    }
    local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
    if (puVar37 == (uint *)0x0) goto LAB_01fdd770;
    uVar18 = *puVar37;
    local_ac[0] = 0;
    if ((uVar18 != 0) && (puVar37 != (uint *)(ulong)uVar18)) {
      puVar29 = (uint *)((long)puVar37 - (long)(ulong)uVar18);
      local_ac[0] = 0;
      if (*puVar29 != 0) {
        uVar18 = puVar29[1];
        if ((uVar18 != 0) && ((ulong)(ushort)puVar29[2] != 0)) {
          lVar28 = 0xc;
          if (*(char *)((long)puVar29 + 10) != '\0') {
            lVar28 = 0x1c;
          }
          lVar28 = (long)puVar29 + lVar28 + (ulong)(ushort)puVar29[2] * 8;
          if (lVar28 != 0) {
            uVar17 = 0;
            if ((ulong)uVar18 != 0) {
              uVar17 = (uint)((ulong)((long)puVar37 - lVar28) / (ulong)uVar18);
            }
            if (*puVar29 <= uVar17) {
              uVar17 = 0xffffffff;
            }
            if ((uVar17 < *(uint *)PTR_DAT_04bc23d8) &&
               (local_ac[0] = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc23d8 + 8) + (long)(int)uVar17 * 2),
               local_ac[0] < 9)) goto LAB_01fdc434;
          }
        }
        local_ac[0] = 0;
      }
    }
LAB_01fdc434:
    if ((*(byte *)(param_1 + 0xafb1) >> 1 & 1) != 0) {
      puVar36 = (undefined8 *)(param_1 + 0x11fc8);
      lVar40 = *(long *)PTR_DAT_04bb43c0;
      uVar18 = FUN_0277d6c4();
      lVar28 = *(long *)puVar9;
      if (lVar28 != 0) {
        lVar40 = *(long *)(lVar40 + 0x57e58);
        uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar40 + 0x1f8);
        if ((uVar18 < *(uint *)(lVar40 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar40 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
          local_2640 = (undefined8 *)0x0;
          local_2650 = PTR_DAT_04bc0510 + 0x10;
          local_2648 = (undefined8 *)*puVar36;
          uVar18 = FUN_0277d6c4(&local_2648);
          if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_01fdce18:
            local_32f0 = (long *)((ulong)local_32f0._4_4_ << 0x20);
LAB_01fdce1c:
            puVar37 = local_ac;
          }
          else {
            lVar28 = *(long *)(lVar28 + 0x57e58);
            uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
            if ((*(uint *)(lVar28 + 0x1d8) <= uVar18) ||
               (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar18 * 8) == 0))
            goto LAB_01fdce18;
            lVar28 = *(long *)PTR_DAT_04bc0428;
            uVar18 = FUN_0277d6c4(puVar36);
            uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
            if ((*(uint *)(lVar28 + 0x1d8) <= uVar18) ||
               (((puVar37 = *(uint **)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar18 * 8),
                 puVar37 == (uint *)0x0 || (uVar18 = *puVar37, uVar18 == 0)) ||
                (puVar37 == (uint *)(ulong)uVar18)))) goto LAB_01fdce18;
            puVar29 = (uint *)((long)puVar37 - (long)(ulong)uVar18);
            if (((*puVar29 == 0) || (uVar18 = puVar29[1], uVar18 == 0)) ||
               ((ulong)(ushort)puVar29[2] == 0)) goto LAB_01fdce18;
            lVar28 = 0xc;
            if (*(char *)((long)puVar29 + 10) != '\0') {
              lVar28 = 0x1c;
            }
            lVar28 = (long)puVar29 + lVar28 + (ulong)(ushort)puVar29[2] * 8;
            if (lVar28 == 0) goto LAB_01fdce18;
            uVar17 = 0;
            if ((ulong)uVar18 != 0) {
              uVar17 = (uint)((ulong)((long)puVar37 - lVar28) / (ulong)uVar18);
            }
            if (*puVar29 <= uVar17) {
              uVar17 = 0xffffffff;
            }
            if ((*(uint *)PTR_DAT_04bc0110 <= uVar17) ||
               (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bc0110 + 8) + (long)(int)uVar17 * 2),
               uVar18 = (uint)uVar6, 8 < uVar6)) goto LAB_01fdce18;
            local_32f0 = (long *)CONCAT44(local_32f0._4_4_,uVar18);
            if (uVar18 == 0) goto LAB_01fdce1c;
            if (local_ac[0] == 0) goto LAB_01fddabc;
            if (uVar18 == local_ac[0]) goto LAB_01fdce1c;
            if (uVar18 == 1) {
              if (local_ac[0] - 5 < 2) goto LAB_01fdce1c;
            }
            else if ((((local_ac[0] != 1) || (1 < uVar18 - 5)) && (uVar18 == 7)) &&
                    (local_ac[0] != 2)) goto LAB_01fdce1c;
LAB_01fddabc:
            puVar37 = (uint *)&local_32f0;
          }
          uVar30 = FUN_01fbcee8(param_1,&local_5d40,puVar36,param_1 + 0x11fd0,*puVar37);
          if ((uVar30 & 1) != 0) {
            local_5d44 = *(int *)(param_1 + 0x11ff8);
            break;
          }
        }
      }
      *(uint *)(param_1 + 0xafb0) = *(uint *)(param_1 + 0xafb0) & 0xfffffdff;
    }
    lVar28 = *(long *)PTR_DAT_04bb4970;
    local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
    if (lVar28 == 0) goto LAB_01fdd770;
    local_2648 = (undefined8 *)0x0;
    local_2640 = &local_2630;
    local_2650 = (undefined *)0x0;
    local_2630 = alStack_2608;
    lVar40 = 0xc6;
    plVar21 = local_2630;
    do {
      lVar40 = lVar40 + -2;
      *plVar21 = (long)(plVar21 + 5);
      plVar21[5] = (long)(plVar21 + 10);
      plVar21 = plVar21 + 10;
    } while (lVar40 != 0);
    local_718 = 0;
    if (auStack_6f0 != (undefined8 *)0x0) {
      local_2650 = (undefined *)0xc800000000;
      local_2648 = auStack_6f0;
    }
    local_2638 = local_2640;
    FUN_01521078(&local_2650);
    local_32e8 = (undefined8 *)0x0;
    local_32f0 = (long *)0x0;
    local_32e0 = local_32d0;
    lVar40 = 0;
    while( true ) {
      plVar21 = (long *)((long)local_32d0 + lVar40 + 8);
      *plVar21 = (long)local_32d0 + lVar40 + 0x10;
      *(long **)((long)local_32d0 + lVar40) = plVar21;
      *(undefined1 **)((long)local_32d0 + lVar40 + 0x10) = auStack_32b0 + lVar40 + -8;
      if (lVar40 == 0x620) break;
      *(undefined1 **)(auStack_32b0 + lVar40 + -8) = auStack_32b0 + lVar40;
      lVar40 = lVar40 + 0x20;
    }
    local_2c98 = 0;
    if (local_2c90 != (undefined8 *)0x0) {
      local_32f0 = (long *)0xc800000000;
      local_32e8 = local_2c90;
    }
    lVar40 = 0;
    local_32d8 = local_32e0;
    do {
      lVar24 = lVar40 + 0x14;
      *(undefined4 *)((long)local_3600 + lVar40) = 0x7f7fffff;
      *(undefined8 *)((long)local_3610 + lVar40) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)local_3610 + lVar40 + 8) = 0x7f7fffff7f7fffff;
      lVar40 = lVar24;
    } while (lVar24 != 800);
    uVar30 = local_3638 >> 8;
    local_3638 = local_3638 & 0xffffffffffffff00;
    local_3630 = (undefined **)(PTR_DAT_04bbbce0 + 0x10);
    if (*puVar1 == 0x2b) {
      local_3630 = &PTR_LAB_04a6ab10;
      local_3638 = CONCAT71((int7)uVar30,1);
      lStack_3628 = param_1;
    }
    local_42d8 = &PTR_LAB_04a6ab38;
    local_42d0 = &local_5b10;
    local_42c0 = &local_3638;
    local_42c8 = (long *)lVar28;
    FUN_01fe1430(&local_32f0,local_3610,*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278,&local_2650
                 ,&local_42d8);
    if (1 < (int)(float)local_32f0) {
      uVar17 = 0;
      uVar18 = (int)(float)local_32f0 - 1;
      do {
        if ((int)uVar18 <= (int)uVar17) break;
        puVar37 = (uint *)local_32e8[uVar17];
        uVar32 = (ulong)uVar17;
        uVar34 = (ulong)uVar18;
        uVar30 = uVar32;
        uVar18 = uVar17;
        do {
          uVar38 = (ulong)*puVar37;
          puVar29 = (uint *)local_32e8[uVar30 + 1];
          if (199 < *puVar37) {
            uVar38 = 0;
          }
          uVar39 = (ulong)*puVar29;
          if (199 < *puVar29) {
            uVar39 = 0;
          }
          if (0.0 < local_3610[uVar38] - local_3610[uVar39]) {
            uVar18 = (uint)uVar30;
            local_32e8[uVar30 + 1] = puVar37;
            local_32e8[uVar30] = puVar29;
          }
          else {
            puVar37 = puVar29;
          }
          uVar30 = uVar30 + 1;
        } while (uVar34 != uVar30);
        if ((int)uVar18 <= (int)uVar17) break;
        puVar37 = (uint *)local_32e8[uVar18];
        uVar30 = (ulong)uVar18;
        uVar17 = uVar18;
        do {
          uVar34 = (ulong)*puVar37;
          puVar29 = (uint *)local_32e8[uVar30 - 1];
          if (199 < *puVar37) {
            uVar34 = 0;
          }
          uVar38 = (ulong)*puVar29;
          if (199 < *puVar29) {
            uVar38 = 0;
          }
          if (local_3610[uVar34] - local_3610[uVar38] < 0.0) {
            uVar17 = (uint)uVar30;
            local_32e8[uVar30 - 1] = puVar37;
            local_32e8[uVar30] = puVar29;
          }
          else {
            puVar37 = puVar29;
          }
          uVar30 = uVar30 - 1;
        } while ((long)uVar32 < (long)uVar30);
      } while (uVar17 != uVar18);
    }
    iVar16 = *(int *)(*(long *)PTR_DAT_04bb4e28 + 0xe0);
    if (iVar16 != 0) {
      lVar40 = 0;
      lVar24 = (long)iVar16 << 3;
      lVar26 = *(long *)(*(long *)PTR_DAT_04bb4e28 + 0xe8);
      do {
        if (*(int *)(*(long *)(param_1 + 8) + 0x230) == *(int *)(*(long *)(lVar26 + lVar40 * 8) + 8)
           ) {
          uVar18 = *(uint *)(*(long *)(lVar26 + lVar40 * 8) + 0xd8);
          goto LAB_01fdd18c;
        }
        lVar40 = lVar40 + 1;
        lVar24 = lVar24 + -8;
      } while (lVar24 != 0);
    }
    uVar18 = 0;
LAB_01fdd18c:
    local_42d0 = (long *)0x0;
    local_42d8 = (undefined **)0x0;
    local_42c8 = local_42b8;
    lVar40 = 0;
    while( true ) {
      plVar21 = (long *)((long)local_42b8 + lVar40 + 8);
      *plVar21 = (long)local_42b8 + lVar40 + 0x10;
      *(long **)((long)local_42b8 + lVar40) = plVar21;
      *(undefined1 **)((long)local_42b8 + lVar40 + 0x10) = auStack_4298 + lVar40 + -8;
      if (lVar40 == 0x620) break;
      *(undefined1 **)(auStack_4298 + lVar40 + -8) = auStack_4298 + lVar40;
      lVar40 = lVar40 + 0x20;
    }
    local_3c80 = 0;
    if (local_3c78 != (undefined1 *)0x0) {
      local_42d8 = (undefined **)0xc800000000;
      local_42d0 = (long *)local_3c78;
    }
    local_4f70 = (undefined1 *)0x0;
    local_4f68 = local_4f58;
    local_4f78 = 0;
    lVar40 = 0;
    while( true ) {
      plVar21 = (long *)((long)local_4f58 + lVar40 + 8);
      *plVar21 = (long)local_4f58 + lVar40 + 0x10;
      *(long **)((long)local_4f58 + lVar40) = plVar21;
      *(undefined1 **)((long)local_4f58 + lVar40 + 0x10) = auStack_4f38 + lVar40 + -8;
      if (lVar40 == 0x620) break;
      *(undefined1 **)(auStack_4f38 + lVar40 + -8) = auStack_4f38 + lVar40;
      lVar40 = lVar40 + 0x20;
    }
    local_4920 = 0;
    if (local_4918 != (undefined1 *)0x0) {
      local_4f78 = 0xc800000000;
      local_4f70 = local_4918;
    }
    local_4f60 = local_4f68;
    local_42c0 = (ulong *)local_42c8;
    if ((float)local_32f0 != 0.0) {
      puVar3 = local_32e8 + (int)(float)local_32f0;
      puVar36 = local_32e8;
      do {
        piVar41 = (int *)*puVar36;
        if ((*(long *)(lVar28 + 0xb0) != 0) &&
           (*(long *)(*(long *)(lVar28 + 0xb0) + 8) != 0 && *(short *)local_2648[*piVar41] != -2)) {
          uVar17 = FUN_0277d6c4();
          plVar21 = local_42c8;
          puVar9 = PTR_DAT_04bb7ea0;
          uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
          if ((uVar17 < *(uint *)(lVar28 + 0x1d8)) &&
             (puVar37 = *(uint **)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar17 * 8),
             puVar37 != (uint *)0x0)) {
            local_5b08 = CONCAT44(local_5b08._4_4_,uVar18);
            uVar17 = *puVar37;
            if (uVar17 != 0) {
              cVar35 = *PTR_DAT_04bb7e98;
              while( true ) {
                if (cVar35 == '\0') {
                  cVar35 = '\x01';
                  *PTR_DAT_04bb7e98 = 1;
                  *(undefined8 *)puVar9 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0xa0) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0xa8) = 0xffffffffffffffff;
                  uVar17 = *puVar37;
                }
                else {
                  uVar4 = *(uint *)(puVar9 + 0xa4);
                  if (-1 < (int)uVar4) {
                    if ((ulong)uVar4 + (long)puVar37 != 0) {
                      uVar17 = uVar18 + 7;
                      if (-1 < (int)uVar18) {
                        uVar17 = uVar18;
                      }
                      if ((*(byte *)((ulong)uVar4 + (long)puVar37 + (ulong)(uint)((int)uVar17 >> 3))
                           >> (ulong)(uVar18 & 7) & 1) != 0) {
                        if ((int)(uint)local_42d8 < local_42d8._4_4_) {
                          if (local_42c8 != (long *)0x0) {
                            local_42c8 = (long *)*local_42c8;
                          }
                          *(int *)plVar21 = *piVar41;
                          if ((int)(uint)local_42d8 < local_42d8._4_4_) {
                            *(long **)((long)local_42d0 + (long)(int)(uint)local_42d8 * 8) = plVar21
                            ;
                            local_42d8 = (undefined **)
                                         CONCAT44(local_42d8._4_4_,(uint)local_42d8 + 1);
                          }
                        }
                        goto LAB_01fdd284;
                      }
                    }
                    break;
                  }
                  if (uVar4 != 0xffffffff) break;
                }
                puVar29 = (uint *)(ulong)uVar17;
                if ((puVar29 == (uint *)0x0) || (puVar37 == puVar29)) break;
                lVar40 = 0xc;
                if (*(char *)((long)puVar37 + (10 - (long)puVar29)) != '\0') {
                  lVar40 = 0x1c;
                }
                lVar40 = (long)puVar37 + (lVar40 - (long)puVar29);
                if (lVar40 == 0) break;
                uVar30 = (ulong)*(ushort *)((long)puVar37 + (8 - (long)puVar29));
                *(undefined4 *)(puVar9 + 0xa4) = 0xfffffffe;
                if (uVar30 == 0) break;
                piVar33 = (int *)(lVar40 + 4);
                while (piVar33[-1] != 0x705a5d0b) {
                  piVar33 = piVar33 + 2;
                  uVar30 = uVar30 - 1;
                  if (uVar30 == 0) goto LAB_01fdd488;
                }
                iVar16 = 0;
                if (*piVar33 != -1) {
                  iVar16 = *piVar33;
                }
                *(int *)(puVar9 + 0xa4) = iVar16;
                uVar17 = *puVar37;
                if (uVar17 == 0) break;
              }
            }
          }
        }
LAB_01fdd488:
        plVar21 = local_4f68;
        if ((int)(uint)local_4f78 < local_4f78._4_4_) {
          if (local_4f68 != (long *)0x0) {
            local_4f68 = (long *)*local_4f68;
          }
          *(int *)plVar21 = *piVar41;
          if ((int)(uint)local_4f78 < local_4f78._4_4_) {
            *(long **)(local_4f70 + (long)(int)(uint)local_4f78 * 8) = plVar21;
            local_4f78 = CONCAT44(local_4f78._4_4_,(uint)local_4f78 + 1);
          }
        }
LAB_01fdd284:
        puVar36 = puVar36 + 1;
      } while (puVar36 != puVar3);
    }
    local_4fa0 = &local_5d40;
    local_4f98 = &local_5d44;
    local_4f90 = &local_2650;
    local_4f80 = local_ac;
    local_5af0 = local_5ae8;
    local_5b00 = (undefined8 *)0x0;
    lVar28 = 0;
    while( true ) {
      plVar21 = (long *)((long)local_5ae8 + lVar28 + 8);
      *plVar21 = (long)local_5ae8 + lVar28 + 0x10;
      *(long **)((long)local_5ae8 + lVar28) = plVar21;
      *(undefined1 **)((long)local_5ae8 + lVar28 + 0x10) = auStack_5ac8 + lVar28 + -8;
      if (lVar28 == 0x580) break;
      *(undefined1 **)(auStack_5ac8 + lVar28 + -8) = auStack_5ac8 + lVar28;
      lVar28 = lVar28 + 0x20;
    }
    local_5550 = 0;
    local_5af8 = local_5af0;
    local_4f88 = puVar1;
    if (auStack_5548 == (undefined8 *)0x0) {
      local_5b08 = 0;
      local_4fa8 = param_1;
    }
    else {
      local_5b08 = 0xb400000000;
      local_5b00 = auStack_5548;
      local_4fa8 = param_1;
      if (0 < (int)(uint)local_42d8) {
        lVar28 = 0;
        uVar18 = (uint)local_42d8;
        if (0xb3 < (int)(uint)local_42d8) {
          uVar18 = 0xb4;
        }
        iVar16 = 0;
        do {
          plVar21 = local_5af8;
          if (iVar16 < local_5b08._4_4_) {
            if (local_5af8 != (long *)0x0) {
              local_5af8 = (long *)*local_5af8;
            }
            *(undefined4 *)plVar21 = **(undefined4 **)((long)local_42d0 + lVar28);
            iVar16 = (int)local_5b08;
            if ((int)local_5b08 < local_5b08._4_4_) {
              auStack_5548[(int)local_5b08] = plVar21;
              iVar16 = (int)local_5b08 + 1;
              local_5b08 = CONCAT44(local_5b08._4_4_,iVar16);
            }
          }
          lVar28 = lVar28 + 8;
        } while ((ulong)uVar18 * 8 != lVar28);
      }
    }
    uVar30 = FUN_01fe5000(&local_4fa8,&local_5b08);
    if ((uVar30 & 1) == 0) {
      local_5af0 = local_5ae8;
      local_5b00 = (undefined8 *)0x0;
      lVar28 = 0;
      while( true ) {
        plVar21 = (long *)((long)local_5ae8 + lVar28 + 8);
        *plVar21 = (long)local_5ae8 + lVar28 + 0x10;
        *(long **)((long)local_5ae8 + lVar28) = plVar21;
        *(undefined1 **)((long)local_5ae8 + lVar28 + 0x10) = auStack_5ac8 + lVar28 + -8;
        if (lVar28 == 0x580) break;
        *(undefined1 **)(auStack_5ac8 + lVar28 + -8) = auStack_5ac8 + lVar28;
        lVar28 = lVar28 + 0x20;
      }
      local_5550 = 0;
      local_5af8 = local_5af0;
      if (auStack_5548 == (undefined8 *)0x0) {
        local_5b08 = 0;
      }
      else {
        local_5b08 = 0xb400000000;
        local_5b00 = auStack_5548;
        if (0 < (int)(uint)local_4f78) {
          lVar28 = 0;
          uVar18 = (uint)local_4f78;
          if (0xb3 < (int)(uint)local_4f78) {
            uVar18 = 0xb4;
          }
          iVar16 = 0;
          do {
            plVar21 = local_5af8;
            if (iVar16 < local_5b08._4_4_) {
              if (local_5af8 != (long *)0x0) {
                local_5af8 = (long *)*local_5af8;
              }
              *(undefined4 *)plVar21 = **(undefined4 **)(local_4f70 + lVar28);
              iVar16 = (int)local_5b08;
              if ((int)local_5b08 < local_5b08._4_4_) {
                auStack_5548[(int)local_5b08] = plVar21;
                iVar16 = (int)local_5b08 + 1;
                local_5b08 = CONCAT44(local_5b08._4_4_,iVar16);
              }
            }
            lVar28 = lVar28 + 8;
          } while ((ulong)uVar18 * 8 != lVar28);
        }
      }
      uVar30 = FUN_01fe5000(&local_4fa8,&local_5b08);
      puVar9 = PTR_DAT_04bb37e0;
      if ((uVar30 & 1) == 0) {
        *(undefined2 *)(param_1 + 0x11fc8) = *(undefined2 *)PTR_DAT_04bb37e0;
        *(undefined *)(param_1 + 0x11fca) = puVar9[2];
        *(undefined *)(param_1 + 0x11fcb) = puVar9[3];
        uVar44 = *(undefined4 *)(puVar9 + 4);
        *(undefined8 *)(param_1 + 0x11fe0) = 0;
        *(undefined4 *)(param_1 + 0x11fcc) = uVar44;
        *(undefined8 *)(param_1 + 0x11ff0) = 0;
        *(undefined8 *)(param_1 + 0x11ff8) = 0;
        *(undefined8 *)(param_1 + 0x12000) = 0;
        local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
        goto LAB_01fdd770;
      }
    }
    break;
  case 3:
    lVar28 = *(long *)PTR_DAT_04bb5ce0;
    if (lVar28 == 0) {
      local_2650 = (undefined *)((ulong)local_2650._4_4_ << 0x20);
      local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
      goto LAB_01fdd770;
    }
    uVar6 = *(ushort *)(lVar28 + 0xf6c);
    iVar16 = *(int *)(lVar28 + 0xed0);
    if ((uVar6 & 2) != 0) {
      iVar16 = 0;
    }
    if (iVar16 == 0) {
      iVar16 = *(int *)(lVar28 + 0xecc);
      if ((uVar6 & 2) != 0) {
        iVar16 = 0;
      }
      local_2650 = (undefined *)CONCAT44(local_2650._4_4_,iVar16);
      local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
      if (iVar16 == 0) goto LAB_01fdd770;
      fVar53 = *(float *)(lVar28 + 0xf34);
      fVar43 = 0.0;
      fVar46 = 0.0;
      fVar52 = *(float *)(lVar28 + 0xf38);
      fVar50 = 0.0;
      bVar13 = false;
      fVar51 = *(float *)(lVar28 + 0xf3c);
      bVar5 = *(byte *)(lVar28 + 0xedc);
LAB_01fdc9b8:
      local_2650 = (undefined *)CONCAT44(local_2650._4_4_,1);
      bVar14 = (bVar5 >> 1 & 1) == 0;
    }
    else {
      iVar16 = *(int *)(lVar28 + 0xecc);
      if ((uVar6 & 2) != 0) {
        iVar16 = 0;
      }
      fVar50 = *(float *)(lVar28 + 0xf28);
      fVar46 = *(float *)(lVar28 + 0xf2c);
      fVar43 = *(float *)(lVar28 + 0xf30);
      if (iVar16 != 0) {
        fVar53 = *(float *)(lVar28 + 0xf34);
        local_2650 = (undefined *)CONCAT44(local_2650._4_4_,3);
        fVar52 = *(float *)(lVar28 + 0xf38);
        fVar51 = *(float *)(lVar28 + 0xf3c);
        bVar5 = *(byte *)(lVar28 + 0xedc);
        bVar13 = (bVar5 >> 3 & 1) == 0;
        goto LAB_01fdc9b8;
      }
      local_2650 = (undefined *)CONCAT44(local_2650._4_4_,3);
      bVar13 = (*(byte *)(lVar28 + 0xedc) >> 3 & 1) == 0;
      bVar14 = false;
      fVar51 = 0.0;
      fVar52 = 0.0;
      fVar53 = 0.0;
    }
    if ((!bVar13) &&
       (local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28), !bVar14)) {
LAB_01fdd770:
      FUN_01fddb40(param_1);
      return;
    }
    local_32e8 = (undefined8 *)CONCAT44(local_32e8._4_4_,fVar51);
    local_2648 = (undefined8 *)CONCAT44(local_2648._4_4_,fVar43 + 0.0);
    local_2650 = (undefined *)CONCAT44(fVar46 + 0.0,fVar50 + 5.0);
    local_32f0 = (long *)CONCAT44(fVar52,fVar53 + -5.0);
    uVar44 = FUN_0097a900(0,&local_2650,0);
    local_2650 = (undefined *)CONCAT44(uVar44,(float)local_2650);
    uVar44 = FUN_0097a900(&local_32f0,0);
    local_32f0 = (long *)CONCAT44(uVar44,(float)local_32f0);
    uVar18 = 0;
    if (bVar13) {
      uVar18 = FUN_01fe4ee8(param_1,&local_2650);
    }
    if (bVar14) {
      uVar17 = FUN_01fe4ee8(param_1,&local_32f0);
    }
    else {
      uVar17 = 0;
    }
    local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
    if (((uVar18 | uVar17) & 1) == 0) goto LAB_01fdd770;
    if ((uVar18 & uVar17 & 1) == 0) {
      if ((uVar18 & 1) != 0) goto LAB_01fdcafc;
LAB_01fdcb28:
      local_5cec = 2;
      pfVar25 = (float *)&local_32f0;
      fStack_5d2c = fVar53;
      local_5d28._0_4_ = fVar52;
      local_5d28._4_4_ = fVar51;
    }
    else {
      lVar28 = *(long *)(*(long *)(param_1 + 8) + 0x68);
      fVar45 = *(float *)(lVar28 + 0x278);
      fVar48 = *(float *)(lVar28 + 0x280);
      fVar47 = fVar45 - fVar50;
      fVar49 = fVar48 - fVar43;
      fVar45 = fVar45 - fVar53;
      fVar48 = fVar48 - fVar51;
      if (SQRT(fVar48 * fVar48 + fVar45 * fVar45) <= SQRT(fVar49 * fVar49 + fVar47 * fVar47))
      goto LAB_01fdcb28;
LAB_01fdcafc:
      local_5cec = 8;
      pfVar25 = (float *)&local_2650;
      fStack_5d2c = fVar50;
      local_5d28._0_4_ = fVar46;
      local_5d28._4_4_ = fVar43;
    }
    iVar16 = (int)((float)(int)*pfVar25 / 5.0) - (uint)(*pfVar25 < 0.0);
    iVar23 = (int)((float)(int)pfVar25[2] / 5.0) - (uint)(pfVar25[2] < 0.0);
    local_5d10 = (undefined8 *)CONCAT44(iVar23,iVar16);
    local_5d00 = (long *)CONCAT44(iVar23,iVar16);
  }
  lVar28 = *(long *)puVar10;
  if (lVar28 != 0) {
    uVar18 = *puVar1;
    if ((int)*(uint *)(lVar28 + 0x5c0) < 1) {
      if ((((*(long *)(lVar28 + 0x4b0) != 0) &&
           (puVar37 = *(uint **)(*(long *)(lVar28 + 0x4b0) + 8), puVar37 != (uint *)0x0)) &&
          ((*(uint *)(lVar28 + 0x4c8) <= uVar18 ||
           (*(char *)(*(long *)(lVar28 + 0x4d0) + (long)(int)uVar18) != '\0')))) &&
         (((uVar18 < *puVar37 && (puVar37[1] != 0)) && ((ushort)puVar37[2] != 0)))) {
        iVar16 = 0xc;
        if (*(char *)((long)puVar37 + 10) != '\0') {
          iVar16 = 0x1c;
        }
        lVar28 = (ulong)(puVar37[1] * uVar18 + (uint)(ushort)puVar37[2] * 8 + iVar16) +
                 (long)puVar37;
        goto joined_r0x01fdc710;
      }
    }
    else if (uVar18 < *(uint *)(lVar28 + 0x5c0)) {
      if (*(uint *)(lVar28 + 0x5b0) <= uVar18) {
        uVar18 = 0;
      }
      lVar28 = *(long *)(*(long *)(lVar28 + 0x5b8) + (ulong)uVar18 * 8);
joined_r0x01fdc710:
      if (lVar28 != 0) {
        uVar18 = FUN_03853b94();
        if ((*(uint *)PTR_DAT_04bc23e0 <= uVar18) ||
           (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bc23e0 + 8) + (long)(int)uVar18 * 2),
           uVar18 = (uint)uVar6, 3 < uVar6)) {
          uVar18 = 0;
        }
        local_2650 = (undefined *)CONCAT44(local_2650._4_4_,uVar18);
        switch(uVar18) {
        case 0:
switchD_01fdac04_caseD_0:
          local_5cc0[0] = 1;
          break;
        case 1:
          if ((int)local_5cf8 == 0) goto switchD_01fdac04_caseD_0;
          FUN_01fd7ed0(param_1,&local_5cf8);
          FUN_00adda18(&local_2650,&local_5cf8,0);
          if (((local_2650 != (undefined *)0x0) && ((char)local_2648 != '\0')) &&
             ((local_2648._1_1_ != '\0' && (lVar28 = FUN_01fd7e38(), lVar28 != 0)))) {
            local_32f0 = (long *)CONCAT44(local_32f0._4_4_,
                                          *(undefined4 *)(*(long *)(param_1 + 8) + 0x230));
            FUN_01fd7ed0(lVar28,&local_32f0);
          }
          local_5cc0[0] = 0x59;
          local_5c60 = 1;
          local_5c88 = CONCAT44((float)local_5d28,fStack_5d2c);
          local_5c80 = local_5d28._4_4_;
          break;
        case 2:
          local_5cc0[0] = 1;
          local_5c68 = 1;
          bVar13 = (*(uint *)(param_1 + 0xafb0) & 0x200) != 0;
          local_5c98 = CONCAT44((float)local_5d28,fStack_5d2c);
          piVar41 = (int *)((long)&local_5d00 + 4);
          if (bVar13) {
            piVar41 = (int *)(param_1 + 0x11ff4);
          }
          local_2650 = (undefined *)0x0;
          piVar33 = (int *)&local_5d00;
          piVar7 = (int *)((long)&local_5d10 + 4);
          piVar8 = (int *)&local_5d10;
          if (bVar13) {
            piVar33 = (int *)(param_1 + 0x11ff0);
            piVar7 = (int *)(param_1 + 0x11fe4);
            piVar8 = (int *)(param_1 + 0x11fe0);
          }
          iVar16 = *piVar8;
          iVar23 = *piVar7;
          iVar31 = *piVar33;
          iVar27 = *piVar41;
          local_2648 = (undefined8 *)((ulong)local_2648 & 0xffffffff00000000);
          local_5c90 = local_5d28._4_4_;
          local_5c60 = 2;
          local_5c38 = iVar16;
          local_5c34 = iVar23;
          local_5c28 = iVar31;
          local_5c24 = iVar27;
          if (local_5d44 - 2U < 4) {
            switch(local_5d44) {
            case 2:
              local_5c7c = 0x80000000;
              iVar19 = 2;
              break;
            case 3:
              local_5c7c = 0xc0000000;
              iVar19 = 3;
              break;
            case 4:
              local_5c7c = 0;
              iVar19 = 4;
              break;
            case 5:
              local_5c7c = 0x40000000;
              iVar19 = 5;
              break;
            default:
              local_5c7c = 0;
              iVar19 = local_5d44;
            }
            uVar44 = 0;
            local_2650._4_4_ = 0;
            local_2650._0_4_ = 0.0;
          }
          else {
            ppuVar2 = &local_5d20;
            if ((*(uint *)(param_1 + 0xafb0) & 0x200) != 0) {
              ppuVar2 = (undefined8 **)(param_1 + 0x11fd0);
            }
            FUN_012e20a8(ppuVar2,&local_2650);
            iVar19 = FUN_006f0400((float)local_2650 - fStack_5d2c,
                                  (float)local_2648 - local_5d28._4_4_);
            iVar23 = *piVar7;
            iVar31 = *piVar33;
            iVar27 = *piVar41;
            iVar16 = *piVar8;
            uVar44 = SUB84(local_2648,0);
            local_5c7c = (undefined4)
                         (long)((float)(iVar19 + 0x20000000U >> 0x1e) * 90.0 * 11930465.0);
            iVar19 = local_5d44;
          }
          *(int *)(param_1 + 0x11fe0) = iVar16;
          *(int *)(param_1 + 0x11fe4) = iVar23;
          *(int *)(param_1 + 0x11ff0) = iVar31;
          *(int *)(param_1 + 0x11ff4) = iVar27;
          *(int *)(param_1 + 0x11ff8) = iVar19;
          *(float *)(param_1 + 0x11ffc) = (float)local_2650;
          *(uint *)(param_1 + 0x12000) = local_2650._4_4_;
          *(undefined4 *)(param_1 + 0x12004) = uVar44;
          *(undefined2 *)(param_1 + 0x11fca) = local_5ce8._2_2_;
          *(undefined2 *)(param_1 + 0x11fc8) = (undefined2)local_5ce8;
          *(undefined4 *)(param_1 + 0x11fcc) = local_5ce8._4_4_;
          break;
        case 3:
          local_5cc0[0] = 1;
          local_5c68 = 1;
          local_5c78 = 1;
          local_5c60 = 2;
          local_5c74 = fStack_5d2c;
          fStack_5c70 = (float)local_5d28;
          local_5c6c = local_5d28._4_4_;
          local_5c98 = CONCAT44((float)local_5d28,fStack_5d2c);
          local_5c7c = 0xc0000000;
          if ((local_5cec & 8) == 0) {
            local_5c7c = 0x40000000;
          }
          local_5c90 = local_5d28._4_4_;
        }
      }
    }
  }
  FUN_01fe32b0(param_1,auStack_5be4,puVar1);
  puVar9 = PTR_DAT_04bc23c8;
  puVar10 = PTR_DAT_04bc23c0;
  if (*puVar42 == 0) {
    puVar36 = (undefined8 *)0x0;
  }
  else {
    cVar35 = *PTR_DAT_04bc23c0;
    do {
      if (cVar35 == '\0') {
        cVar35 = '\x01';
        *(undefined8 *)puVar9 = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
        *puVar10 = 1;
        *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar18 = *(uint *)(puVar9 + 0x34);
        if (-1 < (int)uVar18) {
          puVar36 = (undefined8 *)((ulong)uVar18 + (long)puVar42);
          goto LAB_01fdd920;
        }
        if (uVar18 != 0xffffffff) break;
      }
      puVar37 = (uint *)(ulong)*puVar42;
      puVar36 = (undefined8 *)0x0;
      if ((*puVar42 == 0) || (puVar42 == puVar37)) goto LAB_01fdd920;
      lVar28 = 0xc;
      if (*(char *)((long)puVar42 + (10 - (long)puVar37)) != '\0') {
        lVar28 = 0x1c;
      }
      lVar28 = (long)puVar42 + (lVar28 - (long)puVar37);
      if (lVar28 == 0) break;
      uVar30 = (ulong)*(ushort *)((long)puVar42 + (8 - (long)puVar37));
      *(undefined4 *)(puVar9 + 0x34) = 0xfffffffe;
      puVar36 = (undefined8 *)0x0;
      if (uVar30 == 0) goto LAB_01fdd920;
      piVar41 = (int *)(lVar28 + 4);
      while (piVar41[-1] != 0x6c6fdb31) {
        piVar41 = piVar41 + 2;
        uVar30 = uVar30 - 1;
        if (uVar30 == 0) {
          puVar36 = (undefined8 *)0x0;
          goto LAB_01fdd920;
        }
      }
      iVar16 = 0;
      if (*piVar41 != -1) {
        iVar16 = *piVar41;
      }
      *(int *)(puVar9 + 0x34) = iVar16;
    } while (*puVar42 != 0);
    puVar36 = (undefined8 *)0x0;
  }
LAB_01fdd920:
  puVar3 = &DAT_0407ebb1;
  if (puVar36 != (undefined8 *)0x0) {
    puVar3 = puVar36;
  }
  if (local_5ba8 != puVar3) {
    lVar28 = 0;
    do {
      if (*(char *)((long)puVar3 + lVar28) == '\0') goto LAB_01fdd984;
      if (*(char *)((long)puVar3 + lVar28 + 1) == '\0') {
        lVar28 = lVar28 + 1;
        goto LAB_01fdd984;
      }
      if (*(char *)((long)puVar3 + lVar28 + 2) == '\0') {
        lVar28 = lVar28 + 2;
        goto LAB_01fdd984;
      }
      lVar28 = lVar28 + 3;
    } while (lVar28 != 0x80001);
    lVar28 = 0;
LAB_01fdd984:
    iVar16 = (int)lVar28;
    if (local_5ba0 <= (int)lVar28) {
      iVar16 = local_5ba0 + -1;
    }
    memcpy(local_5ba8,puVar3,(long)iVar16);
    *(undefined1 *)((long)local_5ba8 + (long)iVar16) = 0;
  }
  if (*puVar1 == 0x3c) {
    local_5c58 = 1;
    uVar30 = FUN_021f4f90(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278,0,0);
    if ((uVar30 & 1) != 0) {
      local_2648 = &DAT_0407ebb1;
      local_2650 = PTR_DAT_04bb2020 + 0x10;
      FUN_01ed8df0(auStack_5c50,0,&local_2650);
    }
  }
  *(long *)(param_1 + 0x12478) = param_1;
  *(code **)(param_1 + 0x12480) = FUN_01fde1f0;
  *(undefined1 **)(param_1 + 0x12460) = &LAB_01fe36c0;
  local_5cb8 = param_1 + 0x12470;
  lStack_5cb0 = param_1 + 0x12450;
  *(undefined8 *)(param_1 + 0x12488) = 0;
  local_5ca0 = param_1 + 0x12430;
  *(long *)(param_1 + 0x12458) = param_1;
  *(undefined8 *)(param_1 + 0x12468) = 0;
  *(long *)(param_1 + 0x12438) = param_1;
  *(undefined1 **)(param_1 + 0x12440) = &LAB_01fdeb2c;
  *(undefined8 *)(param_1 + 0x12448) = 0;
  local_5d28 = (undefined *)CONCAT44(local_5d28._4_4_,(float)local_5d28);
LAB_01fdc2b0:
  local_5c5c = 1;
  if (((*(ushort *)(param_1 + 0x1242c) >> 5 & 1) == 0) || (*puVar1 == 0x3c)) {
    if (*(int *)(param_1 + 0xb0c8) < *(int *)(param_1 + 0xb0cc)) {
      FUN_021920b0((int *)(param_1 + 0xb0c8),local_5cc0);
    }
  }
  else {
    *(ushort *)(param_1 + 0x1242c) = *(ushort *)(param_1 + 0x1242c) & 0xffdf;
    lVar28 = *(long *)(param_1 + 8);
    uVar18 = *(uint *)(lVar28 + 0x288);
    *(undefined4 *)(lVar28 + 0x288) = *(undefined4 *)(lVar28 + 0x28c);
    uVar18 = uVar18 ^ uVar18 << 0xb;
    *(undefined4 *)(lVar28 + 0x28c) = *(undefined4 *)(lVar28 + 0x290);
    uVar17 = *(uint *)(lVar28 + 0x294);
    *(uint *)(lVar28 + 0x290) = uVar17;
    uVar18 = uVar18 >> 8 ^ uVar17 >> 0x13 ^ uVar18 ^ uVar17;
    *(uint *)(lVar28 + 0x294) = uVar18;
    FUN_01fb1020(param_1,local_5cc0,(ulong)uVar18 * 0x5a >> 0x20);
  }
  return;
}

