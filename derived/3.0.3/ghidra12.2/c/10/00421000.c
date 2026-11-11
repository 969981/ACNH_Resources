
undefined8 FUN_00421000(undefined8 *param_1)

{
  void *__dest;
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  void *__src;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)*param_1;
  puVar1 = (undefined1 *)plVar4[3];
  puVar3 = (undefined1 *)plVar4[4];
  if (puVar3 < puVar1 + 1) {
    __src = (void *)plVar4[2];
    if (__src == (void *)0x0) {
      if (*plVar4 == 0) {
        lVar5 = FUN_00187df4(1);
        __src = (void *)plVar4[2];
        puVar1 = (undefined1 *)plVar4[3];
        puVar3 = (undefined1 *)plVar4[5];
        *plVar4 = lVar5;
        plVar4[1] = lVar5;
      }
      else {
        puVar3 = (undefined1 *)plVar4[5];
        __src = (void *)0x0;
      }
    }
    else {
      puVar3 = puVar3 + (((ulong)(puVar3 + (1 - (long)__src)) >> 1) - (long)__src);
    }
    lVar5 = (long)puVar1 - (long)__src;
    if (puVar3 <= (undefined1 *)(lVar5 + 1)) {
      puVar3 = (undefined1 *)(lVar5 + 1);
    }
    if (puVar3 == (undefined1 *)0x0) {
      __dest = (void *)0x0;
    }
    else {
      lVar2 = plVar4[4];
      __dest = (void *)FUN_00187df4(puVar3);
      puVar1 = puVar3;
      if ((undefined1 *)(lVar2 - (long)__src) <= puVar3) {
        puVar1 = (undefined1 *)(lVar2 - (long)__src);
      }
      memcpy(__dest,__src,(size_t)puVar1);
    }
    FUN_00187e4c(__src);
    puVar1 = (undefined1 *)((long)__dest + lVar5);
    plVar4[2] = (long)__dest;
    plVar4[4] = (long)((long)__dest + (long)puVar3);
  }
  plVar4[3] = (long)(puVar1 + 1);
  *puVar1 = 0x7d;
  return 1;
}

