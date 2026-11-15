
/* WARNING: Type propagation algorithm not settling */

void FUN_01fb8360(long *param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  uint *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined *puVar9;
  undefined8 *******pppppppuVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  float *pfVar14;
  undefined8 *puVar15;
  char *__src;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  ushort uVar20;
  char *__dest;
  float fVar21;
  float fVar22;
  undefined1 local_3d0 [8];
  uint local_3c8;
  undefined4 local_3c4 [24];
  undefined4 local_364;
  undefined1 local_360;
  undefined4 local_35c;
  undefined8 local_220;
  undefined8 *local_218;
  undefined8 *******local_210;
  undefined8 *******pppppppuStack_208;
  undefined8 local_200;
  undefined8 *******local_1f8;
  undefined8 ******local_1f0;
  undefined8 *****local_1e8;
  undefined8 ****local_1e0;
  undefined8 ***local_1d8;
  undefined8 **local_1d0;
  undefined8 *local_1c8;
  undefined8 local_1c0;
  undefined2 local_1b8;
  undefined1 uStack_1b6;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_130;
  char *local_108;
  int local_100;
  undefined4 local_7c;
  undefined4 local_64;
  
  plVar1 = param_1 + 0x1615;
  *(undefined4 *)((long)param_1 + 0xaf8c) = 10;
  puVar9 = PTR_DAT_04bb3968;
  *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) | 0x40;
  pfVar14 = (float *)(**(code **)(*(long *)(*(long *)puVar9 + 0x177f0) + 0xf0))();
  fVar21 = *pfVar14;
  pfVar14 = (float *)(**(code **)(*(long *)(*(long *)puVar9 + 0x17820) + 0xf0))();
  fVar22 = *pfVar14;
  lVar19 = param_1[1];
  uVar18 = *(uint *)(lVar19 + 0x288);
  *(undefined4 *)(lVar19 + 0x288) = *(undefined4 *)(lVar19 + 0x28c);
  uVar18 = uVar18 ^ uVar18 << 0xb;
  *(undefined4 *)(lVar19 + 0x28c) = *(undefined4 *)(lVar19 + 0x290);
  uVar6 = *(uint *)(lVar19 + 0x294);
  *(uint *)(lVar19 + 0x290) = uVar6;
  uVar18 = uVar18 >> 8 ^ uVar6 >> 0x13 ^ uVar18 ^ uVar6;
  *(uint *)(lVar19 + 0x294) = uVar18;
  *(int *)((long)param_1 + 0xb0a4) =
       (int)((ulong)uVar18 * (ulong)(uint)((int)(fVar22 * 30.0) - (int)(fVar21 * 30.0)) >> 0x20) +
       (int)(fVar21 * 30.0);
  if ((int)param_1[0x15f1] == 0) {
    uVar16 = 3;
  }
  else if ((*(char *)((long)param_1 + 0xafb1) < '\0') && ((char)*plVar1 != '\0')) {
    uVar16 = *(undefined4 *)((long)param_1 + 0xb0ac);
  }
  else {
    lVar19 = param_1[1];
    local_1c0 = 0;
    local_1f8 = &local_1f0;
    local_1e8 = &local_1e0;
    local_1f0 = &local_1e8;
    local_1e0 = &local_1d8;
    local_1d8 = &local_1d0;
    pppppppuStack_208 = (undefined8 *******)&local_200;
    puVar15 = (undefined8 *)&local_1b8;
    local_1d0 = &local_1c8;
    local_1c8 = &local_1c0;
    local_220 = 0;
    local_218 = (undefined8 *)0x0;
    if (puVar15 != (undefined8 *)0x0) {
      local_220 = 0x900000000;
      local_218 = puVar15;
    }
    cVar8 = (char)*plVar1;
    local_210 = pppppppuStack_208;
    local_200 = &local_1f8;
    if ((cVar8 == '\0') || (local_3c8 = 3, *(int *)((long)param_1 + 0xb0ac) != 3)) {
      if (puVar15 != (undefined8 *)0x0) {
        local_200 = (undefined8 *******)CONCAT44((int)((ulong)&local_1f8 >> 0x20),3);
        *local_218 = pppppppuStack_208;
        cVar8 = (char)*plVar1;
        local_220 = CONCAT44(local_220._4_4_,1);
        local_210 = &local_1f8;
      }
      uVar18 = (uint)(puVar15 != (undefined8 *)0x0);
      if (cVar8 != '\0') goto LAB_01fb8560;
LAB_01fb8578:
      pppppppuVar10 = local_210;
      if (uVar18 < local_220._4_4_) {
        if (local_210 != (undefined8 *******)0x0) {
          local_210 = (undefined8 *******)*local_210;
        }
        *(undefined4 *)pppppppuVar10 = 4;
        uVar18 = (uint)local_220;
        if ((uint)local_220 < local_220._4_4_) {
          local_218[(int)(uint)local_220] = pppppppuVar10;
          uVar18 = (uint)local_220 + 1;
          local_220 = CONCAT44(local_220._4_4_,uVar18);
        }
      }
    }
    else {
      uVar18 = 0;
LAB_01fb8560:
      local_3c8 = 4;
      if (*(int *)((long)param_1 + 0xb0ac) != 4) goto LAB_01fb8578;
    }
    pppppppuVar10 = local_210;
    if ((((char)*plVar1 == '\0') || (local_3c8 = 5, *(int *)((long)param_1 + 0xb0ac) != 5)) &&
       (uVar18 < local_220._4_4_)) {
      if (local_210 != (undefined8 *******)0x0) {
        local_210 = (undefined8 *******)*local_210;
      }
      *(undefined4 *)pppppppuVar10 = 5;
      uVar18 = (uint)local_220;
      if ((uint)local_220 < local_220._4_4_) {
        local_218[(int)(uint)local_220] = pppppppuVar10;
        uVar18 = (uint)local_220 + 1;
        local_220 = CONCAT44(local_220._4_4_,uVar18);
      }
    }
    pppppppuVar10 = local_210;
    if ((((char)*plVar1 == '\0') || (local_3c8 = 6, *(int *)((long)param_1 + 0xb0ac) != 6)) &&
       (uVar18 < local_220._4_4_)) {
      if (local_210 != (undefined8 *******)0x0) {
        local_210 = (undefined8 *******)*local_210;
      }
      *(undefined4 *)pppppppuVar10 = 6;
      uVar18 = (uint)local_220;
      if ((uint)local_220 < local_220._4_4_) {
        local_218[(int)(uint)local_220] = pppppppuVar10;
        uVar18 = (uint)local_220 + 1;
        local_220 = CONCAT44(local_220._4_4_,uVar18);
      }
    }
    pppppppuVar10 = local_210;
    if (((*(int *)(DAT_05ab5ea8 + 0x14) != 6) &&
        (((char)*plVar1 == '\0' || (local_3c8 = 7, *(int *)((long)param_1 + 0xb0ac) != 7)))) &&
       (uVar18 < local_220._4_4_)) {
      if (local_210 != (undefined8 *******)0x0) {
        local_210 = (undefined8 *******)*local_210;
      }
      *(undefined4 *)pppppppuVar10 = 7;
      if ((uint)local_220 < local_220._4_4_) {
        local_218[(int)(uint)local_220] = pppppppuVar10;
        local_220 = CONCAT44(local_220._4_4_,(uint)local_220 + 1);
      }
    }
    if (((DAT_05292338 == 0) || (DAT_05aed670 == 0)) || (*(long *)(DAT_05aed670 + 0x330) == 0)) {
LAB_01fb87a0:
      pppppppuVar10 = local_210;
      if (((char)*plVar1 == '\0') || (local_3c8 = 8, *(int *)((long)param_1 + 0xb0ac) != 8)) {
        if ((int)(uint)local_220 < (int)local_220._4_4_) {
          if (local_210 != (undefined8 *******)0x0) {
            local_210 = (undefined8 *******)*local_210;
          }
          *(undefined4 *)pppppppuVar10 = 8;
          if ((int)(uint)local_220 < (int)local_220._4_4_) {
            local_218[(int)(uint)local_220] = pppppppuVar10;
            local_220 = CONCAT44(local_220._4_4_,(uint)local_220 + 1);
          }
        }
      }
    }
    else {
      puVar15 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar13 = FUN_006bd550(*puVar15,0);
      if (((iVar13 != 0x758f7eaf) || (DAT_05aed670 == 0)) ||
         ((*(long *)(DAT_05aed670 + 0x330) == 0 ||
          (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) == 0)))) goto LAB_01fb87a0;
    }
    uVar18 = *(uint *)(lVar19 + 0x288);
    *(undefined4 *)(lVar19 + 0x288) = *(undefined4 *)(lVar19 + 0x28c);
    uVar18 = uVar18 ^ uVar18 << 0xb;
    *(undefined4 *)(lVar19 + 0x28c) = *(undefined4 *)(lVar19 + 0x290);
    uVar6 = *(uint *)(lVar19 + 0x294);
    *(uint *)(lVar19 + 0x290) = uVar6;
    uVar18 = uVar18 >> 8 ^ uVar6 >> 0x13 ^ uVar18 ^ uVar6;
    *(uint *)(lVar19 + 0x294) = uVar18;
    uVar16 = *(undefined4 *)local_218[(long)((local_220 & 0xffffffff) * (ulong)uVar18) >> 0x20];
  }
  switch(uVar16) {
  case 3:
    FUN_01e63f1c(&local_220);
    local_1c0 = CONCAT44(1,(undefined4)local_1c0);
    local_1b8 = CONCAT11(local_1b8._1_1_,1);
    if (local_108 != "NpcSpStretch") {
      iVar13 = 0xc;
      if (local_100 < 0xd) {
        iVar13 = local_100 + -1;
      }
      memcpy(local_108,"NpcSpStretch",(long)iVar13);
      local_108[iVar13] = '\0';
    }
    local_1b8 = CONCAT11(1,(undefined1)local_1b8);
    local_220 = CONCAT44(local_220._4_4_,0x3f);
    break;
  case 4:
    if ((int)param_1[0x15f1] == 1) {
      FUN_01e63f1c(&local_3c8);
      local_35c = 0x1e;
      local_3c8 = 1;
      local_364 = 1;
      local_360 = 1;
      if ((int)param_1[0x1619] < *(int *)((long)param_1 + 0xb0cc)) {
        FUN_021920b0(param_1 + 0x1619,&local_3c8);
      }
      local_3d0 = (undefined1  [8])0xfffe;
      FUN_0277d4ac(local_3d0);
      local_64 = FUN_00a8c014(DAT_04da7238);
      FUN_021ea5f0(&local_220,param_1[1],&local_64);
      *(undefined4 *)((long)param_1 + 0xaf8c) = 1;
      local_3d0 = (undefined1  [8])local_220;
      FUN_01e63f1c(&local_220);
      local_7c = 0xb;
LAB_01fb8a4c:
      local_130 = 1;
      local_220 = CONCAT44(local_220._4_4_,10);
      local_1c0 = CONCAT44(1,(undefined4)local_1c0);
      iVar13 = (**(code **)(*param_1 + 0x610))(param_1);
      bVar12 = iVar13 != 1;
      puVar3 = (uint *)((long)param_1 + 0xae84U);
      if (bVar12) {
        puVar3 = (uint *)local_3d0;
      }
      puVar2 = (undefined1 *)((long)param_1 + 0xae86);
      if (bVar12) {
        puVar2 = (undefined1 *)((ulong)local_3d0 | 2);
      }
      local_210 = (undefined8 *******)(param_1 + 0x243b);
      puVar5 = (undefined1 *)((long)param_1 + 0xae87);
      if (bVar12) {
        puVar5 = (undefined1 *)((ulong)local_3d0 | 3);
      }
      local_144._0_3_ = CONCAT12(*puVar2,(short)*puVar3);
      plVar4 = param_1 + 0x15d1;
      if (bVar12) {
        plVar4 = (long *)(local_3d0 + 4);
      }
      local_144 = CONCAT13(*puVar5,(undefined3)local_144);
      local_140 = (undefined4)*plVar4;
      param_1[0x243c] = (long)param_1;
      param_1[0x243d] = (long)&LAB_01fbf3a4;
      param_1[0x243e] = 0;
      if ((int)param_1[0x1619] < *(int *)((long)param_1 + 0xb0cc)) {
        FUN_021920b0(param_1 + 0x1619,&local_220);
      }
      goto LAB_01fb8de4;
    }
    FUN_01e63f1c(&local_220);
    local_220 = CONCAT44(local_220._4_4_,1);
    local_1c0 = CONCAT44(1,(undefined4)local_1c0);
    local_1b8 = CONCAT11(local_1b8._1_1_,1);
    if (local_108 != "NpcDrinkingExist") {
      iVar13 = 0x10;
      if (local_100 < 0x11) {
        iVar13 = local_100 + -1;
      }
      memcpy(local_108,"NpcDrinkingExist",(long)iVar13);
      local_108[iVar13] = '\0';
    }
    local_3d0._0_4_ = FUN_00a8c014(DAT_04da7238);
    FUN_021ea5f0(&local_3c8,param_1[1],local_3d0);
    goto LAB_01fb8dc8;
  case 5:
    if ((int)param_1[0x15f1] == 1) {
      FUN_01e63f1c(&local_3c8);
      local_35c = 0x1e;
      local_3c8 = 1;
      local_364 = 1;
      local_360 = 1;
      if ((int)param_1[0x1619] < *(int *)((long)param_1 + 0xb0cc)) {
        FUN_021920b0(param_1 + 0x1619,&local_3c8);
      }
      local_3d0 = (undefined1  [8])0xfffe;
      FUN_0277d4ac(local_3d0);
      local_64 = FUN_00a8c014(DAT_04da7238);
      FUN_021ea320(&local_220,param_1[1],&local_64);
      *(undefined4 *)((long)param_1 + 0xaf8c) = 1;
      local_3d0 = (undefined1  [8])local_220;
      FUN_01e63f1c(&local_220);
      local_7c = 10;
      goto LAB_01fb8a4c;
    }
    FUN_01e63f1c(&local_220);
    local_220 = CONCAT44(local_220._4_4_,1);
    local_1c0 = CONCAT44(1,(undefined4)local_1c0);
    local_1b8 = CONCAT11(local_1b8._1_1_,1);
    if (local_108 != "NpcEatingExist") {
      iVar13 = 0xe;
      if (local_100 < 0xf) {
        iVar13 = local_100 + -1;
      }
      memcpy(local_108,"NpcEatingExist",(long)iVar13);
      local_108[iVar13] = '\0';
    }
    local_3d0._0_4_ = FUN_00a8c014(DAT_04da7238);
    FUN_021ea320(&local_3c8,param_1[1],local_3d0);
LAB_01fb8dc8:
    local_144 = local_3c8;
    local_140 = local_3c4[0];
    break;
  case 6:
    FUN_01e63f1c(&local_220);
    local_220 = CONCAT44(local_220._4_4_,0x3f);
    local_1c0 = CONCAT44(1,(undefined4)local_1c0);
    local_1b8 = CONCAT11(local_1b8._1_1_,1);
    FUN_01e3b790(&local_3c8,param_1[1]);
    local_144 = local_3c8;
    local_140 = local_3c4[0];
    if (local_108 != "NpcSmartPhoneCheck") {
      __src = "NpcSmartPhoneCheck";
      bVar11 = SBORROW4(local_100,0x12);
      iVar13 = local_100 + -0x12;
      bVar12 = local_100 == 0x12;
      iVar17 = 0x12;
      __dest = local_108;
LAB_01fb8b90:
      if (bVar12 || iVar13 < 0 != bVar11) {
        iVar17 = local_100 + -1;
      }
      memcpy(__dest,__src,(long)iVar17);
      __dest[iVar17] = '\0';
    }
    break;
  default:
    FUN_01e63f1c(&local_220);
    local_220 = CONCAT44(local_220._4_4_,0x3f);
    uStack_1b6 = 1;
    local_1c0 = CONCAT44(1,(undefined4)local_1c0);
    local_1b8 = 0x101;
    __src = s_Sleepy_049138a3;
    if (local_108 != s_Sleepy_049138a3) {
      bVar11 = SBORROW4(local_100,6);
      iVar13 = local_100 + -6;
      bVar12 = local_100 == 6;
      iVar17 = 6;
      __dest = local_108;
      goto LAB_01fb8b90;
    }
    break;
  case 8:
    lVar19 = param_1[1];
    local_3c4[0] = 0;
    uVar18 = *(uint *)(lVar19 + 0x288);
    uVar6 = *(uint *)(lVar19 + 0x294);
    *(undefined4 *)(lVar19 + 0x288) = *(undefined4 *)(lVar19 + 0x28c);
    uVar7 = *(undefined4 *)(lVar19 + 0x290);
    uVar18 = uVar18 ^ uVar18 << 0xb;
    *(uint *)(lVar19 + 0x290) = uVar6;
    *(undefined4 *)(lVar19 + 0x28c) = uVar7;
    uVar18 = uVar18 >> 8 ^ uVar6 >> 0x13 ^ uVar18 ^ uVar6;
    *(uint *)(lVar19 + 0x294) = uVar18;
    uVar20 = 0x1eb6;
    if ((uVar18 & 2) != 0) {
      uVar20 = 0x1eb7;
    }
    local_3c8 = (uint)uVar20;
    FUN_0277d4ac(&local_3c8);
    *(undefined4 *)((long)param_1 + 0xaf8c) = 1;
    FUN_01e63f1c(&local_220);
    local_130 = 1;
    local_7c = 0;
    local_220 = CONCAT44(local_220._4_4_,10);
    local_1c0 = CONCAT44(1,(undefined4)local_1c0);
    iVar13 = (**(code **)(*param_1 + 0x610))(param_1);
    bVar12 = iVar13 != 1;
    puVar3 = (uint *)((long)param_1 + 0xae84U);
    if (bVar12) {
      puVar3 = &local_3c8;
    }
    plVar4 = param_1 + 0x15d1;
    puVar2 = (undefined1 *)((long)param_1 + 0xae86);
    if (bVar12) {
      plVar4 = (long *)local_3c4;
      puVar2 = (undefined1 *)((ulong)&local_3c8 | 2);
    }
    local_210 = (undefined8 *******)(param_1 + 0x243b);
    puVar5 = (undefined1 *)((long)param_1 + 0xae87);
    if (bVar12) {
      puVar5 = (undefined1 *)((ulong)&local_3c8 | 3);
    }
    local_144._0_3_ = CONCAT12(*puVar2,(short)*puVar3);
    local_144 = CONCAT13(*puVar5,(undefined3)local_144);
    local_140 = (undefined4)*plVar4;
    param_1[0x243d] = (long)&LAB_01fbf3a4;
    param_1[0x243c] = (long)param_1;
    param_1[0x243e] = 0;
    if ((int)param_1[0x1619] < *(int *)((long)param_1 + 0xb0cc)) {
      FUN_021920b0(param_1 + 0x1619,&local_220);
    }
    goto LAB_01fb8de4;
  }
  FUN_01fb1020(param_1,&local_220,0x1e);
LAB_01fb8de4:
  *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) & 0xffff7fff;
  *(undefined4 *)((long)param_1 + 0xb0ac) = uVar16;
  *(char *)plVar1 = '\x01';
  return;
}

