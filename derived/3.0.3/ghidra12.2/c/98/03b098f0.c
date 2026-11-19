
void FUN_03b098f0(long param_1,long param_2,undefined4 *param_3,uint param_4,undefined4 param_5,
                 undefined1 (*param_6) [12],uint param_7)

{
  undefined4 uVar1;
  undefined1 auVar2 [12];
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_340;
  ulong uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 local_2e0;
  ulong uStack_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 local_2c0;
  ulong uStack_2b8;
  int local_2b0 [148];
  
  puVar3 = PTR_DAT_04bb3508;
  if ((*(byte *)(param_1 + 0x39c) >> 1 & 1) != 0) {
    return;
  }
  uVar8 = (ulong)param_4;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar5 == 0) {
    local_2b0[0] = nn::os::GetCurrentCoreNumber();
  }
  else {
    local_2b0[0] = (int)lVar5 + -1;
  }
  if (*(char *)(param_1 + local_2b0[0] + 0x194c) == '\0') {
    *(undefined4 *)(param_1 + (long)local_2b0[0] * 4 + 0x1940) = 2;
    lVar5 = (long)local_2b0[0];
    uVar6 = nn::os::GetSystemTick();
    *(undefined8 *)(param_1 + lVar5 * 8 + 0x1928) = uVar6;
  }
  if ((*(char *)(param_2 + 0xf9) != '\x01') ||
     (*(uint *)param_6[0x10] != (uint)*(byte *)(param_2 + 0xfa))) {
    *(undefined1 *)(param_2 + 0xf9) = 1;
  }
  lVar9 = *(long *)(param_1 + 0x18);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (lVar5 == 0) {
    local_2b0[0] = nn::os::GetCurrentCoreNumber();
  }
  else {
    local_2b0[0] = (int)lVar5 + -1;
  }
  if (local_2b0[0] < *(int *)(lVar9 + 0x1c0)) {
    *(int *)(*(long *)(lVar9 + 0x1c8) + (long)local_2b0[0] * 0x7d8) =
         1 << (ulong)(*(uint *)(param_6[0xe] + 8) & 0x1f);
  }
  if (*(int *)(param_1 + 0x3d8) == -1) {
    if (*(int *)(param_6[0xf] + 4) == 0) goto LAB_03b09a94;
    lVar5 = *(long *)(param_1 + 0x18);
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
    if (lVar9 == 0) {
      local_2b0[0] = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_2b0[0] = (int)lVar9 + -1;
    }
    iVar4 = *(int *)(param_6[0xf] + 4);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x18);
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
    if (lVar9 == 0) {
      local_2b0[0] = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_2b0[0] = (int)lVar9 + -1;
    }
    iVar4 = *(int *)(param_1 + 0x3d8);
  }
  if ((iVar4 < 3) && (local_2b0[0] < *(int *)(lVar5 + 0x1c0))) {
    *(int *)(*(long *)(lVar5 + 0x1c8) + (long)local_2b0[0] * 0x7d8 + 8) = iVar4;
  }
LAB_03b09a94:
  if (*(code **)(param_1 + 0x3a0) != (code *)0x0) {
    (**(code **)(param_1 + 0x3a0))(*(undefined8 *)(param_1 + 0x18),param_6);
  }
  auVar2 = *(undefined1 (*) [12])(param_6[1] + 4);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  local_2f0 = SUB124(*param_6,0);
  uStack_2e8 = (undefined4)*(ulong *)(param_6[2] + 8);
  uStack_2d8 = *(ulong *)(param_6[2] + 8) >> 0x20;
  uStack_2ec = auVar2._0_4_;
  local_2d0 = SUB124(*param_6,8);
  uStack_2c8 = (undefined4)*(ulong *)(param_6[3] + 4);
  uStack_2b8 = *(ulong *)(param_6[3] + 4) >> 0x20;
  uStack_2cc = SUB124(*(undefined1 (*) [12])(param_6[1] + 4),8);
  uStack_2e4 = 0;
  uStack_2c4 = 0;
  local_2e0 = CONCAT44(auVar2._4_4_,SUB124(*param_6,4));
  local_2c0 = CONCAT44((int)((ulong)*(undefined8 *)param_6[2] >> 0x20),
                       (int)((ulong)*(undefined8 *)(*param_6 + 8) >> 0x20));
  local_340 = *(undefined8 *)(param_6[9] + 4);
  uStack_328 = CONCAT44(*(undefined4 *)param_6[8],*(undefined4 *)(param_6[6] + 8));
  local_330 = CONCAT44(*(undefined4 *)(param_6[5] + 4),*(undefined4 *)param_6[4]);
  uStack_318 = CONCAT44(*(undefined4 *)(param_6[8] + 4),*(undefined4 *)param_6[7]);
  uStack_320 = CONCAT44(*(undefined4 *)(param_6[5] + 8),*(undefined4 *)(param_6[4] + 4));
  uStack_308 = CONCAT44(*(undefined4 *)(param_6[8] + 8),*(undefined4 *)(param_6[7] + 4));
  local_310 = CONCAT44(*(undefined4 *)param_6[6],*(undefined4 *)(param_6[4] + 8));
  uStack_2f8 = CONCAT44(*(undefined4 *)param_6[9],*(undefined4 *)(param_6[7] + 8));
  uStack_300 = CONCAT44(*(undefined4 *)(param_6[6] + 4),*(undefined4 *)param_6[5]);
  uStack_338 = (ulong)*(uint *)param_6[10];
  FUN_03b0b3c8(*(undefined4 *)(param_6[10] + 4),*(undefined4 *)(param_6[10] + 8),
               *(undefined4 *)(param_6[0xb] + 4),*(undefined4 *)PTR_DAT_04bcf020,local_2b0,
               &local_2f0,&local_330,&local_340);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (lVar5 == 0) {
    iVar4 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar4 = (int)lVar5 + -1;
  }
  FUN_0033dea4(uVar6,iVar4,param_2 + 8,local_2b0);
  if (0 < (int)param_4) {
    do {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (lVar5 == 0) {
        local_2b0[0] = nn::os::GetCurrentCoreNumber();
      }
      else {
        local_2b0[0] = (int)lVar5 + -1;
      }
      FUN_0033e290(uVar6,local_2b0[0],*param_3,param_5);
      uVar8 = uVar8 - 1;
      param_3 = param_3 + 1;
    } while (uVar8 != 0);
  }
  if ((param_7 & 1) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
    if (lVar5 == 0) {
      local_2b0[0] = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_2b0[0] = (int)lVar5 + -1;
    }
    FUN_0033e290(uVar6,local_2b0[0],0x3f,param_5);
  }
  uVar1 = *(undefined4 *)puVar3;
  *(undefined1 **)(*(long *)(param_1 + 0x18) + 0x15c8) = &LAB_03b09d10;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  lVar5 = nn::os::GetTlsValue(uVar1);
  if (lVar5 == 0) {
    local_2b0[0] = nn::os::GetCurrentCoreNumber();
  }
  else {
    local_2b0[0] = (int)lVar5 + -1;
  }
  FUN_0033e460(uVar6,local_2b0[0],param_2 + 8,1,param_6);
  lVar9 = *(long *)(param_1 + 0x18);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (lVar5 == 0) {
    local_2b0[0] = nn::os::GetCurrentCoreNumber();
  }
  else {
    local_2b0[0] = (int)lVar5 + -1;
  }
  if (local_2b0[0] < *(int *)(lVar9 + 0x1c0)) {
    *(undefined4 *)(*(long *)(lVar9 + 0x1c8) + (long)local_2b0[0] * 0x7d8 + 8) = 0;
  }
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (lVar5 == 0) {
    local_2b0[0] = nn::os::GetCurrentCoreNumber();
  }
  else {
    local_2b0[0] = (int)lVar5 + -1;
  }
  if (*(char *)(param_1 + local_2b0[0] + 0x194c) == '\0') {
    lVar7 = (long)local_2b0[0];
    lVar9 = nn::os::GetSystemTick();
    lVar5 = param_1 + (long)*(int *)(param_1 + 0x1940 + (long)local_2b0[0] * 4) * 8;
    *(long *)(lVar5 + 0x18f8) =
         (lVar9 - *(long *)(param_1 + lVar7 * 8 + 0x1928)) + *(long *)(lVar5 + 0x18f8);
    *(undefined4 *)(param_1 + 0x1940 + (long)local_2b0[0] * 4) = 0xffffffff;
  }
  return;
}

