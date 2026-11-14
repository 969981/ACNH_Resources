
void FUN_0160fd18(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  int iVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bb2698;
  iVar5 = *(int *)(param_1 + 0x48);
  if (iVar5 == 1) {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    if (lVar6 == 0) {
      pvVar4 = malloc(0x768);
    }
    else {
      plVar3 = param_2;
      if (param_2 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar3 = (long *)(lVar6 + 8);
        if (lVar2 != 0) {
          plVar3 = (long *)(lVar2 + 0xa8);
        }
        plVar3 = (long *)*plVar3;
      }
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x768,8);
    }
    FUN_015ed5a0();
    iVar5 = *(int *)(param_1 + 0x48);
    *(void **)(param_1 + 0x10) = pvVar4;
  }
  if (iVar5 == 2) {
    lVar6 = *(long *)puVar1;
    if (lVar6 == 0) {
      pvVar4 = malloc(0x640);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_2 = (long *)(lVar6 + 8);
        if (lVar2 != 0) {
          param_2 = (long *)(lVar2 + 0xa8);
        }
        param_2 = (long *)*param_2;
      }
      pvVar4 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x640,8);
    }
    FUN_015edb20();
    *(void **)(param_1 + 0x10) = pvVar4;
  }
  return;
}

