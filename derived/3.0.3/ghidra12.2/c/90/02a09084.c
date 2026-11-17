
void FUN_02a09084(long param_1,char *param_2)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((*param_2 != '\0') && (*(char *)(param_1 + 0x9a) == '\0')) {
    if (DAT_05574040 != 0) {
      puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar4 = (**(code **)(*(long *)*puVar6 + 0x38))();
        if (lVar4 != 0) {
          lVar4 = lVar4 + 0x70;
LAB_02a09104:
          if ((*(long **)(lVar4 + 0x1c25c8) == (long *)0x0) ||
             (puVar6 = (undefined8 *)**(long **)(lVar4 + 0x1c25c8), puVar6 == (undefined8 *)0x0)) {
            uVar3 = 1;
          }
          else {
            uVar3 = (**(code **)*puVar6)();
            uVar3 = uVar3 ^ 1;
          }
          uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0x1c25b0) + *(long *)(lVar4 + 0x1c25a8));
          nn::os::LockMutex((MutexType *)(param_1 + 0x78));
          *(undefined8 *)(param_1 + 0x50) = uVar9;
          *(byte *)(param_1 + 0x99) = *(byte *)(param_1 + 0x99) | 1;
          nn::os::UnlockMutex((MutexType *)(param_1 + 0x78));
          if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x1c25c8) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x1c25c8) + 8),
             puVar6 != (undefined8 *)0x0)) {
            (**(code **)*puVar6)();
          }
        }
      }
      else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
              (lVar4 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar4 != 0))
      goto LAB_02a09104;
    }
    *(undefined1 *)(param_1 + 0x9a) = 1;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x78));
  bVar2 = *(byte *)(param_1 + 0x99);
  *(undefined1 *)(param_1 + 0x99) = 0;
  uVar8 = *(ulong *)(param_1 + 0x50);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x78));
  if ((bVar2 & 1) != 0) {
    uVar3 = (uint)uVar8;
    *(ulong *)(param_1 + 0x48) = uVar8;
    *(uint *)(param_1 + 8) = uVar3 & 0xf;
    *(uint *)(param_1 + 0xc) = uVar3 >> 4 & 0xf;
    *(uint *)(param_1 + 0x10) = uVar3 >> 8 & 0xf;
    *(uint *)(param_1 + 0x14) = uVar3 >> 0xc & 0xf;
    *(uint *)(param_1 + 0x18) = uVar3 >> 0x10 & 0xf;
    *(uint *)(param_1 + 0x1c) = uVar3 >> 0x14 & 0xf;
    *(uint *)(param_1 + 0x20) = uVar3 >> 0x18 & 0xf;
    *(uint *)(param_1 + 0x24) = (uint)(uVar8 >> 0x1c) & 0xf;
    uVar3 = (uint)(uVar8 >> 0x20);
    *(uint *)(param_1 + 0x28) = uVar3 & 0xf;
    *(uint *)(param_1 + 0x2c) = uVar3 >> 4 & 0xf;
    *(uint *)(param_1 + 0x30) = uVar3 >> 8 & 0xf;
    *(uint *)(param_1 + 0x34) = uVar3 >> 0xc & 0xf;
    *(uint *)(param_1 + 0x38) = (ushort)(uVar8 >> 0x30) & 0xf;
    *(uint *)(param_1 + 0x3c) = uVar3 >> 0x14 & 0xf;
    *(uint *)(param_1 + 0x40) = (byte)(uVar8 >> 0x38) & 0xf;
    *(uint *)(param_1 + 0x44) = uVar3 >> 0x1c;
  }
  if ((bVar2 >> 1 & 1) == 0) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar4 = (**(code **)(*(long *)*puVar6 + 0x38))();
    if (lVar4 == 0) {
      return;
    }
    lVar4 = lVar4 + 0x70;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar6[0x26] == (long *)0x0) {
      return;
    }
    lVar4 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
    if (lVar4 == 0) {
      return;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  plVar1 = (long *)(lVar4 + 0x1c25a8);
  lVar7 = *(long *)(lVar4 + 0x1c25c8);
  if (lVar7 == 0) {
    *(undefined8 *)(*(long *)(lVar4 + 0x1c25b0) + *plVar1) = uVar9;
    return;
  }
  if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    lVar7 = *(long *)(lVar4 + 0x1c25c8);
    uVar3 = uVar3 ^ 1;
    if (lVar7 == 0) goto LAB_02a092dc;
  }
  plVar5 = *(long **)(lVar7 + 0x20);
  if (plVar5 != (long *)0x0) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar4 + 0x1c25b0);
    uStack_48 = 0x10;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
  }
LAB_02a092dc:
  *(undefined8 *)(*(long *)(lVar4 + 0x1c25b0) + *plVar1) = uVar9;
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x1c25c8) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x1c25c8) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

