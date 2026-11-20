
void FUN_03d4d270(long param_1,long *param_2,undefined8 param_3,undefined4 param_4,long *param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  void *__dest;
  void *__src;
  
  puVar2 = PTR_DAT_04bb2698;
  if (param_2 == (long *)0x0) {
    lVar3 = *(long *)PTR_DAT_04bb2698;
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    param_2 = (long *)(lVar3 + 8);
    if (lVar7 != 0) {
      param_2 = (long *)(lVar7 + 0xa8);
    }
    param_2 = (long *)*param_2;
    lVar7 = *(long *)puVar2;
  }
  else {
    lVar7 = *(long *)PTR_DAT_04bb2698;
  }
  if (lVar7 == 0) {
    pvVar5 = malloc(0xc0);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0xc0,8);
  }
  FUN_03d4de60(pvVar5,param_1,param_2);
  FUN_03d4d620(pvVar5,param_2,param_3,param_4);
  __dest = *(void **)((long)pvVar5 + 0x40);
  (**(code **)(*param_5 + 0x18))(param_5);
  __src = (void *)param_5[1];
  if (__dest != __src) {
    (**(code **)(*param_5 + 0x18))(param_5);
    lVar7 = 0;
    do {
      if (*(char *)(param_5[1] + lVar7) == '\0') goto LAB_03d4d3d0;
      lVar3 = param_5[1] + lVar7;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_03d4d3d0;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_03d4d3d0;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_03d4d3d0:
    iVar1 = (int)lVar7;
    if (*(int *)((long)pvVar5 + 0x48) <= (int)lVar7) {
      iVar1 = *(int *)((long)pvVar5 + 0x48) + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  plVar4 = (long *)((long)*(int *)(param_1 + 0x14) + (long)pvVar5);
  plVar6 = *(long **)(param_1 + 8);
  *(long **)(param_1 + 8) = plVar4;
  *plVar4 = param_1;
  plVar4[1] = (long)plVar6;
  if (plVar6 != (long *)0x0) {
    *plVar6 = (long)plVar4;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

