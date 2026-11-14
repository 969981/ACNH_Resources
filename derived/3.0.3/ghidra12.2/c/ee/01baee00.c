
void FUN_01baee00(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  undefined4 local_154;
  undefined *local_150;
  char *pcStack_148;
  undefined *local_140;
  void *local_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined *local_110;
  undefined1 *local_108;
  undefined4 local_100;
  undefined1 local_fc [63];
  undefined1 local_bd;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  void *local_60;
  undefined4 local_54;
  
  puVar2 = PTR_DAT_04bb2e00;
  puVar1 = PTR_DAT_04bb2698;
  local_130 = 0;
  local_12c = 0;
  local_128 = 0xffffffff;
  uStack_120 = 0xffffffff00000000;
  local_108 = local_fc;
  local_118 = 0xffffffff;
  plVar5 = *(long **)PTR_DAT_04bc08b8;
  local_100 = 0x40;
  local_bd = 0;
  local_fc[0] = 0;
  local_110 = PTR_DAT_04bb2bc0 + 0x10;
  local_a8 = 0x40;
  local_65 = 0;
  local_a4[0] = 0;
  local_b0 = local_a4;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  local_140 = PTR_DAT_04bb2e00 + 0x10;
  local_60 = (void *)0x0;
  local_138 = (void *)0x0;
  local_b8 = local_110;
  local_54 = param_2;
  if (lVar9 == 0) {
    pvVar7 = malloc(0x1000);
    pvVar3 = local_138;
  }
  else {
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      pvVar3 = local_138;
      if (plVar5 == (long *)0x0) goto LAB_01baef14;
    }
    pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x1000,8);
    pvVar3 = local_138;
  }
  local_138 = pvVar7;
  if (local_138 != (void *)0x0) {
    local_130 = 0x800;
    local_60 = local_138;
    (**(code **)(local_140 + 0x38))(&local_140);
    pvVar3 = local_138;
  }
LAB_01baef14:
  local_138 = pvVar3;
  local_150 = PTR_DAT_04bb2020 + 0x10;
  pcStack_148 = "STR_Constellation";
  FUN_006f5290(&local_140,&local_150,local_54);
  if (((*PTR_DAT_04bc0a88 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar4 != 0))
  {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
    uVar8 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar8 * 4) == 0x73) goto LAB_01baef8c;
      uVar8 = uVar8 + 1;
    } while (*(uint *)PTR_DAT_04bc0a80 != uVar8);
  }
  uVar8 = 0;
LAB_01baef8c:
  local_154 = (undefined4)uVar8;
  FUN_01bae480(param_1,&local_140,param_3,&local_154,8);
  local_140 = puVar2 + 0x10;
  if (local_60 != (void *)0x0) {
    local_138 = (void *)0x0;
    local_130 = 0;
    local_12c = 0;
    local_118 = 0xffffffff;
    local_128 = 0xffffffff;
    uStack_120 = 0xffffffff00000000;
    *local_108 = 0;
    *local_b0 = 0;
    pvVar3 = local_60;
    if (local_60 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(local_60);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar1,local_60);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar3);
        }
      }
    }
  }
  return;
}

