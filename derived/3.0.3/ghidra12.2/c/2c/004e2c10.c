
long FUN_004e2c10(long param_1,byte *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  short *psVar12;
  long lVar13;
  byte *local_4e0 [14];
  ulong local_470;
  long local_3d8;
  long local_2b0;
  long local_2a8;
  undefined8 local_2a0;
  byte *local_298 [13];
  undefined8 local_230;
  ulong local_228;
  undefined8 local_218;
  undefined8 *local_210;
  undefined8 local_1c8;
  
  local_4e0[0] = (byte *)0x0;
  local_298[0] = param_2;
  plVar3 = (long *)FUN_004706d0(param_1 + 0x398,local_298,local_4e0);
  if (*plVar3 != 0) {
    return *plVar3;
  }
  FUN_00451ea0(local_298);
  FUN_004522c0(local_298,param_2,0xffffffff);
  FUN_00452230(local_298,param_1);
  local_228 = local_228 | 0x800;
  local_1c8 = 0;
  if ((*param_2 & 1) != 0) {
    uVar4 = FUN_00428440(param_2);
    if ((uVar4 & 0x1f) == 6) {
      uVar5 = FUN_00428370(param_2);
      puVar6 = (undefined8 *)
               (**(code **)(*(long *)(param_1 + 0x340) + 0x10))(param_1 + 0x340,0x20,0);
      FUN_0043dcf0();
      puVar11 = &DAT_04868f48;
    }
    else {
      uVar4 = FUN_00428440(param_2);
      if ((uVar4 & 0x1f) != 8) goto LAB_004e2d80;
      uVar5 = FUN_00428370(param_2);
      puVar6 = (undefined8 *)
               (**(code **)(*(long *)(param_1 + 0x340) + 0x10))(param_1 + 0x340,0x20,0);
      FUN_0043dcf0();
      puVar11 = &DAT_04868fe0;
    }
    *puVar6 = puVar11 + 0x10;
    puVar6[2] = uVar5;
    puVar6[3] = param_1;
    local_228 = local_228 | 4;
    local_210 = puVar6;
    lVar7 = FUN_00426d90(param_2);
    if (lVar7 != 0) {
      uVar5 = FUN_00426d90(param_2);
      local_218 = FUN_004e2c10(param_1,uVar5);
      local_228 = local_228 | 2;
    }
  }
LAB_004e2d80:
  if (*(long *)(param_2 + 8) != 0) {
    local_230 = FUN_004e2c10(param_1);
  }
  lVar7 = param_1 + 0x340;
  lVar8 = FUN_004535c0(local_298,lVar7);
  puVar11 = PTR_DAT_048607b8;
  local_4e0[0] = param_2;
  local_2a8 = lVar8;
  FUN_00470440(param_1 + 0x398,PTR_DAT_048607b8,local_4e0,&local_2a8);
  uVar4 = FUN_00428440(param_2);
  if (((((uVar4 & 0x1f) == 7) && ((char)param_2[2] < '\0')) &&
      (puVar6 = (undefined8 *)FUN_00426db0(param_2,0x800000), puVar6 != (undefined8 *)0x0)) &&
     (psVar12 = (short *)*puVar6, psVar12 != (short *)0x0)) {
    local_2a0 = 0x8000000000000000;
    local_2a8 = 0;
    if ((int)psVar12[1] + (int)*psVar12 < 1) {
      uVar4 = 0;
    }
    else {
      lVar13 = 0;
      do {
        local_2b0 = *(long *)(psVar12 + lVar13 * 4 + 4);
        lVar9 = FUN_00427b40(&local_2b0);
        if ((lVar9 != 0) && (uVar4 = FUN_004290b0(&local_2b0), (uVar4 & 1) == 0)) {
          uVar5 = FUN_004e2c10(param_1,*(undefined8 *)(local_2b0 + 8));
          uVar10 = FUN_00427b40(&local_2b0);
          uVar10 = FUN_0043a360(uVar10,lVar7);
          FUN_00451ea0(local_4e0);
          FUN_00452260(local_4e0,uVar5);
          uVar2 = FUN_00429050(&local_2b0);
          FUN_00453b70(local_4e0,uVar10,uVar2,0);
          local_470 = local_470 | 0x40000;
          local_3d8 = lVar8;
          uVar5 = FUN_004535c0(local_4e0,lVar7);
          if ((uint)local_2a0 == (local_2a0._4_4_ & 0x3fffffff)) {
            FUN_00426990(puVar11,&local_2a8,8);
          }
          *(undefined8 *)(local_2a8 + (long)(int)local_2a0 * 8) = uVar5;
          local_2a0 = CONCAT44(local_2a0._4_4_,(int)local_2a0 + 1);
          FUN_00451fa0(local_4e0);
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < (long)psVar12[1] + (long)*psVar12);
      uVar4 = local_2a0 & 0xffffffff;
    }
    uVar5 = FUN_00428650(local_2a8,uVar4,0,lVar7);
    puVar6 = (undefined8 *)FUN_00426d40(lVar8,0x800000);
    uVar4 = local_2a0;
    *puVar6 = uVar5;
    uVar1 = local_2a0._4_4_;
    local_2a0 = (ulong)local_2a0._4_4_ << 0x20;
    if ((-1 < (long)uVar4) && (local_2a8 != 0)) {
      FUN_00421f90(puVar11,local_2a8,8,uVar1 & 0x3fffffff);
    }
  }
  FUN_00451fa0(local_298);
  return lVar8;
}

