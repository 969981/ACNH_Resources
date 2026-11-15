
void FUN_01fb6d80(long param_1,float *param_2,float *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  undefined4 local_208 [8];
  long local_1e8;
  undefined8 local_1e0;
  float local_1d8;
  float local_1d0;
  undefined4 uStack_1cc;
  float local_1c8;
  undefined1 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined1 local_19f;
  int local_19c;
  undefined8 local_168;
  float local_160;
  byte local_130;
  int local_11c;
  char *local_f0;
  int local_e8;
  undefined4 local_64;
  
  *(undefined4 *)(param_1 + 0xaf8c) = 8;
  *(undefined1 *)(param_1 + 0x7878) = 1;
  FUN_01e63f1c(local_208);
  local_208[0] = 0x4d;
  if (local_f0 != "CommonStandWait") {
    iVar2 = 0xf;
    if (local_e8 < 0x10) {
      iVar2 = local_e8 + -1;
    }
    memcpy(local_f0,"CommonStandWait",(long)iVar2);
    local_f0[iVar2] = '\0';
  }
  local_1d8 = param_2[2];
  local_1b0 = 1;
  local_1e0 = *(undefined8 *)param_2;
  local_1d0 = *param_3;
  local_1c8 = param_3[2];
  uStack_1cc = 0x41340000;
  local_1ac = 0x10000012c;
  piVar5 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x17b60) + 0xf0))();
  iVar2 = *piVar5;
  iVar3 = piVar5[1];
  puVar6 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar4 = puVar6[3];
  uVar1 = *puVar6 ^ *puVar6 << 0xb;
  *puVar6 = puVar6[1];
  puVar6[1] = puVar6[2];
  uVar1 = uVar1 >> 8 ^ uVar4 >> 0x13 ^ uVar1 ^ uVar4;
  puVar6[2] = uVar4;
  puVar6[3] = uVar1;
  local_1a4 = 1;
  local_19f = 1;
  local_64 = 0;
  local_168 = CONCAT44(uStack_1cc,local_1d0);
  fVar9 = *param_2;
  local_160 = local_1c8;
  fVar8 = *param_3;
  *(long *)(param_1 + 0x12200) = param_1;
  *(undefined8 *)(param_1 + 0x12208) = 0x600;
  *(undefined8 *)(param_1 + 0x12210) = 1;
  bVar7 = 8;
  if (fVar8 <= fVar9) {
    bVar7 = 2;
  }
  local_130 = bVar7 | local_130;
  local_19c = (int)((float)iVar2 +
                   ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) * (float)(iVar3 - iVar2)) * 0x1e;
  local_1e8 = param_1 + 0x121f8;
  local_11c = local_19c;
  FUN_01fb1020(param_1,local_208,0x1e);
  return;
}

