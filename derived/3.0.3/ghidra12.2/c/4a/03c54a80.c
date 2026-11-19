
void FUN_03c54a80(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x38);
  if (plVar6 != (long *)(param_1 + 0x30)) {
    plVar4 = (long *)plVar6[1];
    plVar3 = plVar6 + -0x2c;
    if ((param_2 & 1) == 0) {
      do {
        if ((*(uint *)(plVar3 + 0x23) & 0xf00) != 0x100) {
          (**(code **)(*plVar3 + 0x38))(plVar3,1);
        }
        plVar3 = plVar4 + -0x2c;
        plVar4 = (long *)plVar4[1];
      } while (plVar3 != (long *)(param_1 + -0x130));
    }
    else {
      do {
        plVar5 = plVar4;
        if ((*(uint *)(plVar3 + 0x23) & 0xf00) != 0x100) {
          uVar2 = (ulong)*(uint *)(plVar3 + 0x23) & 0xff;
          uVar1 = 0;
          if ((int)uVar2 != 0xff) {
            uVar1 = uVar2;
          }
          *(undefined1 *)(param_1 + 0x60 + uVar1) = 0;
          (**(code **)(*plVar3 + 0x40))(plVar3);
          nn::os::LockMutex((MutexType *)(plVar3 + 0x28));
          *(undefined4 *)(plVar3 + 0x21) = 0;
          nn::os::UnlockMutex((MutexType *)(plVar3 + 0x28));
          if (*plVar6 != 0) {
            *(long *)(*plVar6 + 8) = plVar6[1];
          }
          if ((long *)plVar6[1] != (long *)0x0) {
            *(long *)plVar6[1] = *plVar6;
          }
          *plVar6 = 0;
          plVar6[1] = 0;
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
          (**(code **)*plVar3)(plVar3);
          *plVar3 = *(long *)(param_1 + 0x48);
          *(long **)(param_1 + 0x48) = plVar3;
        }
        plVar3 = plVar5 + -0x2c;
        plVar4 = (long *)plVar5[1];
        plVar6 = plVar5;
      } while (plVar3 != (long *)(param_1 + -0x130));
    }
  }
  return;
}

