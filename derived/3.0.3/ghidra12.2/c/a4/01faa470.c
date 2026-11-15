
void FUN_01faa470(undefined8 *param_1)

{
  void *__dest;
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  long lVar7;
  void *__src;
  
  __dest = (void *)((long)param_1 + 0x1c);
  *(undefined1 *)((long)param_1 + 0x5b) = 0;
  param_1[2] = __dest;
  *(undefined4 *)(param_1 + 3) = 0x40;
  puVar6 = PTR_PTR_04bb2238;
  puVar1 = PTR_DAT_04bb2f70 + 0x10;
  *param_1 = 0;
  param_1[1] = puVar1;
  (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
  __src = *(void **)(puVar6 + 8);
  if (__dest != __src) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(puVar6 + 8) + lVar7) == '\0') goto LAB_01faa52c;
      lVar2 = *(long *)(puVar6 + 8) + lVar7;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01faa52c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_01faa52c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_01faa52c:
    iVar3 = (int)lVar7;
    if (*(int *)(param_1 + 3) <= (int)lVar7) {
      iVar3 = *(int *)(param_1 + 3) + -1;
    }
    memcpy(__dest,__src,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
  }
  param_1[1] = PTR_DAT_04bb2bc0 + 0x10;
  puVar1 = PTR_DAT_04bb37e0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  uVar4 = *(undefined4 *)puVar1;
  uVar5 = *(undefined4 *)(puVar1 + 4);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 100) = uVar4;
  *(undefined4 *)(param_1 + 0xd) = uVar5;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  return;
}

