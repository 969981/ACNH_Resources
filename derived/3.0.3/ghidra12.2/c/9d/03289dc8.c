
void FUN_03289dc8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_04bc9410;
  plVar4 = *(long **)PTR_DAT_04bc9410;
  if (*(long *)(param_1 + 0x430) != 0) {
    nn::os::LockMutex((MutexType *)(plVar4 + 5));
    lVar2 = *(long *)(param_1 + 0x440);
    lVar3 = *(long *)(param_1 + 0x438);
    *(undefined8 *)(param_1 + 0x440) = 0;
    *(undefined8 *)(param_1 + 0x430) = 0;
    *(undefined8 *)(param_1 + 0x438) = 0;
    if ((undefined8 *)*plVar4 == (undefined8 *)(param_1 + 0x430)) {
      *plVar4 = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar2;
    }
    nn::os::UnlockMutex((MutexType *)(plVar4 + 5));
    plVar4 = *(long **)puVar1;
  }
  if (*(long *)(param_1 + 0x488) != 0) {
    nn::os::LockMutex((MutexType *)(plVar4 + 5));
    lVar2 = *(long *)(param_1 + 0x498);
    lVar3 = *(long *)(param_1 + 0x490);
    *(undefined8 *)(param_1 + 0x498) = 0;
    *(undefined8 *)(param_1 + 0x488) = 0;
    *(undefined8 *)(param_1 + 0x490) = 0;
    if ((undefined8 *)*plVar4 == (undefined8 *)(param_1 + 0x488)) {
      *plVar4 = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar2;
    }
    nn::os::UnlockMutex((MutexType *)(plVar4 + 5));
  }
  FUN_032883c0(param_1,0);
  return;
}

