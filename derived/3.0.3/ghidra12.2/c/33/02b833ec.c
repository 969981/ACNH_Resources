
/* WARNING: Removing unreachable block (ram,0x02b835b4) */
/* WARNING: Removing unreachable block (ram,0x02b835c4) */

uint FUN_02b833ec(long param_1,ulong *param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  short sVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  int *piVar16;
  uint *puVar17;
  short sVar18;
  uint uVar19;
  long lVar20;
  uint *puVar21;
  undefined2 *puVar22;
  char cVar23;
  long lVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined4 local_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  undefined2 local_e4;
  undefined8 local_e0;
  char local_d8;
  char local_d7;
  undefined4 local_d4;
  undefined *local_d0;
  int local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined2 local_bc [2];
  undefined *local_b8;
  char local_b0;
  undefined4 local_ac;
  undefined *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined2 local_94;
  ulong local_90;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined2 local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  if (*(int *)(param_1 + 0x550) == 0x1f) {
    uVar11 = 0;
    if ((((*(short *)(param_1 + 0xca2) == -1) || (*(short *)(param_1 + 0xca4) == -1)) ||
        (*(short *)(param_1 + 0xca6) == -1)) ||
       ((uVar11 = 0, *(short *)((long)param_2 + 2) == -1 || (*(short *)((long)param_2 + 4) == -1))))
    goto LAB_02b834f4;
    if (*(short *)((long)param_2 + 6) != -1) {
      local_90 = *param_2;
      uVar2 = *(ushort *)(param_1 + 0x448);
      uVar12 = (ulong)uVar2;
      local_88 = (undefined4)param_2[1];
      local_84 = *(int *)((long)param_2 + 0xc);
      uVar13 = local_90 >> 0x10;
      if ((uint)uVar2 == ((uint)(local_90 >> 0x10) & 0xffff)) {
        if ((uint)*(ushort *)(param_1 + 0x44a) == ((uint)(local_90 >> 0x20) & 0xffff)) {
          uVar13 = uVar12;
          if (*(short *)(param_1 + 0x44c) == (short)(local_90 >> 0x30)) {
            uVar13 = FUN_0277d7b4(param_1 + 0x450,&local_88);
            if ((((uVar13 & 1) != 0) && (*(char *)(param_1 + 0x453) == local_88._3_1_)) &&
               (*(int *)(param_1 + 0x454) == local_84)) goto LAB_02b834f0;
            uVar12 = (ulong)*(ushort *)(param_1 + 0x448);
            uVar13 = (ulong)*(ushort *)((long)param_2 + 2);
          }
        }
        else {
          uVar13 = (ulong)(uint)uVar2;
        }
      }
      uVar9 = FUN_02b59f30(uVar12);
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar9);
      iVar10 = FUN_02b59f30(uVar13 & 0xffffffff);
      *(undefined8 *)(param_1 + 0xcb4) = 0;
      uVar9 = 0xc0a00000;
      if ((int)local_b8 != 0) {
        uVar9 = 0x40a00000;
      }
      uVar25 = 0;
      if ((int)local_b8 != iVar10) {
        uVar25 = uVar9;
      }
      *(undefined4 *)(param_1 + 0xcb0) = uVar25;
      puVar7 = PTR_DAT_04bc4608;
      puVar4 = PTR_DAT_04bb2010;
      local_b0 = 0;
      local_ac = 0;
      local_b8 = PTR_DAT_04bc4608 + 0x10;
      local_98 = 0;
      local_94 = 0;
      local_a8 = PTR_DAT_04bb2010 + 0x10;
      local_a0 = 0;
      local_e0 = (long *)((ulong)local_e0._4_4_ << 0x20);
      puVar14 = &DAT_05636dd8;
      if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
        puVar14 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
      }
      if (puVar14[1] == 0) {
        local_b0 = PTR_DAT_04bbc570[8];
        local_d4 = *(undefined4 *)(PTR_DAT_04bbc570 + 0xc);
        local_c8 = *(int *)(PTR_DAT_04bbc570 + 0x18);
        iStack_c4 = *(int *)(PTR_DAT_04bbc570 + 0x1c);
        puVar22 = (undefined2 *)(PTR_DAT_04bbc570 + 0x24);
        local_c0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
      }
      else {
        FUN_01360490(&local_e0,puVar14[1],*(undefined4 *)(param_1 + 0x174));
        puVar22 = local_bc;
        local_b0 = local_d8;
      }
      local_94 = *puVar22;
      local_a0 = CONCAT44(iStack_c4,local_c8);
      local_ac = local_d4;
      local_98 = local_c0;
      FUN_02b81fc4(param_1);
      local_f4 = *(undefined4 *)(param_1 + 0x550);
      local_e4 = *(undefined2 *)((long)param_2 + 2);
      fStack_ec = *(float *)(param_1 + 0xcb4) + 0.0;
      local_f0 = *(float *)(param_1 + 0xcb0) +
                 ((float)*(int *)(param_1 + 0x5a8) * 10.0 +
                 (float)*(int *)(param_1 + 0x5b8) * 10.0 + 10.0) * 0.5;
      local_e8 = *(float *)(param_1 + 0xcb8) +
                 ((float)*(int *)(param_1 + 0x5ac) * 10.0 +
                 (float)*(int *)(param_1 + 0x5bc) * 10.0 + 10.0) * 0.5;
      uVar11 = FUN_02b92320(&local_f4,0);
      puVar6 = PTR_DAT_04bb5be8;
      puVar5 = PTR_DAT_04bb5be0;
      if ((uVar11 & 1) == 0) {
        FUN_02b81bf0(param_1,&local_b8);
        goto LAB_02b834f4;
      }
      lVar20 = *(long *)PTR_DAT_04bb5008;
      uVar2 = *(ushort *)(lVar20 + 0x9f0);
      uVar3 = (uint)*(ushort *)((long)param_2 + 2) - (uint)uVar2;
      uVar19 = *(uint *)(lVar20 + 0x9d0);
      if (((uVar3 < uVar19) &&
          (puVar21 = *(uint **)(*(long *)(lVar20 + 0x9d8) + (long)(int)uVar3 * 8),
          puVar21 != (uint *)0x0)) && (uVar3 = *puVar21, uVar3 != 0)) {
        cVar23 = *PTR_DAT_04bb5be0;
        do {
          if (cVar23 == '\0') {
            cVar23 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            uVar3 = *puVar21;
          }
          else {
            uVar1 = *(uint *)(puVar6 + 0xc);
            if (-1 < (int)uVar1) {
              sVar18 = 0;
              if ((short *)((ulong)uVar1 + (long)puVar21) != (short *)0x0) {
                sVar18 = *(short *)((ulong)uVar1 + (long)puVar21);
              }
              goto LAB_02b83808;
            }
            if (uVar1 != 0xffffffff) break;
          }
          puVar17 = (uint *)(ulong)uVar3;
          sVar18 = 0;
          if ((puVar17 == (uint *)0x0) || (puVar21 == puVar17)) goto LAB_02b83808;
          lVar24 = 0xc;
          if (*(char *)((long)puVar21 + (10 - (long)puVar17)) != '\0') {
            lVar24 = 0x1c;
          }
          lVar24 = (long)puVar21 + (lVar24 - (long)puVar17);
          if (lVar24 == 0) break;
          uVar13 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar17));
          *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
          sVar18 = 0;
          if (uVar13 == 0) goto LAB_02b83808;
          piVar16 = (int *)(lVar24 + 4);
          while (piVar16[-1] != -0x490afe2e) {
            piVar16 = piVar16 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) {
              sVar18 = 0;
              goto LAB_02b83808;
            }
          }
          sVar18 = 0;
          iVar10 = 0;
          if (*piVar16 != -1) {
            iVar10 = *piVar16;
          }
          *(int *)(puVar6 + 0xc) = iVar10;
          uVar3 = *puVar21;
          if (uVar3 == 0) goto LAB_02b83808;
        } while( true );
      }
      sVar18 = 0;
LAB_02b83808:
      puVar6 = PTR_DAT_04bb5be8;
      puVar5 = PTR_DAT_04bb5be0;
      uVar3 = (uint)*(ushort *)(param_1 + 0x448) - (uint)uVar2;
      if (((uVar3 < uVar19) &&
          (puVar21 = *(uint **)(*(long *)(lVar20 + 0x9d8) + (long)(int)uVar3 * 8),
          puVar21 != (uint *)0x0)) && (uVar19 = *puVar21, uVar19 != 0)) {
        cVar23 = *PTR_DAT_04bb5be0;
        do {
          if (cVar23 == '\0') {
            cVar23 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            uVar19 = *puVar21;
          }
          else {
            uVar3 = *(uint *)(puVar6 + 0xc);
            if (-1 < (int)uVar3) {
              if ((short *)((ulong)uVar3 + (long)puVar21) == (short *)0x0) break;
              sVar8 = *(short *)((ulong)uVar3 + (long)puVar21);
              goto LAB_02b83920;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar17 = (uint *)(ulong)uVar19;
          sVar8 = 0;
          if ((puVar17 == (uint *)0x0) || (puVar21 == puVar17)) goto LAB_02b83920;
          lVar20 = 0xc;
          if (*(char *)((long)puVar21 + (10 - (long)puVar17)) != '\0') {
            lVar20 = 0x1c;
          }
          lVar20 = (long)puVar21 + (lVar20 - (long)puVar17);
          sVar8 = 0;
          if (lVar20 == 0) goto LAB_02b83920;
          uVar13 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar17));
          *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
          if (uVar13 == 0) break;
          piVar16 = (int *)(lVar20 + 4);
          while (piVar16[-1] != -0x490afe2e) {
            piVar16 = piVar16 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_02b8391c;
          }
          sVar8 = 0;
          iVar10 = 0;
          if (*piVar16 != -1) {
            iVar10 = *piVar16;
          }
          *(int *)(puVar6 + 0xc) = iVar10;
          uVar19 = *puVar21;
          if (uVar19 == 0) goto LAB_02b83920;
        } while( true );
      }
LAB_02b8391c:
      sVar8 = 0;
LAB_02b83920:
      *(undefined1 *)(param_1 + 0xcbd) = 0;
      local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
      *(bool *)(param_1 + 0xcbc) = sVar18 != sVar8;
      uVar13 = FUN_02a6cf94(param_1 + 0x290 + (ulong)(*(uint *)(param_1 + 0x288) & 1) * 0x58 + 8,
                            param_1 + 0x438);
      if ((uVar13 & 1) != 0) {
        local_78 = (undefined *)
                   CONCAT44(local_78._4_4_,
                            *(undefined4 *)
                             (param_1 + 0x290 + (ulong)(*(uint *)(param_1 + 0x288) & 1) * 0x58 +
                             0x48));
      }
      local_68 = (long *)CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x230));
      FUN_0071c8d0(&local_e0,&local_78,&local_68,0);
      plVar15 = local_e0;
      if (local_e0 != (long *)0x0) {
        if (((*PTR_DAT_04bc4480 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc4480), iVar10 != 0)) {
          *(undefined **)PTR_DAT_04bc4478 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4480);
        }
        uVar13 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bc4478);
        if ((uVar13 & 1) == 0) {
          local_d7 = '\0';
        }
      }
      if (((local_e0 != (long *)0x0) && (local_d8 != '\0')) && (local_d7 != '\0')) {
        uStack_7c = *(undefined4 *)((long)local_e0 + 0x2c4);
        local_80 = *(undefined4 *)(param_1 + 0x230);
        FUN_0071c8d0(&local_68,&uStack_7c,&local_80,0);
        plVar15 = local_68;
        if (local_68 != (long *)0x0) {
          if (((*PTR_DAT_04bc3010 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc3010), iVar10 != 0)) {
            *(undefined **)PTR_DAT_04bc3008 = PTR_DAT_04bc3018 + 0x10;
            __cxa_guard_release(PTR_DAT_04bc3010);
          }
          uVar13 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bc3008);
          if ((uVar13 & 1) == 0) {
            local_60._0_2_ = (ushort)(byte)local_60;
          }
        }
        puVar5 = PTR_DAT_04bb6258;
        if (((local_68 != (long *)0x0) && ((byte)local_60 != '\0')) &&
           ((local_60._1_1_ != '\0' && (local_68[0x51] != 0)))) {
          lVar20 = *(long *)(local_68[0x51] + 0x48);
          uVar2 = *(ushort *)(lVar20 + 0x284);
          uVar13 = (ulong)uVar2;
          if ((uVar13 < 1000) &&
             (piVar16 = (int *)(PTR_DAT_04bb6258 + uVar13 * 0x10),
             *piVar16 == *(int *)(lVar20 + 0x230))) {
            *piVar16 = 0;
            puVar6 = PTR_DAT_04bb6260;
            piVar16[2] = -1;
            piVar16[3] = -1;
            if (*(uint *)puVar6 == (uint)uVar2) {
              do {
                uVar19 = (uint)uVar13;
                piVar16 = (int *)(puVar5 + uVar13 * 0x10);
                if (999 < uVar19) {
                  piVar16 = (int *)puVar5;
                }
                if (*piVar16 != 0) goto LAB_02b83ad0;
                uVar13 = (ulong)(uVar19 - 1);
                *(uint *)puVar6 = uVar19 - 1;
              } while (0 < (int)uVar19);
              *(undefined4 *)puVar6 = 0xffffffff;
            }
          }
        }
      }
LAB_02b83ad0:
      local_d0 = puVar4 + 0x10;
      local_e0 = (long *)(puVar7 + 0x10);
      *(undefined2 *)(param_1 + 0x448) = *(undefined2 *)((long)param_2 + 2);
      local_d4 = local_ac;
      *(undefined2 *)(param_1 + 0x44a) = *(undefined2 *)((long)param_2 + 4);
      *(undefined2 *)(param_1 + 0x44c) = *(undefined2 *)((long)param_2 + 6);
      *(short *)(param_1 + 0x450) = (short)param_2[1];
      fVar26 = (float)(int)local_a0 * 5.0 + 2.5 + *(float *)(param_1 + 0xcb0);
      *(undefined1 *)(param_1 + 0x452) = *(undefined1 *)((long)param_2 + 10);
      puVar4 = PTR_DAT_04bb27f8;
      local_d8 = local_b0;
      fVar27 = (float)local_a0._4_4_ * 5.0 + 2.5 + *(float *)(param_1 + 0xcb8);
      local_c0 = local_98;
      local_bc[0] = local_94;
      local_78 = PTR_DAT_04bb7648 + 0x10;
      *(undefined1 *)(param_1 + 0x453) = *(undefined1 *)((long)param_2 + 0xb);
      lVar20 = *(long *)puVar4;
      *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)((long)param_2 + 0xc);
      local_c8 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
      iStack_c4 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
      if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
           ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
         (lVar24 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar24 == 0)) {
        puVar22 = (undefined2 *)(lVar20 + 0x2c);
        if ((*(ushort *)(lVar20 + 0x28) & 0x40) != 0) {
          puVar22 = (undefined2 *)(lVar20 + 0x2a);
        }
        local_70 = *puVar22;
      }
      else if ((*(long **)(lVar24 + 0x60) == (long *)0x0) ||
              (puVar14 = (undefined8 *)**(long **)(lVar24 + 0x60), puVar14 == (undefined8 *)0x0)) {
        local_70 = *(undefined2 *)(*(long *)(lVar24 + 0x48) + *(long *)(lVar24 + 0x40) + 2);
      }
      else {
        uVar13 = (**(code **)*puVar14)();
        local_70 = *(undefined2 *)(*(long *)(lVar24 + 0x48) + *(long *)(lVar24 + 0x40) + 2);
        if ((((uVar13 & 1) != 0) && (*(long *)(lVar24 + 0x60) != 0)) &&
           (puVar14 = *(undefined8 **)(*(long *)(lVar24 + 0x60) + 8), puVar14 != (undefined8 *)0x0))
        {
          (**(code **)*puVar14)();
        }
      }
      lVar20 = FUN_03775a30(&local_78);
      if (lVar20 != 0) {
        lVar24 = *(long *)(lVar20 + 0x1b0);
        if (lVar24 == 0) {
          uVar13 = 0;
        }
        else {
          if (*(undefined8 **)(lVar24 + 0x10) == (undefined8 *)0x0) {
            uVar13 = 0;
          }
          else {
            uVar13 = (**(code **)**(undefined8 **)(lVar24 + 0x10))();
            lVar24 = *(long *)(lVar20 + 0x1b0);
            uVar13 = uVar13 & 0xffffffff;
            if (lVar24 == 0) goto LAB_02b83cc0;
          }
          plVar15 = *(long **)(lVar24 + 0x20);
          if (plVar15 != (long *)0x0) {
            local_68 = *(long **)(lVar20 + 400);
            local_60 = *(undefined8 *)(lVar20 + 0x198);
            local_58 = 0x2acc;
            (**(code **)(*plVar15 + 0x20))(plVar15,&local_68);
          }
        }
LAB_02b83cc0:
        *(undefined2 *)(*(long *)(lVar20 + 0x198) + *(long *)(lVar20 + 400) + 4) =
             *(undefined2 *)(param_1 + 0x448);
        if ((*(long *)(lVar20 + 0x1b0) != 0) &&
           (plVar15 = *(long **)(*(long *)(lVar20 + 0x1b0) + 0x20), plVar15 != (long *)0x0)) {
          local_68 = *(long **)(lVar20 + 400);
          local_60 = *(undefined8 *)(lVar20 + 0x198);
          local_58 = 0x2acc;
          (**(code **)(*plVar15 + 0x20))(plVar15,&local_68);
        }
        *(undefined2 *)(*(long *)(lVar20 + 0x198) + *(long *)(lVar20 + 400) + 6) =
             *(undefined2 *)(param_1 + 0x44a);
        if ((*(long *)(lVar20 + 0x1b0) != 0) &&
           (plVar15 = *(long **)(*(long *)(lVar20 + 0x1b0) + 0x20), plVar15 != (long *)0x0)) {
          local_68 = *(long **)(lVar20 + 400);
          local_60 = *(undefined8 *)(lVar20 + 0x198);
          local_58 = 0x2acc;
          (**(code **)(*plVar15 + 0x20))(plVar15,&local_68);
        }
        *(undefined2 *)(*(long *)(lVar20 + 0x198) + *(long *)(lVar20 + 400) + 8) =
             *(undefined2 *)(param_1 + 0x44c);
        if ((*(long *)(lVar20 + 0x1b0) != 0) &&
           (plVar15 = *(long **)(*(long *)(lVar20 + 0x1b0) + 0x20), plVar15 != (long *)0x0)) {
          local_68 = *(long **)(lVar20 + 400);
          local_60 = *(undefined8 *)(lVar20 + 0x198);
          local_58 = 0x2acc;
          (**(code **)(*plVar15 + 0x20))(plVar15,&local_68);
        }
        lVar24 = *(long *)(lVar20 + 0x198) + *(long *)(lVar20 + 400);
        *(undefined2 *)(lVar24 + 0xc) = *(undefined2 *)(param_1 + 0x450);
        *(undefined1 *)(lVar24 + 0xe) = *(undefined1 *)(param_1 + 0x452);
        *(undefined1 *)(lVar24 + 0xf) = *(undefined1 *)(param_1 + 0x453);
        *(undefined4 *)(lVar24 + 0x10) = *(undefined4 *)(param_1 + 0x454);
        if ((((uVar13 & 1) != 0) && (*(long *)(lVar20 + 0x1b0) != 0)) &&
           (puVar14 = *(undefined8 **)(*(long *)(lVar20 + 0x1b0) + 0x18),
           puVar14 != (undefined8 *)0x0)) {
          (**(code **)*puVar14)();
        }
      }
      FUN_02b81bf0(param_1,&local_e0);
      if (((*(float *)(param_1 + 0xcb0) == 5.0) && (*(float *)(param_1 + 0xcb4) == 0.0)) &&
         ((*(float *)(param_1 + 0xcb8) == 0.0 && (*(char *)(param_1 + 0xcbc) != '\0')))) {
        FUN_02b83e94(param_1);
        *(undefined1 *)(param_1 + 0xcbd) = 1;
      }
      goto LAB_02b834f4;
    }
  }
LAB_02b834f0:
  uVar11 = 0;
LAB_02b834f4:
  return uVar11 & 1;
}

