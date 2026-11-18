
undefined8 FUN_0339bf40(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined **local_88;
  undefined *local_80;
  
  if (*(long *)(*(long *)(DAT_05739190 + 0x18) + 0x38) != 0 &&
      *(int *)(*(long *)(DAT_05739190 + 0x18) + 0x30) == 1) {
    return 0;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a8));
  if (*(int *)(param_1 + 0x184) == 3) {
    if (*(int *)(param_1 + 0x178) == 0) {
      uVar6 = 1;
      *(undefined4 *)(param_1 + 0x184) = 0;
      goto LAB_0339c150;
    }
    if (*(long *)(param_1 + 0x170) != param_1 + 0x168) {
      lVar7 = (long)*(int *)(param_1 + 0x17c);
      lVar3 = *(long *)(param_1 + 0x170) - lVar7;
      puVar1 = PTR_DAT_04bbba70 + 0x10;
      do {
        local_88 = (undefined **)CONCAT35(local_88._5_3_,0xff00000000);
        local_88 = (undefined **)CONCAT44(local_88._4_4_,*(undefined4 *)(lVar3 + 0x10));
        local_80 = puVar1;
        uVar2 = FUN_0339bb10(param_1,&local_88);
        if ((uVar2 & 1) == 0) break;
        lVar3 = *(long *)(lVar3 + lVar7 + 8) - lVar7;
      } while (lVar3 != (param_1 + 0x168) - lVar7);
    }
  }
  else if (*(int *)(param_1 + 0x184) == 0) {
    lVar3 = *(long *)(DAT_05739190 + 0xd8);
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x48) != lVar3 + 0x40) {
        lVar7 = (long)*(int *)(lVar3 + 0x54);
        plVar5 = (long *)(*(long *)(lVar3 + 0x48) - lVar7);
        do {
          (**(code **)(*plVar5 + 0xb8))(plVar5);
          plVar5 = (long *)(*(long *)((long)plVar5 + lVar7 + 8) - lVar7);
        } while (plVar5 != (long *)((lVar3 + 0x40) - lVar7));
      }
    }
    if (*(int *)(param_1 + 0x178) == 0) {
      uVar6 = 1;
    }
    else {
      if (*(long *)(param_1 + 0x170) != param_1 + 0x168) {
        lVar7 = (long)*(int *)(param_1 + 0x17c);
        lVar3 = *(long *)(param_1 + 0x170) - lVar7;
        do {
          lVar4 = *(long *)(lVar3 + 0x80);
          local_88 = &PTR_FUN_04b24018;
          nn::os::LockMutex((MutexType *)(lVar4 + 0xf0));
          if (*(long *)(lVar4 + 0x48) != lVar4 + 0x40) {
            lVar9 = (long)*(int *)(lVar4 + 0x54);
            lVar8 = *(long *)(lVar4 + 0x48) - lVar9;
            do {
              (*(code *)*local_88)(&local_88,lVar8);
              lVar8 = *(long *)(lVar8 + lVar9 + 8) - lVar9;
            } while (lVar8 != (lVar4 + 0x40) - lVar9);
          }
          nn::os::UnlockMutex((MutexType *)(lVar4 + 0xf0));
          lVar3 = *(long *)(lVar3 + lVar7 + 8) - lVar7;
        } while (lVar3 != (param_1 + 0x168) - lVar7);
      }
      uVar6 = 0;
      *(undefined4 *)(param_1 + 0x184) = 3;
    }
    goto LAB_0339c150;
  }
  uVar6 = 0;
LAB_0339c150:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a8));
  return uVar6;
}

