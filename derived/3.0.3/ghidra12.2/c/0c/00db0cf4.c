
long * FUN_00db0cf4(long *param_1,undefined8 param_2,byte param_3,uint param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined *local_90;
  undefined8 *puStack_88;
  undefined4 local_80 [2];
  long local_78;
  ulong local_70;
  byte local_68;
  
  lVar7 = *(long *)PTR_DAT_04bb47c8;
  nn::os::LockMutex((MutexType *)(lVar7 + 0x160));
  puVar1 = PTR_DAT_04bb2698;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    plVar3 = malloc(0x28);
joined_r0x00db0dac:
    if (plVar3 == (long *)0x0) goto LAB_00db0ee4;
    plVar3[3] = 0;
    plVar3[4] = 0;
    *(undefined1 *)(plVar3 + 2) = 0;
    *plVar3 = 0;
    plVar3[1] = 0;
    uVar5 = (**(code **)(*(long *)*param_1 + 0x80))((long *)*param_1,8);
    lVar10 = (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,uVar5,8);
    local_80[0] = 0;
    local_70 = uVar5 & 0xffffffff;
    local_90 = PTR_DAT_04bb2020 + 0x10;
    puStack_88 = &DAT_0407ebb1;
    local_78 = lVar10;
    local_68 = param_3 & 1;
    uVar2 = FUN_026c6c64(&local_90,param_2,local_80);
    if (-1 < (int)uVar2) {
      if ((param_4 & 1) != 0) {
        uVar8 = (ulong)uVar2;
        if (uVar5 <= uVar8) goto LAB_00db0e9c;
        uVar2 = uVar2 + 1;
        *(undefined1 *)(lVar10 + uVar8) = 0;
      }
      (**(code **)(*(long *)*param_1 + 0x48))((long *)*param_1,lVar10,(ulong)uVar2);
      *plVar3 = lVar10;
      plVar3[1] = (ulong)uVar2;
      plVar9 = param_1 + 1;
      lVar10 = *plVar9;
      plVar6 = (long *)((long)*(int *)((long)param_1 + 0x1c) + (long)plVar3);
      *plVar9 = (long)plVar6;
      *plVar6 = lVar10;
      plVar6[1] = (long)plVar9;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 8) = plVar6;
      }
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      goto LAB_00db0ee4;
    }
LAB_00db0e9c:
    if (*(long *)puVar1 == 0) {
      free(plVar3);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,plVar3);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,plVar3);
      }
    }
    (**(code **)(*(long *)*param_1 + 0x38))((long *)*param_1,lVar10);
  }
  else {
    plVar3 = (long *)*param_1;
    if (plVar3 != (long *)0x0) {
LAB_00db0d80:
      plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x28,8);
      goto joined_r0x00db0dac;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar3 = (long *)(lVar10 + 8);
    if (lVar4 != 0) {
      plVar3 = (long *)(lVar4 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 != (long *)0x0) goto LAB_00db0d80;
  }
  plVar3 = (long *)0x0;
LAB_00db0ee4:
  nn::os::UnlockMutex((MutexType *)(lVar7 + 0x160));
  return plVar3;
}

