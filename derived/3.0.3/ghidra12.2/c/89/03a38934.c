
void FUN_03a38934(long param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  uint local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  undefined *local_80;
  
  uVar5 = (uint)*(byte *)(param_3 + 8);
  if (*(uint *)(*(long *)(param_1 + 0x248) + 8) <= (uint)*(byte *)(param_3 + 8)) {
    uVar5 = 0;
  }
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x248) + 0x10) + (ulong)uVar5 * 0x23c0 + 0x1fa8);
  (**(code **)(*(long *)(lVar6 + 0xa78) + 0x38))(lVar6 + 0xa78);
  puVar3 = PTR_DAT_04bd0f08;
  puVar2 = PTR_DAT_04bd0ea8;
  local_c0 = (char *)0x7f7fffff7f7fffff;
  local_b8 = 0xff7fffffff7fffff;
  local_c8 = PTR_DAT_04bd0f08 + 0x10;
  local_ac = 0x3f80000000000000;
  local_b0 = *(uint *)PTR_DAT_04bd0ea8;
  if (local_b0 < 6) {
    if ((1 << (ulong)(local_b0 & 0x1f) & 0x39U) == 0) {
      fVar7 = *(float *)(lVar6 + 0xa84);
      fVar8 = *(float *)(lVar6 + 0xa80);
    }
    else {
      fVar7 = *(float *)(lVar6 + 0xa80);
      fVar8 = *(float *)(lVar6 + 0xa84);
    }
    fVar10 = fVar7;
    fVar1 = 0.0;
    if (fVar7 <= 0.0) {
      fVar10 = 0.0;
      fVar1 = fVar7;
    }
    fVar9 = fVar8;
    fVar7 = 0.0;
    if (fVar8 <= 0.0) {
      fVar9 = 0.0;
      fVar7 = fVar8;
    }
    local_c0 = (char *)CONCAT44(fVar7,fVar1);
    local_b8 = CONCAT44(fVar9,fVar10);
  }
  FUN_038e77e4(&local_c8,param_2,lVar6 + 0xa78);
  local_ac = 0;
  local_a4 = 0;
  local_84 = 0;
  local_b8 = *(long *)(param_3 + 1000) + 0x40;
  local_c8 = PTR_DAT_04bb2020 + 0x10;
  local_b0 = 0x800;
  local_9c = 0xffff;
  local_c0 = "Model(Pre Deferred Shading)";
  local_94 = 1;
  local_8c = 0xffffffffffffffff;
  local_80 = PTR_DAT_04bd1830 + 0x10;
  local_98 = *(undefined4 *)(lVar6 + 0xc);
  FUN_039eec04(param_3,param_2,&local_c8);
  if ((*(byte *)(lVar6 + 9) >> 1 & 1) != 0) {
    uVar5 = (uint)*(byte *)(param_3 + 8);
    if (*(uint *)(*(long *)(param_1 + 0x248) + 8) <= (uint)*(byte *)(param_3 + 8)) {
      uVar5 = 0;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x248) + 0x10) + (ulong)uVar5 * 0x23c0 + 0xae8);
    FUN_01560750(lVar4,lVar6 + 0x1af8,*(undefined1 *)(lVar4 + 0xbe),*(undefined2 *)(lVar4 + 0xbc));
    uVar5 = (uint)*(byte *)(param_3 + 8);
    if (*(uint *)(*(long *)(param_1 + 0x248) + 8) <= (uint)*(byte *)(param_3 + 8)) {
      uVar5 = 0;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x248) + 0x10) + (ulong)uVar5 * 0x23c0;
    (**(code **)(*(long *)(lVar6 + 0xac8) + 0x38))(lVar6 + 0xac8,param_2);
    local_ac = 0x3f80000000000000;
    local_c0 = (char *)0x7f7fffff7f7fffff;
    local_b8 = 0xff7fffffff7fffff;
    local_c8 = puVar3 + 0x10;
    local_b0 = *(uint *)puVar2;
    if (local_b0 < 6) {
      if ((1 << (ulong)(local_b0 & 0x1f) & 0x39U) == 0) {
        fVar8 = *(float *)(lVar6 + 0xad0);
        fVar7 = *(float *)(lVar6 + 0xad4);
      }
      else {
        fVar7 = *(float *)(lVar6 + 0xad0);
        fVar8 = *(float *)(lVar6 + 0xad4);
      }
      fVar10 = fVar7;
      fVar1 = 0.0;
      if (fVar7 <= 0.0) {
        fVar10 = 0.0;
        fVar1 = fVar7;
      }
      fVar9 = fVar8;
      fVar7 = 0.0;
      if (fVar8 <= 0.0) {
        fVar9 = 0.0;
        fVar7 = fVar8;
      }
      local_c0 = (char *)CONCAT44(fVar7,fVar1);
      local_b8 = CONCAT44(fVar9,fVar10);
    }
    FUN_038e77e4(&local_c8,param_2,lVar6 + 0xac8);
  }
  return;
}

