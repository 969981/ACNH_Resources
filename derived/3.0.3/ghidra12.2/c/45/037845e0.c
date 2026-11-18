
void FUN_037845e0(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  uint uVar5;
  
  lVar2 = FUN_03776f00();
  if (lVar2 == 0) {
    if (((DAT_0523c4c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0523c4c0), iVar1 != 0)) {
      FUN_016cb6ac(&DAT_0523c4b0);
      __cxa_guard_release(&DAT_0523c4c0);
    }
    if (0 < (int)DAT_0523c4b0) {
      uVar4 = 0;
      do {
        if (*(int *)(DAT_0523c4b8 + uVar4 * 4) == 0) goto LAB_03784700;
        uVar4 = uVar4 + 1;
      } while (DAT_0523c4b0 != uVar4);
    }
    uVar4 = 0;
LAB_03784700:
    *param_1 = (int)uVar4;
  }
  else {
    if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar3 == (undefined8 *)0x0)) {
      uVar5 = (uint)*(byte *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x153e);
    }
    else {
      uVar4 = (**(code **)*puVar3)();
      uVar5 = (uint)*(byte *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x153e);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
    }
    *param_1 = 0;
    if (((DAT_0523c4c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0523c4c0), iVar1 != 0)) {
      FUN_016cb6ac(&DAT_0523c4b0);
      __cxa_guard_release(&DAT_0523c4c0);
    }
    if (0 < (int)DAT_0523c4b0) {
      uVar4 = 0;
      do {
        if (*(uint *)(DAT_0523c4b8 + uVar4 * 4) == uVar5) {
          uVar4 = uVar4 & 0xffffffff;
          goto LAB_03784700;
        }
        uVar4 = uVar4 + 1;
      } while (DAT_0523c4b0 != uVar4);
    }
  }
  return;
}

