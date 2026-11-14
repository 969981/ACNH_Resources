
bool FUN_018a1e70(long *param_1)

{
  int iVar1;
  long lVar2;
  ushort uVar3;
  void *__src;
  long lVar4;
  void *__dest;
  undefined4 uVar5;
  
  lVar2 = *param_1;
  uVar5 = FUN_01a12580(*(undefined8 *)PTR_DAT_04bb4008,*(undefined4 *)param_1[1]);
  *(undefined4 *)(lVar2 + 0x2c0) = uVar5;
  uVar5 = FUN_01a1159c(*(undefined8 *)param_1[2],*(undefined4 *)param_1[1]);
  *(undefined4 *)(lVar2 + 0x2c8) = uVar5;
  uVar3 = *(ushort *)param_1[1];
  *(undefined4 *)(lVar2 + 0x2d0) = 0;
  *(uint *)(lVar2 + 0x2cc) = (uint)uVar3;
  *(undefined4 *)(lVar2 + 0x2d4) = *(undefined4 *)(lVar2 + 0x29c);
  __src = (void *)FUN_01a113c0(*(undefined8 *)param_1[2],*(undefined4 *)param_1[1]);
  if ((__src != (void *)0x0) && (__dest = *(void **)(lVar2 + 0x2e0), __dest != __src)) {
    lVar4 = 0;
    do {
      if (*(char *)((long)__src + lVar4) == '\0') goto LAB_018a1f40;
      if (*(char *)((long)__src + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_018a1f40;
      }
      if (*(char *)((long)__src + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_018a1f40;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_018a1f40:
    iVar1 = (int)lVar4;
    if (*(int *)(lVar2 + 0x2e8) <= (int)lVar4) {
      iVar1 = *(int *)(lVar2 + 0x2e8) + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  return __src != (void *)0x0;
}

