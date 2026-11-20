
long * FUN_03f28fa0(long param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  puVar3 = PTR_DAT_04bb2698;
  plVar9 = (long *)**(undefined8 **)PTR_DAT_04bc3578;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    plVar5 = malloc(0x48);
  }
  else {
    plVar5 = plVar9;
    if (plVar9 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_03f29034;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x48,8);
  }
LAB_03f29034:
  *plVar5 = (long)(PTR_DAT_04bdf078 + 0x10);
  nn::prepo::Array::Array((Array *)(plVar5 + 1));
  uVar2 = param_2 * 8;
  *(undefined4 *)(plVar5 + 5) = 0;
  plVar5[6] = 0;
  *(undefined4 *)(plVar5 + 7) = 0;
  plVar5[8] = 0;
  if (0 < (int)uVar2) {
    lVar8 = *(long *)puVar3;
    if (lVar8 == 0) {
      pvVar6 = malloc((ulong)uVar2);
    }
    else {
      if (plVar9 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar1 = (undefined8 *)(lVar8 + 8);
        if (lVar4 != 0) {
          puVar1 = (undefined8 *)(lVar4 + 0xa8);
        }
        plVar9 = (long *)*puVar1;
        if (plVar9 == (long *)0x0) goto LAB_03f290d8;
      }
      pvVar6 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,(ulong)uVar2,8);
    }
    if (pvVar6 != (void *)0x0) {
      *(uint *)(plVar5 + 5) = uVar2;
      plVar5[6] = (long)pvVar6;
      nn::prepo::Array::SetBuffer((Array *)(plVar5 + 1),(ulong)pvVar6);
    }
  }
LAB_03f290d8:
  uVar7 = (ulong)*(uint *)(param_1 + 0x10);
  if (0 < (int)*(uint *)(param_1 + 0x10)) {
    plVar9 = *(long **)(param_1 + 0x18);
    do {
      if (*plVar9 == 0) {
        *plVar9 = (long)plVar5;
        return plVar5;
      }
      plVar9 = plVar9 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return (long *)0x0;
}

