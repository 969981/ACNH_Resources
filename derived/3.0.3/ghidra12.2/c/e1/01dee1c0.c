
undefined8 * FUN_01dee1c0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar7 = *(long *)PTR_DAT_04bb47c8;
  nn::os::LockMutex((MutexType *)(lVar7 + 0x160));
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    puVar3 = malloc(0x28);
joined_r0x01dee268:
    if (puVar3 == (undefined8 *)0x0) goto LAB_01dee378;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    uVar4 = (**(code **)(*(long *)*param_1 + 0x80))((long *)*param_1,8);
    uVar5 = (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,uVar4,8);
    FUN_0069aa80(auStack_58,uVar5,uVar4);
    local_68 = PTR_DAT_04bb2020 + 0x10;
    puStack_60 = &DAT_0407ebb1;
    uVar6 = FUN_01cdf9e4(&local_68,param_2,auStack_58);
    plVar1 = (long *)*param_1;
    if ((uVar6 & 1) != 0) {
      uVar4 = FUN_0069bd38(auStack_58);
      (**(code **)(*plVar1 + 0x48))(plVar1,uVar5,uVar4);
      *puVar3 = uVar5;
      uVar4 = FUN_0069bd38(auStack_58);
      puVar3[1] = uVar4;
      plVar8 = param_1 + 1;
      lVar9 = *plVar8;
      plVar1 = (long *)((long)*(int *)((long)param_1 + 0x1c) + (long)puVar3);
      *plVar8 = (long)plVar1;
      *plVar1 = lVar9;
      plVar1[1] = (long)plVar8;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar1;
      }
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      goto LAB_01dee378;
    }
    (**(code **)(*plVar1 + 0x38))(plVar1,puVar3);
    (**(code **)(*(long *)*param_1 + 0x38))((long *)*param_1,uVar5);
  }
  else {
    plVar1 = (long *)*param_1;
    if (plVar1 != (long *)0x0) {
LAB_01dee23c:
      puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1,0x28,8);
      goto joined_r0x01dee268;
    }
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar1 = (long *)(lVar9 + 8);
    if (lVar2 != 0) {
      plVar1 = (long *)(lVar2 + 0xa8);
    }
    plVar1 = (long *)*plVar1;
    if (plVar1 != (long *)0x0) goto LAB_01dee23c;
  }
  puVar3 = (undefined8 *)0x0;
LAB_01dee378:
  nn::os::UnlockMutex((MutexType *)(lVar7 + 0x160));
  return puVar3;
}

