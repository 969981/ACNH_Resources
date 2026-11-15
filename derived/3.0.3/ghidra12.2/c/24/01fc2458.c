
void FUN_01fc2458(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 local_1e8 [17];
  undefined4 local_1a4;
  undefined4 local_188;
  undefined4 local_184;
  undefined1 local_180;
  undefined1 local_17f;
  int local_fc;
  char *local_d0;
  int local_c8;
  
  *(undefined4 *)(param_1 + 0xaf8c) = 10;
  *(uint *)(param_1 + 0xafb0) = *(uint *)(param_1 + 0xafb0) | 0x40;
  FUN_01e63f1c(local_1e8);
  local_184 = 1;
  local_180 = 1;
  if (local_d0 != "NpcLookUp") {
    iVar1 = 9;
    if (local_c8 < 10) {
      iVar1 = local_c8 + -1;
    }
    memcpy(local_d0,"NpcLookUp",(long)iVar1);
    local_d0[iVar1] = '\0';
  }
  piVar4 = (int *)(**(code **)(*(long *)(DAT_053e0208 + 0x17b98) + 0xf0))();
  puVar5 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar3 = puVar5[3];
  uVar2 = *puVar5 ^ *puVar5 << 0xb;
  *puVar5 = puVar5[1];
  puVar5[1] = puVar5[2];
  uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
  puVar5[2] = uVar3;
  puVar5[3] = uVar2;
  local_17f = 1;
  local_188 = 2;
  local_fc = (int)((float)*piVar4 +
                  ((float)(uVar2 >> 9 | 0x3f800000) + -1.0) * (float)(piVar4[1] - *piVar4)) * 0x1e;
  local_1a4 = 0x80000000;
  local_1e8[0] = 0x3f;
  FUN_01fb1020(param_1,local_1e8,0x1e);
  return;
}

