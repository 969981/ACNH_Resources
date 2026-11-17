
bool FUN_02b4bd40(undefined4 param_1,undefined1 param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((((DAT_05574040 != 0) && (*(long *)(DAT_05574040 + 0x4c0) != 0)) &&
      (plVar4 = *(long **)(*(long *)(DAT_05574040 + 0x10) + 0x180), plVar4 != (long *)0x0)) &&
     ((lVar5 = (**(code **)(*plVar4 + 0x38))(), lVar5 != 0 &&
      (local_68 = CONCAT44(local_68._4_4_,param_1), DAT_05574040 != 0)))) {
    puVar8 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar8 + 0x38))();
      if (lVar6 == 0) {
        return false;
      }
      lVar6 = lVar6 + 0x70;
    }
    else {
      if (puVar8 == (undefined8 *)0x0) {
        return false;
      }
      if ((long *)puVar8[0x26] == (long *)0x0) {
        return false;
      }
      lVar6 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
      if (lVar6 == 0) {
        return false;
      }
    }
    if ((uint)local_68 < 8) {
      lVar1 = lVar6 + 0x119228 + (local_68 & 0xffffffff) * 0xfa08;
      if (7 < (uint)local_68) {
        lVar1 = lVar6 + 0x119228;
      }
      lVar6 = *(long *)(lVar1 + 0x28);
      if (lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
          lVar6 = *(long *)(lVar1 + 0x28);
          uVar7 = uVar7 & 0xffffffff;
          if (lVar6 == 0) goto LAB_02b4be9c;
        }
        plVar4 = *(long **)(lVar6 + 0x20);
        if (plVar4 != (long *)0x0) {
          local_68 = *(ulong *)(lVar1 + 8);
          uStack_60 = *(undefined8 *)(lVar1 + 0x10);
          local_58 = 0x28a28;
          (**(code **)(*plVar4 + 0x20))(plVar4,&local_68);
        }
      }
LAB_02b4be9c:
      bVar2 = *(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8) == -1;
      if (bVar2) {
        if ((*(long **)(lVar5 + 0xd0) == (long *)0x0) ||
           (puVar8 = (undefined8 *)**(long **)(lVar5 + 0xd0), puVar8 == (undefined8 *)0x0)) {
          uVar3 = 1;
        }
        else {
          uVar3 = (**(code **)*puVar8)();
          uVar3 = uVar3 ^ 1;
        }
        if ((*(long *)(lVar1 + 0x28) != 0) &&
           (plVar4 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20), plVar4 != (long *)0x0)) {
          local_68 = *(ulong *)(lVar1 + 8);
          uStack_60 = *(undefined8 *)(lVar1 + 0x10);
          local_58 = 0x28a28;
          (**(code **)(*plVar4 + 0x20))(plVar4,&local_68);
        }
        memcpy((void *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8)),
               (void *)(*(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0)),0x28a28);
        if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0xd0) != 0)) &&
           (puVar8 = *(undefined8 **)(*(long *)(lVar5 + 0xd0) + 8), puVar8 != (undefined8 *)0x0)) {
          (**(code **)*puVar8)();
        }
        if ((*(long *)(lVar1 + 0x28) != 0) &&
           (plVar4 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20), plVar4 != (long *)0x0)) {
          local_68 = *(ulong *)(lVar1 + 8);
          uStack_60 = *(undefined8 *)(lVar1 + 0x10);
          local_58 = 0x28a28;
          (**(code **)(*plVar4 + 0x20))(plVar4,&local_68);
        }
        *(undefined1 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8) = param_2;
        FUN_027f5fd0();
        if ((*(long *)(lVar1 + 0x28) != 0) &&
           (plVar4 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20), plVar4 != (long *)0x0)) {
          local_68 = *(ulong *)(lVar1 + 8);
          uStack_60 = *(undefined8 *)(lVar1 + 0x10);
          local_58 = 0x28a28;
          (**(code **)(*plVar4 + 0x20))(plVar4,&local_68);
        }
        FUN_027f6200(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8),param_1);
      }
      if ((uVar7 & 1) == 0) {
        return bVar2;
      }
      if (*(long *)(lVar1 + 0x28) == 0) {
        return bVar2;
      }
      puVar8 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 0x18);
      if (puVar8 == (undefined8 *)0x0) {
        return bVar2;
      }
      (**(code **)*puVar8)();
      return bVar2;
    }
  }
  return false;
}

