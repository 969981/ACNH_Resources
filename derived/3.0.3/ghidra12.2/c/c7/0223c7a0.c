
long * FUN_0223c7a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  void *__dest;
  void *__src;
  
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    plVar5 = malloc(0x5c0);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar6 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x5c0,8);
    }
  }
  FUN_02249440(plVar5,param_1,param_2);
  puVar3 = PTR_DAT_04bc2d38;
  puVar2 = PTR_DAT_04bb2f70;
  *(undefined4 *)(plVar5 + 0x85) = 0x40;
  *plVar5 = (long)(puVar3 + 0x10);
  __dest = (void *)((long)plVar5 + 0x42c);
  plVar5[0x83] = (long)(puVar2 + 0x10);
  plVar5[0x84] = (long)__dest;
  puVar2 = PTR_PTR_04bb2238;
  *(undefined1 *)((long)plVar5 + 0x46b) = 0;
  (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
  __src = *(void **)(puVar2 + 8);
  if (__dest != __src) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(puVar2 + 8) + lVar6) == '\0') goto LAB_0223c8ec;
      lVar4 = *(long *)(puVar2 + 8) + lVar6;
      if (*(char *)(lVar4 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0223c8ec;
      }
      if (*(char *)(lVar4 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0223c8ec;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0223c8ec:
    iVar1 = (int)lVar6;
    if ((int)plVar5[0x85] <= (int)lVar6) {
      iVar1 = (int)plVar5[0x85] + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  *(undefined1 *)((long)plVar5 + 0x4b4) = 0;
  puVar2 = PTR_DAT_04bb2bc0;
  plVar5[0x95] = (long)plVar5 + 0x4b4;
  *(undefined8 *)((long)plVar5 + 0x474) = 0;
  *(undefined4 *)(plVar5 + 0x9f) = 0xffffffff;
  *plVar5 = (long)&PTR_LAB_04a78bd8;
  plVar5[0xa9] = (long)&LAB_0223ca30;
  *(undefined1 *)(plVar5 + 0x8e) = 0;
  *(undefined4 *)(plVar5 + 0x90) = 0;
  plVar5[0x91] = 0;
  plVar5[0x83] = (long)(puVar2 + 0x10);
  *(undefined2 *)(plVar5 + 0x92) = 0;
  plVar5[0x93] = (long)&PTR_LAB_04a78d08;
  *(undefined4 *)(plVar5 + 0x96) = 0x40;
  *(undefined1 *)((long)plVar5 + 0x4f3) = 0;
  plVar5[0x94] = (long)(puVar2 + 0x10);
  *(undefined2 *)((long)plVar5 + 0x4fc) = 0;
  *(undefined4 *)(plVar5 + 0xa0) = 0;
  plVar5[0xa1] = 0;
  plVar5[0xa2] = 0;
  *(undefined4 *)(plVar5 + 0xa3) = 0;
  plVar5[0xa6] = 0;
  plVar5[0xa5] = 0;
  plVar5[0xa4] = 0;
  plVar5[0xa8] = (long)plVar5;
  plVar5[0xaa] = 0;
  plVar5[0xa7] = (long)&PTR_LAB_04a78fe8;
  plVar5[0xab] = 0;
  plVar5[0xac] = 0;
  plVar5[0xad] = 0;
  plVar5[0xae] = 0;
  plVar5[0xb0] = (long)(PTR_DAT_04bdf1d8 + 0x10);
  plVar5[0xb5] = (long)plVar5 + 0x5b4;
  plVar5[0xaf] = 0;
  plVar5[0xb1] = 0;
  plVar5[0xb2] = 0;
  plVar5[0xb3] = 0;
  *(undefined4 *)(plVar5 + 0xb6) = 8;
  *(undefined1 *)((long)plVar5 + 0x5bb) = 0;
  *(undefined1 *)((long)plVar5 + 0x5b4) = 0;
  plVar5[0xb4] = (long)(PTR_DAT_04bb3768 + 0x10);
  return plVar5;
}

