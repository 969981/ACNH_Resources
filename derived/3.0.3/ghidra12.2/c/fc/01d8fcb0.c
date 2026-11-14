
void FUN_01d8fcb0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x288));
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_006d9260();
  }
  lVar7 = *(long *)(param_1 + 0x90);
  if (lVar7 != 0) {
    uVar3 = *(uint *)(lVar7 + 0x30);
    if (uVar3 == 0xffffffff && *(char *)(lVar7 + 0x48) != '\0') {
      puVar8 = (undefined1 *)(lVar7 + 0x49);
      *puVar8 = 1;
      uVar2 = *(undefined4 *)(lVar7 + 0x34);
      *(undefined8 *)(lVar7 + 0x34) = 0xffffffff00000000;
      *(undefined4 *)(lVar7 + 0x3c) = uVar2;
      uVar3 = *(uint *)(lVar7 + 0x40);
      *(uint *)(lVar7 + 0x30) = uVar3;
      if (uVar3 != 0xffffffff) {
        uVar5 = *(uint *)(lVar7 + 0x50);
        lVar4 = *(long *)(lVar7 + 0x58);
        uVar1 = uVar3;
        if (uVar5 <= uVar3) {
          uVar1 = 0;
        }
        puVar6 = *(undefined8 **)(lVar4 + (long)(int)uVar1 * 0x40);
        if (puVar6 != (undefined8 *)0x0) {
          (*(code *)*puVar6)();
          uVar3 = *(uint *)(lVar7 + 0x30);
          goto LAB_01d8fd50;
        }
        *puVar8 = 0;
        goto LAB_01d8fd78;
      }
      *puVar8 = 0;
    }
    else {
LAB_01d8fd50:
      *(undefined1 *)(lVar7 + 0x49) = 0;
      if (uVar3 != 0xffffffff) {
        uVar5 = *(uint *)(lVar7 + 0x50);
        lVar4 = *(long *)(lVar7 + 0x58);
LAB_01d8fd78:
        if (uVar5 <= uVar3) {
          uVar3 = 0;
        }
        lVar4 = *(long *)(lVar4 + (long)(int)uVar3 * 0x40);
        if ((lVar4 != 0) && ((**(code **)(lVar4 + 8))(), *(char *)(lVar7 + 0x49) != '\0'))
        goto LAB_01d8fdac;
      }
    }
    *(int *)(lVar7 + 0x34) = *(int *)(lVar7 + 0x34) + 1;
  }
LAB_01d8fdac:
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 == 0xffffffff) && (*(char *)(param_1 + 0x28) != '\0')) {
    puVar8 = (undefined1 *)(param_1 + 0x29);
    *puVar8 = 1;
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x14) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    uVar3 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x10) = uVar3;
    if (uVar3 != 0xffffffff) {
      uVar5 = *(uint *)(param_1 + 0x30);
      lVar7 = *(long *)(param_1 + 0x38);
      uVar1 = uVar3;
      if (uVar5 <= uVar3) {
        uVar1 = 0;
      }
      puVar6 = *(undefined8 **)(lVar7 + (long)(int)uVar1 * 0x40);
      if (puVar6 != (undefined8 *)0x0) {
        (*(code *)*puVar6)();
        uVar3 = *(uint *)(param_1 + 0x10);
        goto LAB_01d8fe18;
      }
      *puVar8 = 0;
      goto LAB_01d8fe40;
    }
    *puVar8 = 0;
  }
  else {
LAB_01d8fe18:
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (uVar3 != 0xffffffff) {
      uVar5 = *(uint *)(param_1 + 0x30);
      lVar7 = *(long *)(param_1 + 0x38);
LAB_01d8fe40:
      if (uVar5 <= uVar3) {
        uVar3 = 0;
      }
      lVar7 = *(long *)(lVar7 + (long)(int)uVar3 * 0x40);
      if ((lVar7 != 0) && ((**(code **)(lVar7 + 8))(), *(char *)(param_1 + 0x29) != '\0'))
      goto LAB_01d8fe74;
    }
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
LAB_01d8fe74:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x288));
  return;
}

