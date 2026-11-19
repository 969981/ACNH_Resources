
void FUN_039c3044(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  void *pvVar5;
  
  *(undefined4 *)(param_1 + 9) = 0;
  *param_1 = (long)&PTR_FUN_04b6ab18;
  uVar3 = (**(code **)(param_1[0x12] + 0x88))();
  if ((uVar3 & 1) == 0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    puVar1 = PTR_DAT_04bd1360;
    *(undefined4 *)(param_1 + 0x11) = 0;
    param_1[0x12] = (long)(puVar1 + 0x10);
    if (*(char *)((long)param_1 + 0xb4) != '\0') {
      pvVar5 = (void *)param_1[0x15];
      if (pvVar5 != (void *)0x0) {
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(pvVar5);
        }
        else {
          plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
          }
        }
      }
      *(undefined1 *)((long)param_1 + 0xb4) = 0;
    }
  }
  else {
    pvVar5 = (void *)param_1[0x15];
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    *(undefined4 *)(param_1 + 0x11) = 0;
  }
  puVar1 = PTR_DAT_04bbd578 + 0x10;
  param_1[0x12] = (long)puVar1;
  param_1[0xe] = (long)puVar1;
  puVar2 = PTR_DAT_04bd1068;
  param_1[10] = (long)puVar1;
  param_1[6] = (long)puVar1;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}

