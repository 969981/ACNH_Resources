
void FUN_032e0a00(long param_1,long param_2,long *param_3,undefined2 *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  float local_164;
  undefined8 local_160;
  undefined8 uStack_158;
  long local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined *local_120;
  undefined8 uStack_118;
  undefined *local_110;
  undefined2 *local_108;
  undefined4 local_100;
  undefined2 local_fc [31];
  undefined2 local_be;
  undefined *local_b8;
  undefined2 *local_b0;
  undefined4 local_a8;
  undefined2 local_a4 [31];
  undefined2 local_66;
  
  param_3[1] = (long)param_4;
  if (param_1 != 0) {
    return;
  }
  uVar1 = *(ushort *)(param_2 + 8);
  if ((0xffffffc1 < uVar1 - 0x40) && (0xffffffc1 < *(ushort *)(param_2 + 10) - 0x40)) {
    uVar2 = *(ushort *)(param_2 + 10) >> 1;
    uVar6 = (ulong)uVar2;
    local_66 = 0;
    local_a8 = 0x20;
    local_a4[0] = 0;
    local_b8 = &DAT_04a3a388;
    local_b0 = local_a4;
    if (local_a4 != (undefined2 *)(param_2 + 0xc)) {
      memcpy(local_a4,(undefined2 *)(param_2 + 0xc),uVar6 * 2);
      local_a4[uVar6] = 0;
    }
    uVar7 = (ulong)(uVar1 >> 1);
    local_100 = 0x20;
    local_be = 0;
    local_fc[0] = 0;
    local_110 = &DAT_04a3a388;
    local_108 = local_fc;
    if (local_fc != param_4) {
      memcpy(local_fc,param_4,uVar7 * 2);
      local_fc[uVar7] = 0;
    }
    puVar5 = (undefined8 *)*param_3;
    local_178 = *puVar5;
    local_160 = puVar5[3];
    uStack_158 = puVar5[4];
    local_170 = (undefined4)puVar5[1];
    uStack_16c = (undefined4)((ulong)puVar5[1] >> 0x20);
    uStack_168 = (undefined4)puVar5[2];
    local_164 = (float)((ulong)puVar5[2] >> 0x20);
    local_140 = puVar5[7];
    local_138 = puVar5[8];
    local_150 = puVar5[5];
    uStack_148 = puVar5[6];
    local_120 = (undefined *)puVar5[0xb];
    uStack_118 = puVar5[0xc];
    local_130 = puVar5[9];
    local_128 = puVar5[10];
    lVar4 = (**(code **)(*DAT_0572ebd8 + 0x60))(DAT_0572ebd8,3);
    if (lVar4 != 0) {
      local_150 = lVar4;
    }
    local_138 = 0;
    local_128 = CONCAT44(local_128._4_4_,0x300);
    uStack_16c = 0x3f800000;
    uStack_168 = 0x3f800000;
    lVar4 = *param_3;
    local_120 = &DAT_04c62e58;
    (**(code **)(local_110 + 0x18))(&local_110);
    fVar8 = (float)FUN_00358c40(lVar4,local_108,uVar7);
    (**(code **)(local_b8 + 0x18))(&local_b8);
    fVar9 = (float)FUN_00358c40(&local_178,local_b0,uVar6);
    fVar8 = fVar8 - fVar9;
    if (fVar8 <= 0.0) {
      fVar8 = fVar8 * 0.5;
    }
    else {
      fVar8 = fVar8 / (float)(ushort)(uVar2 + 1);
      local_138 = CONCAT44(local_138._4_4_,fVar8 + 0.0);
    }
    local_164 = fVar8 + local_164;
    fVar9 = *(float *)(*param_3 + 0xc);
    iVar3 = (**(code **)(**(long **)(*param_3 + 0x28) + 0xc0))();
    local_160 = CONCAT44(local_160._4_4_,(float)local_160 + (6.0 - fVar9 * (float)iVar3));
    (**(code **)(local_b8 + 0x18))(&local_b8);
    FUN_003597ec(&local_178,local_b0,uVar6);
    thunk_FUN_0035008c(&local_178);
  }
  return;
}

