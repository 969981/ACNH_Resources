
void FUN_0391d7d0(undefined4 param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,uint param_9)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  undefined8 local_7c;
  
  uVar5 = *(ushort *)(param_5 + 0x30);
  lVar1 = param_2 + 0x390;
  *(undefined8 *)(param_2 + 0x388) = 0;
  lVar2 = param_2 + 0x328;
  *(undefined8 *)(param_2 + 0x380) = 0;
  *(undefined8 *)(param_2 + 0x378) = 0;
  *(undefined8 *)(param_2 + 0x370) = 0;
  *(undefined8 *)(param_2 + 0x368) = 0;
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  *(undefined8 *)(param_2 + 0x360) = 0;
  *(undefined8 *)(param_2 + 0x358) = 0;
  *(undefined8 *)(param_2 + 0x350) = 0;
  *(undefined8 *)(param_2 + 0x348) = 0;
  fVar14 = (float)uVar5;
  FUN_01560750(lVar1,param_5,0,0);
  *(long *)(param_2 + 0x348) = lVar1;
  *(undefined8 *)(param_2 + 0x338) = 0;
  *(float *)(param_2 + 0x340) = fVar14;
  *(float *)(param_2 + 0x344) = fVar14;
  *(float *)(param_2 + 0x330) = fVar14;
  *(float *)(param_2 + 0x334) = fVar14;
  (**(code **)(*(long *)(param_2 + 0x328) + 0x38))(lVar2,param_3);
  local_90 = 0x7f7fffff7f7fffff;
  local_88 = 0xff7fffffff7fffff;
  local_98 = PTR_DAT_04bd0f08 + 0x10;
  local_7c = 0x3f80000000000000;
  local_80 = DAT_05ae77d0;
  if (DAT_05ae77d0 < 6) {
    if ((1 << (ulong)(DAT_05ae77d0 & 0x1f) & 0x39U) == 0) {
      fVar14 = *(float *)(param_2 + 0x334);
      fVar11 = *(float *)(param_2 + 0x330);
    }
    else {
      fVar14 = *(float *)(param_2 + 0x330);
      fVar11 = *(float *)(param_2 + 0x334);
    }
    fVar13 = fVar14;
    fVar7 = 0.0;
    if (fVar14 <= 0.0) {
      fVar13 = 0.0;
      fVar7 = fVar14;
    }
    fVar12 = fVar11;
    fVar14 = 0.0;
    if (fVar11 <= 0.0) {
      fVar12 = 0.0;
      fVar14 = fVar11;
    }
    local_90 = CONCAT44(fVar14,fVar7);
    local_88 = CONCAT44(fVar12,fVar13);
  }
  FUN_038e77e4(&local_98,param_3,lVar2);
  if (*(short *)(param_4 + 0x3a) == 8) {
    FUN_0394b540(param_1,param_3,param_4,param_7,0,2);
  }
  else {
    FUN_0394bc60(param_1,param_3,param_4,param_6,param_7,0,2);
  }
  puVar3 = (undefined8 *)(param_2 + 0x348);
  iVar10 = 1;
  do {
    uVar5 = *(ushort *)(param_5 + 0x30);
    *puVar3 = 0;
    *(undefined8 *)(param_2 + 0x380) = 0;
    *(undefined8 *)(param_2 + 0x388) = 0;
    *(undefined8 *)(param_2 + 0x370) = 0;
    *(undefined8 *)(param_2 + 0x378) = 0;
    if (uVar5 < 2) {
      uVar5 = 1;
    }
    *(undefined8 *)(param_2 + 0x360) = 0;
    *(undefined8 *)(param_2 + 0x368) = 0;
    fVar14 = (float)uVar5;
    *(undefined8 *)(param_2 + 0x350) = 0;
    *(undefined8 *)(param_2 + 0x358) = 0;
    FUN_01560750(lVar1,param_5,0,iVar10);
    *(long *)(param_2 + 0x348) = lVar1;
    *(undefined8 *)(param_2 + 0x338) = 0;
    *(float *)(param_2 + 0x340) = fVar14;
    *(float *)(param_2 + 0x344) = fVar14;
    *(float *)(param_2 + 0x330) = fVar14;
    *(float *)(param_2 + 0x334) = fVar14;
    (**(code **)(*(long *)(param_2 + 0x328) + 0x38))(lVar2,param_3);
    if (*(short *)(param_4 + 0x3a) == 8) {
      FUN_0394b540(param_1,param_3,param_4,param_7,iVar10,2);
    }
    else {
      FUN_0394bc60(param_1,param_3,param_4,param_6,param_7,iVar10,2);
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 6);
  uVar4 = *(uint *)(param_2 + 1000);
  if (uVar4 != 0xffffffff) {
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
      uVar6 = uVar4 - *(ushort *)(DAT_05ae78f0 + 0x3da);
      if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar6) {
        uVar6 = 0;
      }
      if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) == 0)
      {
        *(ulong *)(param_3 + 0x100) = *(ulong *)(param_3 + 0x100) | 1L << ((ulong)uVar4 & 0x3f);
        goto LAB_0391dad8;
      }
    }
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
      uVar8 = 0x112;
      uVar9 = 0x12;
    }
    else {
      uVar8 = 0x111;
      uVar9 = 0x11;
    }
    if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
      uVar9 = uVar8;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_3 + 0xb8),uVar9);
    *(undefined8 *)(param_3 + 0x100) = 0;
  }
LAB_0391dad8:
  *puVar3 = 0;
  *(undefined8 *)(param_2 + 0x350) = 0;
  *(undefined8 *)(param_2 + 0x358) = 0;
  *(undefined8 *)(param_2 + 0x360) = 0;
  uVar5 = *(ushort *)(param_2 + 0x110) >> (ulong)(param_9 & 0x1f);
  *(undefined8 *)(param_2 + 0x368) = 0;
  *(undefined8 *)(param_2 + 0x370) = 0;
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  *(undefined8 *)(param_2 + 0x378) = 0;
  *(undefined8 *)(param_2 + 0x380) = 0;
  *(undefined8 *)(param_2 + 0x388) = 0;
  fVar14 = (float)uVar5;
  FUN_01560750(lVar1,param_2 + 0xe0,param_9,param_8 * 6);
  *(long *)(param_2 + 0x348) = lVar1;
  *(undefined8 *)(param_2 + 0x338) = 0;
  *(float *)(param_2 + 0x340) = fVar14;
  *(float *)(param_2 + 0x344) = fVar14;
  *(float *)(param_2 + 0x330) = fVar14;
  *(float *)(param_2 + 0x334) = fVar14;
  (**(code **)(*(long *)(param_2 + 0x328) + 0x38))(lVar2,param_3);
  local_88 = 0xff7fffffff7fffff;
  local_98 = PTR_DAT_04bd0f08 + 0x10;
  local_90 = 0x7f7fffff7f7fffff;
  local_7c = 0x3f80000000000000;
  local_80 = *(uint *)PTR_DAT_04bd0ea8;
  if (local_80 < 6) {
    if ((1 << (ulong)(local_80 & 0x1f) & 0x39U) == 0) {
      fVar14 = *(float *)(param_2 + 0x334);
      fVar11 = *(float *)(param_2 + 0x330);
    }
    else {
      fVar14 = *(float *)(param_2 + 0x330);
      fVar11 = *(float *)(param_2 + 0x334);
    }
    fVar13 = fVar14;
    fVar7 = 0.0;
    if (fVar14 <= 0.0) {
      fVar13 = 0.0;
      fVar7 = fVar14;
    }
    fVar12 = fVar11;
    fVar14 = 0.0;
    if (fVar11 <= 0.0) {
      fVar12 = 0.0;
      fVar14 = fVar11;
    }
    local_90 = CONCAT44(fVar14,fVar7);
    local_88 = CONCAT44(fVar12,fVar13);
  }
  FUN_038e77e4(&local_98,param_3,lVar2);
  FUN_0394b540(param_1,param_3,param_5,0,0,3);
  iVar10 = 1;
  do {
    *(undefined8 *)(param_2 + 0x388) = 0;
    *puVar3 = 0;
    *(undefined8 *)(param_2 + 0x350) = 0;
    uVar5 = *(ushort *)(param_2 + 0x110) >> (ulong)(param_9 & 0x1f);
    *(undefined8 *)(param_2 + 0x358) = 0;
    *(undefined8 *)(param_2 + 0x360) = 0;
    *(undefined8 *)(param_2 + 0x368) = 0;
    *(undefined8 *)(param_2 + 0x370) = 0;
    if (uVar5 < 2) {
      uVar5 = 1;
    }
    fVar14 = (float)uVar5;
    *(undefined8 *)(param_2 + 0x378) = 0;
    *(undefined8 *)(param_2 + 0x380) = 0;
    FUN_01560750(lVar1,param_2 + 0xe0,param_9,param_8 * 6 + iVar10);
    *(long *)(param_2 + 0x348) = lVar1;
    *(undefined8 *)(param_2 + 0x338) = 0;
    *(float *)(param_2 + 0x340) = fVar14;
    *(float *)(param_2 + 0x344) = fVar14;
    *(float *)(param_2 + 0x330) = fVar14;
    *(float *)(param_2 + 0x334) = fVar14;
    (**(code **)(*(long *)(param_2 + 0x328) + 0x38))(lVar2,param_3);
    FUN_0394b540(param_1,param_3,param_5,0,iVar10,3);
    iVar10 = iVar10 + 1;
  } while (iVar10 != 6);
  uVar4 = *(uint *)(param_2 + 1000);
  if (uVar4 != 0xffffffff) {
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
      uVar6 = uVar4 - *(ushort *)(DAT_05ae78f0 + 0x3da);
      if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar6) {
        uVar6 = 0;
      }
      if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) == 0)
      {
        *(ulong *)(param_3 + 0x100) = *(ulong *)(param_3 + 0x100) | 1L << ((ulong)uVar4 & 0x3f);
        return;
      }
    }
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
      uVar8 = 0x112;
      uVar9 = 0x12;
    }
    else {
      uVar8 = 0x111;
      uVar9 = 0x11;
    }
    if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
      uVar9 = uVar8;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_3 + 0xb8),uVar9);
    *(undefined8 *)(param_3 + 0x100) = 0;
  }
  return;
}

