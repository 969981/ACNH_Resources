
void FUN_032a57fc(long param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x100);
  if (__ptr != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  puVar1 = (undefined1 *)0x0;
  if (*(long *)(param_1 + 0x70) != 0) {
    puVar1 = &LAB_032a9c74;
  }
  if (puVar1 != (undefined1 *)0x0) {
    FUN_032aab28();
    lVar3 = *(long *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (lVar3 != 0) {
      FUN_032a981c();
    }
  }
  puVar1 = (undefined1 *)0x0;
  if (*(long *)(param_1 + 0x78) != 0) {
    puVar1 = &LAB_032a9c74;
  }
  if (puVar1 != (undefined1 *)0x0) {
    FUN_032aab28();
    lVar3 = *(long *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (lVar3 != 0) {
      FUN_032a981c();
    }
  }
  puVar1 = (undefined1 *)0x0;
  if (*(long *)(param_1 + 0x80) != 0) {
    puVar1 = &LAB_032a9c74;
  }
  if (puVar1 != (undefined1 *)0x0) {
    FUN_032aab28();
    lVar3 = *(long *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (lVar3 != 0) {
      FUN_032a981c();
    }
  }
  puVar1 = (undefined1 *)0x0;
  if (*(long *)(param_1 + 0x88) != 0) {
    puVar1 = &LAB_032a9c74;
  }
  if (puVar1 != (undefined1 *)0x0) {
    FUN_032aab28();
    lVar3 = *(long *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
    if (lVar3 != 0) {
      FUN_032a981c();
    }
  }
  puVar1 = (undefined1 *)0x0;
  if (*(long *)(param_1 + 0x90) != 0) {
    puVar1 = &LAB_032a9c74;
  }
  if (puVar1 != (undefined1 *)0x0) {
    FUN_032aab28();
    lVar3 = *(long *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
    if (lVar3 != 0) {
      FUN_032a981c();
    }
  }
  puVar1 = (undefined1 *)0x0;
  if (*(long *)(param_1 + 0x98) != 0) {
    puVar1 = &LAB_032a9c74;
  }
  if (puVar1 != (undefined1 *)0x0) {
    FUN_032aab28();
    lVar3 = *(long *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = 0;
    if (lVar3 != 0) {
      FUN_032a981c();
    }
  }
  puVar1 = (undefined1 *)0x0;
  if (*(long *)(param_1 + 0xa0) != 0) {
    puVar1 = &LAB_032a9c74;
  }
  if (puVar1 != (undefined1 *)0x0) {
    FUN_032aab28();
    lVar3 = *(long *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (lVar3 != 0) {
      FUN_032a981c();
      return;
    }
  }
  return;
}

