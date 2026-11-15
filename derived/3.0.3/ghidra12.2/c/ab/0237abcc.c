
/* WARNING: Removing unreachable block (ram,0x0237b2f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0237abcc(long param_1)

{
  ushort uVar1;
  short sVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  byte local_f7;
  undefined6 uStack_f4;
  undefined2 local_ee;
  undefined6 uStack_ec;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined1 local_a4;
  undefined5 local_a0;
  undefined3 uStack_9b;
  undefined5 uStack_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  undefined4 local_54;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    FUN_02332b04(param_1,1,0);
    if (*(char *)(param_1 + 0xdaa) == '\0') {
      puVar12 = *(undefined8 **)(param_1 + 0x60);
      if (puVar12 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          puVar12 = &DAT_05240280;
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar12 = &DAT_05240280;
        }
      }
      if (puVar12[0x227] == 0) {
        local_78 = (ulong)local_78._4_4_ << 0x20;
      }
      else {
        local_78 = CONCAT44(local_78._4_4_,*(uint *)(puVar12 + 0x2d3) >> 1) & 0xffffffff00000001;
        local_110 = (undefined *)CONCAT44(local_110._4_4_,0xb);
        uVar8 = FUN_03850890(puVar12[0x227],0xb,0,*(uint *)(puVar12 + 0x2d3) >> 1 & 1);
        if ((uVar8 & 1) != 0) {
          FUN_0232d618(param_1);
        }
      }
    }
    local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 0x230));
    sVar2 = *(short *)PTR_DAT_04bb6298;
    if (sVar2 == -1) {
LAB_0237ac7c:
      FUN_016f742c(&local_110,&local_78,0);
      uVar4 = (uint)local_110;
    }
    else {
      local_110 = (undefined *)CONCAT44(local_110._4_4_,1);
      puVar10 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar10 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar10 >> 1 & 1) == 0) goto LAB_0237ac7c;
      uVar4 = 0;
    }
    uVar9 = uVar4 >> 0x10;
    *(short *)(param_1 + 0x1900) = (short)(uVar4 >> 0x10);
  }
  else {
    uVar9 = (uint)*(ushort *)(param_1 + 0x1900);
  }
  local_110 = (undefined *)CONCAT44(local_110._4_4_,uVar9 << 0x10);
  FUN_02328b10(param_1,&local_110,1);
  local_110 = (undefined *)
              CONCAT44((float)(int)*(short *)(param_1 + 0x1906) * 0.25,
                       (float)*(int *)(param_1 + 0x1902) * 0.001);
  local_108 = CONCAT44(local_108._4_4_,(float)*(int *)(param_1 + 0x1908) * 0.001);
  lVar6 = FUN_0251e98c(1);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x1380) + 0xf0))(lVar6 + 0x1380);
  puVar12 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar12 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*puVar7,0x41200000,0x3e4ccccc,puVar12 + 0x4f,&local_110);
  puVar12 = *(undefined8 **)(param_1 + 0x60);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  if (puVar12 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar12 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar12 = &DAT_05240280;
    }
  }
  local_84 = 0;
  local_110 = (undefined *)CONCAT44(local_110._4_4_,0x4e);
  if ((puVar12[0x227] != 0) &&
     (uVar8 = FUN_03850890(puVar12[0x227],0x4e,&local_78,0), (uVar8 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0xda8) = 1;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    local_84 = 0;
    local_110 = (undefined *)CONCAT44(local_110._4_4_,0x32);
    if ((puVar12[0x227] != 0) && (uVar8 = FUN_03850890(puVar12[0x227],0x32,0,0), (uVar8 & 1) != 0))
    {
      *(undefined1 *)(param_1 + 0x1914) = 1;
    }
  }
  lVar6 = FUN_0251e98c(1);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x2ce0) + 0xf0))(lVar6 + 0x2ce0);
  uVar14 = *puVar7;
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x2d10) + 0xf0))(lVar6 + 0x2d10);
  uVar15 = *puVar7;
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x2d40) + 0xf0))(lVar6 + 0x2d40);
  local_7c = *puVar7;
  local_90 = 0xfffe;
  local_84 = uVar14;
  uStack_80 = uVar15;
  FUN_0277d4ac(&local_90);
  puVar3 = PTR_DAT_04bb43c0;
  local_90 = *(undefined8 *)(param_1 + 0x190c);
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_90);
  lVar6 = *(long *)puVar3;
  if (lVar6 == 0) goto LAB_0237b148;
  lVar13 = *(long *)(lVar13 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
  if ((*(uint *)(lVar13 + 0x1d8) <= uVar4) ||
     (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0237b148;
  local_100 = (uint *)0x0;
  local_110 = PTR_DAT_04bc0510 + 0x10;
  local_108 = local_90;
  uVar4 = FUN_0277d6c4(&local_108);
  if (*(long *)puVar3 == 0) {
LAB_0237b0d8:
    local_58 = 0xbc;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((*(uint *)(lVar6 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0237b0d8;
    lVar6 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(&local_90);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((*(uint *)(lVar6 + 0x1d8) <= uVar4) ||
       (puVar10 = *(uint **)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8),
       puVar10 == (uint *)0x0)) goto LAB_0237b0d8;
    uVar4 = *puVar10;
    local_100 = puVar10;
    if ((uVar4 != 0) && (puVar10 != (uint *)(ulong)uVar4)) {
      puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
      if ((*puVar11 != 0) && ((uVar4 = puVar11[1], uVar4 != 0 && ((ulong)(ushort)puVar11[2] != 0))))
      {
        lVar6 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar11 + lVar6 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar6 != 0) {
          uVar9 = 0;
          if ((ulong)uVar4 != 0) {
            uVar9 = (uint)((ulong)((long)puVar10 - lVar6) / (ulong)uVar4);
          }
          if (*puVar11 <= uVar9) {
            uVar9 = 0xffffffff;
          }
          if (((uVar9 < *(uint *)PTR_DAT_04bc00c8) &&
              (uVar1 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar9 * 2),
              uVar1 < 0xbd)) && (uVar1 == 2)) {
            lVar6 = FUN_0251e98c(1);
            puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x2da0) + 0xf0))(lVar6 + 0x2da0);
            uVar14 = *puVar7;
            puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x2dd0) + 0xf0))(lVar6 + 0x2dd0);
            uVar15 = *puVar7;
            puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x2e00) + 0xf0))(lVar6 + 0x2e00);
            local_7c = *puVar7;
            local_84 = uVar14;
            uStack_80 = uVar15;
          }
        }
      }
    }
    local_58 = 0;
    uVar4 = *puVar10;
    if ((uVar4 != 0) && (puVar10 != (uint *)(ulong)uVar4)) {
      puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
      local_58 = 0;
      if (*puVar11 != 0) {
        uVar4 = puVar11[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar6 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar11 + lVar6 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar6 != 0) {
            uVar9 = 0;
            if ((ulong)uVar4 != 0) {
              uVar9 = (uint)((ulong)((long)puVar10 - lVar6) / (ulong)uVar4);
            }
            if (*puVar11 <= uVar9) {
              uVar9 = 0xffffffff;
            }
            if ((uVar9 < *(uint *)PTR_DAT_04bc00c8) &&
               (local_58 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar9 * 2)
               , local_58 < 0xbd)) goto LAB_0237b0e4;
          }
        }
        local_58 = 0;
      }
    }
  }
LAB_0237b0e4:
  local_54 = 3;
  if (local_58 == 3) {
    lVar6 = FUN_0251e98c(1);
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0xf00) + 0xf0))(lVar6 + 0xf00);
    uVar14 = *puVar7;
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0xf30) + 0xf0))(lVar6 + 0xf30);
    uVar15 = *puVar7;
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0xf60) + 0xf0))(lVar6 + 0xf60);
    local_7c = *puVar7;
    local_84 = uVar14;
    uStack_80 = uVar15;
  }
LAB_0237b148:
  if (10 < *(uint *)(param_1 + 0x1c04)) {
    lVar6 = FUN_0251e98c(1);
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x2d70) + 0xf0))(lVar6 + 0x2d70);
    FUN_03eb4b60(*puVar7,0x41200000,0x3e4ccccc,param_1 + 0xdbc,&local_84);
  }
  if (*(char *)(param_1 + 0xda8) != '\0') {
    uStack_ec = 0;
    local_dc = 0x3f80000000000000;
    uStack_f4 = 0;
    local_ee = 0;
    local_a4 = 0;
    local_e4 = 0x3f800000;
    local_a0 = 0;
    uStack_9b = 0;
    uStack_98 = 0;
    uStack_cc = _UNK_04102208;
    local_d4 = _DAT_04102200;
    uStack_bc = _UNK_04102888;
    local_c4 = _DAT_04102880;
    local_90 = 0xfffe;
    uStack_ac = _UNK_041023d8;
    local_b4 = _DAT_041023d0;
    FUN_0277d4ac(&local_90);
    local_110 = *(undefined **)(param_1 + 0x190c);
    local_100 = (uint *)CONCAT44(0x3f800000,*(undefined4 *)(param_1 + 0xdc4));
    local_f7 = *(byte *)(param_1 + 0x1ee8);
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    local_108 = *(undefined8 *)(param_1 + 0xdbc);
    if (7 < local_f7) {
      local_f7 = 0xff;
    }
    local_f8 = 1;
    local_e0 = 1;
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    FUN_0170d420(puVar12,&local_110);
  }
  return;
}

