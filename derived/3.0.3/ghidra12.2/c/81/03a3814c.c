
void FUN_03a3814c(long param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined *puStack_80;
  
  uVar5 = (uint)*(byte *)(param_3 + 8);
  if (*(uint *)(*(long *)(param_1 + 0x248) + 8) <= (uint)*(byte *)(param_3 + 8)) {
    uVar5 = 0;
  }
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x248) + 0x10) + (ulong)uVar5 * 0x23c0 + 0x1fa8);
  lVar4 = *(long *)(param_3 + 1000);
  if (lVar4 == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = 0;
    if (0 < *(int *)(lVar4 + 0x3c)) {
      bVar8 = *(byte *)(lVar4 + 0x1c) >> 5 & 1;
    }
  }
  uVar5 = *(uint *)(lVar7 + 0x13fc);
  lVar4 = lVar7 + 0x4a0;
  uVar3 = *(undefined4 *)(lVar7 + 0x13f4);
  (**(code **)(*(long *)(lVar7 + 0x4a0) + 0x38))(lVar4,param_2);
  puVar2 = PTR_DAT_04bd0ea8;
  local_c0 = (char *)0x7f7fffff7f7fffff;
  local_b8 = 0xff7fffffff7fffff;
  local_c8 = PTR_DAT_04bd0f08 + 0x10;
  local_ac = 0;
  uStack_a8 = 0x3f800000;
  local_b0 = *(uint *)PTR_DAT_04bd0ea8;
  if (local_b0 < 6) {
    if ((1 << (ulong)(local_b0 & 0x1f) & 0x39U) == 0) {
      fVar9 = *(float *)(lVar7 + 0x4ac);
      fVar10 = *(float *)(lVar7 + 0x4a8);
    }
    else {
      fVar9 = *(float *)(lVar7 + 0x4a8);
      fVar10 = *(float *)(lVar7 + 0x4ac);
    }
    fVar12 = fVar9;
    fVar1 = 0.0;
    if (fVar9 <= 0.0) {
      fVar12 = 0.0;
      fVar1 = fVar9;
    }
    fVar11 = fVar10;
    fVar9 = 0.0;
    if (fVar10 <= 0.0) {
      fVar11 = 0.0;
      fVar9 = fVar10;
    }
    local_c0 = (char *)CONCAT44(fVar9,fVar1);
    local_b8 = CONCAT44(fVar11,fVar12);
  }
  FUN_038e77e4(&local_c8,param_2,lVar4);
  if (*(long *)(param_3 + 0x198) != 0) {
    *(long *)(param_3 + 0x40) = *(long *)(param_3 + 0x198);
    *(undefined8 *)(param_3 + 0x198) = 0;
  }
  FUN_03a4f7f0(param_3,param_2,*(undefined8 *)(param_1 + 0x248),0x14,0,uVar3,0);
  FUN_03a4f7f0(param_3,param_2,*(undefined8 *)(param_1 + 0x248),0x15,0,uVar3,0);
  if (bVar8 != 0) {
    uVar3 = 9;
    if ((*(byte *)(param_1 + 0x14c0) & 0x10) != 0) {
      uVar3 = 0x14;
    }
    FUN_03af7d80(*(undefined8 *)(param_1 + 0x248),param_2,*(undefined1 *)(param_3 + 8),uVar3,0);
    uVar6 = (uint)*(byte *)(param_3 + 8);
    if (*(uint *)(*(long *)(param_1 + 0x248) + 8) <= (uint)*(byte *)(param_3 + 8)) {
      uVar6 = 0;
    }
    *(ulong *)(param_3 + 0xb8) =
         *(long *)(*(long *)(param_1 + 0x248) + 0x10) + (ulong)uVar6 * 0x23c0 + 0x8c8;
    FUN_039d15f4(lVar7,param_2,&local_c8,0);
    (**(code **)(*(long *)(lVar7 + 0x4a0) + 0x38))(lVar4,param_2);
    local_b8 = 0xff7fffffff7fffff;
    local_c8 = PTR_DAT_04bd0f08 + 0x10;
    local_c0 = (char *)0x7f7fffff7f7fffff;
    local_b0 = *(uint *)puVar2;
    local_ac = 0;
    uStack_a8 = 0x3f800000;
    if (local_b0 < 6) {
      if ((1 << (ulong)(local_b0 & 0x1f) & 0x39U) == 0) {
        fVar9 = *(float *)(lVar7 + 0x4ac);
        fVar10 = *(float *)(lVar7 + 0x4a8);
      }
      else {
        fVar9 = *(float *)(lVar7 + 0x4a8);
        fVar10 = *(float *)(lVar7 + 0x4ac);
      }
      fVar12 = fVar9;
      fVar1 = 0.0;
      if (fVar9 <= 0.0) {
        fVar12 = 0.0;
        fVar1 = fVar9;
      }
      fVar11 = fVar10;
      fVar9 = 0.0;
      if (fVar10 <= 0.0) {
        fVar11 = 0.0;
        fVar9 = fVar10;
      }
      local_c0 = (char *)CONCAT44(fVar9,fVar1);
      local_b8 = CONCAT44(fVar11,fVar12);
    }
    FUN_038e77e4(&local_c8,param_2,lVar4);
    uStack_a8 = 3;
    uStack_a4 = 0;
    uStack_a0 = 0xffff00000041;
    local_b8 = *(undefined8 *)(param_3 + 1000);
    local_b0 = 0x20;
    local_ac = 0;
    local_c8 = PTR_DAT_04bb2020 + 0x10;
    local_c0 = "Model(GBuffer/Opa+AlphaMask/Blend)";
    local_90 = 0xffffffff00000000;
    local_98 = *(undefined4 *)(lVar7 + 0x13f4);
    puStack_80 = PTR_DAT_04bd1830 + 0x10;
    local_88 = 6;
    uStack_94 = *(undefined4 *)(lVar7 + 0x13f8);
    FUN_039eec04(param_3,param_2,&local_c8);
  }
  FUN_03a4f7f0(param_3,param_2,*(undefined8 *)(param_1 + 0x248),0x16,0,uVar5 & 0xfffffff0,0);
  return;
}

