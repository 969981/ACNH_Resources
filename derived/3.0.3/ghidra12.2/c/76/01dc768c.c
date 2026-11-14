
/* WARNING: Removing unreachable block (ram,0x01dc7814) */
/* WARNING: Removing unreachable block (ram,0x01dc7734) */
/* WARNING: Removing unreachable block (ram,0x01dc76f0) */
/* WARNING: Removing unreachable block (ram,0x01dc76d4) */
/* WARNING: Removing unreachable block (ram,0x01dc770c) */
/* WARNING: Removing unreachable block (ram,0x01dc7750) */
/* WARNING: Removing unreachable block (ram,0x01dc77ac) */

void FUN_01dc768c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04bc1060;
  if (*(long *)(param_1 + 0x88) != 0) {
    *(undefined8 *)(*(long *)PTR_DAT_04bc1060 + 0x90) = 0;
    lVar3 = *(long *)puVar1;
    if (*(long *)(lVar3 + 0x90) == 0) {
      *(undefined ***)(lVar3 + 0x90) = &PTR_PTR_04c48678;
      lVar3 = *(long *)puVar1;
    }
    *(undefined8 *)(lVar3 + 0x98) = 0;
    if (*(long *)(*(long *)puVar1 + 0x98) == 0) {
      *(undefined ***)(*(long *)puVar1 + 0x98) = &PTR_PTR_04c48678;
      plVar2 = *(long **)(param_1 + 0x88);
    }
    else {
      plVar2 = *(long **)(param_1 + 0x88);
    }
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar3 = *(long *)PTR_DAT_04bb2110;
    plVar2 = (long *)**(undefined8 **)(lVar3 + 0x10);
    nn::os::LockMutex((MutexType *)(plVar2 + 0x4d));
    (**(code **)(*plVar2 + 0x38))(plVar2,lVar3 + 0x800);
    nn::os::UnlockMutex((MutexType *)(plVar2 + 0x4d));
    *(long *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(undefined ***)(param_1 + 0x68) = &PTR_LAB_04a5b4f8;
  DAT_04c48680 = 0;
  return;
}

