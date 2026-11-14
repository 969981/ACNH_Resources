
void FUN_01a0fc88(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *__s;
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x328);
  *(undefined ***)(param_1 + 0x148) = &PTR_LAB_049fa050;
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
    *(undefined8 *)(param_1 + 0x328) = 0;
    *(undefined4 *)(param_1 + 800) = 0;
  }
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined1 *)(param_1 + 0x344) = 0;
  FUN_01a149a8(param_1 + 0x148);
  *(undefined ***)(param_1 + 0x148) = &PTR_LAB_049fa0a8;
  FUN_01a149a8(param_1 + 0x148);
  __s = *(undefined8 **)(param_1 + 0x158);
  *(undefined ***)(param_1 + 0x148) = &PTR_FUN_04b5e7f8;
  if (__s != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x160) < 1) {
      iVar1 = *(int *)(param_1 + 0x160) + -1;
    }
    memset(__s,0,(long)iVar1);
    *(undefined1 *)((long)__s + (long)iVar1) = 0;
  }
  (**(code **)(*(long *)(param_1 + 0x150) + 0x18))(param_1 + 0x150);
  uVar2 = FUN_006bd550(*(undefined8 *)(param_1 + 0x158),0);
  *(undefined4 *)(param_1 + 0x1e8) = uVar2;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  FUN_009931e0(param_1);
  return;
}

