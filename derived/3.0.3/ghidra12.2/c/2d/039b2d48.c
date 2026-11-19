
void FUN_039b2d48(long param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  size_t __size;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  
  __size = *(size_t *)(param_2 + 0x10);
  lVar7 = *(long *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar3 = PTR_LAB_04bd09a8;
  puVar2 = PTR_DAT_04bb2698;
  if (lVar7 == 0 || __size == 0) {
    *(undefined **)(*(long *)(param_1 + 0x28) + 0x10) = PTR_LAB_04bd09a8;
    *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    goto LAB_039b2ea8;
  }
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    pvVar6 = malloc(__size);
  }
  else {
    plVar5 = param_3;
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar7 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        pvVar6 = (void *)0x0;
        goto LAB_039b2e14;
      }
    }
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,0x10);
  }
LAB_039b2e14:
  FUN_003a4830(param_1 + 0x20,param_2,pvVar6,__size);
  *(undefined **)(*(long *)(param_1 + 0x28) + 0x10) = puVar3;
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  lVar7 = *(long *)puVar2;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (lVar7 == 0) {
    pvVar6 = malloc(__size);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar1 = (undefined8 *)(lVar7 + 8);
      if (lVar4 != 0) {
        puVar1 = (undefined8 *)(lVar4 + 0xa8);
      }
      param_3 = (long *)*puVar1;
      if (param_3 == (long *)0x0) {
        pvVar6 = (void *)0x0;
        goto LAB_039b2e98;
      }
    }
    pvVar6 = (void *)(**(code **)(*param_3 + 0x30))(param_3,__size,0x10);
  }
LAB_039b2e98:
  FUN_003a4830(param_1 + 200,param_2,pvVar6,__size);
LAB_039b2ea8:
  *(undefined **)(*(long *)(param_1 + 0xd0) + 0x10) = puVar3;
  return;
}

