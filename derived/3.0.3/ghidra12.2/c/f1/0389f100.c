
void FUN_0389f100(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x218));
  lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x68) + 0xf8);
  iVar3 = *(int *)(lVar4 + 0x38);
  if (iVar3 != 0) {
    lVar6 = (long)iVar3 << 3;
    puVar1 = PTR_DAT_04bcb850 + 0x10;
    puVar2 = PTR_DAT_04bc13e0 + 0x10;
    plVar5 = *(long **)(lVar4 + 0x40);
    do {
      if (*(int *)(param_1 + 0x238) < *(int *)(param_1 + 0x23c)) {
        plVar7 = *(long **)(param_1 + 0x248);
        if (plVar7 != (long *)0x0) {
          *(long *)(param_1 + 0x248) = *plVar7;
        }
        *plVar7 = (long)puVar1;
        plVar7[1] = 0;
        *(undefined2 *)((long)plVar7 + 0x3c) = 0;
        *(undefined2 *)(plVar7 + 2) = 0;
        plVar7[3] = -0xfffffff3;
        *(undefined2 *)(plVar7 + 4) = 0;
        *(undefined4 *)(plVar7 + 7) = 0x15;
        *(undefined2 *)((long)plVar7 + 100) = 0;
        plVar7[5] = (long)puVar2;
        plVar7[6] = (long)plVar7 + 0x3c;
        if (*(int *)(param_1 + 0x238) < *(int *)(param_1 + 0x23c)) {
          *(long **)(*(long *)(param_1 + 0x240) + (long)*(int *)(param_1 + 0x238) * 8) = plVar7;
          *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + 1;
        }
      }
      else {
        plVar7 = (long *)0x0;
      }
      lVar6 = lVar6 + -8;
      lVar4 = *(long *)(*plVar5 + 0x10);
      *(undefined2 *)(plVar7 + 2) = *(undefined2 *)(*plVar5 + 0x18);
      plVar7[1] = lVar4;
      plVar5 = plVar5 + 1;
    } while (lVar6 != 0);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x218));
  return;
}

