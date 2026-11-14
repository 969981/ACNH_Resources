
long FUN_01d83ff0(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xe8));
  plVar3 = (long *)(param_1 + 0x30);
  plVar1 = plVar3;
  if (param_2 != (long *)0x0) {
    plVar1 = param_2;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    if (*(int *)(param_1 + 0x58) != 0) {
      *(undefined1 *)(param_1 + 0x110) = 1;
      if (*(int *)(param_1 + 0x58) < 1) {
        plVar3 = (long *)0x0;
      }
      else {
        plVar3 = *(long **)(param_1 + 0x48);
        if (*plVar3 != 0) {
          *(long *)(*plVar3 + 8) = plVar3[1];
        }
        if ((long *)plVar3[1] != (long *)0x0) {
          *(long *)plVar3[1] = *plVar3;
        }
        *plVar3 = 0;
        plVar3[1] = 0;
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
      }
      lVar8 = 0;
      if (plVar3 != (long *)0x0) {
        lVar8 = (long)plVar3 - (long)*(int *)(param_1 + 0x5c);
      }
      lVar5 = *plVar1;
      plVar3 = (long *)(lVar8 + *(int *)((long)plVar1 + 0x14));
      *plVar1 = (long)plVar3;
      *plVar3 = lVar5;
      plVar3[1] = (long)plVar1;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar3;
      }
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
      uVar2 = *(uint *)(param_1 + 0x78);
      if (0 < (int)uVar2) {
        uVar4 = 0;
        do {
          if (*(long *)(*(long *)(param_1 + 0x80) + uVar4 * 8) == lVar8) {
            if ((-1 < (int)(uint)uVar4) && ((uint)uVar4 < uVar2)) {
              *(undefined8 *)(*(long *)(param_1 + 0x80) + uVar4 * 8) = 0;
            }
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar2 != uVar4);
      }
      goto LAB_01d840f4;
    }
    if (*(long **)(param_1 + 0x38) == plVar3) {
      lVar8 = 0;
      goto LAB_01d840f4;
    }
    lVar6 = (long)*(int *)(param_1 + 0x44);
    lVar5 = (long)*(long **)(param_1 + 0x38) - lVar6;
    if (*(int *)(param_1 + 0xb8) != 0) {
      do {
        iVar7 = 0;
        while (*(long *)(*(long *)(param_1 + 0xc0) + (long)iVar7 * 0xf8 + 8) != lVar5) {
          iVar7 = iVar7 + 1;
          if (*(int *)(param_1 + 0xb8) == iVar7) goto LAB_01d841ec;
        }
        lVar8 = 0;
        lVar5 = *(long *)(lVar5 + lVar6 + 8) - lVar6;
      } while (lVar5 != (long)plVar3 - lVar6);
      goto LAB_01d840f4;
    }
LAB_01d841ec:
    plVar3 = (long *)(lVar5 + lVar6);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
    plVar3 = (long *)(lVar5 + *(int *)((long)plVar1 + 0x14));
    lVar8 = lVar5;
  }
  else {
    if (*(int *)(param_1 + 0x28) < 1) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = *(long **)(param_1 + 0x20);
      if (*plVar3 != 0) {
        *(long *)(*plVar3 + 8) = plVar3[1];
      }
      if ((long *)plVar3[1] != (long *)0x0) {
        *(long *)plVar3[1] = *plVar3;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    }
    lVar8 = 0;
    if (plVar3 != (long *)0x0) {
      lVar8 = (long)plVar3 - (long)*(int *)(param_1 + 0x2c);
    }
    plVar3 = (long *)(lVar8 + *(int *)((long)plVar1 + 0x14));
  }
  lVar5 = *plVar1;
  *plVar1 = (long)plVar3;
  *plVar3 = lVar5;
  plVar3[1] = (long)plVar1;
  if (lVar5 != 0) {
    *(long **)(lVar5 + 8) = plVar3;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
LAB_01d840f4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xe8));
  return lVar8;
}

