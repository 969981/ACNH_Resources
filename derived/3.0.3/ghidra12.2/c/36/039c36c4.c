
void FUN_039c36c4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  void *pvVar6;
  
  *param_1 = (long)&PTR_FUN_04b6ac20;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  uVar4 = (**(code **)(param_1[0x47] + 0x88))(param_1 + 0x47);
  if ((uVar4 & 1) != 0) {
    pvVar6 = (void *)param_1[0x4a];
    if (pvVar6 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar6);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x25c) = 0;
  }
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  uVar4 = (**(code **)(param_1[0x62] + 0x88))(param_1 + 0x62);
  if ((uVar4 & 1) != 0) {
    pvVar6 = (void *)param_1[0x65];
    if (pvVar6 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar6);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x334) = 0;
  }
  *(undefined4 *)(param_1 + 0x5d) = 0;
  FUN_039c31c4(param_1 + 0x4c);
  FUN_039c3044(param_1 + 0x35);
  puVar1 = PTR_DAT_04bbd578 + 0x10;
  puVar2 = PTR_DAT_04bd1068 + 0x10;
  param_1[0x2b] = (long)puVar1;
  param_1[0x26] = (long)puVar1;
  param_1[0x21] = (long)puVar1;
  puVar3 = PTR_DAT_04bd1070;
  param_1[0x17] = (long)puVar1;
  param_1[0xf] = (long)puVar1;
  param_1[0x1b] = (long)puVar2;
  param_1[9] = (long)puVar2;
  *param_1 = (long)(puVar3 + 0x10);
  return;
}

