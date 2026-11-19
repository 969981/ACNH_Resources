
void FUN_03a38bb4(long param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined *puStack_50;
  
  lVar2 = *(long *)(param_3 + 1000);
  if (((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x7c) && (*(uint *)(lVar2 + 0x5c) & 0x20) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 2000) != '\0')) {
    uVar3 = (uint)*(byte *)(param_3 + 8);
    if (*(uint *)(*(long *)(param_1 + 0x248) + 8) <= (uint)*(byte *)(param_3 + 8)) {
      uVar3 = 0;
    }
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x248) + 0x10) + (ulong)uVar3 * 0x23c0 + 0x1fa8)
    ;
    (**(code **)(*(long *)(lVar2 + 0x4a0) + 0x38))(lVar2 + 0x4a0);
    local_88 = 0xff7fffffff7fffff;
    local_98 = PTR_DAT_04bd0f08 + 0x10;
    local_90 = (char *)0x7f7fffff7f7fffff;
    local_80 = *(uint *)PTR_DAT_04bd0ea8;
    local_7c = 0;
    uStack_78 = 0x3f800000;
    if (local_80 < 6) {
      if ((1 << (ulong)(local_80 & 0x1f) & 0x39U) == 0) {
        fVar4 = *(float *)(lVar2 + 0x4ac);
        fVar5 = *(float *)(lVar2 + 0x4a8);
      }
      else {
        fVar4 = *(float *)(lVar2 + 0x4a8);
        fVar5 = *(float *)(lVar2 + 0x4ac);
      }
      fVar7 = fVar4;
      fVar1 = 0.0;
      if (fVar4 <= 0.0) {
        fVar7 = 0.0;
        fVar1 = fVar4;
      }
      fVar6 = fVar5;
      fVar4 = 0.0;
      if (fVar5 <= 0.0) {
        fVar6 = 0.0;
        fVar4 = fVar5;
      }
      local_90 = (char *)CONCAT44(fVar4,fVar1);
      local_88 = CONCAT44(fVar6,fVar7);
    }
    FUN_038e77e4(&local_98,param_2,lVar2 + 0x4a0);
    uStack_78 = 3;
    uStack_74 = 0;
    uStack_70 = 0xffff00000000;
    local_88 = *(long *)(param_3 + 1000) + 0x40;
    local_80 = 0x20;
    local_7c = 0;
    local_98 = PTR_DAT_04bb2020 + 0x10;
    local_90 = "Model(GBuffer/Xlu)";
    local_60 = 0xffffffff00000000;
    uStack_64 = *(undefined4 *)(lVar2 + 0x1400);
    puStack_50 = PTR_DAT_04bd1830 + 0x10;
    local_58 = 8;
    local_68 = *(undefined4 *)(lVar2 + 0x13fc);
    FUN_039eec04(param_3,param_2,&local_98);
  }
  return;
}

