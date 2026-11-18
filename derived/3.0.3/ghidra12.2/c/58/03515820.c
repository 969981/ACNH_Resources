
void FUN_03515820(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  undefined8 *puVar2;
  long lVar3;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    *(undefined **)((long)__ptr + 0xbd0) = PTR_DAT_04bca0b8 + 0x10;
    if (0 < *(int *)((long)__ptr + 0xc08)) {
      lVar3 = 0;
      do {
        puVar2 = *(undefined8 **)(*(long *)((long)__ptr + 0xc10) + lVar3 * 8);
        (**(code **)*puVar2)(puVar2);
        lVar3 = lVar3 + 1;
        *puVar2 = *(undefined8 *)((long)__ptr + 0xc18);
        *(undefined8 **)((long)__ptr + 0xc18) = puVar2;
      } while (lVar3 < *(int *)((long)__ptr + 0xc08));
    }
    *(undefined4 *)((long)__ptr + 0xc08) = 0;
    *(undefined ***)((long)__ptr + 0xc0) = &PTR_LAB_04b34700;
    if (0 < *(int *)((long)__ptr + 0xf8)) {
      lVar3 = 0;
      do {
        puVar2 = *(undefined8 **)(*(long *)((long)__ptr + 0x100) + lVar3 * 8);
        (**(code **)*puVar2)(puVar2);
        lVar3 = lVar3 + 1;
        *puVar2 = *(undefined8 *)((long)__ptr + 0x108);
        *(undefined8 **)((long)__ptr + 0x108) = puVar2;
      } while (lVar3 < *(int *)((long)__ptr + 0xf8));
    }
    *(undefined4 *)((long)__ptr + 0xf8) = 0;
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
    *param_1 = 0;
  }
  return;
}

