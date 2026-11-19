
void FUN_03a38490(long param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined *puStack_60;
  
  lVar2 = *(long *)(param_3 + 1000);
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x7c) && (*(uint *)(lVar2 + 0x5c) & 0x40) != 0)) {
    uVar4 = (uint)*(byte *)(param_3 + 8);
    if (*(uint *)(*(long *)(param_1 + 0x248) + 8) <= (uint)*(byte *)(param_3 + 8)) {
      uVar4 = 0;
    }
    lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x248) + 0x10) + (ulong)uVar4 * 0x23c0 + 0x1fa8)
    ;
    lVar2 = lVar7 + 0x4c0;
    lVar3 = (long)*(char *)(lVar7 + 0xcb8) * 8;
    lVar5 = (long)*(char *)(lVar7 + 0xfb8) * 8;
    uVar6 = *(undefined8 *)(lVar2 + lVar5);
    *(undefined8 *)(lVar2 + lVar5) = *(undefined8 *)(lVar2 + lVar3);
    *(undefined8 *)(lVar2 + lVar3) = uVar6;
    (**(code **)(*(long *)(lVar7 + 0x4a0) + 0x38))(lVar7 + 0x4a0);
    local_98 = 0xff7fffffff7fffff;
    local_a8 = PTR_DAT_04bd0f08 + 0x10;
    local_a0 = (char *)0x7f7fffff7f7fffff;
    local_90 = *(uint *)PTR_DAT_04bd0ea8;
    local_8c = 0;
    uStack_88 = 0x3f800000;
    if (local_90 < 6) {
      if ((1 << (ulong)(local_90 & 0x1f) & 0x39U) == 0) {
        fVar8 = *(float *)(lVar7 + 0x4ac);
        fVar9 = *(float *)(lVar7 + 0x4a8);
      }
      else {
        fVar8 = *(float *)(lVar7 + 0x4a8);
        fVar9 = *(float *)(lVar7 + 0x4ac);
      }
      fVar11 = fVar8;
      fVar1 = 0.0;
      if (fVar8 <= 0.0) {
        fVar11 = 0.0;
        fVar1 = fVar8;
      }
      fVar10 = fVar9;
      fVar8 = 0.0;
      if (fVar9 <= 0.0) {
        fVar10 = 0.0;
        fVar8 = fVar9;
      }
      local_a0 = (char *)CONCAT44(fVar8,fVar1);
      local_98 = CONCAT44(fVar10,fVar11);
    }
    FUN_038e77e4(&local_a8,param_2,lVar7 + 0x4a0);
    uStack_88 = 3;
    uStack_84 = 0;
    uStack_80 = 0xffff00040040;
    local_98 = *(long *)(param_3 + 1000) + 0x40;
    local_a8 = PTR_DAT_04bb2020 + 0x10;
    local_90 = 0x40;
    local_8c = 0;
    local_a0 = "Model(GBuffer/XluOpa)";
    local_70 = 0xffffffff00000000;
    puStack_60 = PTR_DAT_04bd1830 + 0x10;
    local_68 = 7;
    uStack_74 = *(undefined4 *)(lVar7 + 0x1400);
    local_78 = 0xff;
    FUN_039eec04(param_3,param_2,&local_a8);
    lVar3 = (long)*(char *)(lVar7 + 0xcb8) * 8;
    lVar5 = (long)*(char *)(lVar7 + 0xfb8) * 8;
    uVar6 = *(undefined8 *)(lVar2 + lVar5);
    *(undefined8 *)(lVar2 + lVar5) = *(undefined8 *)(lVar2 + lVar3);
    *(undefined8 *)(lVar2 + lVar3) = uVar6;
  }
  return;
}

