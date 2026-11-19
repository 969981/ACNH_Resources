
void FUN_038b5340(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  ulong *puVar8;
  size_t __size;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  puVar8 = (ulong *)(param_1 + 0x38);
  *puVar8 = 0;
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar1 = PTR_DAT_04bb2698;
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar3 = *(long *)puVar1;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (lVar3 == 0) {
    return;
  }
  plVar4 = (long *)FUN_038cb610(lVar3,param_1);
  iVar2 = nn::fs::QueryMountRomCacheSize(puVar8);
  if (iVar2 != 0) {
    lVar3 = *(long *)puVar1;
    goto joined_r0x038b5468;
  }
  __size = *puVar8;
  lVar3 = *(long *)puVar1;
  if (lVar3 == 0) {
    pvVar7 = malloc(__size);
  }
  else {
    plVar6 = plVar4;
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar3 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        pvVar7 = (void *)0x0;
        goto LAB_038b5450;
      }
    }
    pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,__size,8);
  }
LAB_038b5450:
  *(void **)(param_1 + 0x28) = pvVar7;
  nn::fs::MountRom("content",pvVar7,*(ulong *)(param_1 + 0x38));
  lVar3 = *(long *)puVar1;
joined_r0x038b5468:
  if (lVar3 == 0) {
    pvVar7 = malloc(0x88);
  }
  else {
    plVar6 = plVar4;
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar3 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
    }
    pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x88,8);
  }
  FUN_038b5830(pvVar7,plVar4);
  *(void **)(param_1 + 0x20) = pvVar7;
  FUN_038b54c0(param_1,pvVar7,PTR_PTR_04bb2238);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
  return;
}

