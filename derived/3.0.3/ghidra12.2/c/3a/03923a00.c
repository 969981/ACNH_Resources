
undefined8 FUN_03923a00(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  void *__dest;
  void *__src;
  long lVar7;
  uint uVar8;
  
  puVar5 = PTR_PTR_04bb2238;
  uVar4 = *(uint *)(param_1 + 0x158);
  if (uVar4 != 0) {
    lVar7 = *(long *)(param_1 + 0x160);
    uVar8 = 0;
    do {
      lVar1 = lVar7 + ((long)((ulong)uVar8 << 0x20) >> 0x18);
      *(undefined4 *)(lVar1 + 0x80) = 0xffffffff;
      __dest = *(void **)(lVar1 + 0x50);
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
      __src = *(void **)(puVar5 + 8);
      if (__dest != __src) {
        (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
        lVar6 = 0;
        do {
          if (*(char *)(*(long *)(puVar5 + 8) + lVar6) == '\0') goto LAB_03923a48;
          lVar2 = *(long *)(puVar5 + 8) + lVar6;
          if (*(char *)(lVar2 + 1) == '\0') {
            lVar6 = lVar6 + 1;
            goto LAB_03923a48;
          }
          if (*(char *)(lVar2 + 2) == '\0') {
            lVar6 = lVar6 + 2;
            goto LAB_03923a48;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        lVar6 = 0;
LAB_03923a48:
        iVar3 = (int)lVar6;
        if (*(int *)(lVar1 + 0x58) <= (int)lVar6) {
          iVar3 = *(int *)(lVar1 + 0x58) + -1;
        }
        memcpy(__dest,__src,(long)iVar3);
        *(undefined1 *)((long)__dest + (long)iVar3) = 0;
      }
      uVar8 = uVar8 + 1;
    } while (uVar4 != uVar8);
  }
  return 1;
}

