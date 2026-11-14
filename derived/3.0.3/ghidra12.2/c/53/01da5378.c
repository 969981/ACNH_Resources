
void FUN_01da5378(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1e8));
  uVar3 = *(uint *)(param_1 + 0x68);
  if (uVar3 == 0xffffffff && *(char *)(param_1 + 0x80) != '\0') {
    puVar7 = (undefined1 *)(param_1 + 0x81);
    *puVar7 = 1;
    uVar2 = *(undefined4 *)(param_1 + 0x6c);
    *(undefined8 *)(param_1 + 0x6c) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    uVar3 = *(uint *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x68) = uVar3;
    if (uVar3 != 0xffffffff) {
      uVar5 = *(uint *)(param_1 + 0x88);
      lVar4 = *(long *)(param_1 + 0x90);
      uVar1 = uVar3;
      if (uVar5 <= uVar3) {
        uVar1 = 0;
      }
      puVar6 = *(undefined8 **)(lVar4 + (long)(int)uVar1 * 0x40);
      if (puVar6 != (undefined8 *)0x0) {
        (*(code *)*puVar6)();
        uVar3 = *(uint *)(param_1 + 0x68);
        goto LAB_01da5404;
      }
      *puVar7 = 0;
      goto LAB_01da542c;
    }
    *puVar7 = 0;
LAB_01da5454:
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  }
  else {
LAB_01da5404:
    *(undefined1 *)(param_1 + 0x81) = 0;
    if (uVar3 == 0xffffffff) goto LAB_01da5454;
    uVar5 = *(uint *)(param_1 + 0x88);
    lVar4 = *(long *)(param_1 + 0x90);
LAB_01da542c:
    if (uVar5 <= uVar3) {
      uVar3 = 0;
    }
    lVar4 = *(long *)(lVar4 + (long)(int)uVar3 * 0x40);
    if ((lVar4 == 0) || ((**(code **)(lVar4 + 8))(), *(char *)(param_1 + 0x81) == '\0'))
    goto LAB_01da5454;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1e8));
  uVar3 = *(uint *)(param_1 + 0xb0);
  if ((uVar3 == 0xffffffff) && (*(char *)(param_1 + 200) != '\0')) {
    puVar7 = (undefined1 *)(param_1 + 0xc9);
    *puVar7 = 1;
    uVar2 = *(undefined4 *)(param_1 + 0xb4);
    *(undefined8 *)(param_1 + 0xb4) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0xbc) = uVar2;
    uVar3 = *(uint *)(param_1 + 0xc0);
    *(uint *)(param_1 + 0xb0) = uVar3;
    if (uVar3 != 0xffffffff) {
      uVar5 = *(uint *)(param_1 + 0xd0);
      lVar4 = *(long *)(param_1 + 0xd8);
      uVar1 = uVar3;
      if (uVar5 <= uVar3) {
        uVar1 = 0;
      }
      puVar6 = *(undefined8 **)(lVar4 + (long)(int)uVar1 * 0x40);
      if (puVar6 != (undefined8 *)0x0) {
        (*(code *)*puVar6)();
        uVar3 = *(uint *)(param_1 + 0xb0);
        goto LAB_01da54d4;
      }
      *puVar7 = 0;
      goto LAB_01da54fc;
    }
    *puVar7 = 0;
  }
  else {
LAB_01da54d4:
    *(undefined1 *)(param_1 + 0xc9) = 0;
    if (uVar3 != 0xffffffff) {
      uVar5 = *(uint *)(param_1 + 0xd0);
      lVar4 = *(long *)(param_1 + 0xd8);
LAB_01da54fc:
      if (uVar5 <= uVar3) {
        uVar3 = 0;
      }
      lVar4 = *(long *)(lVar4 + (long)(int)uVar3 * 0x40);
      if ((lVar4 != 0) && ((**(code **)(lVar4 + 8))(), *(char *)(param_1 + 0xc9) != '\0'))
      goto LAB_01da5530;
    }
  }
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
LAB_01da5530:
  if (*(char *)(param_1 + 0x1b2) != '\0') {
    *(undefined1 *)(param_1 + 0x1b2) = 0;
  }
  return;
}

