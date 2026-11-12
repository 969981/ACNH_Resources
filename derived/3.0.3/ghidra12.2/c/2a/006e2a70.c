
undefined8 FUN_006e2a70(long param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  void *__dest;
  void *__src;
  long *plVar6;
  undefined *local_60;
  long lStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  *(undefined4 *)(param_1 + 0x50) = *param_2;
  *(undefined4 *)(param_1 + 0x54) = param_2[1];
  **(undefined1 **)(param_1 + 0x528) = 0;
  **(undefined1 **)(param_1 + 0x560) = 0;
  __dest = *(void **)(param_1 + 0x60);
  plVar6 = (long *)(param_2 + 2);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  __src = *(void **)(param_2 + 4);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_2 + 2) + 0x18))(plVar6);
    lVar5 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 4) + lVar5) == '\0') goto LAB_006e2b30;
      lVar1 = *(long *)(param_2 + 4) + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_006e2b30;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_006e2b30;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_006e2b30:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x68) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x68) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(*(long *)(param_2 + 0x138) + 0x2c);
  *(undefined8 *)(param_1 + 0x598) = *(undefined8 *)(param_2 + 0x134);
  *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_2 + 0x136);
  *(undefined8 *)(param_1 + 0x9c8) = *(undefined8 *)(param_2 + 0x138);
  if (*(void **)(param_1 + 0x5b0) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x5b0),0,*(size_t *)(param_1 + 0x5b8));
    *(undefined8 *)(param_1 + 0x5c0) = 0;
    if (*(void **)(param_1 + 0x5b0) != (void *)0x0) {
      memset(*(void **)(param_1 + 0x5b0),0,*(size_t *)(param_1 + 0x5b8));
      *(undefined8 *)(param_1 + 0x5c0) = 0;
      FUN_0069aa80(&local_60,*(undefined8 *)(param_1 + 0x5b0),*(undefined8 *)(param_1 + 0x5b8));
      (**(code **)(*(long *)(param_1 + 0x5a8) + 0x18))(param_1 + 0x5a8,&local_60);
      uVar4 = FUN_0069bd38(&local_60);
      *(undefined8 *)(param_1 + 0x5c0) = uVar4;
      FUN_0069bd40(&local_60);
    }
  }
  *(undefined8 *)(param_1 + 0x89f0) = *(undefined8 *)(param_2 + 0x13a);
  if (*(void **)(param_1 + 0x9d8) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x9d8),0,*(size_t *)(param_1 + 0x9e0));
    *(undefined8 *)(param_1 + 0x9e8) = 0;
    if (*(void **)(param_1 + 0x9d8) != (void *)0x0) {
      memset(*(void **)(param_1 + 0x9d8),0,*(size_t *)(param_1 + 0x9e0));
      *(undefined8 *)(param_1 + 0x9e8) = 0;
      FUN_0069aa80(&local_60,*(undefined8 *)(param_1 + 0x9d8),*(undefined8 *)(param_1 + 0x9e0));
      (**(code **)(*(long *)(param_1 + 0x9d0) + 0x18))(param_1 + 0x9d0,&local_60);
      uVar4 = FUN_0069bd38(&local_60);
      *(undefined8 *)(param_1 + 0x9e8) = uVar4;
      FUN_0069bd40(&local_60);
    }
  }
  *(undefined1 *)(param_1 + 0x4c) = *PTR_DAT_04bb2950;
  local_50 = PTR_LAB_04bb2a30;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  uStack_48 = 0;
  local_60 = PTR_DAT_04bb2a38 + 0x10;
  lStack_58 = param_1;
  uVar3 = FUN_006d6214(*(undefined8 *)(*(long *)PTR_DAT_04bcb7d8 + 0x88),&local_60,
                       (undefined1 *)(param_1 + 0x4c),0,0,0);
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  return 1;
}

