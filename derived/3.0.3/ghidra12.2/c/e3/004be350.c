
long FUN_004be350(long param_1,byte *param_2)

{
  long *plVar1;
  byte bVar2;
  byte *pbVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  byte *pbVar15;
  short *psVar16;
  long lVar17;
  undefined1 auStack_4e8 [112];
  ulong local_478;
  undefined8 local_410;
  long local_3e0;
  long local_2b8;
  long local_2b0;
  undefined8 local_2a8;
  undefined1 auStack_2a0 [96];
  uint local_240;
  undefined8 local_238;
  ulong local_230;
  undefined8 local_220;
  undefined8 *local_218;
  undefined8 local_1d0;
  ulong local_180;
  byte *local_70 [2];
  
  plVar1 = (long *)(param_1 + 0x428);
  local_70[0] = param_2;
  lVar7 = FUN_004be7d0(plVar1,local_70);
  if ((lVar7 != 0) &&
     (lVar7 = *(long *)(*plVar1 + (long)*(int *)(lVar7 + 4) * 0x10 + 8), lVar7 != 0)) {
    return lVar7;
  }
  FUN_00451ea0(auStack_2a0);
  FUN_004522c0(auStack_2a0,local_70[0],0xffffffff);
  pbVar3 = local_70[0];
  local_180 = (ulong)local_240 | 0x1000;
  local_230 = local_230 | 0x200000;
  local_240 = (uint)local_180;
  uVar8 = FUN_00428440(local_70[0]);
  pbVar15 = local_70[0];
  if (((pbVar3 == (byte *)0x0) || ((uVar8 & 0x1f) != 7)) &&
     ((uVar8 = FUN_00428440(local_70[0]), pbVar15 == (byte *)0x0 || ((uVar8 & 0x1f) != 6)))) {
    FUN_00452230(auStack_2a0,0);
    bVar2 = *local_70[0];
    pbVar3 = local_70[0];
  }
  else {
    FUN_00452230(auStack_2a0,param_1);
    local_230 = local_230 | 0x800;
    local_1d0 = 0;
    bVar2 = *local_70[0];
    pbVar3 = local_70[0];
  }
  local_70[0] = pbVar3;
  if ((bVar2 & 1) != 0) {
    uVar8 = FUN_00428440(pbVar3);
    pbVar15 = local_70[0];
    if ((pbVar3 == (byte *)0x0) || ((uVar8 & 0x1f) != 6)) {
      uVar8 = FUN_00428440(local_70[0]);
      if ((pbVar15 == (byte *)0x0) || ((uVar8 & 0x1f) != 8)) goto LAB_004be540;
      uVar9 = FUN_00428370(pbVar15);
      puVar10 = (undefined8 *)
                (**(code **)(*(long *)(param_1 + 0x140) + 0x10))(param_1 + 0x140,0x20,0);
      FUN_0043dcf0();
      ppuVar14 = &PTR_FUN_048684b8;
    }
    else {
      uVar9 = FUN_00428370(pbVar3);
      puVar10 = (undefined8 *)
                (**(code **)(*(long *)(param_1 + 0x140) + 0x10))(param_1 + 0x140,0x20,0);
      FUN_0043dcf0();
      ppuVar14 = &PTR_FUN_04868420;
      pbVar15 = pbVar3;
    }
    *puVar10 = ppuVar14;
    puVar10[2] = uVar9;
    puVar10[3] = param_1;
    local_230 = local_230 | 4;
    local_218 = puVar10;
    lVar7 = FUN_00426d90(pbVar15);
    if (lVar7 != 0) {
      uVar9 = FUN_00426d90(pbVar15);
      local_220 = FUN_004be350(param_1,uVar9);
      local_230 = local_230 | 2;
    }
  }
LAB_004be540:
  if (*(long *)(local_70[0] + 8) != 0) {
    local_238 = FUN_004be350(param_1);
  }
  lVar7 = param_1 + 0x140;
  lVar11 = FUN_004535c0(auStack_2a0,lVar7);
  uVar5 = FUN_004a1420(plVar1,local_70);
  if (*(uint *)(param_1 + 0x430) == uVar5) {
    if ((*(uint *)(param_1 + 0x434) & 0x3fffffff) == uVar5) {
      FUN_00426990(PTR_DAT_048607b8,plVar1,0x10);
      uVar5 = *(uint *)(param_1 + 0x430);
    }
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x428) + (long)(int)uVar5 * 0x10);
    *puVar10 = local_70[0];
    puVar10[1] = lVar11;
    *(uint *)(param_1 + 0x430) = uVar5 + 1;
    bVar2 = local_70[0][2];
  }
  else {
    *(long *)(*plVar1 + ((long)((ulong)uVar5 << 0x20) >> 0x1c) + 8) = lVar11;
    bVar2 = local_70[0][2];
  }
  if ((((char)bVar2 < '\0') &&
      (puVar10 = (undefined8 *)FUN_00426db0(local_70[0],0x800000), puVar4 = PTR_DAT_048607b8,
      puVar10 != (undefined8 *)0x0)) && (psVar16 = (short *)*puVar10, psVar16 != (short *)0x0)) {
    local_2a8 = 0x8000000000000000;
    local_2b0 = 0;
    if ((int)psVar16[1] + (int)*psVar16 < 1) {
      uVar8 = 0;
    }
    else {
      lVar17 = 0;
      do {
        local_2b8 = *(long *)(psVar16 + lVar17 * 4 + 4);
        lVar12 = FUN_00427b40(&local_2b8);
        if ((lVar12 != 0) && (uVar8 = FUN_004290b0(&local_2b8), (uVar8 & 1) == 0)) {
          uVar9 = FUN_004be350(param_1,*(undefined8 *)(local_2b8 + 8));
          uVar13 = FUN_00427b40(&local_2b8);
          uVar13 = FUN_0043a360(uVar13,lVar7);
          FUN_00451ea0(auStack_4e8);
          FUN_00452260(auStack_4e8,uVar9);
          uVar6 = FUN_00429050(&local_2b8);
          FUN_00453b70(auStack_4e8,uVar13,uVar6,0);
          local_478 = local_478 | 0x41000;
          local_410 = 0;
          local_3e0 = lVar11;
          uVar9 = FUN_004535c0(auStack_4e8,lVar7);
          if ((uint)local_2a8 == (local_2a8._4_4_ & 0x3fffffff)) {
            FUN_00426990(puVar4,&local_2b0,8);
          }
          *(undefined8 *)(local_2b0 + (long)(int)local_2a8 * 8) = uVar9;
          local_2a8 = CONCAT44(local_2a8._4_4_,(int)local_2a8 + 1);
          FUN_00451fa0(auStack_4e8);
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 < (long)psVar16[1] + (long)*psVar16);
      uVar8 = local_2a8 & 0xffffffff;
    }
    uVar9 = FUN_00428650(local_2b0,uVar8,0,lVar7);
    puVar10 = (undefined8 *)FUN_00426d40(lVar11,0x800000);
    uVar8 = local_2a8;
    *puVar10 = uVar9;
    uVar5 = local_2a8._4_4_;
    local_2a8 = (ulong)local_2a8._4_4_ << 0x20;
    if ((-1 < (long)uVar8) && (local_2b0 != 0)) {
      FUN_00421f90(puVar4,local_2b0,8,uVar5 & 0x3fffffff);
    }
  }
  FUN_00451fa0(auStack_2a0);
  return lVar11;
}

