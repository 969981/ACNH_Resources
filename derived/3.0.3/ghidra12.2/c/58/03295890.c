
/* WARNING: Removing unreachable block (ram,0x032958c0) */

void FUN_03295890(long param_1)

{
  MutexType *pMVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar3 = (undefined8 *)
           (**(code **)(*(long *)**(undefined8 **)(param_1 + 0xb8) + 0x30))
                     ((long *)**(undefined8 **)(param_1 + 0xb8),0x20,8);
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = &PTR_LAB_04b18778;
  puVar3[1] = 0;
  plVar4 = *(long **)(param_1 + 0x230);
  *(undefined8 **)(param_1 + 0x230) = puVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
    puVar3 = *(undefined8 **)(param_1 + 0x230);
  }
  FUN_032994a0(puVar3,*(undefined8 *)(param_1 + 0xb8),param_1);
  FUN_03296810(param_1);
  plVar4 = DAT_0572e5c8;
  if (*(long *)(param_1 + 0x250) == 0) {
    pMVar1 = (MutexType *)(DAT_0572e5c8 + 5);
    puVar3 = (undefined8 *)(param_1 + 0x250);
    nn::os::LockMutex(pMVar1);
    puVar2 = (undefined8 *)*plVar4;
    if ((undefined8 *)*plVar4 == (undefined8 *)0x0) {
      *plVar4 = (long)puVar3;
    }
    else {
      do {
        puVar6 = puVar2;
        puVar2 = (undefined8 *)puVar6[2];
      } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
      puVar6[2] = puVar3;
      *(undefined8 **)(param_1 + 600) = puVar6;
      plVar4 = (long *)*puVar6;
    }
    *puVar3 = plVar4;
    nn::os::UnlockMutex(pMVar1);
    lVar5 = *(long *)(param_1 + 0x2a8);
    plVar4 = DAT_0572e5c8;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x2a8);
  }
  if (lVar5 != 0) {
    DAT_0572e5c8 = plVar4;
    return;
  }
  pMVar1 = (MutexType *)(plVar4 + 5);
  puVar3 = (undefined8 *)(param_1 + 0x2a8);
  DAT_0572e5c8 = plVar4;
  nn::os::LockMutex(pMVar1);
  puVar2 = (undefined8 *)*plVar4;
  if ((undefined8 *)*plVar4 == (undefined8 *)0x0) {
    *plVar4 = (long)puVar3;
  }
  else {
    do {
      puVar6 = puVar2;
      puVar2 = (undefined8 *)puVar6[2];
    } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
    puVar6[2] = puVar3;
    *(undefined8 **)(param_1 + 0x2b0) = puVar6;
    plVar4 = (long *)*puVar6;
  }
  *puVar3 = plVar4;
  nn::os::UnlockMutex(pMVar1);
  return;
}

