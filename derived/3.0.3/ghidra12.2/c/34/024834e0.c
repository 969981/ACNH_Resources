
void FUN_024834e0(long param_1,uint *param_2)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  undefined *puVar6;
  undefined2 uVar7;
  undefined8 local_40;
  char *pcStack_38;
  byte local_18 [4];
  undefined4 local_14;
  
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  uVar4 = *param_2;
  uVar3 = uVar4;
  if (7 < uVar4) {
    uVar3 = 0xffffffff;
  }
  *(char *)(param_1 + 0x1980) = (char)uVar3;
  *(char *)(param_1 + 0x1982) = (char)param_2[1];
  *(short *)(param_1 + 0x1985) = (short)param_2[3];
  if (param_2[2] < 2) {
    if (uVar4 < 8) {
      local_40 = (undefined *)((ulong)local_40._4_4_ << 0x20);
    }
    else {
      local_40 = (undefined *)CONCAT44(local_40._4_4_,1);
    }
  }
  else {
    local_40 = (undefined *)CONCAT44(local_40._4_4_,param_2[2]);
  }
  *(char *)(param_1 + 0x1981) = (char)local_40;
  puVar6 = PTR_DAT_04bb6298;
  local_14 = *(undefined4 *)(param_1 + 0x230);
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 != -1) {
    local_40 = (undefined *)CONCAT44(local_40._4_4_,1);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 1 & 1) != 0) {
      uVar7 = 0;
      goto LAB_02483620;
    }
  }
  FUN_016f742c(&local_40,&local_14,0);
  uVar7 = local_40._2_2_;
LAB_02483620:
  *(undefined2 *)(param_1 + 0x1983) = uVar7;
  local_40 = (undefined *)CONCAT44(local_40._4_4_,0x82);
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
  FUN_03ebb160(lVar1,0x82);
  if ((*(int *)(param_1 + 0x178) == 0) && (sVar5 = *(short *)puVar6, sVar5 != -1)) {
    local_18[0] = *(byte *)(param_1 + 0x1ee8);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 1 & 1) != 0) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "TransformFieldCount";
      if (7 < local_18[0]) {
        local_18[0] = 0xff;
      }
      local_14 = FUN_02582fe0(local_18);
      FUN_021294b0(&local_40,1,&local_14);
    }
  }
  return;
}

