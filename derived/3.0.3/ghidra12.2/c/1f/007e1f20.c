
void FUN_007e1f20(int *param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  FUN_0254a418();
  FUN_0080ce50(param_1);
  FUN_02208760(param_1);
  FUN_022050a0(param_1);
  if ((((DAT_05574040 == 0) || (*(long *)(DAT_05574040 + 0x4c0) == 0)) ||
      (plVar4 = *(long **)(*(long *)(DAT_05574040 + 0x10) + 0x180), plVar4 == (long *)0x0)) ||
     (((lVar5 = (**(code **)(*plVar4 + 0x30))(), lVar5 == 0 || (DAT_05574040 == 0)) ||
      (lVar6 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))(), lVar6 == 0))
     )) goto LAB_007e20d0;
  if ((*(long **)(lVar5 + 0x28) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar5 + 0x28), puVar7 == (undefined8 *)0x0)) {
    uVar3 = 1;
    lVar8 = *(long *)(lVar6 + 0x276d48);
    if (lVar8 == 0) goto LAB_007e1fe0;
LAB_007e1ff4:
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      lVar8 = *(long *)(lVar6 + 0x276d48);
      uVar9 = uVar9 & 0xffffffff;
      if (lVar8 == 0) goto LAB_007e2048;
    }
    plVar4 = *(long **)(lVar8 + 0x20);
    if (plVar4 != (long *)0x0) {
      local_58 = *(long *)(lVar6 + 0x276d28);
      local_50 = *(undefined8 *)(lVar6 + 0x276d30);
      uStack_48 = 0x53c;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
    }
  }
  else {
    uVar3 = (**(code **)*puVar7)();
    uVar3 = uVar3 ^ 1;
    lVar8 = *(long *)(lVar6 + 0x276d48);
    if (lVar8 != 0) goto LAB_007e1ff4;
LAB_007e1fe0:
    uVar9 = 0;
  }
LAB_007e2048:
  uVar2 = *(uint *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 0x74078);
  if (uVar2 < 0x10) {
    lVar8 = *(long *)(lVar6 + 0x276d30) + *(long *)(lVar6 + 0x276d28);
    *(uint *)(lVar8 + 0x238) =
         *(uint *)(lVar8 + 0x238) & (0xf << (ulong)(*param_1 << 2 & 0x1f) ^ 0xffffffffU) |
         uVar2 << (ulong)(*param_1 << 2 & 0x1f);
  }
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar6 + 0x276d48) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x276d48) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
LAB_007e20d0:
  lVar5 = DAT_055f6860;
  if (DAT_055f6860 != 0) {
    pMVar1 = (MutexType *)(DAT_055f6860 + 0xb43c8);
    nn::os::LockMutex(pMVar1);
    *(uint *)(lVar5 + 0xb3898) = *(uint *)(lVar5 + 0xb3898) | 1;
    nn::os::UnlockMutex(pMVar1);
    nn::os::LockMutex(pMVar1);
    *(uint *)(lVar5 + 0xb3898) = *(uint *)(lVar5 + 0xb3898) | 2;
    nn::os::UnlockMutex(pMVar1);
  }
  return;
}

