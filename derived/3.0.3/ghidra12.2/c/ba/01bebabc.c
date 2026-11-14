
void FUN_01bebabc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  if (*(long *)(param_1 + 0x1a0) != 0) {
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x38))((long *)(param_1 + 0xc0));
    pvVar3 = *(void **)(param_1 + 0x1a0);
    if (pvVar3 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar3);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x1a0) = 0;
  }
  if (*(char *)(param_1 + 0x1b4) == '\0') {
    *(undefined **)(param_1 + 0x1a8) = PTR_DAT_04bc0a68 + 0x10;
  }
  else {
    FUN_01bc1880(*(long *)PTR_DAT_04bb28f8 + 0x2990,param_1 + 0x1b0);
    puVar1 = PTR_DAT_04bb2e00;
    *(undefined **)(param_1 + 0x1a8) = PTR_DAT_04bc0a68 + 0x10;
    *(undefined **)(param_1 + 0xc0) = puVar1 + 0x10;
    if (*(long *)(param_1 + 0x1a0) != 0) {
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0xffffffff;
      *(undefined8 *)(param_1 + 0xe0) = 0xffffffff00000000;
      *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xd0) = 0;
      *(undefined1 *)(param_1 + 0xd4) = 0;
      **(undefined1 **)(param_1 + 0xf8) = 0;
      **(undefined1 **)(param_1 + 0x150) = 0;
      pvVar3 = *(void **)(param_1 + 0x1a0);
      if (pvVar3 != (void *)0x0) {
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(pvVar3);
        }
        else {
          plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
          }
        }
      }
      *(undefined8 *)(param_1 + 0x1a0) = 0;
    }
  }
  *(long *)(param_1 + 0xc0) = (long)(PTR_DAT_04bb2df8 + 0x10);
  return;
}

