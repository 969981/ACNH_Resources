
long * FUN_03ef7da8(long param_1,int param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  void *pvVar9;
  
  puVar7 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x38) + (long)param_2 * 8);
  if (((*PTR_DAT_04bb3490 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3490), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb3488 = PTR_DAT_04bb3498 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3490);
  }
  if ((puVar7 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bb3488), puVar1 = PTR_DAT_04bb2698,
     (uVar3 & 1) != 0)) {
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) {
      plVar5 = malloc(0x38);
    }
    else {
      plVar5 = param_3;
      if (param_3 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar5 = (long *)(lVar8 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x38,8);
    }
    *(undefined4 *)(plVar5 + 1) = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_LAB_04ba7540;
    *(undefined4 *)(plVar5 + 3) = 0;
    *(short *)(plVar5 + 6) = (short)param_2;
    plVar5[4] = 0;
    plVar5[5] = param_1;
    uVar3 = FUN_03ef83a0(plVar5,param_3,param_4);
    if ((uVar3 & 1) != 0) {
      return plVar5;
    }
    pvVar9 = (void *)plVar5[2];
    if (pvVar9 != (void *)0x0) {
      lVar8 = *(long *)puVar1;
      if (lVar8 == 0) {
        free(pvVar9);
      }
      else {
        plVar6 = (long *)FUN_038cb610(lVar8,pvVar9);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
        }
      }
      plVar5[2] = 0;
      *(undefined4 *)(plVar5 + 1) = 0;
    }
    pvVar9 = (void *)plVar5[4];
    if (pvVar9 != (void *)0x0) {
      lVar8 = *(long *)puVar1;
      if (lVar8 == 0) {
        free(pvVar9);
      }
      else {
        plVar6 = (long *)FUN_038cb610(lVar8,pvVar9);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
        }
      }
      plVar5[4] = 0;
      *(undefined4 *)(plVar5 + 3) = 0;
    }
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  return (long *)0x0;
}

