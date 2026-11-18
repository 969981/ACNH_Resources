
void FUN_032acd10(long param_1,ulong param_2)

{
  long *plVar1;
  MutexType *pMVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined *local_70;
  long *local_68;
  
  plVar8 = (long *)(param_1 + 8);
  if (*plVar8 == 0) {
    puVar9 = *(undefined8 **)PTR_DAT_04bc9410;
    pMVar2 = (MutexType *)(puVar9 + 5);
    nn::os::LockMutex(pMVar2);
    puVar4 = (undefined8 *)*puVar9;
    if ((undefined8 *)*puVar9 == (undefined8 *)0x0) {
      *puVar9 = plVar8;
    }
    else {
      do {
        puVar9 = puVar4;
        puVar4 = (undefined8 *)puVar9[2];
      } while ((undefined8 *)puVar9[2] != (undefined8 *)0x0);
      puVar9[2] = plVar8;
      *(undefined8 **)(param_1 + 0x10) = puVar9;
      puVar9 = (undefined8 *)*puVar9;
    }
    *(undefined8 **)(param_1 + 8) = puVar9;
    nn::os::UnlockMutex(pMVar2);
    puVar3 = PTR_DAT_04bc8e60;
    if (*(char *)(param_1 + 0x60) == '\0') {
      local_70 = PTR_DAT_04bc8e60 + 0x10;
      local_68 = (long *)0x0;
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 != 0) {
        uVar6 = 0xffffffff;
        lVar7 = lVar5;
        do {
          lVar7 = *(long *)(lVar7 + 0x10);
          uVar6 = uVar6 + 1;
        } while (lVar7 != 0);
        if (1 < uVar6) {
          lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10);
          do {
            plVar1 = (long *)(lVar5 + 0x28);
            lVar5 = *(long *)(lVar5 + 0x18);
          } while (lVar5 != 0 && *plVar1 == 0);
          if ((*plVar1 != 0) && (FUN_032c7c30(plVar8,2,1,&local_70,0,0), local_68 != (long *)0x0)) {
            (**(code **)(*local_68 + 8))();
          }
        }
      }
    }
    local_70 = puVar3 + 0x10;
    local_68 = (long *)0x0;
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 != 0) {
      uVar6 = 0xffffffff;
      lVar7 = lVar5;
      do {
        lVar7 = *(long *)(lVar7 + 0x10);
        uVar6 = uVar6 + 1;
      } while (lVar7 != 0);
      if (2 < uVar6) {
        lVar5 = *(long *)(*(long *)(*(long *)(lVar5 + 0x10) + 0x10) + 0x10);
        do {
          plVar1 = (long *)(lVar5 + 0x28);
          lVar5 = *(long *)(lVar5 + 0x18);
        } while (lVar5 != 0 && *plVar1 == 0);
        if ((*plVar1 != 0) && (FUN_032c7c30(plVar8,3,2,&local_70,0,0), local_68 != (long *)0x0)) {
          (**(code **)(*local_68 + 8))();
        }
      }
    }
    if ((param_2 & 1) == 0) {
      local_70 = puVar3 + 0x10;
      local_68 = (long *)0x0;
      FUN_032c7c30(plVar8,0,0,&local_70,0,0);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 8))();
      }
    }
    else {
      FUN_032c8670(plVar8,0,0);
    }
  }
  return;
}

