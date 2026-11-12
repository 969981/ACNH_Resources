
void FUN_006d56ac(long param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  undefined *local_50;
  void *pvStack_48;
  undefined *local_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 200) != 0) {
    return;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pvVar4 = malloc(0xe8);
  }
  else {
    plVar3 = param_2;
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        pvVar4 = (void *)0x0;
        goto LAB_006d5740;
      }
    }
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0xe8,8);
  }
LAB_006d5740:
  FUN_006d4150(pvVar4,param_1,param_2,param_3);
  *(void **)(param_1 + 200) = pvVar4;
  if ((*(long *)(param_1 + 0xb8) != 0) && (*(char *)(*(long *)(param_1 + 0xb8) + 0x200) != '\0')) {
    local_40 = PTR_FUN_04bb2a00;
    uStack_38 = 0;
    local_50 = PTR_DAT_04bb2a10 + 0x10;
    pvStack_48 = pvVar4;
    uVar1 = FUN_006d474c(*(undefined8 *)(*(long *)PTR_DAT_04bcb7d8 + 0x88),&local_50,
                         (long)pvVar4 + 0xe4,0,0,0);
    *(undefined4 *)((long)pvVar4 + 0xe0) = uVar1;
    *(undefined1 *)(*(long *)(param_1 + 0xd0) + 0x88) = 1;
  }
  return;
}

