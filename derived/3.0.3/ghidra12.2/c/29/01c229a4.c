
void FUN_01c229a4(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *__s;
  void *__ptr;
  
  *(undefined ***)(param_1 + 0x810) = &PTR_FUN_04a40370;
  FUN_01c323e0(param_1 + 0x810);
  FUN_01c32b38(param_1 + 0x810);
  FUN_01c316e0(param_1 + 0x610);
  *(undefined ***)(param_1 + 0x410) = &PTR_FUN_04a40500;
  FUN_01c36ab0(param_1 + 0x410);
  FUN_01c371f8(param_1 + 0x410);
  __ptr = *(void **)(param_1 + 0x3f0);
  *(undefined ***)(param_1 + 0x210) = &PTR_FUN_04a405c8;
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
    *(undefined8 *)(param_1 + 0x3f0) = 0;
    *(undefined4 *)(param_1 + 1000) = 0;
  }
  *(undefined4 *)(param_1 + 0x408) = 0;
  *(undefined1 *)(param_1 + 0x40c) = 0;
  FUN_01c396f8(param_1 + 0x210);
  *(undefined ***)(param_1 + 0x210) = &PTR_LAB_04a40620;
  FUN_01c396f8(param_1 + 0x210);
  __s = *(undefined8 **)(param_1 + 0x220);
  *(undefined ***)(param_1 + 0x210) = &PTR_FUN_04b5e7f8;
  if (__s != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x228) < 1) {
      iVar1 = *(int *)(param_1 + 0x228) + -1;
    }
    memset(__s,0,(long)iVar1);
    *(undefined1 *)((long)__s + (long)iVar1) = 0;
  }
  (**(code **)(*(long *)(param_1 + 0x218) + 0x18))(param_1 + 0x218);
  uVar2 = FUN_006bd550(*(undefined8 *)(param_1 + 0x220),0);
  *(undefined4 *)(param_1 + 0x2b0) = uVar2;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  FUN_01c31af4(param_1 + 0x10);
  return;
}

