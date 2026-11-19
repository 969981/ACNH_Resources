
void FUN_03a8f890(long param_1,undefined8 param_2,long param_3,uint param_4,undefined4 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort uVar4;
  int iVar5;
  float fVar6;
  undefined8 *puVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  uint local_1e0;
  undefined8 local_1dc;
  uint local_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined *local_1b0;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  undefined4 local_78;
  uint local_74;
  undefined4 local_70;
  
  lVar1 = param_1 + 200;
  lVar8 = *(long *)(*(long *)(param_3 + 0x150) + 0x10);
  uVar4 = *(ushort *)(param_1 + 8);
  local_70 = 0;
  local_98 = param_1;
  lStack_90 = lVar8 + 0x328;
  local_88 = lVar1;
  lStack_80 = param_3;
  local_78 = param_5;
  local_74 = param_4;
  FUN_0390ee98(param_3,param_2,0);
  local_1e8 = 0xff7fffffff7fffff;
  local_1f8 = PTR_DAT_04bd0f08 + 0x10;
  local_1f0 = (char *)0x7f7fffff7f7fffff;
  local_1e0 = *(uint *)PTR_DAT_04bd0ea8;
  local_1dc = 0x3f80000000000000;
  if (local_1e0 < 6) {
    if ((1 << (ulong)(local_1e0 & 0x1f) & 0x39U) == 0) {
      fVar9 = *(float *)(lVar8 + 0x334);
      fVar10 = *(float *)(lVar8 + 0x330);
    }
    else {
      fVar9 = *(float *)(lVar8 + 0x330);
      fVar10 = *(float *)(lVar8 + 0x334);
    }
    fVar12 = fVar9;
    fVar6 = 0.0;
    if (fVar9 <= 0.0) {
      fVar12 = 0.0;
      fVar6 = fVar9;
    }
    fVar11 = fVar10;
    fVar9 = 0.0;
    if (fVar10 <= 0.0) {
      fVar11 = 0.0;
      fVar9 = fVar10;
    }
    local_1f0 = (char *)CONCAT44(fVar9,fVar6);
    local_1e8 = CONCAT44(fVar11,fVar12);
  }
  FUN_039025b0(0x3f800000,lVar8 + 0x328,param_2,0,uVar4 >> 1 & 1 | 2,param_1 + 0x1c,0,&local_1f8,1);
  puVar7 = *(undefined8 **)(param_1 + 0xd98);
  if (puVar7 != (undefined8 *)0x0) {
    local_70 = 0;
    (**(code **)*puVar7)(puVar7,param_2,&local_98);
  }
  local_1e8 = param_1 + 0x48;
  iVar5 = 1 << (ulong)(param_4 & 0x1f);
  local_1f0 = "Model(CubeMap/Opa+AlphaMask)";
  local_1dc = 0x800000000;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  local_1c0 = 0xffffffff00000000;
  uStack_1b8 = 0xffffffff;
  puVar3 = PTR_DAT_04bd1830 + 0x10;
  local_1d0 = 0xffff00000000;
  local_1c8 = 0x10000000f;
  local_1f8 = puVar2;
  local_1e0 = iVar5;
  local_1d4 = param_4;
  local_1b0 = puVar3;
  FUN_039eec04(lVar1,param_2,&local_1f8);
  puVar7 = *(undefined8 **)(param_1 + 0xd98);
  if (puVar7 != (undefined8 *)0x0) {
    local_70 = 1;
    (**(code **)*puVar7)(puVar7,param_2,&local_98);
  }
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0xe0) + (long)(int)param_4 * 0x410);
  uStack_e8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
  local_e0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
  uStack_d8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
  local_d0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
  uStack_f8 = *(undefined8 *)PTR_DAT_04bb2f80;
  local_f0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
  local_100 = PTR_DAT_04bd0e98 + 0x10;
  local_b8 = puVar7[2];
  uStack_b0 = puVar7[3];
  local_a8 = puVar7[4];
  uStack_a0 = puVar7[5];
  local_c8 = *puVar7;
  uStack_c0 = puVar7[1];
  FUN_038e5e6c(&local_1f8,puVar7 + 0x18,0);
  FUN_038e4a88(&local_100,&uStack_f8);
  FUN_039189b8(param_1 + 0x490,param_2,*(undefined8 *)(param_3 + 0x160),&local_1f8,&local_100);
  local_1e8 = param_1 + 0x88;
  local_1f0 = "Model(CubeMap/Xlu)";
  local_1d0 = 0xffff00000000;
  local_1c8 = 0x10000000f;
  local_1dc = 0x800000000;
  local_1c0 = 0xffffffff00000000;
  uStack_1b8 = 0xffffffff;
  local_1f8 = puVar2;
  local_1e0 = iVar5;
  local_1d4 = param_4;
  local_1b0 = puVar3;
  FUN_039eec04(lVar1,param_2,&local_1f8);
  puVar7 = *(undefined8 **)(param_1 + 0xd98);
  if (puVar7 != (undefined8 *)0x0) {
    local_70 = 2;
    (**(code **)*puVar7)(puVar7,param_2,&local_98);
  }
  FUN_0390f3fc(param_3,param_2);
  return;
}

