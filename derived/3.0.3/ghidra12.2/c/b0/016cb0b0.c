
void FUN_016cb0b0(undefined4 *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  char local_18 [4];
  int local_14;
  
  local_18[0] = '\0';
  local_14 = -1;
  uVar2 = FUN_016cfd70(local_18);
  iVar1 = local_14;
  if ((((uVar2 & 1) != 0) && (local_14 != -1)) && (DAT_05574040 != 0)) {
    plVar4 = *(long **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      plVar4 = (long *)*plVar4;
    }
    else if ((plVar4 == (long *)0x0) || (plVar4 = (long *)plVar4[0x26], plVar4 == (long *)0x0))
    goto LAB_016cb26c;
    lVar3 = (**(code **)(*plVar4 + 0x38))();
    if (lVar3 != 0) {
      if (*(int *)(DAT_0523adf0 + 0x98) == 0) {
        if (DAT_05574040 != 0) {
          puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
          if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
            lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
            if (lVar3 != 0) {
              lVar3 = lVar3 + 0x70;
LAB_016cb1f0:
              puVar7 = &LAB_002057b0 + lVar3;
              if (local_18[0] != '\0') {
                puVar7 = (undefined1 *)(lVar3 + 0x20b9e8);
              }
              puVar7 = puVar7 + (long)iVar1 * 0xc40;
              goto LAB_016cb218;
            }
          }
          else if (((puVar5 != (undefined8 *)0x0) && ((long *)puVar5[0x26] != (long *)0x0)) &&
                  (lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))(), lVar3 != 0))
          goto LAB_016cb1f0;
        }
      }
      else {
        iVar1 = FUN_0252d29c();
        if (DAT_05574040 != 0) {
          puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
          if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
            lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
            if (lVar3 != 0) {
              lVar3 = lVar3 + 0x70;
LAB_016cb1c0:
              puVar7 = (undefined1 *)(lVar3 + (long)iVar1 * 0xcb0 + 0x211c58);
LAB_016cb218:
              plVar4 = *(long **)(puVar7 + 0x98);
              *param_1 = 0;
              if ((plVar4 == (long *)0x0) ||
                 (puVar5 = (undefined8 *)*plVar4, puVar5 == (undefined8 *)0x0)) {
                uVar6 = (uint)*(byte *)(*(long *)(puVar7 + 0x80) + *(long *)(puVar7 + 0x78) + 0x153e
                                       );
              }
              else {
                uVar2 = (**(code **)*puVar5)();
                uVar6 = (uint)*(byte *)(*(long *)(puVar7 + 0x80) + *(long *)(puVar7 + 0x78) + 0x153e
                                       );
                if ((((uVar2 & 1) != 0) && (*(long *)(puVar7 + 0x98) != 0)) &&
                   (puVar5 = *(undefined8 **)(*(long *)(puVar7 + 0x98) + 8),
                   puVar5 != (undefined8 *)0x0)) {
                  (**(code **)*puVar5)();
                }
              }
              if (((DAT_0523c4c0 & 1) == 0) &&
                 (iVar1 = __cxa_guard_acquire(&DAT_0523c4c0), iVar1 != 0)) {
                FUN_016cb6ac(&DAT_0523c4b0);
                __cxa_guard_release(&DAT_0523c4c0);
              }
              if ((int)DAT_0523c4b0 < 1) {
                return;
              }
              uVar2 = 0;
              while (*(uint *)(DAT_0523c4b8 + uVar2 * 4) != uVar6) {
                uVar2 = uVar2 + 1;
                if (DAT_0523c4b0 == uVar2) {
                  return;
                }
              }
              goto LAB_016cb2c0;
            }
          }
          else if (((puVar5 != (undefined8 *)0x0) && ((long *)puVar5[0x26] != (long *)0x0)) &&
                  (lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))(), lVar3 != 0))
          goto LAB_016cb1c0;
        }
      }
    }
  }
LAB_016cb26c:
  if (((DAT_0523c4c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0523c4c0), iVar1 != 0)) {
    FUN_016cb6ac(&DAT_0523c4b0);
    __cxa_guard_release(&DAT_0523c4c0);
  }
  if (0 < (int)DAT_0523c4b0) {
    uVar2 = 0;
    do {
      if (*(int *)(DAT_0523c4b8 + uVar2 * 4) == 0) {
        uVar2 = uVar2 & 0xffffffff;
        goto LAB_016cb2c0;
      }
      uVar2 = uVar2 + 1;
    } while (DAT_0523c4b0 != uVar2);
  }
  uVar2 = 0;
LAB_016cb2c0:
  *param_1 = (int)uVar2;
  return;
}

