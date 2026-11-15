
void FUN_0247c71c(long param_1)

{
  long lVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_98;
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 local_74;
  
  sVar2 = *(short *)(param_1 + 0x1904);
  fVar11 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  fVar8 = (float)*(int *)(param_1 + 0x190a) * 0.001;
  fVar12 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  fVar9 = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  fVar10 = (float)*(int *)(param_1 + 0x1910) * 0.001;
  local_80 = FUN_006f0400(fVar11 - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                          fVar12 - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  uVar3 = (uint)local_80 >> 0x10;
  local_98 = CONCAT44(fVar9,fVar8);
  uStack_7c = (uint)*(byte *)(param_1 + 0x1916);
  if (4 < uStack_7c) {
    uStack_7c = 0;
  }
  local_90 = fVar10;
  local_8c = fVar11;
  local_88 = (float)(int)sVar2 * 0.25;
  fStack_84 = fVar12;
  FUN_023288a0(param_1,&local_98);
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  local_74 = 0;
  local_98 = local_98 & 0xffffffff00000000;
  if (((((puVar7[0x227] != 0) &&
        (uVar6 = FUN_03850368(puVar7[0x227],0), uVar4 = local_74, (uVar6 & 1) == 0)) &&
       (puVar7[0x227] != 0)) &&
      ((uVar6 = FUN_03850368(puVar7[0x227],local_74), (uVar6 & 1) == 0 &&
       (uVar6 = FUN_0384fca4(puVar7[0x227],uVar4), (uVar6 & 1) == 0)))) &&
     (*(uint *)(param_1 + 0x1c04) < 0xb)) {
    return;
  }
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  local_74 = 0;
  local_98 = local_98 & 0xffffffff00000000;
  if (((puVar7[0x227] != 0) &&
      (uVar6 = FUN_03850368(puVar7[0x227],0), uVar4 = local_74, (uVar6 & 1) == 0)) &&
     ((puVar7[0x227] != 0 && (uVar6 = FUN_03850368(puVar7[0x227],local_74), (uVar6 & 1) == 0)))) {
    FUN_0384fca4(puVar7[0x227],uVar4);
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    if (puVar7 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar7 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar7 = &DAT_05240280;
      }
    }
    FUN_017029bc(puVar7,&DAT_054d08b8,6,0,0);
    return;
  }
  if (*(short *)(param_1 + 0x7c8) != 0x45) {
    local_90 = 0.0;
    local_98 = 0;
    local_8c = (float)CONCAT31(local_8c._1_3_,1);
    local_88 = 0.0;
    switch(*(undefined4 *)(param_1 + 0x7cc)) {
    case 0:
      local_90 = *(float *)(param_1 + 0x7c4);
      local_8c = (float)((uint)local_8c._1_3_ << 8);
      local_98 = *(undefined8 *)(param_1 + 0x7bc);
      break;
    case 1:
      local_90 = *(float *)(param_1 + 0x7c4);
      local_98 = *(undefined8 *)(param_1 + 0x7bc);
      local_8c = (float)CONCAT31(local_8c._1_3_,1);
      break;
    default:
      FUN_024735ac(param_1);
      return;
    case 3:
      FUN_0247430c(param_1,param_1 + 0x21a8);
      return;
    }
    local_88 = 0.0;
    FUN_02473fc8(param_1,&local_98);
    return;
  }
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  iVar5 = (int)((float)(int)*(short *)(param_1 + 0x1904) * 0.25 * 4.0);
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  if (0x7ffe < iVar5) {
    iVar5 = 0x7fff;
  }
  if (iVar5 < -0x7fff) {
    iVar5 = -0x8000;
  }
  *(short *)(param_1 + 0x1984) = (short)iVar5;
  *(int *)(param_1 + 0x1980) = (int)((float)*(int *)(param_1 + 0x1900) * 0.001 * 999.99994);
  *(int *)(param_1 + 0x1986) = (int)((float)*(int *)(param_1 + 0x1906) * 0.001 * 999.99994);
  *(int *)(param_1 + 0x198a) = (int)(fVar8 * 999.99994);
  iVar5 = (int)(fVar9 * 4.0);
  if (0x7ffe < iVar5) {
    iVar5 = 0x7fff;
  }
  if (iVar5 < -0x7fff) {
    iVar5 = -0x8000;
  }
  *(short *)(param_1 + 0x198e) = (short)iVar5;
  *(int *)(param_1 + 0x1990) = (int)(fVar10 * 999.99994);
  *(short *)(param_1 + 0x1994) = (short)uVar3;
  local_98 = CONCAT44(local_98._4_4_,0x45);
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  lVar1 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar1 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar1,0x45);
  return;
}

