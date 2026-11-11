
void FUN_00673f50(float param_1,undefined8 param_2,ushort *param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,byte param_12)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar14;
  ulong uVar13;
  undefined8 uVar15;
  long local_c8;
  long local_c0;
  uint local_b4;
  uint local_64;
  
  uVar7 = *(undefined8 *)PTR_PTR_04bd4d28;
  local_64 = param_3[1] + 3 & 0x1fffc;
  if (local_64 == 0) {
    local_c0 = 0;
    local_b4 = 0x80000000;
LAB_00674028:
    lVar3 = 0;
    uVar5 = 0x80000000;
  }
  else {
    local_c0 = FUN_00421ed0(uVar7,0x30,&local_64);
    local_b4 = local_64;
    local_64 = param_3[1] + 3 & 0x1fffc;
    if (local_64 == 0) goto LAB_00674028;
    lVar3 = FUN_00421ed0(uVar7,0x30,&local_64);
    uVar5 = local_64;
  }
  local_64 = param_3[2] + 3 & 0x1fffc;
  if (local_64 == 0) {
    local_c8 = 0;
    uVar9 = 0x80000000;
    local_64 = 0;
  }
  else {
    local_c8 = FUN_00421ed0(uVar7,4,&local_64);
    uVar9 = local_64;
    local_64 = param_3[2] + 3 & 0x1fffc;
    if (local_64 != 0) {
      lVar4 = FUN_00421ed0(uVar7,4,&local_64);
      uVar8 = local_64;
      goto LAB_006740b4;
    }
  }
  lVar4 = 0;
  uVar8 = 0x80000000;
LAB_006740b4:
  uVar10 = CONCAT44(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 4));
  uVar12 = NEON_frecpe(uVar10,4);
  uVar15 = NEON_frecps(uVar10,uVar12,4);
  fVar11 = (float)uVar12 * (float)uVar15;
  fVar14 = (float)((ulong)uVar12 >> 0x20) * (float)((ulong)uVar15 >> 0x20);
  uVar10 = NEON_frecps(uVar10,CONCAT44(fVar14,fVar11),4);
  iVar1 = param_3[3] - 1;
  uVar2 = param_3[3] - 2;
  uVar12 = NEON_scvtf(CONCAT44(iVar1,iVar1),4);
  fVar11 = fVar11 * (float)uVar10 * (float)uVar12 * param_1;
  uVar6 = (uint)fVar11;
  if (uVar2 < uVar6) {
    uVar10 = 0x3f800000;
    uVar6 = uVar2;
  }
  else {
    uVar15 = NEON_scvtf(CONCAT44(uVar6,uVar6),4);
    fVar11 = fVar11 - (float)uVar15;
    fVar14 = fVar14 * (float)((ulong)uVar10 >> 0x20) * (float)((ulong)uVar12 >> 0x20) * param_1 -
             (float)((ulong)uVar15 >> 0x20);
    uVar13 = *(ulong *)(PTR_DAT_04bd4c80 + 0x60);
    uVar10 = NEON_fmax(*(undefined8 *)(PTR_DAT_04bd4c80 + 0x50),
                       uVar13 ^ (uVar13 ^ CONCAT44(fVar14,fVar11)) &
                                CONCAT44(-(uint)(fVar14 < (float)(uVar13 >> 0x20)),
                                         -(uint)(fVar11 < (float)uVar13)),4);
  }
  FUN_00674240(uVar10,param_2,param_3,
               (long)param_3 + (ulong)*param_3 + (long)(int)uVar6 * (ulong)param_3[0xe],
               (long)param_3 + (ulong)*param_3 + (long)(int)(uVar6 + 1) * (ulong)param_3[0xe],
               param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,local_c0,lVar3,
               local_c8,lVar4,param_12 & 1);
  if ((lVar4 != 0) && (-1 < (int)uVar8)) {
    FUN_00421f90(uVar7,lVar4,4,uVar8 & 0x3fffffff);
  }
  if ((local_c8 != 0) && (-1 < (int)uVar9)) {
    FUN_00421f90(uVar7,local_c8,4,uVar9 & 0x3fffffff);
  }
  if ((lVar3 != 0) && (-1 < (int)uVar5)) {
    FUN_00421f90(uVar7,lVar3,0x30,uVar5 & 0x3fffffff);
  }
  if ((local_c0 != 0) && (-1 < (int)local_b4)) {
    FUN_00421f90(uVar7,local_c0,0x30,local_b4 & 0x3fffffff);
  }
  return;
}

