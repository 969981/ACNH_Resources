
undefined8
FUN_01fbcee8(long param_1,long param_2,undefined4 *param_3,long param_4,undefined4 param_5)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined **local_e0;
  long lStack_d8;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [4];
  undefined *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  long local_90;
  undefined *local_88;
  undefined *puStack_80;
  int local_78;
  int iStack_74;
  undefined *local_70;
  int local_68;
  int iStack_64;
  undefined8 local_60;
  float local_58;
  undefined4 local_54;
  
  local_54 = param_5;
  uVar5 = FUN_0277e294(param_3);
  if ((uVar5 & 1) != 0) {
    *(undefined2 *)(param_2 + 0x58) = *(undefined2 *)param_3;
    *(undefined1 *)(param_2 + 0x5a) = *(undefined1 *)((long)param_3 + 2);
    *(undefined1 *)(param_2 + 0x5b) = *(undefined1 *)((long)param_3 + 3);
    *(undefined4 *)(param_2 + 0x5c) = param_3[1];
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_4 + 0x10);
    *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_4 + 0x14);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_4 + 0x20);
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_4 + 0x24);
    if ((*(int *)(param_1 + 0xaf88) != 1) || (*(int *)(*(long *)(param_1 + 8) + 0x750) != 0)) {
      return 1;
    }
    local_58 = 0.0;
    piVar1 = (int *)(param_1 + 0x11ff8);
    local_60 = 0;
    local_88 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_80 = PTR_DAT_04bb2010 + 0x10;
    local_70 = puStack_80;
    if (*piVar1 - 2U < 4) {
      local_60 = *(undefined8 *)(param_1 + 0x11ffc);
      local_58 = *(float *)(param_1 + 0x12004);
      fVar10 = *(float *)(param_1 + 0x11ffc) + -2.5;
      lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x68);
      local_78 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
      iStack_74 = (int)((float)(int)(local_58 + -2.5) / 5.0) - (uint)(local_58 + -2.5 < 0.0);
      local_68 = local_78 + 1;
      iStack_64 = iStack_74 + 1;
      fVar10 = *(float *)(lVar6 + 0x278) -
               ((float)local_78 * 5.0 + (float)local_68 * 5.0 + 5.0) * 0.5;
      fVar9 = *(float *)(lVar6 + 0x280) -
              ((float)iStack_74 * 5.0 + (float)iStack_64 * 5.0 + 5.0) * 0.5;
      uVar8 = 0;
      if (225.0 <= *(float *)(lVar6 + 0x27c) * *(float *)(lVar6 + 0x27c) + fVar10 * fVar10 +
                   fVar9 * fVar9) {
        uVar8 = 0x3f800000;
      }
    }
    else {
      local_78 = *(int *)(param_4 + 0x10);
      iStack_74 = *(int *)(param_4 + 0x14);
      local_68 = *(int *)(param_4 + 0x20);
      iStack_64 = *(int *)(param_4 + 0x24);
      FUN_021fd6f0(&local_60,0,param_3,&local_88,0);
      uVar8 = FUN_02080828(param_1 + 0xafb8,&local_60,param_3);
    }
    puVar2 = PTR_DAT_04bb43c0;
    local_90 = 0;
    local_a0 = PTR_DAT_04bc0510 + 0x10;
    local_98 = *param_3;
    uStack_94 = param_3[1];
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_98);
    if (*(long *)puVar2 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar6 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_3);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if (uVar3 < *(uint *)(lVar6 + 0x1d8)) {
          lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8);
          if (lVar6 != 0) {
            local_90 = lVar6;
          }
        }
      }
    }
    uVar7 = *(undefined8 *)(param_1 + 8);
    local_a4[0] = 0;
    uVar4 = FUN_01ae98d0(&local_a0);
    local_e0 = (undefined **)CONCAT44(local_e0._4_4_,uVar4);
    uVar5 = FUN_02200640(uVar8,local_a4,param_1 + 0x188,uVar7,&local_88,&local_e0,&local_54,0);
    if ((uVar5 & 1) != 0) {
      *(undefined1 *)(param_2 + 0x54) = local_a4[0];
      if (*piVar1 - 2U < 4) {
        *(int *)(param_2 + 0x30) = local_78;
        *(int *)(param_2 + 0x34) = iStack_74;
        *(int *)(param_2 + 0x40) = local_68;
        *(int *)(param_2 + 0x44) = iStack_64;
      }
      local_b0 = 0;
      local_a8 = 0;
      local_bc = 0;
      local_b4 = 0;
      uVar7 = FUN_01ae7550(&local_a0);
      if ((int)uVar7 == 0xd) {
        local_e0 = &PTR_LAB_04a69c78;
        lStack_d8 = param_1;
        uVar5 = FUN_01fabcd0(uVar7,&local_b0,param_4,&local_e0);
      }
      else {
        uVar5 = FUN_020809e0(param_1 + 0xafb8,&local_b0,&local_bc,param_2,local_54);
      }
      if ((uVar5 & 1) != 0) {
        if (*piVar1 - 2U < 4) {
          *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_4 + 0x10);
          *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_4 + 0x14);
          *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_4 + 0x20);
          *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_4 + 0x24);
        }
        *(undefined4 *)(param_2 + 0x1c) = local_a8;
        *(undefined8 *)(param_2 + 0x14) = local_b0;
        return 1;
      }
    }
  }
  return 0;
}

