
void FUN_00e84f94(long param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 local_104;
  uint local_fc;
  undefined4 uStack_f8;
  uint local_f4;
  undefined4 local_f0;
  undefined *local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined1 local_d4 [127];
  undefined1 local_55;
  undefined4 local_50;
  undefined2 local_4c;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_04bb27c0;
  local_104 = 0x3f800000;
  local_d8 = 0x80;
  puStack_e0 = local_d4;
  local_55 = 0;
  local_d4[0] = 0;
  local_108 = *(undefined4 *)(param_1 + 0xe8);
  local_48 = 0;
  local_e8 = PTR_DAT_04bb2d88 + 0x10;
  local_4c = 0;
  local_f0 = 0;
  local_50 = 7;
  uStack_110 = *(undefined8 *)(param_1 + 0xe0);
  local_118 = 0xe800000000;
  uStack_f8 = *(undefined4 *)(param_1 + 0xfc);
  bVar2 = *(byte *)(param_1 + 0xf8);
  if (bVar2 == 0) {
    local_f4 = 0xffffffff;
  }
  else {
    uVar4 = bVar2 - 1 & (bVar2 ^ 0xffffffff);
    uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
    uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
    uVar4 = uVar4 + (uVar4 >> 8);
    local_f4 = uVar4 + (uVar4 >> 0x10) & 0x3f;
  }
  local_fc = param_3;
  uVar4 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_118,0,0);
  lVar8 = *(long *)puVar3;
  *(uint *)(param_1 + 0xb4) = uVar4;
  if (lVar8 == 0) goto LAB_00e85194;
  if ((((uVar4 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + (ulong)(uVar4 >> 0x14) * 8),
       plVar9 == (long *)0x0)) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar9 + 0x46) != uVar4)) {
    plVar9 = (long *)0x0;
  }
  if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar4 = 1;
    }
    else {
      uVar4 = *(uint *)(lVar8 + 0x5e8);
      if (4 < uVar4) goto LAB_00e85120;
      uVar4 = 0x1aU >> (ulong)(uVar4 & 0x1f) & 1;
    }
  }
  else {
LAB_00e85120:
    uVar4 = 0;
  }
  if (plVar9 != (long *)0x0) {
    if (((*PTR_DAT_04bb97b0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb97b0), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb97a8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb97b0);
    }
    uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb97a8);
    if ((uVar4 & uVar6) == 1) {
      *(undefined4 *)((long)plVar9 + 0x274) = *(undefined4 *)(param_1 + 0xe0);
      *(undefined4 *)(plVar9 + 0x4f) = *(undefined4 *)(param_1 + 0xe4);
      *(undefined4 *)((long)plVar9 + 0x27c) = *(undefined4 *)(param_1 + 0xe8);
      *(undefined4 *)(plVar9 + 0x50) = *param_2;
      *(undefined4 *)((long)plVar9 + 0x284) = param_2[1];
    }
  }
LAB_00e85194:
  puVar1 = (undefined4 *)(*(long *)PTR_DAT_04bb5008 + 0x266c) + param_3;
  if (3 < param_3) {
    puVar1 = (undefined4 *)(*(long *)PTR_DAT_04bb5008 + 0x266c);
  }
  *puVar1 = *(undefined4 *)(param_1 + 0xb4);
  return;
}

