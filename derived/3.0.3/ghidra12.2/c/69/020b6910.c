
void FUN_020b6910(int *param_1,void *param_2)

{
  void *__dest;
  int iVar1;
  undefined *puVar2;
  void *__src;
  long lVar3;
  undefined8 *puVar4;
  undefined *local_50;
  void *local_48;
  
  if (*param_1 < param_1[1]) {
    puVar4 = *(undefined8 **)(param_1 + 4);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 4) = *puVar4;
    }
    puVar2 = PTR_DAT_04bb2020;
    __dest = (void *)((long)puVar4 + 0x14);
    local_50 = PTR_DAT_04bb2020 + 0x10;
    *(undefined4 *)(puVar4 + 2) = 0x20;
    *(undefined1 *)((long)puVar4 + 0x33) = 0;
    *puVar4 = &PTR_LAB_048fa8f8;
    puVar4[1] = __dest;
    local_48 = param_2;
    (**(code **)(puVar2 + 0x28))(&local_50);
    __src = local_48;
    if (__dest != local_48) {
      (**(code **)(local_50 + 0x18))(&local_50);
      lVar3 = 0;
      do {
        if (*(char *)((long)local_48 + lVar3) == '\0') goto LAB_020b69f0;
        if (*(char *)((long)local_48 + lVar3 + 1) == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_020b69f0;
        }
        if (*(char *)((long)local_48 + lVar3 + 2) == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_020b69f0;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_020b69f0:
      iVar1 = (int)lVar3;
      if (*(int *)(puVar4 + 2) <= (int)lVar3) {
        iVar1 = *(int *)(puVar4 + 2) + -1;
      }
      memcpy(__dest,__src,(long)iVar1);
      *(undefined1 *)((long)__dest + (long)iVar1) = 0;
    }
    *puVar4 = &PTR_LAB_048f9700;
    if (*param_1 < param_1[1]) {
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar4;
      *param_1 = *param_1 + 1;
    }
  }
  return;
}

