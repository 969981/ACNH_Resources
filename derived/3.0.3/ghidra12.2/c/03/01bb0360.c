
void FUN_01bb0360(undefined8 param_1,uint param_2,undefined4 param_3)

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
  undefined4 local_15c;
  undefined *local_158;
  char *pcStack_150;
  undefined *local_148;
  void *local_140;
  undefined4 local_138;
  undefined1 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined *local_118;
  undefined1 *local_110;
  undefined4 local_108;
  undefined1 local_104 [63];
  undefined1 local_c5;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  void *local_68;
  
  puVar2 = PTR_DAT_04bb2e00;
  puVar1 = PTR_DAT_04bb2698;
  local_138 = 0;
  local_134 = 0;
  local_130 = 0xffffffff;
  uStack_128 = 0xffffffff00000000;
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  local_120 = 0xffffffff;
  if (0x1e < param_2) {
    param_2 = 0x1f;
  }
  local_108 = 0x40;
  local_c5 = 0;
  plVar5 = *(long **)PTR_DAT_04bc08b8;
  local_104[0] = 0;
  local_110 = local_104;
  local_b0 = 0x40;
  local_6d = 0;
  local_118 = PTR_DAT_04bb2bc0 + 0x10;
  local_ac[0] = 0;
  local_b8 = local_ac;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  local_148 = PTR_DAT_04bb2e00 + 0x10;
  local_68 = (void *)0x0;
  local_140 = (void *)0x0;
  local_c0 = local_118;
  if (lVar9 == 0) {
    pvVar7 = malloc(0x1000);
    pvVar3 = local_140;
  }
  else {
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      pvVar3 = local_140;
      if (plVar5 == (long *)0x0) goto LAB_01bb0488;
    }
    pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x1000,8);
    pvVar3 = local_140;
  }
  local_140 = pvVar7;
  if (local_140 != (void *)0x0) {
    local_138 = 0x800;
    local_68 = local_140;
    (**(code **)(local_148 + 0x38))(&local_148);
    pvVar3 = local_140;
  }
LAB_01bb0488:
  local_140 = pvVar3;
  local_158 = PTR_DAT_04bb2020 + 0x10;
  pcStack_150 = "STR_Day";
  FUN_006f5290(&local_148,&local_158,param_2 - 1);
  if (((*PTR_DAT_04bc0a88 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar4 != 0))
  {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
    uVar8 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar8 * 4) == 0x5a) goto LAB_01bb04fc;
      uVar8 = uVar8 + 1;
    } while (*(uint *)PTR_DAT_04bc0a80 != uVar8);
  }
  uVar8 = 0;
LAB_01bb04fc:
  local_15c = (undefined4)uVar8;
  FUN_01bae480(param_1,&local_148,param_3,&local_15c,0x24);
  local_148 = puVar2 + 0x10;
  if (local_68 != (void *)0x0) {
    local_140 = (void *)0x0;
    local_138 = 0;
    local_134 = 0;
    local_120 = 0xffffffff;
    local_130 = 0xffffffff;
    uStack_128 = 0xffffffff00000000;
    *local_110 = 0;
    *local_b8 = 0;
    pvVar3 = local_68;
    if (local_68 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(local_68);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar1,local_68);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar3);
        }
      }
    }
  }
  return;
}

