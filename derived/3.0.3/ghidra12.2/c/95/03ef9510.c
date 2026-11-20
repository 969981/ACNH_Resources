
long * FUN_03ef9510(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    plVar3 = malloc(0x48);
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
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)0x0;
        goto LAB_03ef9594;
      }
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x48,8);
  }
LAB_03ef9594:
  plVar3[7] = 0;
  *(undefined4 *)(plVar3 + 2) = 0;
  *plVar3 = (long)&PTR_LAB_04ba7560;
  plVar3[1] = 0;
  plVar3[3] = 0;
  *(undefined4 *)(plVar3 + 4) = 0;
  plVar3[5] = 0;
  *(undefined4 *)(plVar3 + 6) = 0;
  *(undefined4 *)((long)plVar3 + 0x3f) = 0;
  if (param_1 != 0) {
    uVar4 = FUN_03ef96f0(plVar3,param_1,param_2);
    if ((uVar4 & 1) != 0) {
      return plVar3;
    }
    pvVar7 = (void *)plVar3[3];
    if (pvVar7 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar7);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar1,pvVar7);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
        }
      }
      plVar3[3] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
    }
    pvVar7 = (void *)plVar3[5];
    if (pvVar7 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar7);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar1,pvVar7);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
        }
      }
      plVar3[5] = 0;
      *(undefined4 *)(plVar3 + 4) = 0;
    }
    pvVar7 = (void *)plVar3[7];
    if (pvVar7 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar7);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar1,pvVar7);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
        }
      }
      plVar3[7] = 0;
      *(undefined4 *)(plVar3 + 6) = 0;
    }
    if ((plVar3[1] != 0) && (*(char *)((long)plVar3 + 0x42) != '\0')) {
      FUN_03ef7f80();
      *(undefined1 *)((long)plVar3 + 0x42) = 0;
    }
    plVar3[1] = 0;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return (long *)0x0;
}

