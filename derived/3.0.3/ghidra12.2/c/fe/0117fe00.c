
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0117fe00(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  puVar5 = *(undefined8 **)(param_1 + 0x1d90);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_01182450(puVar5,0);
    (**(code **)*puVar5)(puVar5);
    *(undefined8 *)(param_1 + 0x1d90) = 0;
  }
  plVar3 = *(long **)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x1da0) = 0;
  if (plVar3 != (long *)(param_1 + 0x160)) {
    plVar6 = plVar3 + -0x1a;
    do {
      plVar2 = (long *)plVar3[1];
      plVar4 = plVar2;
      if (*plVar3 != 0) {
        *(long **)(*plVar3 + 8) = plVar2;
        plVar4 = (long *)plVar3[1];
      }
      if (plVar4 != (long *)0x0) {
        *plVar4 = *plVar3;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + -1;
      (**(code **)*plVar6)(plVar6);
      *plVar6 = *(long *)(param_1 + 0x178);
      *(long **)(param_1 + 0x178) = plVar6;
      plVar6 = plVar2 + -0x1a;
      plVar3 = plVar2;
    } while (plVar6 != (long *)(param_1 + 0x90));
  }
  nn::os::LockMutex((MutexType *)&DAT_050ca288);
  if (0 < DAT_050b8f20) {
    lVar7 = 0;
    do {
      iVar1 = 0;
      if (DAT_050b8f18 <= (int)lVar7 + DAT_050b8f1c) {
        iVar1 = DAT_050b8f18;
      }
      FUN_01185508(DAT_050b8f10 + ((lVar7 - iVar1) + (long)DAT_050b8f1c) * 0x2268);
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < DAT_050b8f20);
  }
  _DAT_050b8f1c = 0;
  nn::os::UnlockMutex((MutexType *)&DAT_050ca288);
  return;
}

