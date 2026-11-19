
void FUN_03c0b4c0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined2 *)(param_1 + 0x2d5) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined1 *)(param_1 + 0x290) = 0;
  *(long *)(param_1 + 0x2a0) = param_1;
  *(code **)(param_1 + 0x2a8) = FUN_03c0b610;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  puVar1 = PTR_DAT_04bb3518;
  uVar4 = *(uint *)(param_1 + 0x280);
  lVar5 = *(long *)(*(long *)PTR_DAT_04bb3518 + 0x108);
  lVar3 = *(long *)(lVar5 + 0x38);
  plVar2 = (long *)(lVar3 + -0x160);
  if (lVar3 != lVar5 + 0x30) {
    lVar6 = lVar3;
    plVar7 = plVar2;
    do {
      if (*(byte *)(plVar7 + 0x23) == uVar4) {
        nn::os::LockMutex((MutexType *)(plVar7 + 0x28));
        if ((int)plVar7[0x21] < *(int *)((long)plVar7 + 0x10c)) {
          *(long *)(plVar7[0x22] + (long)(int)plVar7[0x21] * 8) = param_1 + 0x288;
          *(int *)(plVar7 + 0x21) = (int)plVar7[0x21] + 1;
          *(undefined1 *)(param_1 + 0x290) = 0;
        }
        nn::os::UnlockMutex((MutexType *)(plVar7 + 0x28));
        uVar4 = *(uint *)(param_1 + 0x280);
        lVar5 = *(long *)(*(long *)puVar1 + 0x108);
        lVar3 = *(long *)(lVar5 + 0x38);
        plVar2 = (long *)(lVar3 + -0x160);
        break;
      }
      lVar6 = *(long *)(lVar6 + 8);
      plVar7 = (long *)(lVar6 + -0x160);
    } while (plVar7 != (long *)(lVar5 + -0x130));
  }
  do {
    if (plVar2 == (long *)(lVar5 + -0x130)) {
LAB_03c0b5f4:
      FUN_03ebb160(param_1 + 0x238,1);
      return;
    }
    if (*(byte *)(plVar2 + 0x23) == uVar4) {
      (**(code **)(*plVar2 + 0x18))(plVar2,1,0);
      goto LAB_03c0b5f4;
    }
    lVar3 = *(long *)(lVar3 + 8);
    plVar2 = (long *)(lVar3 + -0x160);
  } while( true );
}

