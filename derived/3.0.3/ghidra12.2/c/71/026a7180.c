
/* WARNING: Type propagation algorithm not settling */

void FUN_026a7180(byte *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                 uint *param_6)

{
  undefined *puVar1;
  undefined2 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  uint uVar7;
  undefined1 uVar8;
  byte bVar9;
  ushort uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  bool bVar13;
  undefined *puVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  int iVar23;
  uint uVar24;
  byte *pbVar25;
  ulong *puVar26;
  undefined8 *puVar27;
  undefined1 *puVar28;
  byte *pbVar29;
  ushort *puVar30;
  undefined1 uVar31;
  undefined2 uVar32;
  ulong uVar33;
  undefined2 *puVar34;
  char *pcVar35;
  long *******ppppppplVar36;
  uint *puVar37;
  undefined4 *puVar38;
  long *******ppppppplVar39;
  char cVar40;
  byte bVar41;
  uint *puVar42;
  long *******ppppppplVar43;
  long lVar44;
  int *piVar45;
  undefined8 uVar46;
  ulong uVar47;
  ulong uVar48;
  long lVar49;
  undefined1 *puVar50;
  undefined4 *puVar51;
  undefined *puVar52;
  ulong uVar53;
  long *plVar54;
  ulong uVar55;
  int local_4300;
  byte *local_42f8;
  byte *local_42b0;
  undefined8 local_42a0;
  undefined8 local_4298;
  undefined8 local_4290;
  undefined8 uStack_4288;
  undefined8 local_4280;
  undefined8 uStack_4278;
  undefined8 local_4270;
  undefined8 uStack_4268;
  undefined8 local_4260;
  undefined8 uStack_4258;
  undefined8 local_4250;
  undefined8 uStack_4248;
  undefined8 local_4240;
  undefined8 uStack_4238;
  undefined8 local_4230;
  undefined8 uStack_4228;
  undefined8 local_4220;
  undefined8 uStack_4218;
  undefined4 local_420c;
  undefined4 local_4208;
  undefined4 local_4204;
  int local_4200;
  uint local_41fc;
  undefined4 local_41f8;
  undefined4 local_41f4;
  undefined8 local_41f0;
  undefined8 local_41e8;
  undefined8 local_41e0;
  undefined8 local_41d8;
  char *local_41d0;
  undefined8 local_41c8;
  undefined8 local_41c0;
  undefined8 local_41b8;
  undefined8 local_41b0;
  undefined8 local_41a8;
  undefined8 local_41a0;
  undefined8 local_4198;
  undefined8 local_4190;
  undefined8 local_4188;
  undefined8 local_4180;
  undefined8 local_4178;
  undefined8 local_4170;
  undefined8 local_4168;
  undefined8 local_4160;
  undefined8 local_4158;
  undefined8 local_4150;
  undefined8 local_4148;
  undefined8 local_4140;
  undefined8 local_4138;
  undefined8 local_4130;
  undefined8 local_4128;
  undefined8 local_4120;
  undefined8 local_4118;
  undefined8 local_4110;
  undefined8 local_4108;
  undefined8 local_4100;
  undefined8 local_40f8;
  undefined8 local_40f0;
  undefined8 local_40e8;
  undefined8 local_40e0;
  undefined8 local_40d8;
  undefined8 local_40d0;
  undefined8 local_40c8;
  long ******local_40c0;
  undefined8 local_40b8;
  undefined8 local_40b0;
  undefined8 local_40a8;
  undefined8 local_40a0;
  long *******local_4098;
  long *******local_4090;
  int local_4088;
  long *******local_4080;
  long *******local_4078;
  undefined4 local_4070;
  long ******local_4068 [14];
  long alStack_3ff8 [2023];
  undefined8 local_c0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  uint *local_70;
  
  local_4098 = (long *******)&local_4098;
  local_4088 = 0;
  ppppppplVar43 = (long *******)&local_4090;
  local_4080 = local_4068;
  lVar44 = 0x123;
  plVar54 = alStack_3ff8;
  do {
    plVar54[-7] = (long)plVar54;
    plVar54[-0xe] = (long)(plVar54 + -7);
    lVar44 = lVar44 + -3;
    *plVar54 = (long)(plVar54 + 7);
    plVar54 = plVar54 + 0x15;
  } while (lVar44 != 0);
  local_4070 = 0x124;
  local_c0 = 0;
  local_41d8 = (undefined *)CONCAT44(local_41d8._4_4_,2);
  local_4090 = local_4098;
  local_4078 = local_4080;
  FUN_02694fe0(param_1,&local_4098,param_4,&local_41d8,param_6);
  uVar7 = *(uint *)(param_5 + 0x138);
  uVar33 = (ulong)uVar7;
  local_40a0 = 0;
  local_40a8 = 0xfffe;
  FUN_0277d4ac(&local_40a8);
  local_40b0 = 0xfffe;
  FUN_0277d4ac(&local_40b0);
  local_40b8 = 0xfffe;
  FUN_0277d4ac(&local_40b8);
  puVar52 = PTR_DAT_04bb3768;
  if (param_1[0x12678] == 0) {
    local_41d8 = PTR_DAT_04bb2020 + 0x10;
    local_41d0 = "HouseReset";
    iVar17 = FUN_02749340(param_1 + 0x1267c,&local_41d8);
    if (iVar17 == 0) {
      local_41d0 = (char *)((long)&local_41c8 + 4);
      local_41c0._0_4_ = (uint)(uint3)local_41c0;
      local_41d8 = puVar52 + 0x10;
      local_41c8 = CONCAT35(local_41c8._5_3_,8);
      FUN_038d1270(&local_41d8,"-----");
      if ((ulong)*param_1 < 0x23) {
        FUN_038d1270(&local_41d8,"%s%02d",
                     *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_1 * 8 + 0xb0),param_1[1]);
      }
      uVar46 = *(undefined8 *)PTR_DAT_04bb4138;
      (**(code **)(local_41d8 + 0x18))(&local_41d8);
      uVar22 = FUN_006bd550(local_41d0,0);
      local_42a0 = (undefined *)CONCAT44(local_42a0._4_4_,uVar22);
      puVar37 = (uint *)FUN_0079e770(uVar46,&local_42a0);
      puVar14 = PTR_DAT_04bb40b8;
      puVar1 = PTR_DAT_04bb40b0;
      if ((puVar37 != (uint *)0x0) && (*puVar37 != 0)) {
        cVar40 = *PTR_DAT_04bb40b0;
        do {
          if (cVar40 == '\0') {
            cVar40 = '\x01';
            *(undefined8 *)puVar14 = 0xffffffffffffffff;
            *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined4 *)(puVar14 + 0xa0) = 0xffffffff;
            *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar14 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar14 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar14 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar14 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar14 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar14 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar14 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar14 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar14 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar14 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar21 = *(uint *)(puVar14 + 0x7c);
            if (-1 < (int)uVar21) {
              if ((byte *)((ulong)uVar21 + (long)puVar37) != (byte *)0x0) {
                uVar21 = (uint)*(byte *)((ulong)uVar21 + (long)puVar37);
                goto LAB_026a747c;
              }
              break;
            }
            if (uVar21 != 0xffffffff) break;
          }
          puVar42 = (uint *)(ulong)*puVar37;
          uVar21 = 0;
          if ((*puVar37 == 0) || (puVar37 == puVar42)) goto LAB_026a747c;
          lVar44 = 0xc;
          if (*(char *)((long)puVar37 + (10 - (long)puVar42)) != '\0') {
            lVar44 = 0x1c;
          }
          lVar44 = (long)puVar37 + (lVar44 - (long)puVar42);
          if (lVar44 == 0) break;
          uVar53 = (ulong)*(ushort *)((long)puVar37 + (8 - (long)puVar42));
          *(undefined4 *)(puVar14 + 0x7c) = 0xfffffffe;
          if (uVar53 == 0) break;
          piVar45 = (int *)(lVar44 + 4);
          while (piVar45[-1] != 0x566f1d31) {
            piVar45 = piVar45 + 2;
            uVar53 = uVar53 - 1;
            if (uVar53 == 0) goto LAB_026a7478;
          }
          iVar17 = 0;
          if (*piVar45 != -1) {
            iVar17 = *piVar45;
          }
          *(int *)(puVar14 + 0x7c) = iVar17;
          if (*puVar37 == 0) break;
        } while( true );
      }
LAB_026a7478:
      uVar21 = 0;
LAB_026a747c:
      if (*param_6 == 7) {
        local_80 = (char *)0x6f7;
        FUN_0277d4ac(&local_80);
        puVar1 = PTR_DAT_04bc0510;
        puVar52 = PTR_DAT_04bb43c0;
        if (uVar21 < 5) {
          iVar17 = (&DAT_0417b3d0)[uVar21];
        }
        else {
          iVar17 = 0;
        }
        local_4290 = (uint *)0x0;
        local_42a0 = PTR_DAT_04bc0510 + 0x10;
        local_4298 = local_80;
        lVar44 = *(long *)PTR_DAT_04bb43c0;
        uVar18 = FUN_0277d6c4(&local_4298);
        if (*(long *)puVar52 != 0) {
          lVar44 = *(long *)(lVar44 + 0x57e58);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
          if ((uVar18 < *(uint *)(lVar44 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
            lVar44 = *(long *)PTR_DAT_04bc0428;
            uVar18 = FUN_0277d6c4(&local_80);
            uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
            if (uVar18 < *(uint *)(lVar44 + 0x1d8)) {
              lVar44 = *(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar18 * 8);
              if (lVar44 != 0) {
                local_4290 = (uint *)lVar44;
              }
            }
          }
        }
        iVar16 = FUN_01ad7260(&local_42a0);
        if (iVar17 < iVar16) {
          puVar28 = (undefined1 *)((long)&local_4298 + 2);
          puVar50 = (undefined1 *)((long)&local_4298 + 3);
          puVar27 = &local_4298;
          iVar16 = FUN_01ad7260(&local_42a0);
          if ((iVar16 != 0) &&
             (((iVar17 == 0 || (iVar16 = FUN_01ad7260(&local_42a0), iVar17 < iVar16)) &&
              (puVar30 = (ushort *)FUN_01afd600(&local_42a0), puVar30 != (ushort *)0x0)))) {
            *puVar30 = *puVar30 & 0xfff8 | (ushort)iVar17 & 7;
          }
          local_80._0_2_ = (undefined2)local_4298;
        }
        else {
          puVar28 = (undefined1 *)((ulong)&local_80 | 2);
          puVar50 = (undefined1 *)((ulong)&local_80 | 3);
          puVar27 = &local_80;
        }
        local_40b8 = CONCAT62(local_40b8._2_6_,(undefined2)local_80);
        local_40b8 = CONCAT44(*(undefined4 *)((long)puVar27 + 4),(undefined4)local_40b8);
        local_40b8._0_4_ = CONCAT13(*puVar50,CONCAT12(*puVar28,(undefined2)local_80));
        local_40b8 = CONCAT44(*(undefined4 *)((long)puVar27 + 4),(undefined4)local_40b8);
        local_80 = (char *)0xc88;
        FUN_0277d4ac(&local_80);
        lVar44 = *(long *)puVar52;
        local_42a0 = puVar1 + 0x10;
        local_4290 = (uint *)0x0;
        local_4298 = local_80;
        uVar18 = FUN_0277d6c4(&local_4298);
        if (*(long *)puVar52 != 0) {
          lVar44 = *(long *)(lVar44 + 0x57e58);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
          if ((uVar18 < *(uint *)(lVar44 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
            lVar44 = *(long *)PTR_DAT_04bc0428;
            uVar18 = FUN_0277d6c4(&local_80);
            uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
            if (uVar18 < *(uint *)(lVar44 + 0x1d8)) {
              puVar37 = *(uint **)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar18 * 8);
              if (puVar37 != (uint *)0x0) {
                local_4290 = puVar37;
              }
            }
          }
        }
        iVar17 = FUN_01ad7260(&local_42a0);
        puVar52 = PTR_DAT_04bb3768;
        if ((int)uVar21 < iVar17) {
          puVar28 = (undefined1 *)((long)&local_4298 + 2);
          puVar50 = (undefined1 *)((long)&local_4298 + 3);
          puVar27 = &local_4298;
          iVar17 = FUN_01ad7260(&local_42a0);
          if (((iVar17 != 0) &&
              ((uVar21 == 0 || (iVar17 = FUN_01ad7260(&local_42a0), (int)uVar21 < iVar17)))) &&
             (puVar30 = (ushort *)FUN_01afd600(&local_42a0), puVar30 != (ushort *)0x0)) {
            *puVar30 = *puVar30 & 0xfff8 | (ushort)uVar21 & 7;
          }
          uVar32 = (undefined2)local_4298;
        }
        else {
          puVar28 = (undefined1 *)((ulong)&local_80 | 2);
          puVar50 = (undefined1 *)((ulong)&local_80 | 3);
          puVar27 = &local_80;
          uVar32 = (undefined2)local_80;
        }
        local_40a8._0_3_ = CONCAT12(*puVar28,uVar32);
        local_40a8._0_4_ = CONCAT13(*puVar50,(undefined3)local_40a8);
        local_40a8 = CONCAT44(*(undefined4 *)((long)puVar27 + 4),(undefined4)local_40a8);
      }
      else if (*param_6 == 1) {
        local_80 = (char *)0xfc5;
        FUN_0277d4ac(&local_80);
        puVar1 = PTR_DAT_04bc0510;
        puVar52 = PTR_DAT_04bb43c0;
        if (uVar21 < 8) {
          iVar17 = (&DAT_04058320)[uVar21];
        }
        else {
          iVar17 = 0;
        }
        local_4290 = (uint *)0x0;
        local_42a0 = PTR_DAT_04bc0510 + 0x10;
        local_4298 = local_80;
        lVar44 = *(long *)PTR_DAT_04bb43c0;
        uVar18 = FUN_0277d6c4(&local_4298);
        if (*(long *)puVar52 != 0) {
          lVar44 = *(long *)(lVar44 + 0x57e58);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
          if ((uVar18 < *(uint *)(lVar44 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
            lVar44 = *(long *)PTR_DAT_04bc0428;
            uVar18 = FUN_0277d6c4(&local_80);
            uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
            if (uVar18 < *(uint *)(lVar44 + 0x1d8)) {
              lVar44 = *(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar18 * 8);
              if (lVar44 != 0) {
                local_4290 = (uint *)lVar44;
              }
            }
          }
        }
        iVar16 = FUN_01ad7260(&local_42a0);
        if (iVar17 < iVar16) {
          puVar28 = (undefined1 *)((long)&local_4298 + 2);
          puVar50 = (undefined1 *)((long)&local_4298 + 3);
          puVar27 = &local_4298;
          iVar16 = FUN_01ad7260(&local_42a0);
          if ((iVar16 != 0) &&
             (((iVar17 == 0 || (iVar16 = FUN_01ad7260(&local_42a0), iVar17 < iVar16)) &&
              (puVar30 = (ushort *)FUN_01afd600(&local_42a0), puVar30 != (ushort *)0x0)))) {
            *puVar30 = *puVar30 & 0xfff8 | (ushort)iVar17 & 7;
          }
          local_80._0_2_ = (undefined2)local_4298;
        }
        else {
          puVar28 = (undefined1 *)((ulong)&local_80 | 2);
          puVar50 = (undefined1 *)((ulong)&local_80 | 3);
          puVar27 = &local_80;
        }
        local_40a8 = CONCAT62(local_40a8._2_6_,(undefined2)local_80);
        local_40a8 = CONCAT44(*(undefined4 *)((long)puVar27 + 4),(undefined4)local_40a8);
        local_40a8._0_3_ = CONCAT12(*puVar28,(undefined2)local_80);
        local_40a8._0_4_ = CONCAT13(*puVar50,(undefined3)local_40a8);
        local_40a8 = CONCAT44(*(undefined4 *)((long)puVar27 + 4),(undefined4)local_40a8);
        local_80 = (char *)0xf98;
        FUN_0277d4ac(&local_80);
        if (uVar21 < 8) {
          iVar17 = (&DAT_040578a0)[uVar21];
        }
        else {
          iVar17 = 0;
        }
        lVar44 = *(long *)puVar52;
        local_42a0 = puVar1 + 0x10;
        local_4290 = (uint *)0x0;
        local_4298 = local_80;
        uVar18 = FUN_0277d6c4(&local_4298);
        if (*(long *)puVar52 != 0) {
          lVar44 = *(long *)(lVar44 + 0x57e58);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
          if ((uVar18 < *(uint *)(lVar44 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
            lVar44 = *(long *)PTR_DAT_04bc0428;
            uVar18 = FUN_0277d6c4(&local_80);
            uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
            if (uVar18 < *(uint *)(lVar44 + 0x1d8)) {
              puVar37 = *(uint **)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar18 * 8);
              if (puVar37 != (uint *)0x0) {
                local_4290 = puVar37;
              }
            }
          }
        }
        iVar16 = FUN_01ad7260(&local_42a0);
        if (iVar17 < iVar16) {
          puVar28 = (undefined1 *)((long)&local_4298 + 2);
          puVar50 = (undefined1 *)((long)&local_4298 + 3);
          puVar27 = &local_4298;
          iVar16 = FUN_01ad7260(&local_42a0);
          if (((iVar16 != 0) &&
              ((iVar17 == 0 || (iVar16 = FUN_01ad7260(&local_42a0), iVar17 < iVar16)))) &&
             (puVar30 = (ushort *)FUN_01afd600(&local_42a0), puVar30 != (ushort *)0x0)) {
            *puVar30 = *puVar30 & 0xfff8 | (ushort)iVar17 & 7;
          }
          uVar32 = (undefined2)local_4298;
        }
        else {
          puVar28 = (undefined1 *)((ulong)&local_80 | 2);
          puVar50 = (undefined1 *)((ulong)&local_80 | 3);
          puVar27 = &local_80;
          uVar32 = (undefined2)local_80;
        }
        uVar46 = local_40b0;
        local_40b0 = CONCAT62(local_40b0._2_6_,uVar32);
        local_40b0._3_5_ = SUB85(uVar46,3);
        local_40b0._0_3_ = CONCAT12(*puVar28,uVar32);
        local_40b0 = CONCAT44(*(undefined4 *)((long)puVar27 + 4),
                              CONCAT13(*puVar50,(undefined3)local_40b0));
        puVar52 = PTR_DAT_04bb3768;
      }
      bVar13 = true;
    }
    else {
      bVar13 = false;
      uVar21 = 0;
    }
  }
  else {
    bVar13 = false;
    uVar21 = 0;
  }
  local_41d8 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_41d8);
  local_41d0 = (char *)0xfffe;
  FUN_0277d4ac(&local_41d0);
  local_41c8 = 0xfffe;
  FUN_0277d4ac(&local_41c8);
  local_41c0 = 0xfffe;
  FUN_0277d4ac(&local_41c0);
  local_41b8 = 0xfffe;
  FUN_0277d4ac(&local_41b8);
  local_41b0 = 0xfffe;
  FUN_0277d4ac(&local_41b0);
  local_41a8 = 0xfffe;
  FUN_0277d4ac(&local_41a8);
  local_41a0 = 0xfffe;
  FUN_0277d4ac(&local_41a0);
  local_4198 = 0xfffe;
  FUN_0277d4ac(&local_4198);
  local_4190 = 0xfffe;
  FUN_0277d4ac(&local_4190);
  local_4188 = 0xfffe;
  FUN_0277d4ac(&local_4188);
  local_4180 = 0xfffe;
  FUN_0277d4ac(&local_4180);
  local_4178 = 0xfffe;
  FUN_0277d4ac(&local_4178);
  local_4170 = 0xfffe;
  FUN_0277d4ac(&local_4170);
  local_4168 = 0xfffe;
  FUN_0277d4ac(&local_4168);
  local_4160 = 0xfffe;
  FUN_0277d4ac(&local_4160);
  local_4158 = 0xfffe;
  FUN_0277d4ac(&local_4158);
  local_4150 = 0xfffe;
  FUN_0277d4ac(&local_4150);
  local_4148 = 0xfffe;
  FUN_0277d4ac(&local_4148);
  local_4140 = 0xfffe;
  FUN_0277d4ac(&local_4140);
  local_4138 = 0xfffe;
  FUN_0277d4ac(&local_4138);
  local_4130 = 0xfffe;
  FUN_0277d4ac(&local_4130);
  local_4128 = 0xfffe;
  FUN_0277d4ac(&local_4128);
  local_4120 = 0xfffe;
  FUN_0277d4ac(&local_4120);
  local_4118 = 0xfffe;
  FUN_0277d4ac(&local_4118);
  local_4110 = 0xfffe;
  FUN_0277d4ac(&local_4110);
  local_4108 = 0xfffe;
  FUN_0277d4ac(&local_4108);
  local_4100 = 0xfffe;
  FUN_0277d4ac(&local_4100);
  local_40f8 = 0xfffe;
  FUN_0277d4ac(&local_40f8);
  local_40f0 = 0xfffe;
  FUN_0277d4ac(&local_40f0);
  local_40e8 = 0xfffe;
  FUN_0277d4ac(&local_40e8);
  local_40e0 = 0xfffe;
  FUN_0277d4ac(&local_40e0);
  local_40d8 = 0xfffe;
  FUN_0277d4ac(&local_40d8);
  local_40d0 = 0xfffe;
  FUN_0277d4ac(&local_40d0);
  local_40c8 = 0xfffe;
  FUN_0277d4ac(&local_40c8);
  local_40c0 = (long ******)0xfffe;
  FUN_0277d4ac(&local_40c0);
  puVar1 = PTR_DAT_04bb43c0;
  local_4118 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_4120 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_4128 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_4130 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_4138 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_4140 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_4148 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_4150 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_4158 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_4160 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_4168 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_4170 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_4178 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_4180 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_4188 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_4190 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_4198 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_41a0 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_41a8 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_41b0 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_41b8 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_41c0 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_41c8 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_41d0 = *(char **)PTR_DAT_04bb37e0;
  local_41d8 = *(undefined **)PTR_DAT_04bb37e0;
  local_40c0 = *(long *******)PTR_DAT_04bb37e0;
  local_40c8 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_40d0 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_40d8 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_40e0 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_40e8 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_40f0 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_40f8 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_4100 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_4108 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_4110 = *(undefined8 *)PTR_DAT_04bb37e0;
  if ((int)uVar7 < 1) {
    if (&local_4098 != (long ********)local_4090) {
      ppppppplVar36 = local_4090 + -5;
      puVar52 = PTR_DAT_04bc0510 + 0x10;
      ppppppplVar39 = local_4090;
      do {
        if (*(char *)(ppppppplVar36 + 3) == '\0') {
          uVar21 = *(uint *)ppppppplVar36;
          if (-1 < (int)uVar21) {
            uVar20 = 0x20;
            uVar18 = uVar21 - 0x18;
            if (uVar21 < 0x18) {
              uVar20 = 0x18;
              uVar18 = uVar21;
            }
            if (uVar18 < uVar20) {
              pbVar25 = param_1 + 0x10d6c;
              if (uVar21 < 0x18) {
                pbVar25 = param_1 + 0x1094c;
              }
              local_88 = *(char **)(pbVar25 + (ulong)uVar18 * 0x2c);
              lVar49 = *(long *)puVar1;
              uVar21 = FUN_0277d6c4(&local_88);
              lVar44 = *(long *)puVar1;
              if (lVar44 != 0) {
                lVar49 = *(long *)(lVar49 + 0x57e58);
                uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar49 + 0x1f8);
                if ((uVar21 < *(uint *)(lVar49 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar49 + 0x1e0) + (long)(int)uVar21 * 8) != 0)) {
                  local_4290 = (uint *)0x0;
                  local_4298 = local_88;
                  local_42a0 = puVar52;
                  uVar21 = FUN_0277d6c4(&local_4298);
                  if (*(long *)puVar1 == 0) {
LAB_026a8288:
                    if (local_4290 != (uint *)0x0) goto LAB_026a8290;
                  }
                  else {
                    lVar44 = *(long *)(lVar44 + 0x57e58);
                    uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
                    if ((*(uint *)(lVar44 + 0x1d8) <= uVar21) ||
                       (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar21 * 8) == 0))
                    goto LAB_026a8288;
                    lVar44 = *(long *)PTR_DAT_04bc0428;
                    uVar21 = FUN_0277d6c4(&local_88);
                    uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
                    if ((*(uint *)(lVar44 + 0x1d8) <= uVar21) ||
                       (puVar37 = *(uint **)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar21 * 8),
                       puVar37 == (uint *)0x0)) goto LAB_026a8288;
                    local_4290 = puVar37;
LAB_026a8290:
                    puVar37 = (uint *)((long)local_4290 - (ulong)*local_4290);
                    if ((((*local_4290 != 0) && (puVar37 != (uint *)0x0)) && (*puVar37 != 0)) &&
                       ((uVar21 = puVar37[1], uVar21 != 0 && ((ulong)(ushort)puVar37[2] != 0)))) {
                      lVar44 = 0xc;
                      if (*(char *)((long)puVar37 + 10) != '\0') {
                        lVar44 = 0x1c;
                      }
                      lVar44 = (long)puVar37 + lVar44 + (ulong)(ushort)puVar37[2] * 8;
                      if (lVar44 != 0) {
                        uVar18 = 0;
                        if ((ulong)uVar21 != 0) {
                          uVar18 = (uint)((ulong)((long)local_4290 - lVar44) / (ulong)uVar21);
                        }
                        if (*puVar37 <= uVar18) {
                          uVar18 = 0xffffffff;
                        }
                        if (((uVar18 < *(uint *)PTR_DAT_04bc00c8) &&
                            (uVar10 = *(ushort *)
                                       (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar18 * 2),
                            uVar10 < 0xbd)) && ((uVar10 - 0x72 < 2 || (uVar10 - 9 < 2))))
                        goto LAB_026a8110;
                      }
                    }
                  }
                  if (*(char *)(ppppppplVar36 + 3) != '\0') goto LAB_026a8110;
                }
              }
            }
          }
          if (*ppppppplVar39 != (long ******)0x0) {
            (*ppppppplVar39)[1] = (long *****)ppppppplVar39[1];
          }
          if (ppppppplVar39[1] != (long ******)0x0) {
            *ppppppplVar39[1] = (long *****)*ppppppplVar39;
          }
          *ppppppplVar39 = (long ******)0x0;
          ppppppplVar39[1] = (long ******)0x0;
          *ppppppplVar36 = (long ******)local_4080;
          ppppppplVar39 = local_4090;
          local_4088 = local_4088 + -1;
          local_4080 = ppppppplVar36;
        }
        else {
LAB_026a8110:
          ppppppplVar39 = (long *******)ppppppplVar39[1];
        }
        ppppppplVar36 = ppppppplVar39 + -5;
      } while (&local_40c0 != ppppppplVar36);
      goto LAB_026a8338;
    }
  }
  else {
    puVar34 = (undefined2 *)((ulong)&local_41d8 | 2);
    uVar53 = 0;
    pcVar35 = (char *)((ulong)&local_41d8 | 3);
    puVar27 = &local_41d8;
    do {
      if (uVar53 < *(uint *)(param_5 + 0x118)) {
        lVar44 = *(long *)(*(long *)(param_5 + 0x120) + uVar53 * 8);
      }
      else {
        lVar44 = 0;
      }
      pbVar25 = (byte *)(**(code **)(*(long *)(lVar44 + 0xf8) + 0xf0))();
      if (*pbVar25 - 2 < 4) {
        puVar26 = (ulong *)(**(code **)(*(long *)(lVar44 + 0x60) + 0xf0))((long *)(lVar44 + 0x60));
        uVar47 = *puVar26;
        local_42a0 = (undefined *)(uVar47 & 0xffff);
        FUN_0277d4ac(&local_42a0);
        uVar31 = (undefined1)(uVar47 >> 0x10);
        cVar40 = (char)(uVar47 >> 0x18);
        iVar17 = (int)(uVar47 >> 0x20);
        local_42a0 = (undefined *)
                     CONCAT44(iVar17,CONCAT13(cVar40,CONCAT12(uVar31,(undefined2)local_42a0)));
        if (bVar13) {
          uVar47 = FUN_0277d7b4(&local_42a0,&local_40a8);
          if ((uVar47 & 1) == 0) {
            uVar47 = FUN_0277d7b4(&local_42a0,&local_40b0);
            if ((uVar47 & 1) == 0) {
              uVar47 = FUN_0277d7b4(&local_42a0,&local_40b8);
              if ((uVar47 & 1) == 0) {
                FUN_0268bd40(&local_80,&local_42a0,uVar21);
                local_42a0 = (undefined *)CONCAT62(local_42a0._2_6_,(undefined2)local_80);
                uVar32 = (undefined2)local_80;
                iVar17 = local_80._4_4_;
                cVar40 = local_80._3_1_;
                uVar31 = local_80._2_1_;
              }
              else {
                local_42a0 = (undefined *)CONCAT62(local_42a0._2_6_,(undefined2)local_40b8);
                uVar32 = (undefined2)local_40b8;
                iVar17 = local_40b8._4_4_;
                cVar40 = local_40b8._3_1_;
                uVar31 = local_40b8._2_1_;
              }
            }
            else {
              uVar32 = (undefined2)local_40b0;
              iVar17 = local_40b0._4_4_;
              cVar40 = local_40b0._3_1_;
              uVar31 = local_40b0._2_1_;
            }
          }
          else {
            uVar32 = (undefined2)local_40a8;
            iVar17 = local_40a8._4_4_;
            cVar40 = local_40a8._3_1_;
            uVar31 = local_40a8._2_1_;
          }
        }
        else {
          uVar32 = (undefined2)local_42a0;
        }
        bVar15 = 0x23 < uVar53;
        puVar5 = puVar27;
        if (bVar15) {
          puVar5 = &local_41d8;
        }
        *(undefined2 *)puVar5 = uVar32;
        puVar2 = (undefined2 *)((long)puVar27 + 2);
        if (bVar15) {
          puVar2 = puVar34;
        }
        *(undefined1 *)puVar2 = uVar31;
        piVar45 = (int *)((long)puVar27 + 4);
        if (bVar15) {
          piVar45 = (int *)((long)&local_41d8 + 4);
        }
        *piVar45 = iVar17;
        pcVar3 = (char *)((long)puVar27 + 3);
        if (bVar15) {
          pcVar3 = pcVar35;
        }
        *pcVar3 = cVar40;
      }
      uVar53 = uVar53 + 1;
      puVar27 = puVar27 + 1;
    } while (uVar33 != uVar53);
    if ((long ********)local_4090 != &local_4098) {
      ppppppplVar36 = local_4090 + -5;
      puVar52 = PTR_DAT_04bc0510 + 0x10;
      ppppppplVar39 = local_4090;
      do {
        puVar1 = PTR_DAT_04bb43c0;
        local_42b0 = param_1 + 0x1094c;
        local_42f8 = param_1 + 0x10d6c;
        if (*(char *)(ppppppplVar36 + 3) == '\0') {
          uVar21 = *(uint *)ppppppplVar36;
          if (-1 < (int)uVar21) {
            uVar20 = 0x20;
            uVar18 = uVar21 - 0x18;
            if (uVar21 < 0x18) {
              uVar20 = 0x18;
              uVar18 = uVar21;
            }
            if (uVar18 < uVar20) {
              if (uVar21 < 0x18) {
                local_42f8 = local_42b0;
              }
              local_88 = *(char **)(local_42f8 + (ulong)uVar18 * 0x2c);
              lVar49 = *(long *)PTR_DAT_04bb43c0;
              uVar21 = FUN_0277d6c4(&local_88);
              lVar44 = *(long *)puVar1;
              if (lVar44 != 0) {
                lVar49 = *(long *)(lVar49 + 0x57e58);
                uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar49 + 0x1f8);
                if ((uVar21 < *(uint *)(lVar49 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar49 + 0x1e0) + (long)(int)uVar21 * 8) != 0)) {
                  local_4290 = (uint *)0x0;
                  local_4298 = local_88;
                  local_42a0 = puVar52;
                  uVar21 = FUN_0277d6c4(&local_4298);
                  if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_026a9988:
                    if (local_4290 != (uint *)0x0) goto LAB_026a9990;
LAB_026a9a38:
                    bVar41 = 0;
                  }
                  else {
                    lVar44 = *(long *)(lVar44 + 0x57e58);
                    uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
                    if ((*(uint *)(lVar44 + 0x1d8) <= uVar21) ||
                       (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar21 * 8) == 0))
                    goto LAB_026a9988;
                    lVar44 = *(long *)PTR_DAT_04bc0428;
                    uVar21 = FUN_0277d6c4(&local_88);
                    uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
                    if ((*(uint *)(lVar44 + 0x1d8) <= uVar21) ||
                       (puVar37 = *(uint **)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar21 * 8),
                       puVar37 == (uint *)0x0)) goto LAB_026a9988;
                    local_4290 = puVar37;
LAB_026a9990:
                    uVar21 = *local_4290;
                    bVar41 = 0;
                    if ((uVar21 != 0) && (local_4290 != (uint *)(ulong)uVar21)) {
                      puVar37 = (uint *)((long)local_4290 - (long)(ulong)uVar21);
                      if ((*puVar37 == 0) ||
                         ((uVar21 = puVar37[1], uVar21 == 0 || ((ulong)(ushort)puVar37[2] == 0))))
                      goto LAB_026a9a38;
                      lVar44 = 0xc;
                      if (*(char *)((long)puVar37 + 10) != '\0') {
                        lVar44 = 0x1c;
                      }
                      lVar44 = (long)puVar37 + lVar44 + (ulong)(ushort)puVar37[2] * 8;
                      bVar41 = 0;
                      if (lVar44 != 0) {
                        uVar18 = 0;
                        if ((ulong)uVar21 != 0) {
                          uVar18 = (uint)((ulong)((long)local_4290 - lVar44) / (ulong)uVar21);
                        }
                        if (*puVar37 <= uVar18) {
                          uVar18 = 0xffffffff;
                        }
                        if (((*(uint *)PTR_DAT_04bc00c8 <= uVar18) ||
                            (uVar10 = *(ushort *)
                                       (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar18 * 2),
                            0xbc < uVar10)) || ((1 < uVar10 - 0x72 && (1 < uVar10 - 9))))
                        goto LAB_026a9a38;
                        bVar41 = 1;
                      }
                    }
                  }
                  uVar53 = 0;
                  puVar27 = &local_41d8;
                  do {
                    if ((0x23 < uVar53) ||
                       ((*(uint *)((long)local_4068 + ((uVar53 >> 3 & 0x1ffffffffffffffc) - 0x38))
                         >> (ulong)((uint)uVar53 & 0x1f) & 1) == 0)) {
                      puVar5 = puVar27;
                      if (0x23 < uVar53) {
                        puVar5 = &local_41d8;
                      }
                      uVar47 = FUN_0277d7b4(&local_88,puVar5);
                      pcVar3 = local_78;
                      puVar1 = PTR_DAT_04bb43c0;
                      if ((uVar47 & 1) != 0) {
                        local_78 = (char *)CONCAT62(local_78._2_6_,*(undefined2 *)puVar5);
                        piVar45 = (int *)((long)puVar27 + 4);
                        puVar2 = (undefined2 *)((long)puVar27 + 2);
                        if (0x23 < uVar53) {
                          piVar45 = (int *)((long)&local_41d8 + 4);
                          puVar2 = puVar34;
                        }
                        pcVar6 = (char *)((long)puVar27 + 3);
                        if (0x23 < uVar53) {
                          pcVar6 = pcVar35;
                        }
                        local_78._3_5_ = SUB85(pcVar3,3);
                        local_78._0_3_ = CONCAT12(*(undefined1 *)puVar2,*(undefined2 *)puVar5);
                        local_78._4_4_ = SUB84(pcVar3,4);
                        local_78._0_4_ = CONCAT13(*pcVar6,(undefined3)local_78);
                        local_78 = (char *)CONCAT44(*piVar45,(undefined4)local_78);
                        local_70 = (uint *)0x0;
                        local_80 = PTR_DAT_04bc0510 + 0x10;
                        lVar44 = *(long *)PTR_DAT_04bb43c0;
                        uVar21 = FUN_0277d6c4(&local_78);
                        if (*(long *)puVar1 != 0) {
                          lVar44 = *(long *)(lVar44 + 0x57e58);
                          uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
                          if ((uVar21 < *(uint *)(lVar44 + 0x1d8)) &&
                             (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar21 * 8) != 0)) {
                            lVar44 = *(long *)PTR_DAT_04bc0428;
                            uVar21 = FUN_0277d6c4(puVar5);
                            uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
                            if (uVar21 < *(uint *)(lVar44 + 0x1d8)) {
                              puVar37 = *(uint **)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar21 * 8
                                                  );
                              if (puVar37 != (uint *)0x0) {
                                local_70 = puVar37;
                              }
                            }
                          }
                        }
                        uVar47 = FUN_01ae7a70(&local_42a0);
                        if ((uVar47 & 1) != 0) {
                          FUN_01afca60(&local_42a0,1);
                        }
                        uVar22 = FUN_01ae98d0(&local_80);
                        FUN_01afade0(&local_42a0,uVar22);
                        local_88 = local_4298;
                        uVar47 = FUN_0277d7b4(&local_88,puVar5);
                        if ((((uVar47 & 1) != 0) && (local_88._3_1_ == *pcVar6)) &&
                           (local_88._4_4_ == *piVar45)) {
                          if (uVar53 < 0x24) {
                            uVar47 = uVar53 >> 3 & 0x1ffffffffffffffc;
                            *(uint *)((long)local_4068 + (uVar47 - 0x38)) =
                                 *(uint *)((long)local_4068 + (uVar47 - 0x38)) |
                                 1 << (ulong)((uint)uVar53 & 0x1f);
                          }
                          *(undefined1 *)(ppppppplVar36 + 3) = 1;
                          goto LAB_026a9840;
                        }
                      }
                    }
                    uVar53 = uVar53 + 1;
                    puVar27 = puVar27 + 1;
                  } while (uVar33 != uVar53);
                  if (!(bool)(*(char *)(ppppppplVar36 + 3) == '\0' & (bVar41 ^ 1)))
                  goto LAB_026a9840;
                }
              }
            }
          }
          if (*ppppppplVar39 != (long ******)0x0) {
            (*ppppppplVar39)[1] = (long *****)ppppppplVar39[1];
          }
          if (ppppppplVar39[1] != (long ******)0x0) {
            *ppppppplVar39[1] = (long *****)*ppppppplVar39;
          }
          *ppppppplVar39 = (long ******)0x0;
          ppppppplVar39[1] = (long ******)0x0;
          *ppppppplVar36 = (long ******)local_4080;
          ppppppplVar39 = local_4090;
          local_4088 = local_4088 + -1;
          local_4080 = ppppppplVar36;
        }
        else {
LAB_026a9840:
          ppppppplVar39 = (long *******)ppppppplVar39[1];
        }
        ppppppplVar36 = ppppppplVar39 + -5;
      } while (ppppppplVar36 != &local_40c0);
    }
LAB_026a8338:
    puVar52 = PTR_DAT_04bb3768;
  }
  local_42b0 = param_1 + 0x1094c;
  local_42f8 = param_1 + 0x10d6c;
  local_41f0 = 0;
  local_41e8 = 0;
  local_41e0 = 0;
  local_41f4 = FUN_00a8c014(*(undefined8 *)PTR_DAT_04bb30a0);
  local_4298 = (char *)((long)&local_4290 + 4);
  local_42a0 = puVar52 + 0x10;
  uStack_4288._0_4_ = (uint)(uint3)uStack_4288;
  local_4290 = (uint *)CONCAT35(local_4290._5_3_,8);
  FUN_038d1270(&local_42a0,"-----");
  if ((ulong)*param_1 < 0x23) {
    FUN_038d1270(&local_42a0,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_1 * 8 + 0xb0)
                 ,param_1[1]);
  }
  puVar52 = PTR_DAT_04bb2020;
  iVar17 = (int)(char)param_1[0x12678];
  local_80 = (char *)CONCAT44(local_80._4_4_,iVar17);
  if (iVar17 != 0) goto LAB_026a8404;
  pbVar25 = param_1 + 0x1267c;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_78 = "HouseReset";
  iVar17 = FUN_02749340(pbVar25,&local_80);
  if (iVar17 != 0) goto LAB_026a8404;
  uVar53 = *(ulong *)PTR_DAT_04bb4138;
  (**(code **)(local_42a0 + 0x18))(&local_42a0);
  uVar22 = FUN_006bd550(local_4298,0);
  local_80 = (char *)CONCAT44(local_80._4_4_,uVar22);
  puVar37 = (uint *)FUN_0079e770(uVar53,&local_80);
  puVar14 = PTR_DAT_04bb40b8;
  puVar1 = PTR_DAT_04bb40b0;
  if ((puVar37 != (uint *)0x0) && (uVar21 = *puVar37, uVar21 != 0)) {
    cVar40 = *PTR_DAT_04bb40b0;
    do {
      if (cVar40 == '\0') {
        cVar40 = '\x01';
        *(undefined8 *)puVar14 = 0xffffffffffffffff;
        *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
        *puVar1 = 1;
        *(undefined4 *)(puVar14 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar14 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar14 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar14 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar14 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar14 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar14 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar14 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar14 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar14 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar14 + 0x98) = 0xffffffffffffffff;
        uVar21 = *puVar37;
      }
      else {
        uVar18 = *(uint *)(puVar14 + 0x7c);
        if (-1 < (int)uVar18) {
          if ((byte *)((ulong)uVar18 + (long)puVar37) == (byte *)0x0) break;
          uVar18 = (uint)*(byte *)((ulong)uVar18 + (long)puVar37);
          goto LAB_026a9c98;
        }
        if (uVar18 != 0xffffffff) break;
      }
      puVar42 = (uint *)(ulong)uVar21;
      uVar18 = 0;
      if ((puVar42 == (uint *)0x0) || (uVar18 = 0, puVar37 == puVar42)) goto LAB_026a9c98;
      lVar44 = 0xc;
      if (*(char *)((long)puVar37 + (10 - (long)puVar42)) != '\0') {
        lVar44 = 0x1c;
      }
      lVar44 = (long)puVar37 + (lVar44 - (long)puVar42);
      if (lVar44 == 0) break;
      uVar47 = (ulong)*(ushort *)((long)puVar37 + (8 - (long)puVar42));
      *(undefined4 *)(puVar14 + 0x7c) = 0xfffffffe;
      if (uVar47 == 0) break;
      piVar45 = (int *)(lVar44 + 4);
      while (piVar45[-1] != 0x566f1d31) {
        piVar45 = piVar45 + 2;
        uVar47 = uVar47 - 1;
        if (uVar47 == 0) goto LAB_026a9c94;
      }
      uVar18 = 0;
      iVar17 = 0;
      if (*piVar45 != -1) {
        iVar17 = *piVar45;
      }
      *(int *)(puVar14 + 0x7c) = iVar17;
      uVar21 = *puVar37;
      if (uVar21 == 0) goto LAB_026a9c98;
    } while( true );
  }
LAB_026a9c94:
  uVar18 = 0;
LAB_026a9c98:
  local_78 = "GetFirstVillagerWallFtr1";
  local_80 = puVar52 + 0x10;
  iVar17 = FUN_02749340(pbVar25,&local_80);
  if (iVar17 != 0) {
    iVar17 = FUN_027cd808(param_3);
    if (iVar17 < 0) goto LAB_026a8404;
    if (*param_6 == 1) {
      local_88 = (char *)0xfc5;
      FUN_0277d4ac(&local_88);
      if (uVar18 < 8) {
        puVar38 = &DAT_04058320;
        goto LAB_026a9d24;
      }
LAB_026a9d2c:
      iVar16 = 0;
    }
    else {
      local_88 = (char *)0x6f7;
      FUN_0277d4ac(&local_88);
      if (4 < uVar18) goto LAB_026a9d2c;
      puVar38 = &DAT_0417b3d0;
LAB_026a9d24:
      iVar16 = puVar38[uVar18];
    }
    puVar1 = PTR_DAT_04bb43c0;
    local_70 = (uint *)0x0;
    local_80 = PTR_DAT_04bc0510 + 0x10;
    local_78 = local_88;
    lVar44 = *(long *)PTR_DAT_04bb43c0;
    uVar21 = FUN_0277d6c4(&local_78);
    if (*(long *)puVar1 != 0) {
      lVar44 = *(long *)(lVar44 + 0x57e58);
      uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
      if ((uVar21 < *(uint *)(lVar44 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar21 * 8) != 0)) {
        lVar44 = *(long *)PTR_DAT_04bc0428;
        uVar21 = FUN_0277d6c4(&local_88);
        uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
        if (uVar21 < *(uint *)(lVar44 + 0x1d8)) {
          puVar37 = *(uint **)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar21 * 8);
          if (puVar37 != (uint *)0x0) {
            local_70 = puVar37;
          }
        }
      }
    }
    iVar23 = FUN_01ad7260(&local_80);
    if (iVar16 < iVar23) {
      FUN_01af1f00(&local_80,iVar16);
      local_88 = local_78;
    }
    uVar53 = FUN_026a6260(param_1,param_2,param_3,param_5,&local_88,iVar17);
    uVar53 = uVar53 & 0xffffffff;
  }
  local_78 = "GetFirstVillagerWallFtr2";
  local_80 = puVar52 + 0x10;
  iVar17 = FUN_02749340(pbVar25,&local_80);
  uVar20 = (uint)uVar53;
  uVar21 = 0;
  if ((iVar17 != 0) && (uVar21 = FUN_027cd808(param_3), -1 < (int)uVar21)) {
    if (*param_6 == 1) {
      local_88 = (char *)0xf98;
      FUN_0277d4ac(&local_88);
      puVar52 = PTR_DAT_04bb43c0;
      if (uVar18 < 8) {
        uVar18 = (&DAT_040578a0)[uVar18];
      }
      else {
        uVar18 = 0;
      }
      local_70 = (uint *)0x0;
      local_80 = PTR_DAT_04bc0510 + 0x10;
      local_78 = local_88;
      lVar44 = *(long *)PTR_DAT_04bb43c0;
      uVar24 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar52 != 0) {
        lVar44 = *(long *)(lVar44 + 0x57e58);
        uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
        if ((uVar24 < *(uint *)(lVar44 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
          lVar44 = *(long *)PTR_DAT_04bc0428;
          uVar24 = FUN_0277d6c4(&local_88);
          uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
          if (uVar24 < *(uint *)(lVar44 + 0x1d8)) {
            puVar37 = *(uint **)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar24 * 8);
            if (puVar37 != (uint *)0x0) {
              local_70 = puVar37;
            }
          }
        }
      }
      iVar17 = FUN_01ad7260(&local_80);
      if ((int)uVar18 < iVar17) goto LAB_026aa07c;
    }
    else {
      local_88 = (char *)0xc88;
      FUN_0277d4ac(&local_88);
      puVar52 = PTR_DAT_04bb43c0;
      local_70 = (uint *)0x0;
      local_80 = PTR_DAT_04bc0510 + 0x10;
      local_78 = local_88;
      lVar44 = *(long *)PTR_DAT_04bb43c0;
      uVar24 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar52 != 0) {
        lVar44 = *(long *)(lVar44 + 0x57e58);
        uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
        if ((uVar24 < *(uint *)(lVar44 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
          lVar44 = *(long *)PTR_DAT_04bc0428;
          uVar24 = FUN_0277d6c4(&local_88);
          uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
          if (uVar24 < *(uint *)(lVar44 + 0x1d8)) {
            puVar37 = *(uint **)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar24 * 8);
            if (puVar37 != (uint *)0x0) {
              local_70 = puVar37;
            }
          }
        }
      }
      iVar17 = FUN_01ad7260(&local_80);
      if ((int)uVar18 < iVar17) {
LAB_026aa07c:
        iVar17 = FUN_01ad7260(&local_80);
        if ((iVar17 != 0) &&
           (((uVar18 == 0 || (iVar17 = FUN_01ad7260(&local_80), (int)uVar18 < iVar17)) &&
            (puVar30 = (ushort *)FUN_01afd600(&local_80), puVar30 != (ushort *)0x0)))) {
          *puVar30 = *puVar30 & 0xfff8 | (ushort)uVar18 & 7;
        }
        local_88 = local_78;
      }
    }
    uVar21 = FUN_026a6260(param_1,param_2,param_3,param_5,&local_88,uVar21);
  }
  if (uVar20 < 0x24) {
    lVar44 = (ulong)(uVar20 >> 5) * 4;
    *(uint *)((long)&local_41e0 + lVar44) =
         *(uint *)((long)&local_41e0 + lVar44) | 1 << (ulong)(uVar20 & 0x1f);
  }
  if (uVar21 < 0x24) {
    lVar44 = (ulong)(uVar21 >> 5) * 4;
    *(uint *)((long)&local_41e0 + lVar44) =
         *(uint *)((long)&local_41e0 + lVar44) | 1 << (ulong)(uVar21 & 0x1f);
  }
LAB_026a8404:
  puVar52 = PTR_DAT_04bb43c0;
  local_40a0 = 0;
  ppppppplVar39 = local_4090 + -5;
  if (&local_40c0 != ppppppplVar39) {
    puVar38 = (undefined4 *)(param_3 + 0x14);
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    local_4300 = 100;
    ppppppplVar36 = local_4090;
    do {
      uVar18 = *(uint *)(ppppppplVar36 + -5);
      uVar21 = uVar18 - 0x18;
      pbVar25 = local_42f8;
      if (uVar18 < 0x18) {
        uVar21 = uVar18;
        pbVar25 = local_42b0;
      }
      uVar20 = 0x20;
      if (uVar18 < 0x18) {
        uVar20 = 0x18;
      }
      pbVar25 = pbVar25 + (long)(int)uVar21 * 0x2c;
      if (uVar21 < uVar20) {
        local_41f8 = 0;
        local_41fc = 2;
        if (*(char *)(ppppppplVar39 + 3) == '\0') {
          uVar53 = FUN_02694c0c(pbVar25,&local_41f4,param_6);
          if ((uVar53 & 1) == 0) {
            if (DAT_05594b4c == '\x01') {
              uVar21 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              uVar21 = uVar21 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar21 ^ DAT_05582b7c;
              DAT_05582b78 = DAT_05582b7c;
              DAT_05582b7c = uVar21;
            }
            else {
              uVar21 = nn::os::GetSystemTick();
              uVar18 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 1;
              uVar21 = uVar18 ^ uVar18 * 0x800;
              uVar18 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 2;
              uVar18 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 3;
              uVar18 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 4;
              uVar21 = uVar21 >> 8 ^ uVar18 >> 0x13 ^ uVar21 ^ uVar18;
            }
            local_4298 = *(char **)pbVar25;
            local_4290 = (uint *)0x0;
            lVar44 = *(long *)puVar52;
            local_42a0 = puVar1;
            uVar18 = FUN_0277d6c4(&local_4298);
            if (*(long *)puVar52 == 0) {
LAB_026a8a04:
              uVar18 = 0xbc;
            }
            else {
              lVar44 = *(long *)(lVar44 + 0x57e58);
              uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
              if ((*(uint *)(lVar44 + 0x1d8) <= uVar18) ||
                 (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar18 * 8) == 0))
              goto LAB_026a8a04;
              lVar44 = *(long *)PTR_DAT_04bc0428;
              uVar18 = FUN_0277d6c4(pbVar25);
              uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
              if ((*(uint *)(lVar44 + 0x1d8) <= uVar18) ||
                 (puVar37 = *(uint **)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar18 * 8),
                 puVar37 == (uint *)0x0)) goto LAB_026a8a04;
              uVar20 = *puVar37;
              uVar18 = 0;
              if ((uVar20 != 0) && (puVar37 != (uint *)(ulong)uVar20)) {
                puVar42 = (uint *)((long)puVar37 - (long)(ulong)uVar20);
                uVar18 = 0;
                if (*puVar42 != 0) {
                  uVar18 = puVar42[1];
                  if ((uVar18 != 0) && ((ulong)(ushort)puVar42[2] != 0)) {
                    lVar44 = 0xc;
                    if (*(char *)((long)puVar42 + 10) != '\0') {
                      lVar44 = 0x1c;
                    }
                    lVar44 = (long)puVar42 + lVar44 + (ulong)(ushort)puVar42[2] * 8;
                    if (lVar44 != 0) {
                      uVar20 = 0;
                      if ((ulong)uVar18 != 0) {
                        uVar20 = (uint)((ulong)((long)puVar37 - lVar44) / (ulong)uVar18);
                      }
                      if (*puVar42 <= uVar20) {
                        uVar20 = 0xffffffff;
                      }
                      if ((uVar20 < *(uint *)PTR_DAT_04bc00c8) &&
                         (uVar18 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar20 * 2),
                         uVar18 < 0xbd)) goto LAB_026a8a08;
                    }
                  }
                  uVar18 = 0;
                }
              }
            }
LAB_026a8a08:
            local_80 = (char *)CONCAT44(local_80._4_4_,uVar18);
            if (uVar18 < 0x69) {
              if (uVar18 == 0) {
                uVar53 = 0x5dL >> ((ulong)*param_6 & 0x3f);
              }
              else {
                if (uVar18 != 9) {
                  if ((uVar18 != 10) || (2 < (long)(int)*param_6 - 4U)) goto LAB_026a8a78;
                  goto LAB_026a8aa4;
                }
                uVar53 = 0xa8L >> ((ulong)*param_6 & 0x3f);
              }
              if ((uVar53 & 1) == 0) goto LAB_026a8a78;
LAB_026a8aa4:
              iVar17 = 0x14;
            }
            else {
              if (1 < uVar18 - 0x6a) {
                if ((uVar18 != 0x69) || (1 < *param_6)) goto LAB_026a8a78;
                goto LAB_026a8aa4;
              }
              if ((0x86UL >> ((ulong)*param_6 & 0x3f) & 1) != 0) goto LAB_026a8aa4;
LAB_026a8a78:
              iVar17 = 0;
            }
            if ((uint)((ulong)uVar21 * 100 >> 0x20) < (uint)(iVar17 + local_4300)) {
              local_4298 = *(char **)pbVar25;
              local_4290 = (uint *)0x0;
              lVar44 = *(long *)puVar52;
              local_42a0 = PTR_DAT_04bc0510 + 0x10;
              uVar21 = FUN_0277d6c4(&local_4298);
              if (*(long *)puVar52 != 0) {
                lVar44 = *(long *)(lVar44 + 0x57e58);
                uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
                if ((uVar21 < *(uint *)(lVar44 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar21 * 8) != 0)) {
                  lVar44 = *(long *)PTR_DAT_04bc0428;
                  uVar21 = FUN_0277d6c4(pbVar25);
                  uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
                  if (uVar21 < *(uint *)(lVar44 + 0x1d8)) {
                    puVar37 = *(uint **)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar21 * 8);
                    if (puVar37 != (uint *)0x0) {
                      local_4290 = puVar37;
                    }
                  }
                }
              }
              FUN_01aee3b4(&local_42a0);
              if (local_4290 == (uint *)0x0) {
                local_4204 = 0xbc;
              }
              else {
                uVar21 = *local_4290;
                local_4204 = 0;
                if ((uVar21 != 0) && (local_4290 != (uint *)(ulong)uVar21)) {
                  puVar37 = (uint *)((long)local_4290 - (long)(ulong)uVar21);
                  local_4204 = 0;
                  if (*puVar37 != 0) {
                    uVar21 = puVar37[1];
                    if ((uVar21 != 0) && ((ulong)(ushort)puVar37[2] != 0)) {
                      lVar44 = 0xc;
                      if (*(char *)((long)puVar37 + 10) != '\0') {
                        lVar44 = 0x1c;
                      }
                      lVar44 = (long)puVar37 + lVar44 + (ulong)(ushort)puVar37[2] * 8;
                      if (lVar44 != 0) {
                        uVar18 = 0;
                        if ((ulong)uVar21 != 0) {
                          uVar18 = (uint)((ulong)((long)local_4290 - lVar44) / (ulong)uVar21);
                        }
                        if (*puVar37 <= uVar18) {
                          uVar18 = 0xffffffff;
                        }
                        if ((uVar18 < *(uint *)PTR_DAT_04bc00c8) &&
                           (local_4204 = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                (long)(int)uVar18 * 2), local_4204 < 0xbd))
                        goto LAB_026a8c10;
                      }
                    }
                    local_4204 = 0;
                  }
                }
              }
LAB_026a8c10:
              uVar21 = *(uint *)(param_5 + 0x138);
              local_41e8 = 0;
              if ((int)uVar21 < 1) {
                uVar53 = 0;
                uVar47 = 0;
              }
              else {
                uVar53 = 0;
                do {
                  if ((0x23 < uVar53) ||
                     ((*(uint *)((long)&local_41e0 + (uVar53 >> 3 & 0x1ffffffffffffffc)) >>
                       (ulong)((uint)uVar53 & 0x1f) & 1) == 0)) {
                    lVar49 = *(long *)(*(long *)(param_5 + 0x120) + uVar53 * 8);
                    puVar26 = (ulong *)(**(code **)(*(long *)(lVar49 + 0x60) + 0xf0))();
                    uVar47 = *puVar26;
                    local_88 = (char *)(uVar47 & 0xffff);
                    FUN_0277d4ac(&local_88);
                    local_88._0_3_ = CONCAT12((char)(uVar47 >> 0x10),(undefined2)local_88);
                    local_88._0_4_ = CONCAT13((char)(uVar47 >> 0x18),(undefined3)local_88);
                    lVar44 = *(long *)puVar52;
                    local_88 = (char *)CONCAT44((int)(uVar47 >> 0x20),(undefined4)local_88);
                    uVar18 = FUN_0277d6c4(&local_88);
                    if (*(long *)puVar52 != 0) {
                      lVar44 = *(long *)(lVar44 + 0x57e58);
                      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
                      if (((uVar18 < *(uint *)(lVar44 + 0x1d8)) &&
                          (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) &&
                         (plVar54 = (long *)(lVar49 + 0xf8),
                         pbVar29 = (byte *)(**(code **)(*plVar54 + 0xf0))(plVar54), *pbVar29 - 2 < 4
                         )) {
                        local_70 = (uint *)0x0;
                        local_78 = local_88;
                        lVar44 = *(long *)puVar52;
                        local_80 = PTR_DAT_04bc0510 + 0x10;
                        uVar18 = FUN_0277d6c4(&local_78);
                        if (*(long *)puVar52 == 0) {
LAB_026a8e34:
                          local_420c = 0xbc;
                        }
                        else {
                          lVar44 = *(long *)(lVar44 + 0x57e58);
                          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
                          if ((*(uint *)(lVar44 + 0x1d8) <= uVar18) ||
                             (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar18 * 8) == 0))
                          goto LAB_026a8e34;
                          lVar44 = *(long *)PTR_DAT_04bc0428;
                          uVar18 = FUN_0277d6c4(&local_88);
                          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
                          if ((*(uint *)(lVar44 + 0x1d8) <= uVar18) ||
                             (puVar37 = *(uint **)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar18 * 8
                                                  ), puVar37 == (uint *)0x0)) goto LAB_026a8e34;
                          local_70 = puVar37;
                          local_420c = 0;
                          uVar18 = *puVar37;
                          if ((uVar18 != 0) && (puVar37 != (uint *)(ulong)uVar18)) {
                            puVar42 = (uint *)((long)puVar37 - (long)(ulong)uVar18);
                            local_420c = 0;
                            if (*puVar42 != 0) {
                              uVar18 = puVar42[1];
                              if ((uVar18 != 0) && ((ulong)(ushort)puVar42[2] != 0)) {
                                lVar44 = 0xc;
                                if (*(char *)((long)puVar42 + 10) != '\0') {
                                  lVar44 = 0x1c;
                                }
                                lVar44 = (long)puVar42 + lVar44 + (ulong)(ushort)puVar42[2] * 8;
                                if (lVar44 != 0) {
                                  uVar20 = 0;
                                  if ((ulong)uVar18 != 0) {
                                    uVar20 = (uint)((ulong)((long)puVar37 - lVar44) / (ulong)uVar18)
                                    ;
                                  }
                                  if (*puVar42 <= uVar20) {
                                    uVar20 = 0xffffffff;
                                  }
                                  if ((uVar20 < *(uint *)PTR_DAT_04bc00c8) &&
                                     (local_420c = (uint)*(ushort *)
                                                          (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                          (long)(int)uVar20 * 2), local_420c < 0xbd)
                                     ) goto LAB_026a8e38;
                                }
                              }
                              local_420c = 0;
                            }
                          }
                        }
LAB_026a8e38:
                        if (local_420c == local_4204) {
                          if (uVar53 < 0x24) goto LAB_026a8eb0;
                        }
                        else if (local_4204 - 9 < 2) {
                          iVar17 = FUN_0277d6c4(&local_88);
                          if ((uVar53 < 0x24) && (iVar17 == 0x1692)) goto LAB_026a8eb0;
                        }
                        else if ((local_4204 - 0x72 < 2) &&
                                ((iVar17 = FUN_0277d6c4(&local_88), uVar53 < 0x24 &&
                                 (iVar17 == 0x1690)))) {
LAB_026a8eb0:
                          uVar47 = uVar53 >> 3 & 0x1ffffffffffffffc;
                          *(uint *)((long)&local_41e8 + uVar47) =
                               *(uint *)((long)&local_41e8 + uVar47) |
                               1 << (ulong)((uint)uVar53 & 0x1f);
                        }
                      }
                    }
                  }
                  uVar53 = uVar53 + 1;
                } while (uVar21 != uVar53);
                uVar47 = local_41e8 & 0xffffffff;
                uVar53 = local_41e8 >> 0x20;
              }
              uVar24 = (uint)uVar47;
              uVar21 = uVar24 - (uVar24 >> 1 & 0x55555555);
              uVar20 = (uint)uVar53;
              uVar18 = uVar20 - (uVar20 >> 1 & 0x55555555);
              uVar21 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
              uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
              uVar21 = uVar21 + (uVar21 >> 4) & 0xf0f0f0f;
              uVar21 = uVar21 + (uVar21 >> 8);
              uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
              uVar18 = uVar18 + (uVar18 >> 8);
              uVar21 = (uVar21 + (uVar21 >> 0x10) & 0x3f) + (uVar18 + (uVar18 >> 0x10) & 0x3f);
              if (uVar21 != 0) {
                uVar55 = 0;
                local_41f0 = 0;
                local_42a0 = (undefined *)0xffffffffffffffff;
                local_4298 = (char *)0xffffffffffffffff;
                local_4290 = (uint *)0xffffffffffffffff;
                uStack_4288 = 0xffffffffffffffff;
                local_4280 = 0xffffffffffffffff;
                uStack_4278 = 0xffffffffffffffff;
                local_4270 = 0xffffffffffffffff;
                uStack_4268 = 0xffffffffffffffff;
                local_4260 = 0xffffffffffffffff;
                uStack_4258 = 0xffffffffffffffff;
                local_4250 = 0xffffffffffffffff;
                uStack_4248 = 0xffffffffffffffff;
                local_4240 = 0xffffffffffffffff;
                uStack_4238 = 0xffffffffffffffff;
                local_4230 = 0xffffffffffffffff;
                uStack_4228 = 0xffffffffffffffff;
                local_4220 = 0xffffffffffffffff;
                uStack_4218 = 0xffffffffffffffff;
                do {
                  uVar48 = uVar55 >> 5 & 0x7ffffff;
                  uVar18 = 1 << (ulong)((uint)uVar55 & 0x1f);
                  if ((uVar18 & *(uint *)((long)&local_41e8 + uVar48 * 4)) != 0) {
                    if (uVar55 < *(uint *)(param_5 + 0x118)) {
                      lVar44 = *(long *)(*(long *)(param_5 + 0x120) + uVar55 * 8);
                    }
                    else {
                      lVar44 = 0;
                    }
                    pbVar29 = (byte *)(**(code **)(*(long *)(lVar44 + 0x98) + 0xf0))();
                    bVar41 = *pbVar29;
                    pbVar29 = (byte *)(**(code **)(*(long *)(lVar44 + 200) + 0xf0))
                                                ((long *)(lVar44 + 200));
                    bVar9 = *pbVar29;
                    lVar44 = 0;
                    puVar51 = puVar38;
                    do {
                      if ((int)*(char *)((long)puVar51 + 0xb) - 2U < 4) {
                        lVar49 = *(long *)puVar52;
                        uVar19 = FUN_0277d6c4(puVar51);
                        if (*(long *)puVar52 != 0) {
                          lVar49 = *(long *)(lVar49 + 0x57e58);
                          uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar49 + 0x1f8);
                          if ((((uVar19 < *(uint *)(lVar49 + 0x1d8)) &&
                               (*(long *)(*(long *)(lVar49 + 0x1e0) + (long)(int)uVar19 * 8) != 0))
                              && ((int)*(char *)(puVar51 + 2) == (uint)bVar41)) &&
                             ((int)*(char *)((long)puVar51 + 9) == (uint)bVar9)) {
                            lVar49 = uVar48 * 4;
                            *(uint *)((long)&local_41f0 + lVar49) =
                                 *(uint *)((long)&local_41f0 + lVar49) | uVar18;
                            *(int *)((long)&local_42a0 + uVar55 * 4) = (int)lVar44;
                            break;
                          }
                        }
                      }
                      lVar44 = lVar44 + 1;
                      puVar51 = puVar51 + 3;
                    } while (lVar44 != 0x24);
                  }
                  uVar55 = uVar55 + 1;
                } while (uVar55 != 0x24);
                uVar18 = (uint)local_41f0 - ((uint)local_41f0 >> 1 & 0x55555555);
                uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
                uVar19 = local_41f0._4_4_ - (local_41f0._4_4_ >> 1 & 0x55555555);
                uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
                uVar18 = uVar18 + (uVar18 >> 8);
                uVar19 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
                uVar19 = uVar19 + (uVar19 >> 4) & 0xf0f0f0f;
                uVar19 = uVar19 + (uVar19 >> 8);
                if (uVar21 != (uVar19 + (uVar19 >> 0x10) & 0x3f) +
                              (uVar18 + (uVar18 >> 0x10) & 0x3f)) {
                  uVar24 = uVar24 & ((uint)local_41f0 ^ 0xffffffff);
                  uVar47 = (ulong)uVar24;
                  uVar20 = (local_41f0._4_4_ ^ 0xffffffff) & 0xf & uVar20;
                  uVar53 = (ulong)uVar20;
                  uVar21 = uVar24 - (uVar24 >> 1 & 0x55555555);
                  local_41f0 = (CONCAT44(local_41f0._4_4_,~(uint)local_41f0) ^ 0xffffffff00000000) &
                               0xfffffffff;
                  uVar18 = uVar20 - (uVar20 >> 1 & 0x7ffffffd);
                  local_41e8 = CONCAT44(uVar20,uVar24);
                  uVar21 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
                  uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
                  uVar21 = uVar21 + (uVar21 >> 4) & 0xf0f0f0f;
                  uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
                  uVar21 = uVar21 + (uVar21 >> 8);
                  uVar18 = uVar18 + (uVar18 >> 8);
                  uVar21 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + (uVar21 + (uVar21 >> 0x10) & 0x3f);
                }
                if (DAT_05594b4c == '\x01') {
                  uVar18 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                  DAT_05582b70 = DAT_05582b74;
                  DAT_05582b74 = DAT_05582b78;
                  uVar18 = uVar18 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar18 ^ DAT_05582b7c;
                  DAT_05582b78 = DAT_05582b7c;
                  DAT_05582b7c = uVar18;
                }
                else {
                  uVar18 = nn::os::GetSystemTick();
                  uVar20 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 1;
                  uVar18 = uVar20 ^ uVar20 * 0x800;
                  uVar20 = (uVar20 ^ uVar20 >> 0x1e) * 0x6c078965 + 2;
                  uVar20 = (uVar20 ^ uVar20 >> 0x1e) * 0x6c078965 + 3;
                  uVar20 = (uVar20 ^ uVar20 >> 0x1e) * 0x6c078965 + 4;
                  uVar18 = uVar18 >> 8 ^ uVar20 >> 0x13 ^ uVar18 ^ uVar20;
                }
                uVar24 = (uint)uVar47;
                uVar20 = uVar24 - (uVar24 >> 1 & 0x55555555);
                uVar20 = (uVar20 >> 2 & 0x33333333) + (uVar20 & 0x33333333);
                uVar20 = uVar20 + (uVar20 >> 4) & 0xf0f0f0f;
                uVar20 = uVar20 + (uVar20 >> 8);
                uVar20 = uVar20 + (uVar20 >> 0x10) & 0x3f;
                uVar21 = (uint)((ulong)uVar18 * (ulong)uVar21 >> 0x20);
                if (uVar21 < uVar20) {
                  iVar17 = 0;
                  uVar20 = 0;
joined_r0x026a9314:
                  if (uVar24 != 0) {
                    iVar16 = (uVar21 - uVar20) + 2;
                    do {
                      iVar16 = iVar16 + -1;
                      uVar21 = (uint)uVar47;
                      if (iVar16 < 2) {
                        uVar21 = uVar21 - 1 & (uVar21 ^ 0xffffffff);
                        uVar21 = uVar21 - (uVar21 >> 1 & 0x55555555);
                        uVar21 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
                        uVar21 = uVar21 + (uVar21 >> 4) & 0xf0f0f0f;
                        uVar21 = uVar21 + (uVar21 >> 8);
                        uVar21 = uVar21 + (uVar21 >> 0x10) & 0x3f;
                        goto LAB_026a937c;
                      }
                      uVar21 = uVar21 - 1 & uVar21;
                      uVar47 = (ulong)uVar21;
                    } while (uVar21 != 0);
                  }
                  uVar21 = 0xffffffff;
LAB_026a937c:
                  uVar21 = uVar21 + iVar17;
                  if (uVar21 < *(uint *)(param_5 + 0x118)) {
                    lVar44 = *(long *)(*(long *)(param_5 + 0x120) + (long)(int)uVar21 * 8);
                  }
                  else {
                    lVar44 = 0;
                  }
                }
                else {
                  uVar24 = (uint)uVar53;
                  uVar18 = uVar24 - (uVar24 >> 1 & 0x55555555);
                  uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
                  uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
                  uVar18 = uVar18 + (uVar18 >> 8);
                  if (uVar21 < (uVar18 + (uVar18 >> 0x10) & 0x3f) + uVar20) {
                    iVar17 = 0x20;
                    uVar47 = uVar53;
                    goto joined_r0x026a9314;
                  }
                  lVar44 = 0;
                  uVar21 = 0xffffffff;
                }
                puVar28 = (undefined1 *)(**(code **)(*(long *)(lVar44 + 0x98) + 0xf0))();
                uVar31 = *puVar28;
                puVar28 = (undefined1 *)(**(code **)(*(long *)(lVar44 + 200) + 0xf0))();
                uVar8 = *puVar28;
                puVar26 = (ulong *)(**(code **)(*(long *)(lVar44 + 0x60) + 0xf0))();
                uVar53 = *puVar26;
                local_88 = (char *)(uVar53 & 0xffff);
                FUN_0277d4ac(&local_88);
                uVar11 = (undefined1)(uVar53 >> 0x10);
                local_88._0_3_ = CONCAT12(uVar11,(undefined2)local_88);
                uVar12 = (undefined1)(uVar53 >> 0x18);
                local_88._0_4_ = CONCAT13(uVar12,(undefined3)local_88);
                lVar49 = *(long *)puVar52;
                uVar22 = (undefined4)(uVar53 >> 0x20);
                local_88 = (char *)CONCAT44(uVar22,(undefined4)local_88);
                local_80 = PTR_DAT_04bc0510 + 0x10;
                local_78._0_4_ = CONCAT13(uVar12,CONCAT12(uVar11,(undefined2)local_88));
                local_78 = (char *)CONCAT44(uVar22,(undefined4)local_78);
                local_70 = (uint *)0x0;
                uVar18 = FUN_0277d6c4(&local_78);
                if (*(long *)puVar52 != 0) {
                  lVar49 = *(long *)(lVar49 + 0x57e58);
                  uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar49 + 0x1f8);
                  if ((uVar18 < *(uint *)(lVar49 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar49 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                    lVar49 = *(long *)PTR_DAT_04bc0428;
                    uVar18 = FUN_0277d6c4(&local_88);
                    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar49 + 0x1f8);
                    if (uVar18 < *(uint *)(lVar49 + 0x1d8)) {
                      puVar37 = *(uint **)(*(long *)(lVar49 + 0x1e0) + (long)(int)uVar18 * 8);
                      if (puVar37 != (uint *)0x0) {
                        local_70 = puVar37;
                      }
                    }
                  }
                }
                local_41f8 = FUN_01ae98d0(&local_80);
                pbVar29 = (byte *)(**(code **)(*(long *)(lVar44 + 0xf8) + 0xf0))
                                            ((long *)(lVar44 + 0xf8));
                local_41fc = (uint)*pbVar29;
                uVar53 = (ulong)uVar21;
                if (0x23 < uVar21) {
                  uVar53 = 0;
                }
                uVar18 = *(uint *)((long)&local_42a0 + uVar53 * 4);
                if ((int)uVar18 < 0) {
                  uVar18 = FUN_027cd808(param_3);
                }
joined_r0x026a8834:
                if (-1 < (int)uVar18) {
                  lVar44 = *(long *)puVar52;
                  local_42a0 = PTR_DAT_04bc0510 + 0x10;
                  local_4298 = *(char **)pbVar25;
                  local_4290 = (uint *)0x0;
                  uVar20 = FUN_0277d6c4(&local_4298);
                  if (*(long *)puVar52 != 0) {
                    lVar44 = *(long *)(lVar44 + 0x57e58);
                    uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
                    if ((uVar20 < *(uint *)(lVar44 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
                      lVar44 = *(long *)PTR_DAT_04bc0428;
                      uVar20 = FUN_0277d6c4(pbVar25);
                      uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
                      if (uVar20 < *(uint *)(lVar44 + 0x1d8)) {
                        puVar37 = *(uint **)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar20 * 8);
                        if (puVar37 != (uint *)0x0) {
                          local_4290 = puVar37;
                        }
                      }
                    }
                  }
                  uVar53 = FUN_01ae7a70(&local_42a0);
                  if ((uVar53 & 1) != 0) {
                    FUN_01afca60(&local_42a0,1);
                  }
                  FUN_01afade0(&local_42a0,local_41f8);
                  puVar51 = puVar38 + (ulong)uVar18 * 3;
                  if (0x23 < uVar18) {
                    puVar51 = puVar38;
                  }
                  puVar4 = puVar38;
                  if (uVar18 < 0x25) {
                    puVar4 = puVar51;
                  }
                  *(undefined1 *)((long)puVar4 + 9) = uVar8;
                  *puVar4 = (undefined4)local_4298;
                  puVar4[1] = local_4298._4_4_;
                  *(undefined1 *)(puVar4 + 2) = uVar31;
                  *(char *)((long)puVar4 + 10) = (char)local_41f8;
                  *(char *)((long)puVar4 + 0xb) = (char)local_41fc;
                  pbVar25[0x2a] = 1;
                  uVar18 = *(uint *)ppppppplVar39;
                  if (uVar18 < 0x38) {
                    uVar53 = (ulong)(uVar18 >> 3) & 0x1ffffffc;
                    *(uint *)(param_2 + uVar53) =
                         *(uint *)(param_2 + uVar53) | 1 << (ulong)(uVar18 & 0x1f);
                  }
                  if (uVar21 < 0x24) {
                    lVar44 = (ulong)(uVar21 >> 5) * 4;
                    *(uint *)((long)&local_41e0 + lVar44) =
                         *(uint *)((long)&local_41e0 + lVar44) | 1 << (ulong)(uVar21 & 0x1f);
                  }
                  local_4300 = local_4300 + -10;
                }
              }
            }
          }
        }
        else {
          local_4290 = (uint *)0x0;
          local_42a0 = PTR_DAT_04bc0510 + 0x10;
          lVar44 = *(long *)puVar52;
          local_4298 = *(char **)pbVar25;
          local_88 = *(char **)pbVar25;
          uVar21 = FUN_0277d6c4(&local_4298);
          if (*(long *)puVar52 != 0) {
            lVar44 = *(long *)(lVar44 + 0x57e58);
            uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
            if ((uVar21 < *(uint *)(lVar44 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar21 * 8) != 0)) {
              lVar44 = *(long *)PTR_DAT_04bc0428;
              uVar21 = FUN_0277d6c4(&local_88);
              uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
              if ((uVar21 < *(uint *)(lVar44 + 0x1d8)) &&
                 (puVar37 = *(uint **)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar21 * 8),
                 puVar37 != (uint *)0x0)) {
                local_4290 = puVar37;
              }
            }
          }
          if (0 < (int)uVar7) {
            uVar53 = 0;
            do {
              if ((0x23 < uVar53) ||
                 ((*(uint *)((long)local_4068 + ((uVar53 >> 3 & 0x1ffffffffffffffc) - 0x38)) >>
                   (ulong)((uint)uVar53 & 0x1f) & 1) == 0)) {
                lVar49 = *(long *)(*(long *)(param_5 + 0x120) + uVar53 * 8);
                plVar54 = (long *)(lVar49 + 0x60);
                puVar27 = (undefined8 *)(**(code **)(*plVar54 + 0xf0))(plVar54);
                uVar46 = *puVar27;
                local_4200 = 0;
                local_4204 = (uint)(ushort)uVar46;
                FUN_0277d4ac(&local_4204);
                local_4204 = CONCAT13((char)((ulong)uVar46 >> 0x18),
                                      CONCAT12((char)((ulong)uVar46 >> 0x10),(undefined2)local_4204)
                                     );
                lVar44 = *(long *)puVar52;
                local_4200 = (int)((ulong)uVar46 >> 0x20);
                uVar21 = FUN_0277d6c4(&local_4204);
                if (*(long *)puVar52 != 0) {
                  lVar44 = *(long *)(lVar44 + 0x57e58);
                  uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
                  if ((uVar21 < *(uint *)(lVar44 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar21 * 8) != 0)) {
                    puVar27 = (undefined8 *)(**(code **)(*plVar54 + 0xf0))(plVar54);
                    uVar46 = *puVar27;
                    local_4208 = 0;
                    local_420c = (uint)(ushort)uVar46;
                    FUN_0277d4ac(&local_420c);
                    uVar31 = (undefined1)((ulong)uVar46 >> 0x10);
                    uVar8 = (undefined1)((ulong)uVar46 >> 0x18);
                    local_420c = CONCAT13(uVar8,CONCAT12(uVar31,(undefined2)local_420c));
                    lVar44 = *(long *)puVar52;
                    local_4208 = (undefined4)((ulong)uVar46 >> 0x20);
                    local_80 = PTR_DAT_04bc0510 + 0x10;
                    local_78._0_4_ = CONCAT13(uVar8,CONCAT12(uVar31,(undefined2)local_420c));
                    local_78 = (char *)CONCAT44(local_4208,(undefined4)local_78);
                    local_70 = (uint *)0x0;
                    uVar21 = FUN_0277d6c4(&local_78);
                    if (*(long *)puVar52 != 0) {
                      lVar44 = *(long *)(lVar44 + 0x57e58);
                      uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
                      if ((uVar21 < *(uint *)(lVar44 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar21 * 8) != 0)) {
                        lVar44 = *(long *)PTR_DAT_04bc0428;
                        uVar21 = FUN_0277d6c4(&local_420c);
                        uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
                        if (uVar21 < *(uint *)(lVar44 + 0x1d8)) {
                          puVar37 = *(uint **)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar21 * 8);
                          if (puVar37 != (uint *)0x0) {
                            local_70 = puVar37;
                          }
                        }
                      }
                    }
                    uVar47 = FUN_01ae7a70(&local_42a0);
                    if ((uVar47 & 1) != 0) {
                      FUN_01afca60(&local_42a0,1);
                    }
                    uVar22 = FUN_01ae98d0(&local_80);
                    FUN_01afade0(&local_42a0,uVar22);
                    local_88 = local_4298;
                    uVar47 = FUN_0277d7b4(&local_4204,&local_88);
                    if ((uVar47 & 1) != 0) {
                      if ((local_4204._3_1_ == local_88._3_1_) && (local_4200 == local_88._4_4_)) {
                        if (uVar53 < 0x24) {
                          uVar47 = uVar53 >> 3 & 0x1ffffffffffffffc;
                          *(uint *)((long)local_4068 + (uVar47 - 0x38)) =
                               *(uint *)((long)local_4068 + (uVar47 - 0x38)) |
                               1 << (ulong)((uint)uVar53 & 0x1f);
                        }
                        puVar28 = (undefined1 *)(**(code **)(*(long *)(lVar49 + 0x98) + 0xf0))();
                        uVar31 = *puVar28;
                        puVar28 = (undefined1 *)(**(code **)(*(long *)(lVar49 + 200) + 0xf0))();
                        uVar8 = *puVar28;
                        local_41f8 = FUN_01ae98d0(&local_80);
                        pbVar29 = (byte *)(**(code **)(*(long *)(lVar49 + 0xf8) + 0xf0))
                                                    ((long *)(lVar49 + 0xf8));
                        local_41fc = (uint)*pbVar29;
                        uVar18 = FUN_027cd808(param_3);
                        uVar21 = 0xffffffff;
                        goto joined_r0x026a8834;
                      }
                    }
                  }
                }
              }
              uVar53 = uVar53 + 1;
            } while (uVar33 != uVar53);
          }
        }
      }
      ppppppplVar36 = (long *******)ppppppplVar36[1];
      ppppppplVar39 = ppppppplVar36 + -5;
    } while (&local_40c0 != ppppppplVar39);
  }
  do {
    ppppppplVar39 = (long *******)*ppppppplVar43;
    ppppppplVar43 = ppppppplVar39 + 1;
  } while ((long ********)ppppppplVar39 != &local_4098);
  return;
}

