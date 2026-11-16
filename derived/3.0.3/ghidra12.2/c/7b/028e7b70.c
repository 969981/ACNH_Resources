
/* WARNING: Removing unreachable block (ram,0x028e7bf4) */
/* WARNING: Removing unreachable block (ram,0x028e7d30) */

void FUN_028e7b70(long param_1,int *param_2,long param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined **ppuVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  long lVar18;
  long *plVar19;
  uint *puVar20;
  char cVar21;
  uint uVar22;
  ulong uVar23;
  uint *puVar24;
  char cVar25;
  uint *puVar26;
  int *piVar27;
  undefined8 uVar28;
  ushort uVar29;
  long *plVar30;
  short sVar31;
  char *pcVar32;
  uint uVar33;
  uint uVar34;
  long lVar35;
  char local_108c;
  bool local_108b;
  undefined1 local_108a;
  uint local_1088;
  uint local_1084;
  undefined8 local_1080;
  undefined8 local_1078;
  undefined1 local_1070;
  uint local_106c;
  ulong local_1068;
  undefined1 *local_1060;
  long *local_1058;
  long *local_1050;
  long local_1048 [2];
  long local_1038;
  undefined1 auStack_1030 [1968];
  undefined8 local_880;
  undefined1 auStack_878 [2004];
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 *local_98;
  undefined8 local_90;
  long local_88;
  uint local_80;
  uint local_7c [3];
  
  puVar14 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  *param_4 = 0xffffffff;
  puVar7 = PTR_DAT_04bb46b0;
  local_a4 = 0xffffffff;
  lVar18 = *(long *)PTR_DAT_04bb46b0;
  if (((lVar18 != 0) &&
      (local_1068 = CONCAT44(local_1068._4_4_,1), ((*(byte *)(lVar18 + 0x50d) ^ 0xff) & 6) == 0)) &&
     (lVar18 = (**(code **)(**(long **)(*(long *)(lVar18 + 0x10) + 0x188) + 0x38))(), lVar18 != 0))
  {
    plVar30 = (long *)(lVar18 + 0x36638);
    plVar19 = *(long **)(lVar18 + 0x36658);
    if (plVar19 == (long *)0x0) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      if ((undefined8 *)*plVar19 != (undefined8 *)0x0) {
        uVar15 = (*(code *)**(undefined8 **)*plVar19)();
        plVar19 = *(long **)(lVar18 + 0x36658);
      }
    }
    uVar29 = *(ushort *)(*(long *)(lVar18 + 0x36640) + *plVar30 + 0x48b0);
    local_a4 = CONCAT22(local_a4._2_2_,uVar29);
    if ((uVar15 & 1) == 0) {
LAB_028e7c84:
      if (plVar19 == (long *)0x0) goto LAB_028e7cdc;
LAB_028e7c88:
      if ((undefined8 *)*plVar19 == (undefined8 *)0x0) goto LAB_028e7cdc;
      uVar15 = (*(code *)**(undefined8 **)*plVar19)();
      sVar31 = *(short *)(*(long *)(lVar18 + 0x36640) + *plVar30 + 0x48b2);
      local_a4 = CONCAT22(sVar31,(undefined2)local_a4);
      if ((((uVar15 & 1) != 0) && (*(long *)(lVar18 + 0x36658) != 0)) &&
         (puVar16 = *(undefined8 **)(*(long *)(lVar18 + 0x36658) + 8), puVar16 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar16)();
      }
    }
    else {
      if (plVar19 != (long *)0x0) {
        if ((undefined8 *)plVar19[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar19[1])();
          plVar19 = *(long **)(lVar18 + 0x36658);
          goto LAB_028e7c84;
        }
        goto LAB_028e7c88;
      }
LAB_028e7cdc:
      sVar31 = *(short *)(*(long *)(lVar18 + 0x36640) + *plVar30 + 0x48b2);
      local_a4 = CONCAT22(sVar31,(undefined2)local_a4);
    }
    if ((uVar29 != 0xffff && sVar31 == -1) && (lVar18 = *(long *)puVar7, lVar18 != 0)) {
      local_1068 = CONCAT44(local_1068._4_4_,1);
      if (((*(byte *)(lVar18 + 0x50d) ^ 0xff) & 6) == 0) {
        lVar18 = (**(code **)(**(long **)(*(long *)(lVar18 + 0x10) + 0x188) + 0x38))();
        if (uVar29 < 500 && lVar18 != 0) {
          lVar18 = lVar18 + (ulong)(uint)uVar29 * 0x2d48;
          if ((*(long **)(lVar18 + 0x4cc70) == (long *)0x0) ||
             (puVar16 = (undefined8 *)**(long **)(lVar18 + 0x4cc70), puVar16 == (undefined8 *)0x0))
          {
            local_a4 = CONCAT22(*(undefined2 *)
                                 (*(long *)(lVar18 + 0x4cc58) + *(long *)(lVar18 + 0x4cc50) + 4),
                                (undefined2)local_a4);
          }
          else {
            uVar15 = (**(code **)*puVar16)();
            local_a4 = CONCAT22(*(undefined2 *)
                                 (*(long *)(lVar18 + 0x4cc58) + *(long *)(lVar18 + 0x4cc50) + 4),
                                (undefined2)local_a4);
            if ((((uVar15 & 1) != 0) && (*(long *)(lVar18 + 0x4cc70) != 0)) &&
               (puVar16 = *(undefined8 **)(*(long *)(lVar18 + 0x4cc70) + 8),
               puVar16 != (undefined8 *)0x0)) {
              (**(code **)*puVar16)();
            }
          }
        }
      }
    }
  }
  local_1058 = local_1048;
  local_1068 = 0;
  local_1060 = (undefined1 *)0x0;
  lVar18 = 0;
  do {
    lVar35 = lVar18 + 0x18;
    plVar30 = (long *)((long)local_1048 + lVar18 + 8);
    *plVar30 = (long)local_1048 + lVar18 + 0x10;
    *(long **)((long)local_1048 + lVar18) = plVar30;
    *(undefined1 **)((long)local_1048 + lVar18 + 0x10) = auStack_1030 + lVar18;
    lVar18 = lVar35;
  } while (lVar35 != 0x7c8);
  local_880 = 0;
  if (auStack_878 != (undefined1 *)0x0) {
    local_1068 = 0xfa00000000;
    local_1060 = auStack_878;
  }
  local_98 = &local_a4;
  local_a0 = &PTR_LAB_04a92700;
  local_90 = &local_1068;
  local_1050 = local_1058;
  local_88 = param_3;
  FUN_02685630(&local_a0);
  if ((int)local_1068 == 0) {
    return;
  }
  uVar15 = local_1068 & 0xffffffff;
  if (1 < (int)local_1068) {
    do {
      uVar34 = puVar14[3];
      uVar33 = *puVar14 ^ *puVar14 << 0xb;
      *puVar14 = puVar14[1];
      puVar14[1] = puVar14[2];
      uVar33 = uVar33 >> 8 ^ uVar34 >> 0x13 ^ uVar33 ^ uVar34;
      puVar14[2] = uVar34;
      puVar14[3] = uVar33;
      lVar18 = (uVar15 - 1 & 0xffffffff) * 8;
      uVar28 = *(undefined8 *)(local_1060 + lVar18);
      uVar23 = uVar15 * uVar33 >> 0x1d & 0x7fffffff8;
      *(undefined8 *)(local_1060 + lVar18) = *(undefined8 *)(local_1060 + uVar23);
      *(undefined8 *)(local_1060 + uVar23) = uVar28;
      bVar1 = 2 < uVar15;
      uVar15 = uVar15 - 1;
    } while (bVar1);
  }
  lVar35 = *(long *)PTR_DAT_04bb4960;
  lVar18 = FUN_03776680(2);
  puVar7 = PTR_DAT_04bc11f0;
  if (lVar18 == 0) goto LAB_028e82e4;
  if ((*(long **)(lVar18 + 0x28) == (long *)0x0) ||
     (puVar16 = (undefined8 *)**(long **)(lVar18 + 0x28), puVar16 == (undefined8 *)0x0)) {
    uVar29 = *(ushort *)(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8));
  }
  else {
    uVar15 = (**(code **)*puVar16)();
    uVar29 = *(ushort *)(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8));
    if ((((uVar15 & 1) != 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
       (puVar16 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8), puVar16 != (undefined8 *)0x0)) {
      (**(code **)*puVar16)();
    }
  }
  if ((uVar29 >> 1 & 1) == 0) goto LAB_028e82e4;
  uVar13 = FUN_006bd550(PTR_DAT_04bc2558 + 0xae,0);
  local_a0 = (undefined **)CONCAT44(local_a0._4_4_,uVar13);
  puVar20 = (uint *)FUN_036c67d0(lVar35 + 0x800,&local_a0);
  if (puVar20 != (uint *)0x0) {
    if (*param_2 == 1) {
      if (*puVar20 != 0) {
        cVar21 = *PTR_DAT_04bc11e8;
        do {
          puVar8 = PTR_DAT_04bc11e8;
          if (cVar21 == '\0') {
            cVar21 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar8 = 1;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
          }
          else {
            uVar33 = *(uint *)(puVar7 + 0x6c);
            if (-1 < (int)uVar33) goto LAB_028e8158;
            if (uVar33 != 0xffffffff) break;
          }
          puVar26 = (uint *)(ulong)*puVar20;
          if ((*puVar20 == 0) || (puVar20 == puVar26)) break;
          lVar18 = 0xc;
          if (*(char *)((long)puVar20 + (10 - (long)puVar26)) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar20 + (lVar18 - (long)puVar26);
          if (lVar18 == 0) break;
          uVar15 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar26));
          *(undefined4 *)(puVar7 + 0x6c) = 0xfffffffe;
          if (uVar15 == 0) break;
          piVar27 = (int *)(lVar18 + 4);
          while (piVar27[-1] != -0x6b095a99) {
            piVar27 = piVar27 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_028e82e4;
          }
          iVar3 = 0;
          if (*piVar27 != -1) {
            iVar3 = *piVar27;
          }
          *(int *)(puVar7 + 0x6c) = iVar3;
          if (*puVar20 == 0) break;
        } while( true );
      }
      goto LAB_028e82e4;
    }
    if (*param_2 == 0) {
      if (*puVar20 != 0) {
        cVar21 = *PTR_DAT_04bc11e8;
        do {
          puVar8 = PTR_DAT_04bc11e8;
          if (cVar21 == '\0') {
            cVar21 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar8 = 1;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
          }
          else {
            uVar33 = *(uint *)(puVar7 + 0x68);
            if (-1 < (int)uVar33) goto LAB_028e8158;
            if (uVar33 != 0xffffffff) break;
          }
          puVar26 = (uint *)(ulong)*puVar20;
          if ((*puVar20 == 0) || (puVar20 == puVar26)) break;
          lVar18 = 0xc;
          if (*(char *)((long)puVar20 + (10 - (long)puVar26)) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar20 + (lVar18 - (long)puVar26);
          if (lVar18 == 0) break;
          uVar15 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar26));
          *(undefined4 *)(puVar7 + 0x68) = 0xfffffffe;
          if (uVar15 == 0) break;
          piVar27 = (int *)(lVar18 + 4);
          while (piVar27[-1] != -0x6b59ee42) {
            piVar27 = piVar27 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_028e82e4;
          }
          iVar3 = 0;
          if (*piVar27 != -1) {
            iVar3 = *piVar27;
          }
          *(int *)(puVar7 + 0x68) = iVar3;
          if (*puVar20 == 0) break;
        } while( true );
      }
      goto LAB_028e82e4;
    }
  }
LAB_028e8168:
  local_106c = 0;
  uVar15 = FUN_028ec800(param_1,&local_1068,puVar14,&local_106c);
  if ((uVar15 & 1) != 0) {
    local_1070 = 1;
    local_1080 = 0x200000002;
    local_1078 = 0x20000000b;
    uVar15 = (ulong)local_106c;
    if (2 < local_106c) {
      uVar15 = 0;
    }
    uVar33 = *(uint *)(param_1 + 0x297d0 + uVar15 * 4);
    uVar15 = (ulong)local_106c;
    if (2 < local_106c) {
      uVar15 = 0;
    }
    uVar13 = *(undefined4 *)(param_1 + 0x297d0 + uVar15 * 4);
    local_1084._0_2_ = (short)(uVar33 >> 0x10);
    FUN_028eb200(param_1,&local_1084);
    local_1084 = CONCAT22(local_1084._2_2_,(short)uVar13);
    FUN_028eb200(param_1,&local_1084);
    local_88._0_4_ = (uint)(uint3)local_88;
    local_90._0_5_ = 8;
    ppuVar2 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
    local_a0 = ppuVar2;
    local_98 = (undefined4 *)((long)&local_90 + 4);
    FUN_0376b510(&local_a0,uVar33 >> 0x10);
    local_7c[0] = 0;
    uVar15 = FUN_020fc100(local_7c,&local_80,&local_a0);
    if (((uVar15 & 1) != 0) && (uVar15 = (ulong)local_7c[0], local_80 < 0x20)) {
      if (0x22 < local_7c[0]) {
        uVar15 = 0;
      }
      *(uint *)(param_3 + uVar15 * 4) =
           *(uint *)(param_3 + uVar15 * 4) & (1 << (ulong)(local_80 & 0x1f) ^ 0xffffffffU);
    }
    local_88._0_4_ = (uint)(uint3)local_88;
    local_90 = (ulong *)CONCAT35(local_90._5_3_,8);
    local_a0 = ppuVar2;
    local_98 = (undefined4 *)((long)&local_90 + 4);
    FUN_0376b510(&local_a0,uVar13);
    local_7c[0] = 0;
    uVar15 = FUN_020fc100(local_7c,&local_80,&local_a0);
    if (((uVar15 & 1) != 0) && (uVar15 = (ulong)local_7c[0], local_80 < 0x20)) {
      if (0x22 < local_7c[0]) {
        uVar15 = 0;
      }
      *(uint *)(param_3 + uVar15 * 4) =
           *(uint *)(param_3 + uVar15 * 4) & (1 << (ulong)(local_80 & 0x1f) ^ 0xffffffffU);
    }
  }
LAB_028e82e4:
  puVar8 = PTR_DAT_04bc3980;
  local_1078 = local_1078 & 0xffffffff00000000;
  local_106c = 1;
  local_1070 = 1;
  local_1080 = 5;
  pcVar32 = PTR_DAT_04bc3978;
  uVar33 = 0;
LAB_028e834c:
  do {
    local_1088 = uVar33;
    uVar15 = FUN_0377fb80(uVar33);
    puVar9 = PTR_DAT_04bc3968;
    if ((uVar15 & 1) != 0) {
      uVar34 = (local_1088 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
      if (*(uint *)(lVar35 + 0x1d8) <= uVar34) {
        return;
      }
      puVar20 = *(uint **)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar34 * 8);
      if (puVar20 == (uint *)0x0) {
        return;
      }
      local_108c = 0;
      if (*puVar20 != 0) {
        cVar21 = *PTR_DAT_04bc3960;
        do {
          puVar10 = PTR_DAT_04bc3960;
          if (cVar21 != '\0') {
            uVar34 = *(uint *)(puVar9 + 0x1c);
            if ((int)uVar34 < 0) {
              if (uVar34 == 0xffffffff) goto LAB_028e83ec;
            }
            else if ((char *)((ulong)uVar34 + (long)puVar20) != (char *)0x0) {
              local_108b = *(char *)((ulong)uVar34 + (long)puVar20) != '\0';
              goto LAB_028e8490;
            }
LAB_028e848c:
            local_108b = false;
LAB_028e8490:
            uVar34 = *puVar20;
            if (uVar34 == 0) goto LAB_028e8538;
            uVar15 = (ulong)*(uint *)(puVar9 + 0x20);
            goto LAB_028e84a0;
          }
          cVar21 = '\x01';
          *(undefined8 *)puVar9 = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
          *(undefined4 *)(puVar9 + 0x20) = 0xffffffff;
          *puVar10 = 1;
          *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
LAB_028e83ec:
          puVar26 = (uint *)(ulong)*puVar20;
          local_108b = false;
          if ((*puVar20 == 0) || (puVar20 == puVar26)) goto LAB_028e8490;
          lVar18 = 0xc;
          if (*(char *)((long)puVar20 + (10 - (long)puVar26)) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar20 + (lVar18 - (long)puVar26);
          if (lVar18 == 0) goto LAB_028e848c;
          uVar15 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar26));
          *(undefined4 *)(puVar9 + 0x1c) = 0xfffffffe;
          local_108b = false;
          if (uVar15 == 0) goto LAB_028e8490;
          piVar27 = (int *)(lVar18 + 4);
          while (piVar27[-1] != -0x4fb53614) {
            piVar27 = piVar27 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) {
              local_108b = false;
              goto LAB_028e8490;
            }
          }
          iVar3 = 0;
          if (*piVar27 != -1) {
            iVar3 = *piVar27;
          }
          *(int *)(puVar9 + 0x1c) = iVar3;
        } while (*puVar20 != 0);
      }
      local_108a = false;
      local_108b = false;
LAB_028e853c:
      lVar18 = FUN_03776680();
      if (lVar18 == 0) {
        uVar29 = 0;
      }
      else if ((*(long **)(lVar18 + 0x28) == (long *)0x0) ||
              (puVar16 = (undefined8 *)**(long **)(lVar18 + 0x28), puVar16 == (undefined8 *)0x0)) {
        uVar29 = *(ushort *)(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8)) >> 1 & 1;
      }
      else {
        uVar15 = (**(code **)*puVar16)();
        uVar29 = *(ushort *)(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8)) >> 1 & 1;
        if ((((uVar15 & 1) != 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
           (puVar16 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8), puVar16 != (undefined8 *)0x0))
        {
          (**(code **)*puVar16)();
        }
      }
      uVar34 = 0;
LAB_028e85fc:
      puVar11 = local_98;
      if (uVar29 == 0) {
        uVar15 = (ulong)uVar34;
        if (2 < uVar34) {
          uVar15 = 0;
        }
        if (*(char *)((long)local_1048 + (uVar15 - 0x44)) == '\0') goto LAB_028e8618;
        goto LAB_028e85f0;
      }
LAB_028e8618:
      if ((local_1088 == 2) && (uVar34 == 2)) goto LAB_028e85f0;
      local_80 = uVar34;
      local_7c[0] = local_1088;
      local_98 = (undefined4 *)((ulong)local_98 & 0xffffffff00000000);
      puVar12 = local_98;
      local_a0 = (undefined **)0x0;
      local_98._4_4_ = SUB84(puVar11,4);
      switch(local_1088) {
      case 0:
        uVar17 = 1;
        goto LAB_028e86ac;
      case 1:
        local_a0 = (undefined **)0x300000002;
        local_98 = (undefined4 *)CONCAT44(local_98._4_4_,4);
        puVar12 = local_98;
        break;
      case 2:
        local_a0 = (undefined **)0x600000005;
        local_98 = (undefined4 *)CONCAT44(local_98._4_4_,10);
        puVar12 = local_98;
        break;
      case 3:
        local_a0 = (undefined **)0x900000007;
        break;
      case 4:
        uVar17 = 8;
LAB_028e86ac:
        local_a0 = (undefined **)(ulong)uVar17;
      }
      local_98 = puVar12;
      uVar15 = (ulong)uVar34;
      if (2 < uVar34) {
        uVar15 = 0;
      }
      local_80 = local_7c[uVar15 - 9];
      uVar17 = (local_7c[uVar15 - 9] & 0xffff) - (uint)*(ushort *)(lVar35 + 0x7f8);
      if ((uVar17 < *(uint *)(lVar35 + 0x7d8)) &&
         (puVar20 = *(uint **)(*(long *)(lVar35 + 0x7e0) + (long)(int)uVar17 * 8),
         puVar20 != (uint *)0x0)) {
        uVar22 = 0;
        uVar17 = *puVar20;
        if (uVar17 != 0 && puVar20 != (uint *)(ulong)uVar17) {
          puVar26 = (uint *)((long)puVar20 - (long)(ulong)uVar17);
          uVar22 = 0;
          if (*puVar26 != 0) {
            uVar17 = puVar26[1];
            if ((uVar17 != 0) && ((ulong)(ushort)puVar26[2] != 0)) {
              lVar18 = 0xc;
              if (*(char *)((long)puVar26 + 10) != '\0') {
                lVar18 = 0x1c;
              }
              lVar18 = (long)puVar26 + lVar18 + (ulong)(ushort)puVar26[2] * 8;
              if (lVar18 != 0) {
                uVar22 = 0;
                if ((ulong)uVar17 != 0) {
                  uVar22 = (uint)((ulong)((long)puVar20 - lVar18) / (ulong)uVar17);
                }
                if (*puVar26 <= uVar22) {
                  uVar22 = 0xffffffff;
                }
                if ((uVar22 < *(uint *)PTR_DAT_04bc3970) &&
                   (uVar22 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc3970 + 8) + (long)(int)uVar22 * 2),
                   uVar22 < 0x15)) goto LAB_028e8798;
              }
            }
            uVar22 = 0;
          }
        }
LAB_028e8798:
        if (*puVar20 == 0) {
LAB_028e887c:
          cVar25 = '\0';
        }
        else {
          cVar21 = *pcVar32;
          do {
            if (cVar21 == '\0') {
              cVar21 = '\x01';
              *(undefined8 *)puVar8 = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
              *pcVar32 = '\x01';
              *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
            }
            else {
              uVar17 = *(uint *)(puVar8 + 0x30);
              if (-1 < (int)uVar17) {
                if ((char *)((ulong)uVar17 + (long)puVar20) == (char *)0x0) goto LAB_028e887c;
                cVar25 = *(char *)((ulong)uVar17 + (long)puVar20);
                goto LAB_028e8880;
              }
              if (uVar17 != 0xffffffff) goto LAB_028e887c;
            }
            puVar26 = (uint *)(ulong)*puVar20;
            cVar25 = '\0';
            if ((*puVar20 == 0) || (puVar20 == puVar26)) goto LAB_028e8880;
            lVar18 = 0xc;
            if (*(char *)((long)puVar20 + (10 - (long)puVar26)) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar20 + (lVar18 - (long)puVar26);
            if (lVar18 == 0) goto LAB_028e887c;
            uVar15 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar26));
            *(undefined4 *)(puVar8 + 0x30) = 0xfffffffe;
            cVar25 = '\0';
            if (uVar15 == 0) goto LAB_028e8880;
            piVar27 = (int *)(lVar18 + 4);
            while (piVar27[-1] != 0x56ccf3fd) {
              piVar27 = piVar27 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) {
                cVar25 = '\0';
                goto LAB_028e8880;
              }
            }
            iVar3 = 0;
            if (*piVar27 != -1) {
              iVar3 = *piVar27;
            }
            *(int *)(puVar8 + 0x30) = iVar3;
          } while (*puVar20 != 0);
          cVar25 = '\0';
        }
LAB_028e8880:
        local_a0 = (undefined **)CONCAT44((int)cVar25,uVar22);
        if (*puVar20 == 0) {
LAB_028e8954:
          uVar17 = 0;
        }
        else {
          cVar21 = *pcVar32;
          do {
            if (cVar21 == '\0') {
              cVar21 = '\x01';
              *(undefined8 *)puVar8 = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
              *pcVar32 = '\x01';
              *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
            }
            else {
              uVar17 = *(uint *)(puVar8 + 0x24);
              if (-1 < (int)uVar17) {
                if (((byte *)((ulong)uVar17 + (long)puVar20) == (byte *)0x0) ||
                   (bVar6 = *(byte *)((ulong)uVar17 + (long)puVar20), uVar17 = (uint)bVar6,
                   0x14 < bVar6)) goto LAB_028e8954;
                goto LAB_028e8958;
              }
              if (uVar17 != 0xffffffff) goto LAB_028e8954;
            }
            puVar26 = (uint *)(ulong)*puVar20;
            uVar17 = 0;
            if ((*puVar20 == 0) || (puVar20 == puVar26)) goto LAB_028e8958;
            lVar18 = 0xc;
            if (*(char *)((long)puVar20 + (10 - (long)puVar26)) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar20 + (lVar18 - (long)puVar26);
            if (lVar18 == 0) goto LAB_028e8954;
            uVar15 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar26));
            *(undefined4 *)(puVar8 + 0x24) = 0xfffffffe;
            uVar17 = 0;
            if (uVar15 == 0) goto LAB_028e8958;
            piVar27 = (int *)(lVar18 + 4);
            while (piVar27[-1] != 0x3297a85e) {
              piVar27 = piVar27 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) {
                uVar17 = 0;
                goto LAB_028e8958;
              }
            }
            iVar3 = 0;
            if (*piVar27 != -1) {
              iVar3 = *piVar27;
            }
            *(int *)(puVar8 + 0x24) = iVar3;
          } while (*puVar20 != 0);
          uVar17 = 0;
        }
LAB_028e8958:
        if (*puVar20 == 0) {
LAB_028e8a1c:
          cVar25 = '\0';
        }
        else {
          cVar21 = *pcVar32;
          do {
            if (cVar21 == '\0') {
              cVar21 = '\x01';
              *(undefined8 *)puVar8 = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
              *pcVar32 = '\x01';
              *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
            }
            else {
              uVar22 = *(uint *)(puVar8 + 0x34);
              if (-1 < (int)uVar22) {
                if ((char *)((ulong)uVar22 + (long)puVar20) == (char *)0x0) goto LAB_028e8a1c;
                cVar25 = *(char *)((ulong)uVar22 + (long)puVar20);
                goto LAB_028e8a20;
              }
              if (uVar22 != 0xffffffff) goto LAB_028e8a1c;
            }
            puVar26 = (uint *)(ulong)*puVar20;
            cVar25 = '\0';
            if ((*puVar20 == 0) || (puVar20 == puVar26)) goto LAB_028e8a20;
            lVar18 = 0xc;
            if (*(char *)((long)puVar20 + (10 - (long)puVar26)) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar20 + (lVar18 - (long)puVar26);
            if (lVar18 == 0) goto LAB_028e8a1c;
            uVar15 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar26));
            *(undefined4 *)(puVar8 + 0x34) = 0xfffffffe;
            cVar25 = '\0';
            if (uVar15 == 0) goto LAB_028e8a20;
            piVar27 = (int *)(lVar18 + 4);
            while (piVar27[-1] != -0x118f6b68) {
              piVar27 = piVar27 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) {
                cVar25 = '\0';
                goto LAB_028e8a20;
              }
            }
            iVar3 = 0;
            if (*piVar27 != -1) {
              iVar3 = *piVar27;
            }
            *(int *)(puVar8 + 0x34) = iVar3;
          } while (*puVar20 != 0);
          cVar25 = '\0';
        }
LAB_028e8a20:
        local_98 = (undefined4 *)CONCAT44((int)cVar25,uVar17);
        if (*puVar20 == 0) {
LAB_028e8af4:
          uVar17 = 0;
        }
        else {
          cVar21 = *pcVar32;
          do {
            if (cVar21 == '\0') {
              cVar21 = '\x01';
              *(undefined8 *)puVar8 = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
              *pcVar32 = '\x01';
              *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
            }
            else {
              uVar17 = *(uint *)(puVar8 + 0x28);
              if (-1 < (int)uVar17) {
                if (((byte *)((ulong)uVar17 + (long)puVar20) == (byte *)0x0) ||
                   (bVar6 = *(byte *)((ulong)uVar17 + (long)puVar20), uVar17 = (uint)bVar6,
                   0x14 < bVar6)) goto LAB_028e8af4;
                goto LAB_028e8af8;
              }
              if (uVar17 != 0xffffffff) goto LAB_028e8af4;
            }
            puVar26 = (uint *)(ulong)*puVar20;
            uVar17 = 0;
            if ((*puVar20 == 0) || (puVar20 == puVar26)) goto LAB_028e8af8;
            lVar18 = 0xc;
            if (*(char *)((long)puVar20 + (10 - (long)puVar26)) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar20 + (lVar18 - (long)puVar26);
            if (lVar18 == 0) goto LAB_028e8af4;
            uVar15 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar26));
            *(undefined4 *)(puVar8 + 0x28) = 0xfffffffe;
            uVar17 = 0;
            if (uVar15 == 0) goto LAB_028e8af8;
            piVar27 = (int *)(lVar18 + 4);
            while (piVar27[-1] != 0x202207b0) {
              piVar27 = piVar27 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) {
                uVar17 = 0;
                goto LAB_028e8af8;
              }
            }
            iVar3 = 0;
            if (*piVar27 != -1) {
              iVar3 = *piVar27;
            }
            *(int *)(puVar8 + 0x28) = iVar3;
          } while (*puVar20 != 0);
          uVar17 = 0;
        }
LAB_028e8af8:
        if (*puVar20 == 0) {
LAB_028e8bbc:
          cVar25 = '\0';
        }
        else {
          cVar21 = *pcVar32;
          do {
            if (cVar21 == '\0') {
              cVar21 = '\x01';
              *(undefined8 *)puVar8 = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
              *pcVar32 = '\x01';
              *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
            }
            else {
              uVar22 = *(uint *)(puVar8 + 0x38);
              if (-1 < (int)uVar22) {
                if ((char *)((ulong)uVar22 + (long)puVar20) == (char *)0x0) goto LAB_028e8bbc;
                cVar25 = *(char *)((ulong)uVar22 + (long)puVar20);
                goto LAB_028e8bc0;
              }
              if (uVar22 != 0xffffffff) goto LAB_028e8bbc;
            }
            puVar26 = (uint *)(ulong)*puVar20;
            cVar25 = '\0';
            if ((*puVar20 == 0) || (puVar20 == puVar26)) goto LAB_028e8bc0;
            lVar18 = 0xc;
            if (*(char *)((long)puVar20 + (10 - (long)puVar26)) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar20 + (lVar18 - (long)puVar26);
            if (lVar18 == 0) goto LAB_028e8bbc;
            uVar15 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar26));
            *(undefined4 *)(puVar8 + 0x38) = 0xfffffffe;
            cVar25 = '\0';
            if (uVar15 == 0) goto LAB_028e8bc0;
            piVar27 = (int *)(lVar18 + 4);
            while (piVar27[-1] != -0x33ac48a) {
              piVar27 = piVar27 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) {
                cVar25 = '\0';
                goto LAB_028e8bc0;
              }
            }
            iVar3 = 0;
            if (*piVar27 != -1) {
              iVar3 = *piVar27;
            }
            *(int *)(puVar8 + 0x38) = iVar3;
          } while (*puVar20 != 0);
          cVar25 = '\0';
        }
LAB_028e8bc0:
        local_90 = (ulong *)CONCAT44((int)cVar25,uVar17);
        if (*puVar20 == 0) {
LAB_028e8c94:
          uVar17 = 0;
        }
        else {
          cVar21 = *pcVar32;
          do {
            if (cVar21 == '\0') {
              cVar21 = '\x01';
              *(undefined8 *)puVar8 = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
              *pcVar32 = '\x01';
              *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
            }
            else {
              uVar17 = *(uint *)(puVar8 + 0x2c);
              if (-1 < (int)uVar17) {
                if (((byte *)((ulong)uVar17 + (long)puVar20) == (byte *)0x0) ||
                   (bVar6 = *(byte *)((ulong)uVar17 + (long)puVar20), uVar17 = (uint)bVar6,
                   0x14 < bVar6)) goto LAB_028e8c94;
                goto LAB_028e8c98;
              }
              if (uVar17 != 0xffffffff) goto LAB_028e8c94;
            }
            puVar26 = (uint *)(ulong)*puVar20;
            uVar17 = 0;
            if ((*puVar20 == 0) || (puVar20 == puVar26)) goto LAB_028e8c98;
            lVar18 = 0xc;
            if (*(char *)((long)puVar20 + (10 - (long)puVar26)) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar20 + (lVar18 - (long)puVar26);
            if (lVar18 == 0) goto LAB_028e8c94;
            uVar15 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar26));
            *(undefined4 *)(puVar8 + 0x2c) = 0xfffffffe;
            uVar17 = 0;
            if (uVar15 == 0) goto LAB_028e8c98;
            piVar27 = (int *)(lVar18 + 4);
            while (piVar27[-1] != -0x67619f2b) {
              piVar27 = piVar27 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) {
                uVar17 = 0;
                goto LAB_028e8c98;
              }
            }
            iVar3 = 0;
            if (*piVar27 != -1) {
              iVar3 = *piVar27;
            }
            *(int *)(puVar8 + 0x2c) = iVar3;
          } while (*puVar20 != 0);
          uVar17 = 0;
        }
LAB_028e8c98:
        if (*puVar20 == 0) {
LAB_028e8d5c:
          cVar25 = '\0';
        }
        else {
          cVar21 = *pcVar32;
          do {
            if (cVar21 == '\0') {
              cVar21 = '\x01';
              *(undefined8 *)puVar8 = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
              *pcVar32 = '\x01';
              *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
            }
            else {
              uVar22 = *(uint *)(puVar8 + 0x3c);
              if (-1 < (int)uVar22) {
                if ((char *)((ulong)uVar22 + (long)puVar20) == (char *)0x0) goto LAB_028e8d5c;
                cVar25 = *(char *)((ulong)uVar22 + (long)puVar20);
                goto LAB_028e8d60;
              }
              if (uVar22 != 0xffffffff) goto LAB_028e8d5c;
            }
            puVar26 = (uint *)(ulong)*puVar20;
            cVar25 = '\0';
            if ((*puVar20 == 0) || (puVar20 == puVar26)) goto LAB_028e8d60;
            lVar18 = 0xc;
            if (*(char *)((long)puVar20 + (10 - (long)puVar26)) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar20 + (lVar18 - (long)puVar26);
            if (lVar18 == 0) goto LAB_028e8d5c;
            uVar15 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar26));
            *(undefined4 *)(puVar8 + 0x3c) = 0xfffffffe;
            cVar25 = '\0';
            if (uVar15 == 0) goto LAB_028e8d60;
            piVar27 = (int *)(lVar18 + 4);
            while (piVar27[-1] != 0x44795c13) {
              piVar27 = piVar27 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) {
                cVar25 = '\0';
                goto LAB_028e8d60;
              }
            }
            iVar3 = 0;
            if (*piVar27 != -1) {
              iVar3 = *piVar27;
            }
            *(int *)(puVar8 + 0x3c) = iVar3;
          } while (*puVar20 != 0);
          cVar25 = '\0';
        }
LAB_028e8d60:
        uVar22 = 0;
        local_88 = CONCAT44((int)cVar25,uVar17);
LAB_028e8d8c:
        puVar20 = (uint *)(auStack_878 + ((long)((ulong)uVar22 << 0x20) >> 0x1d) + 0x7d8);
        if (((*puVar20 != 0) && (1 < (int)local_7c[(long)(int)uVar22 * 2 + -8])) &&
           ((*puVar20 & 0xffff) < 0x15)) {
          local_7c[0] = FUN_006bd550(*(undefined8 *)
                                      (PTR_DAT_04bc2558 + (ulong)(ushort)*puVar20 * 8 + 0x150),0);
          puVar26 = (uint *)FUN_036c67d0(lVar35 + 0x800,local_7c);
          if (puVar26 == (uint *)0x0) goto LAB_028e8d80;
          if (*param_2 == 0) {
            if (*puVar26 != 0) {
              cVar21 = *PTR_DAT_04bc11e8;
              do {
                puVar9 = PTR_DAT_04bc11e8;
                if (cVar21 == '\0') {
                  cVar21 = '\x01';
                  *(undefined8 *)puVar7 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                  *puVar9 = 1;
                  *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
                  uVar17 = *puVar26;
                }
                else {
                  uVar17 = *(uint *)(puVar7 + 0x68);
                  if (-1 < (int)uVar17) goto LAB_028e8fcc;
                  if (uVar17 != 0xffffffff) break;
                  uVar17 = *puVar26;
                }
                if ((uVar17 == 0) || (puVar24 = (uint *)(ulong)uVar17, puVar26 == puVar24)) break;
                lVar18 = 0xc;
                if (*(char *)((long)puVar26 + (10 - (long)puVar24)) != '\0') {
                  lVar18 = 0x1c;
                }
                lVar18 = (long)puVar26 + (lVar18 - (long)puVar24);
                if (lVar18 == 0) break;
                uVar15 = (ulong)*(ushort *)((long)puVar26 + (8 - (long)puVar24));
                *(undefined4 *)(puVar7 + 0x68) = 0xfffffffe;
                if (uVar15 == 0) break;
                piVar27 = (int *)(lVar18 + 4);
                while (piVar27[-1] != -0x6b59ee42) {
                  piVar27 = piVar27 + 2;
                  uVar15 = uVar15 - 1;
                  if (uVar15 == 0) goto LAB_028e8d80;
                }
                iVar3 = 0;
                if (*piVar27 != -1) {
                  iVar3 = *piVar27;
                }
                *(int *)(puVar7 + 0x68) = iVar3;
                if (*puVar26 == 0) break;
              } while( true );
            }
            goto LAB_028e8d80;
          }
          if (*param_2 == 1) {
            if (*puVar26 != 0) {
              cVar21 = *PTR_DAT_04bc11e8;
              do {
                puVar9 = PTR_DAT_04bc11e8;
                if (cVar21 == '\0') {
                  cVar21 = '\x01';
                  *(undefined8 *)puVar7 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                  *puVar9 = 1;
                  *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
                  uVar17 = *puVar26;
                }
                else {
                  uVar17 = *(uint *)(puVar7 + 0x6c);
                  if (-1 < (int)uVar17) goto LAB_028e8fcc;
                  if (uVar17 != 0xffffffff) break;
                  uVar17 = *puVar26;
                }
                if ((uVar17 == 0) || (puVar24 = (uint *)(ulong)uVar17, puVar26 == puVar24)) break;
                lVar18 = 0xc;
                if (*(char *)((long)puVar26 + (10 - (long)puVar24)) != '\0') {
                  lVar18 = 0x1c;
                }
                lVar18 = (long)puVar26 + (lVar18 - (long)puVar24);
                if (lVar18 == 0) break;
                uVar15 = (ulong)*(ushort *)((long)puVar26 + (8 - (long)puVar24));
                *(undefined4 *)(puVar7 + 0x6c) = 0xfffffffe;
                if (uVar15 == 0) break;
                piVar27 = (int *)(lVar18 + 4);
                while (piVar27[-1] != -0x6b095a99) {
                  piVar27 = piVar27 + 2;
                  uVar15 = uVar15 - 1;
                  if (uVar15 == 0) goto LAB_028e8d80;
                }
                iVar3 = 0;
                if (*piVar27 != -1) {
                  iVar3 = *piVar27;
                }
                *(int *)(puVar7 + 0x6c) = iVar3;
                if (*puVar26 == 0) break;
              } while( true );
            }
            goto LAB_028e8d80;
          }
          goto LAB_028e8fdc;
        }
        goto LAB_028e8d80;
      }
      goto LAB_028e85f0;
    }
    uVar33 = uVar33 + 1;
  } while (uVar33 != 7);
  goto LAB_028e91e4;
LAB_028e8158:
  if (((char *)((ulong)uVar33 + (long)puVar20) == (char *)0x0) ||
     (*(char *)((ulong)uVar33 + (long)puVar20) == '\0')) goto LAB_028e82e4;
  goto LAB_028e8168;
LAB_028e84a0:
  if (-1 < (int)uVar15) {
    if ((char *)(uVar15 + (long)puVar20) == (char *)0x0) {
LAB_028e8538:
      local_108a = false;
    }
    else {
      local_108a = *(char *)(uVar15 + (long)puVar20) != '\0';
    }
    goto LAB_028e853c;
  }
  if (uVar15 != 0xffffffff) goto LAB_028e8538;
  lVar18 = (long)puVar20 - (ulong)uVar34;
  local_108a = false;
  if (lVar18 == 0) goto LAB_028e853c;
  lVar4 = 0xc;
  if (*(char *)(lVar18 + 10) != '\0') {
    lVar4 = 0x1c;
  }
  if (lVar4 + lVar18 == 0) goto LAB_028e8538;
  uVar15 = (ulong)*(ushort *)(lVar18 + 8);
  *(undefined4 *)(puVar9 + 0x20) = 0xfffffffe;
  local_108a = false;
  if (uVar15 == 0) goto LAB_028e853c;
  puVar26 = (uint *)(lVar4 + lVar18 + 4);
  while (puVar26[-1] != 0xcc2bec37) {
    puVar26 = puVar26 + 2;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0) {
      local_108a = false;
      goto LAB_028e853c;
    }
  }
  local_108a = false;
  uVar15 = 0;
  if (*puVar26 != 0xffffffff) {
    uVar15 = (ulong)*puVar26;
  }
  *(int *)(puVar9 + 0x20) = (int)uVar15;
  uVar34 = *puVar20;
  if (uVar34 == 0) goto LAB_028e853c;
  goto LAB_028e84a0;
LAB_028e8fcc:
  if (((char *)((ulong)uVar17 + (long)puVar26) == (char *)0x0) ||
     (*(char *)((ulong)uVar17 + (long)puVar26) == '\0')) goto LAB_028e8d80;
LAB_028e8fdc:
  uVar17 = *puVar26;
  local_7c[0] = 0;
  if ((uVar17 != 0) && (puVar26 != (uint *)(ulong)uVar17)) {
    puVar24 = (uint *)((long)puVar26 - (long)(ulong)uVar17);
    local_7c[0] = 0;
    if (*puVar24 != 0) {
      uVar17 = puVar24[1];
      if ((uVar17 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
        lVar18 = 0xc;
        if (*(char *)((long)puVar24 + 10) != '\0') {
          lVar18 = 0x1c;
        }
        lVar18 = (long)puVar24 + lVar18 + (ulong)(ushort)puVar24[2] * 8;
        if (lVar18 != 0) {
          uVar5 = 0;
          if ((ulong)uVar17 != 0) {
            uVar5 = (uint)((ulong)((long)puVar26 - lVar18) / (ulong)uVar17);
          }
          if (*puVar24 <= uVar5) {
            uVar5 = 0xffffffff;
          }
          if ((uVar5 < *(uint *)PTR_DAT_04bc3950) &&
             (local_7c[0] = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc3950 + 8) + (long)(int)uVar5 * 2),
             local_7c[0] < 5)) goto LAB_028e9068;
        }
      }
      local_7c[0] = 0;
    }
  }
LAB_028e9068:
  if ((local_7c[0] == 4) && (*puVar26 != 0)) {
    cVar21 = *PTR_DAT_04bc11e8;
    do {
      puVar9 = PTR_DAT_04bc11e8;
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
      }
      else {
        uVar17 = *(uint *)(puVar7 + 0x74);
        if (-1 < (int)uVar17) {
          if (((char *)((long)puVar26 + (ulong)uVar17) != (char *)0x0) &&
             (*(char *)((long)puVar26 + (ulong)uVar17) != '\0')) {
            uVar5 = puVar14[3];
            uVar17 = *puVar14 ^ *puVar14 << 0xb;
            *puVar14 = puVar14[1];
            puVar14[1] = puVar14[2];
            uVar17 = uVar17 >> 8 ^ uVar5 >> 0x13 ^ uVar17 ^ uVar5;
            puVar14[2] = uVar5;
            puVar14[3] = uVar17;
            if (-3.4028235e+38 < (float)(uVar17 >> 9 | 0x3f800000) + -1.0) {
              local_1080 = CONCAT44(uVar34,local_1088);
              local_1078 = CONCAT44(local_7c[(long)(int)uVar22 * 2 + -8],*puVar20);
            }
          }
          break;
        }
        if (uVar17 != 0xffffffff) break;
      }
      lVar18 = (long)puVar26 - (ulong)*puVar26;
      if ((*puVar26 == 0) || (lVar18 == 0)) break;
      lVar4 = 0xc;
      if (*(char *)(lVar18 + 10) != '\0') {
        lVar4 = 0x1c;
      }
      if (lVar4 + lVar18 == 0) break;
      uVar15 = (ulong)*(ushort *)(lVar18 + 8);
      *(undefined4 *)(puVar7 + 0x74) = 0xfffffffe;
      if (uVar15 == 0) break;
      piVar27 = (int *)(lVar4 + lVar18 + 4);
      while (piVar27[-1] != -0x1bb801a8) {
        piVar27 = piVar27 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) goto LAB_028e8d80;
      }
      iVar3 = 0;
      if (*piVar27 != -1) {
        iVar3 = *piVar27;
      }
      *(int *)(puVar7 + 0x74) = iVar3;
      if (*puVar26 == 0) break;
    } while( true );
  }
LAB_028e8d80:
  uVar22 = uVar22 + 1;
  if (uVar22 == 4) goto LAB_028e85d0;
  goto LAB_028e8d8c;
LAB_028e85d0:
  pcVar32 = PTR_DAT_04bc3978;
LAB_028e85f0:
  uVar34 = uVar34 + 1;
  if (uVar34 == 3) goto LAB_028e91d4;
  goto LAB_028e85fc;
LAB_028e91d4:
  bVar1 = 5 < (int)uVar33;
  uVar33 = uVar33 + 1;
  if (bVar1) {
LAB_028e91e4:
    if (((int)local_1080 != 5) &&
       (uVar15 = FUN_028ec800(param_1,&local_1068,puVar14,&local_106c), (uVar15 & 1) != 0)) {
      uVar15 = (ulong)local_106c;
      if (2 < local_106c) {
        uVar15 = 0;
      }
      uVar33 = *(uint *)(param_1 + 0x297d0 + uVar15 * 4);
      uVar15 = (ulong)local_106c;
      if (2 < local_106c) {
        uVar15 = 0;
      }
      uVar13 = *(undefined4 *)(param_1 + 0x297d0 + uVar15 * 4);
      local_1084._0_2_ = (short)(uVar33 >> 0x10);
      FUN_028eb200(param_1,&local_1084);
      local_1084 = CONCAT22(local_1084._2_2_,(short)uVar13);
      FUN_028eb200(param_1,&local_1084);
      local_88._0_4_ = (uint)(uint3)local_88;
      local_90._0_5_ = 8;
      ppuVar2 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
      local_a0 = ppuVar2;
      local_98 = (undefined4 *)((long)&local_90 + 4);
      FUN_0376b510(&local_a0,uVar33 >> 0x10);
      local_7c[0] = 0;
      uVar15 = FUN_020fc100(local_7c,&local_80,&local_a0);
      if (((uVar15 & 1) != 0) && (uVar15 = (ulong)local_7c[0], local_80 < 0x20)) {
        if (0x22 < local_7c[0]) {
          uVar15 = 0;
        }
        *(uint *)(param_3 + uVar15 * 4) =
             *(uint *)(param_3 + uVar15 * 4) & (1 << (ulong)(local_80 & 0x1f) ^ 0xffffffffU);
      }
      local_88._0_4_ = (uint)(uint3)local_88;
      local_90 = (ulong *)CONCAT35(local_90._5_3_,8);
      local_a0 = ppuVar2;
      local_98 = (undefined4 *)((long)&local_90 + 4);
      FUN_0376b510(&local_a0,uVar13);
      local_7c[0] = 0;
      uVar15 = FUN_020fc100(local_7c,&local_80,&local_a0);
      if (((uVar15 & 1) != 0) && (uVar15 = (ulong)local_7c[0], local_80 < 0x20)) {
        if (0x22 < local_7c[0]) {
          uVar15 = 0;
        }
        *(uint *)(param_3 + uVar15 * 4) =
             *(uint *)(param_3 + uVar15 * 4) & (1 << (ulong)(local_80 & 0x1f) ^ 0xffffffffU);
      }
    }
    local_80 = 2;
    uVar15 = FUN_028ec800(param_1,&local_1068,puVar14,&local_80);
    if ((uVar15 & 1) == 0) {
      return;
    }
    uVar15 = (ulong)local_80;
    if (2 < local_80) {
      uVar15 = 0;
    }
    uVar23 = (ulong)local_80;
    local_88._0_4_ = (uint)(uint3)local_88;
    local_90._0_5_ = 8;
    if (2 < local_80) {
      uVar23 = 0;
    }
    uVar13 = *(undefined4 *)(param_1 + 0x297d0 + uVar23 * 4);
    *(short *)param_4 = (short)((uint)*(undefined4 *)(param_1 + 0x297d0 + uVar15 * 4) >> 0x10);
    puVar7 = PTR_DAT_04bb3768;
    *(short *)((long)param_4 + 2) = (short)uVar13;
    local_a0 = (undefined **)(puVar7 + 0x10);
    local_98 = (undefined4 *)((long)&local_90 + 4);
    FUN_0376b510(&local_a0);
    local_1084 = 0;
    uVar15 = FUN_020fc100(&local_1084,local_7c,&local_a0);
    if (((uVar15 & 1) != 0) && (uVar15 = (ulong)local_1084, local_7c[0] < 0x20)) {
      if (0x22 < local_1084) {
        uVar15 = 0;
      }
      *(uint *)(param_3 + uVar15 * 4) =
           *(uint *)(param_3 + uVar15 * 4) & (1 << (ulong)(local_7c[0] & 0x1f) ^ 0xffffffffU);
    }
    local_88._0_4_ = (uint)(uint3)local_88;
    local_90 = (ulong *)CONCAT35(local_90._5_3_,8);
    local_a0 = (undefined **)(puVar7 + 0x10);
    local_98 = (undefined4 *)((long)&local_90 + 4);
    FUN_0376b510(&local_a0,uVar13);
    local_1084 = 0;
    uVar15 = FUN_020fc100(&local_1084,local_7c,&local_a0);
    if ((uVar15 & 1) == 0) {
      return;
    }
    uVar15 = (ulong)local_1084;
    if (0x1f < local_7c[0]) {
      return;
    }
    if (0x22 < local_1084) {
      uVar15 = 0;
    }
    *(uint *)(param_3 + uVar15 * 4) =
         *(uint *)(param_3 + uVar15 * 4) & (1 << (ulong)(local_7c[0] & 0x1f) ^ 0xffffffffU);
    return;
  }
  goto LAB_028e834c;
}

