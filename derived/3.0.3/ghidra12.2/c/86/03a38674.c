
void FUN_03a38674(long param_1,undefined8 param_2,long param_3,long param_4)

{
  float fVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  undefined8 local_4c;
  
  uVar4 = (uint)*(byte *)(param_3 + 8);
  if (*(uint *)(*(long *)(param_1 + 0x248) + 8) <= (uint)*(byte *)(param_3 + 8)) {
    uVar4 = 0;
  }
  lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x248) + 0x10) + (ulong)uVar4 * 0x23c0 + 0x1fa8);
  FUN_039d19a0(lVar8,param_2,*(undefined1 *)(*(long *)(param_1 + 8) + 0x1960));
  lVar2 = *(long *)(param_1 + 0x248);
  bVar3 = *(byte *)(param_3 + 8);
  uVar4 = (uint)bVar3;
  if (*(uint *)(lVar2 + 8) <= (uint)bVar3) {
    uVar4 = 0;
  }
  if ((*(byte *)(*(long *)(lVar2 + 0x10) + (ulong)uVar4 * 0x23c0 + 8) & 1) == 0) {
    uVar5 = 9;
    if ((*(byte *)(param_1 + 0x14c0) & 0x10) != 0) {
      uVar5 = 0x14;
    }
    FUN_03af7d80(lVar2,param_2,bVar3,uVar5,0);
    bVar3 = *(byte *)(param_3 + 8);
    uVar4 = (uint)bVar3;
    if (*(uint *)(*(long *)(param_1 + 0x248) + 8) <= (uint)bVar3) {
      uVar4 = 0;
    }
    *(ulong *)(param_3 + 0xb8) =
         *(long *)(*(long *)(param_1 + 0x248) + 0x10) + (ulong)uVar4 * 0x23c0 + 0x8c8;
    lVar2 = *(long *)(param_1 + 0x248);
  }
  FUN_03af7210(lVar2,param_2,bVar3,0x1800,0,0);
  bVar3 = *(byte *)(param_3 + 8);
  uVar4 = (uint)bVar3;
  if (*(uint *)(*(long *)(param_1 + 0x248) + 8) <= (uint)bVar3) {
    uVar4 = 0;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x248) + 0x10) + (ulong)uVar4 * 0x23c0 +
          ((ulong)(*(byte *)(param_1 + 0x14c0) >> 5) & 1) * 0xe0;
  lVar2 = lVar6 + 0x8c8;
  if ((*(byte *)(param_1 + 0x14c0) & 0x40) != 0) {
    lVar2 = lVar6 + 0x1088;
  }
  *(long *)(param_3 + 0xc0) = lVar2;
  if (*(char *)(*(long *)(param_1 + 8) + 0x1960) == '\0') {
    if (*(long *)(param_4 + 0x440) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      if (*(char *)(*(long *)(param_4 + 8) + 0x5d0) != '\0') {
        lVar2 = *(long *)(param_4 + 0x440);
      }
    }
    FUN_039d1d80(lVar8,param_2,bVar3,lVar2);
  }
  (**(code **)(*(long *)(lVar8 + 0x4a0) + 0x38))(lVar8 + 0x4a0,param_2);
  local_58 = 0xff7fffffff7fffff;
  local_68 = PTR_DAT_04bd0f08 + 0x10;
  local_60 = 0x7f7fffff7f7fffff;
  local_50 = *(uint *)PTR_DAT_04bd0ea8;
  local_4c = 0x3f80000000000000;
  if (local_50 < 6) {
    if ((1 << (ulong)(local_50 & 0x1f) & 0x39U) == 0) {
      fVar9 = *(float *)(lVar8 + 0x4ac);
      fVar10 = *(float *)(lVar8 + 0x4a8);
    }
    else {
      fVar9 = *(float *)(lVar8 + 0x4a8);
      fVar10 = *(float *)(lVar8 + 0x4ac);
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
    local_60 = CONCAT44(fVar9,fVar1);
    local_58 = CONCAT44(fVar11,fVar12);
  }
  FUN_038e77e4(&local_68,param_2,lVar8 + 0x4a0);
  uVar5 = *(undefined4 *)(lVar8 + 0x13f4);
  uVar7 = *(undefined8 *)(param_1 + 0x248);
  lVar2 = *(long *)PTR_DAT_04bbd8f8;
  if ((((lVar2 != 0) && (*(char *)(*(long *)(lVar2 + 0x18) + 0x59) != '\0')) &&
      ((*(byte *)(param_3 + 0x3c9) >> 1 & 1) != 0)) &&
     ((*(byte *)(*(long *)(param_3 + 0x3d0) + 0xd19) & 1) != 0)) {
    FUN_03b09e00(lVar2,param_2,param_3,uVar7,1);
    uVar7 = *(undefined8 *)(param_1 + 0x248);
  }
  FUN_03a4f7f0(param_3,param_2,uVar7,0x11,0,uVar5,0);
  FUN_03a4f7f0(param_3,param_2,*(undefined8 *)(param_1 + 0x248),0x12,0,uVar5,0);
  return;
}

