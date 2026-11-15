
/* WARNING: Removing unreachable block (ram,0x023fdd68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023fd890(long param_1)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 local_128;
  undefined2 local_120;
  undefined1 local_11e;
  undefined1 local_11d;
  undefined4 local_11c;
  long local_118;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_fc;
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
  undefined4 uStack_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    uVar8 = (uint)*(ushort *)(param_1 + 0x1900);
    goto LAB_023fd968;
  }
  FUN_02332b04(param_1,1,0);
  if (*(char *)(param_1 + 0xbfa) == '\0') {
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        puVar9 = &DAT_05240280;
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar9 = &DAT_05240280;
      }
    }
    if (puVar9[0x227] == 0) {
      local_90 = (ulong)local_90._4_4_ << 0x20;
    }
    else {
      local_90 = CONCAT44(local_90._4_4_,*(uint *)(puVar9 + 0x2d3) >> 1) & 0xffffffff00000001;
      local_110 = 1.54143e-44;
      uVar7 = FUN_03850890(puVar9[0x227],0xb,0,*(uint *)(puVar9 + 0x2d3) >> 1 & 1);
      if ((uVar7 & 1) != 0) {
        FUN_0232d618(param_1);
      }
    }
  }
  local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(param_1 + 0x230));
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 == -1) {
LAB_023fd94c:
    FUN_016f742c(&local_110,&local_90,0);
  }
  else {
    local_110 = 1.4013e-45;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 1 & 1) == 0) goto LAB_023fd94c;
    local_110 = 0.0;
  }
  uVar8 = (uint)local_110 >> 0x10;
  *(short *)(param_1 + 0x1900) = (short)((uint)local_110 >> 0x10);
LAB_023fd968:
  local_110 = (float)(uVar8 << 0x10);
  FUN_02328b10(param_1,&local_110,1);
  local_10c = (float)(int)*(short *)(param_1 + 0x1906) * 0.25;
  local_110 = (float)*(int *)(param_1 + 0x1902) * 0.001;
  local_108 = (float)*(int *)(param_1 + 0x1908) * 0.001;
  lVar5 = FUN_0251e98c(1);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x1380) + 0xf0))(lVar5 + 0x1380);
  puVar9 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*puVar6,0x41200000,0x3e4ccccc,puVar9 + 0x4f,&local_110);
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  local_128 = (undefined *)((ulong)local_128._4_4_ << 0x20);
  local_110 = 1.09301e-43;
  if ((puVar9[0x227] != 0) &&
     (uVar7 = FUN_03850890(puVar9[0x227],0x4e,&local_90,0), (uVar7 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0xbf8) = 1;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        puVar9 = &DAT_05240280;
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar9 = &DAT_05240280;
      }
    }
    local_128 = (undefined *)((ulong)local_128 & 0xffffffff00000000);
    local_110 = 7.00649e-44;
    if ((puVar9[0x227] != 0) && (uVar7 = FUN_03850890(puVar9[0x227],0x32,0,0), (uVar7 & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x1914) = 1;
    }
  }
  lVar5 = FUN_0251e98c(1);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0xf00) + 0xf0))(lVar5 + 0xf00);
  uVar13 = *puVar6;
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0xf30) + 0xf0))(lVar5 + 0xf30);
  uVar14 = *puVar6;
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0xf60) + 0xf0))(lVar5 + 0xf60);
  if (*(char *)(param_1 + 0xbf8) != '\0') {
    uVar15 = *puVar6;
    local_dc = 0x3f80000000000000;
    uStack_ec = 0;
    uStack_f4 = 0;
    local_ee = 0;
    local_a4 = 0;
    local_e4 = 0x3f800000;
    local_a0 = 0;
    uStack_9b = 0;
    uStack_98 = 0;
    local_94 = 0;
    uStack_cc = _UNK_04102208;
    local_d4 = _DAT_04102200;
    uStack_bc = _UNK_04102888;
    local_c4 = _DAT_04102880;
    local_128 = (undefined *)0xfffe;
    uStack_ac = _UNK_041023d8;
    local_b4 = _DAT_041023d0;
    FUN_0277d4ac(&local_128);
    puVar3 = PTR_DAT_04bb43c0;
    local_f7 = *(byte *)(param_1 + 0x1ee8);
    uVar10 = *(undefined8 *)(param_1 + 0x190c);
    local_fc = 0x3f800000;
    if (7 < local_f7) {
      local_f7 = 0xff;
    }
    local_110 = (float)uVar10;
    uVar11 = (undefined4)((ulong)uVar10 >> 0x20);
    lVar12 = *(long *)PTR_DAT_04bb43c0;
    local_f8 = 1;
    local_e0 = 1;
    local_10c = (float)uVar11;
    local_108 = (float)uVar13;
    uStack_104 = uVar14;
    local_100 = uVar15;
    uVar8 = FUN_0277d6c4(&local_110);
    lVar5 = *(long *)puVar3;
    if (lVar5 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        local_128 = PTR_DAT_04bc0510 + 0x10;
        local_118 = 0;
        local_120 = (short)uVar10;
        local_11e = (char)((ulong)uVar10 >> 0x10);
        local_11d = (char)((ulong)uVar10 >> 0x18);
        local_11c = uVar11;
        uVar8 = FUN_0277d6c4(&local_120);
        if (*(long *)puVar3 != 0) {
          lVar5 = *(long *)(lVar5 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar5 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
            lVar5 = *(long *)PTR_DAT_04bc0428;
            uVar8 = FUN_0277d6c4(&local_110);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
            if ((uVar8 < *(uint *)(lVar5 + 0x1d8)) &&
               (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar8 * 8), lVar5 != 0)) {
              local_118 = lVar5;
            }
          }
        }
        uVar7 = FUN_01ad673c(&local_128);
        if ((uVar7 & 1) != 0) {
          local_94 = 1;
        }
      }
    }
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        puVar9 = &DAT_05240280;
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar9 = &DAT_05240280;
      }
    }
    FUN_0170d420(puVar9,&local_110);
  }
  return;
}

