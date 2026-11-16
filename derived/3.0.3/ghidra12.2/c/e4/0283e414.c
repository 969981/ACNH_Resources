
void FUN_0283e414(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  *(long **)(param_1 + 0x60) = param_2;
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2);
  if (((uVar1 & 1) != 0) && (*(long *)(param_1 + 8) != 0)) {
    nn::os::WaitLightEvent((LightEventType *)(*(long *)(param_1 + 8) + 0x20));
  }
  if ((DAT_055a1b78 == 0) ||
     (*(char *)(DAT_055a1b78 + 0x3c) == '\0' || *(char *)(DAT_055a1b78 + 0x3d) == '\0')) {
    if (*(long **)(param_1 + 0x60) == (long *)0x0) {
      return;
    }
    (**(code **)(**(long **)(param_1 + 0x60) + 0x28))();
    (**(code **)(**(long **)(param_1 + 0x60) + 0x30))();
    (**(code **)(**(long **)(param_1 + 0x60) + 0x38))();
    plVar2 = *(long **)(param_1 + 0x60);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x60);
    if (*(int *)(lVar3 + 0xc) == 0) {
      *(undefined4 *)(lVar3 + 0xc) = 7;
    }
    *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 1;
    plVar2 = *(long **)(param_1 + 0x60);
  }
  if (((plVar2 == (long *)0x0) || (uVar1 = (**(code **)(*plVar2 + 0x40))(), (uVar1 & 1) == 0)) ||
     (*(long *)(param_1 + 8) == 0)) {
    return;
  }
  nn::os::SignalLightEvent((LightEventType *)(*(long *)(param_1 + 8) + 0x20));
  return;
}

