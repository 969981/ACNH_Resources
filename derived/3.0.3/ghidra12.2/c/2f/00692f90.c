
long * FUN_00692f90(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_48;
  
  nn::os::SdkMutexType::Lock();
  lVar4 = nn::os::GetSystemTick();
  puVar3 = PTR_PTR_04bdf3f0;
  puVar2 = PTR_PTR_04bdf3d8;
  plVar9 = *(long **)(param_1 + 0x10);
  plVar1 = (long *)(param_1 + 8);
  if (plVar9 != plVar1) {
    do {
      local_48 = 0;
      plVar8 = plVar9 + -1;
      uVar5 = (**(code **)*plVar8)(plVar8);
      puStack_88 = puVar2;
      local_80 = puVar3;
      local_68 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_90 = &local_48;
      uVar6 = FUN_00692170(uVar5,&local_90,0);
      if ((((uVar6 & 1) == 0) || ((long *)(local_48 + (long)plVar8) == (long *)0x0)) ||
         (lVar7 = (**(code **)(*(long *)(local_48 + (long)plVar8) + 0x10))(), lVar7 <= lVar4)) {
        if (plVar9 != plVar1) {
          plVar1 = (long *)plVar9[1];
          lVar4 = *plVar1;
          *(long **)(*plVar9 + 8) = plVar1;
          *plVar1 = *plVar9;
          *(long **)(lVar4 + 8) = plVar9;
          *plVar9 = lVar4;
        }
        goto LAB_00693084;
      }
      plVar9 = (long *)plVar9[1];
    } while (plVar9 != plVar1);
  }
  plVar8 = (long *)0x0;
LAB_00693084:
  FUN_00692d70(param_1);
  nn::os::SdkMutexType::Unlock();
  return plVar8;
}

