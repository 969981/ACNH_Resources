
uint FUN_023014a4(float param_1,long param_2,byte *param_3,float *param_4,undefined4 param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_b4;
  float local_ac;
  float fStack_a8;
  byte local_a4 [4];
  undefined1 local_a0;
  undefined1 auStack_9c [10];
  undefined1 local_92;
  undefined2 local_90 [4];
  undefined **local_88;
  undefined8 *puStack_80;
  int local_78;
  int iStack_74;
  undefined8 *local_70;
  int local_68;
  int iStack_64;
  undefined2 local_60;
  undefined4 local_5e;
  undefined1 local_5a;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined2 local_44;
  
  local_ac = param_4[2];
  local_a4[1] = 1;
  local_a4[2] = 1;
  local_a4[0] = *param_3;
  local_a0 = 1;
  local_b4 = *(undefined8 *)param_4;
  local_a4[3] = (byte)param_5;
  if (7 < local_a4[0]) {
    local_a4[0] = 0xff;
  }
  fStack_a8 = param_1;
  uVar6 = FUN_0252b6b0(param_1,&local_b4,local_a4,1,1,param_5,1);
  puVar4 = PTR_DAT_04bb6298;
  if ((uVar6 & 1) == 0) {
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    bVar1 = *param_3;
    fVar8 = *param_4 - param_1;
    fVar9 = param_4[2] - param_1;
    fVar7 = param_1 + *param_4;
    param_1 = param_1 + param_4[2];
    local_68 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
    iStack_64 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
    iVar2 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
    iVar3 = (int)((float)(int)param_1 / 5.0) - (uint)(param_1 < 0.0);
    local_78 = local_68;
    if (iVar2 <= local_68) {
      local_78 = iVar2;
    }
    if (local_68 <= iVar2) {
      local_68 = iVar2;
    }
    iStack_74 = iStack_64;
    if (iVar3 <= iStack_64) {
      iStack_74 = iVar3;
    }
    if (iStack_64 <= iVar3) {
      iStack_64 = iVar3;
    }
    uVar5 = (uint)bVar1;
    if (7 < uVar5) {
      uVar5 = 0xffffffff;
    }
    *(uint *)(param_2 + 0xc) = uVar5;
    local_90[0] = *(undefined2 *)puVar4;
    if (bVar1 < 8) {
      *(byte *)(param_2 + 0x10) = bVar1;
    }
    *(undefined1 *)(param_2 + 0x11) = 1;
    local_58 = 0xffffffffffffffff;
    local_5a = 0;
    local_50 = 0;
    local_5e = 0x100;
    local_70 = &DAT_048f9750;
    local_88 = &PTR_FUN_0498d548;
    puStack_80 = &DAT_048f9750;
    local_4c = 0x41200000;
    local_44 = 0xff00;
    local_60 = 0xff00;
    if (*(int *)(param_2 + 8) == 0x15) {
      local_60 = 0x1400;
    }
    local_92 = 2;
    uVar5 = FUN_023016c0(param_2,local_90,auStack_9c);
  }
  else {
    uVar5 = 0;
  }
  return uVar5 & 1;
}

