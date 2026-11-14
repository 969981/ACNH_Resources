
void FUN_0188ffac(long param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  undefined4 extraout_w9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 local_70;
  float local_68;
  int local_60;
  undefined8 local_5c;
  undefined8 local_54;
  float local_4c;
  long local_48;
  
  FUN_0188a208();
  pfVar5 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0x158) + 0xf0))
                              (*(long *)(param_1 + 0x4b8) + 0x158);
  fVar10 = *pfVar5;
  puVar6 = (undefined4 *)
           (**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0x128) + 0xf0))
                     (*(long *)(param_1 + 0x4b8) + 0x128);
  uVar13 = *puVar6;
  local_60 = FUN_01907a94(*(undefined8 *)(param_1 + 0x3d0));
  puVar6 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0x30) + 0xf0))();
  local_5c = CONCAT44(local_5c._4_4_,*puVar6);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0xc0) + 0xf0))();
  local_5c = CONCAT44(*puVar6,(undefined4)local_5c);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0x60) + 0xf0))();
  local_48 = param_1 + 0x3dc;
  local_54 = CONCAT44(local_54._4_4_,*puVar6);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0x90) + 0xf0))();
  uVar11 = *puVar6;
  *(undefined1 *)(param_1 + 0x3f8) = 0;
  *(undefined4 *)(param_1 + 0x3fc) = uVar13;
  *(int *)(param_1 + 0x408) = (int)(long)(fVar10 * 11930465.0);
  *(undefined8 *)(param_1 + 0x400) = 0;
  local_54 = CONCAT44(uVar11,(undefined4)local_54);
  FUN_01a184b8(param_1 + 0x410,&local_60);
  pfVar5 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4c0) + 0x210) + 0xf0))
                              (*(long *)(param_1 + 0x4c0) + 0x210);
  fVar10 = *pfVar5;
  *(undefined4 *)(param_1 + 0x458) = 0;
  *(undefined1 *)(param_1 + 0x49c) = 0;
  *(undefined8 *)(param_1 + 0x490) = 0;
  uVar8 = (uint)(fVar10 * 30.0);
  *(byte *)(param_1 + 0x464) = (byte)(uVar8 >> 0x1f);
  *(uint *)(param_1 + 0x45c) = uVar8 & (int)uVar8 >> 0x1f;
  *(uint *)(param_1 + 0x460) = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
  *(undefined4 *)(param_1 + 0x498) = 0x96;
  if ((*(long *)(param_1 + 0x3f0) != 0) && (*(int *)(param_1 + 0x3d8) == 6)) {
    piVar1 = (int *)(param_1 + 0x448);
    local_5c = 0;
    local_60 = -1;
    local_54 = 0;
    local_4c = 0.0;
    local_48._0_4_ = 0.0;
    local_70._0_4_ = 1.4013e-45;
    uVar7 = FUN_01889cfc(param_1,&local_60,piVar1,&local_70);
    if ((uVar7 & 1) != 0) {
      lVar9 = *(long *)(param_1 + 0x48);
      uVar11 = extraout_w9;
      if (lVar9 != 0) {
        uVar11 = *(undefined4 *)(lVar9 + 0x230);
      }
      uVar13 = *(undefined4 *)PTR_DAT_04bb3238;
      if (lVar9 != 0) {
        uVar13 = uVar11;
      }
      local_70 = CONCAT44(local_70._4_4_,uVar13);
      if ((*piVar1 != -1) && (uVar7 = FUN_019d75bc(piVar1,&local_70), (uVar7 & 1) != 0)) {
        *piVar1 = -1;
      }
      uVar7 = FUN_019d73c0(&local_60,&local_70);
      if ((uVar7 & 1) != 0) {
        *piVar1 = local_60;
      }
      *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x45c);
      local_70 = local_54;
      local_68 = local_4c;
      if (local_5c._4_4_ == 1) {
        uVar3 = *(uint *)(param_1 + 1000);
        uVar8 = *(uint *)(param_1 + 0x3dc) ^ *(uint *)(param_1 + 0x3dc) << 0xb;
        uVar2 = uVar8 ^ uVar3;
        uVar8 = uVar8 >> 8 ^ uVar3 >> 0x13 ^ uVar2;
        uVar4 = *(uint *)(param_1 + 0x3e0);
        *(uint *)(param_1 + 0x3e0) = uVar3;
        uVar4 = uVar4 ^ uVar4 << 0xb;
        uVar7 = (ulong)(uVar2 >> 0x18);
        uVar2 = uVar4 >> 8 ^ uVar8 >> 0x13 ^ uVar4 ^ uVar8;
        uVar11 = *(undefined4 *)(param_1 + 0x3e4);
        *(uint *)(param_1 + 0x3e4) = uVar8;
        *(uint *)(param_1 + 1000) = uVar2;
        fVar10 = (float)(uVar8 & 0xffffff) * 5.9604645e-08;
        *(undefined4 *)(param_1 + 0x3dc) = uVar11;
        fVar12 = (float)local_48 * ((float)(uVar2 >> 9 | 0x3f800000) + -1.0);
        local_70._0_4_ = (float)local_54;
        local_70._4_4_ = (float)((ulong)local_54 >> 0x20);
        local_70 = CONCAT44(local_70._4_4_ + 0.0,
                            (float)local_70 +
                            ((float)(&DAT_04199798)[uVar7 * 4] +
                            fVar10 * (float)(&DAT_0419979c)[uVar7 * 4]) * fVar12);
        local_68 = local_4c +
                   ((float)(&DAT_041997a0)[uVar7 * 4] + fVar10 * (float)(&DAT_041997a4)[uVar7 * 4])
                   * fVar12;
      }
      (**(code **)(**(long **)(param_1 + 0x300) + 0x100))(*(long **)(param_1 + 0x300),&local_70);
      uVar11 = *(undefined4 *)(*(long *)(param_1 + 0x300) + 0x280);
      *(undefined8 *)(param_1 + 0x334) = *(undefined8 *)(*(long *)(param_1 + 0x300) + 0x278);
      *(undefined4 *)(param_1 + 0x33c) = uVar11;
      *(undefined8 *)(param_1 + 0x328) = local_70;
      *(float *)(param_1 + 0x330) = local_68;
      *(float *)(param_1 + 0x334) = *(float *)(param_1 + 0x334) - *(float *)(param_1 + 0x340);
      *(float *)(param_1 + 0x338) = *(float *)(param_1 + 0x338) - *(float *)(param_1 + 0x344);
      *(float *)(param_1 + 0x33c) = *(float *)(param_1 + 0x33c) - *(float *)(param_1 + 0x348);
    }
  }
  return;
}

