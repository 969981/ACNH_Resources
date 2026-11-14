
bool FUN_01a23d74(uint *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  undefined **local_50;
  undefined8 uStack_48;
  undefined **local_40;
  undefined8 local_38;
  
  if (param_2 == 0) {
    return false;
  }
  uVar3 = *param_1 - (*param_1 >> 1 & 0x55555555);
  uVar4 = param_1[1] - (param_1[1] >> 1 & 0x55555555);
  uVar5 = param_1[3] - (param_1[3] >> 1 & 0x55555555);
  uVar6 = param_1[2] - (param_1[2] >> 1 & 0x55555555);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar2 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
  uVar3 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
  uVar2 = uVar2 + (uVar2 >> 8);
  uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
  uVar4 = uVar4 + (uVar4 >> 8);
  uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
  uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
  uVar6 = param_1[4] - (param_1[4] >> 1 & 0x55555555);
  uVar3 = uVar3 + (uVar3 >> 8);
  uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
  uVar5 = uVar5 + (uVar5 >> 8);
  uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
  uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
  uVar6 = uVar6 + (uVar6 >> 8);
  iVar1 = (uVar4 + (uVar4 >> 0x10) & 0x3f) + (uVar2 + (uVar2 >> 0x10) & 0x3f) +
          (uVar3 + (uVar3 >> 0x10) & 0x3f) + (uVar5 + (uVar5 >> 0x10) & 0x3f) +
          (uVar6 + (uVar6 >> 0x10) & 0x3f);
  if (iVar1 != 0) {
    puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar4 = puVar8[3];
    uVar3 = *puVar8 ^ *puVar8 << 0xb;
    *puVar8 = puVar8[1];
    puVar8[1] = puVar8[2];
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    puVar8[2] = uVar4;
    puVar8[3] = uVar3;
    iVar7 = FUN_01a23f80(param_1,(int)((ulong)uVar3 * (ulong)(iVar1 - 1) >> 0x20) + 1);
    *(int *)(param_2 + 8) = iVar7 % 0xe;
    *(int *)(param_2 + 0xc) = iVar7 / 0xe;
    local_40 = &PTR_FUN_048f9730;
    local_38 = 0;
    local_50 = &PTR_FUN_048f9730;
    uStack_48 = 0;
    FUN_01a1ff10(&local_40,&local_50);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + (int)local_38;
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + local_38._4_4_;
  }
  return iVar1 != 0;
}

