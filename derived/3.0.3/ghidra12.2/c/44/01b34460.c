
long * FUN_01b34460(long param_1,long *param_2)

{
  void *__dest;
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  void *__src;
  long *plVar6;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    plVar4 = malloc(0x58);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_2 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        param_2 = (long *)(lVar3 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        return (long *)0x0;
      }
    }
    plVar4 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x58,8);
  }
  if (plVar4 != (long *)0x0) {
    __dest = (void *)((long)plVar4 + 0x4c);
    *plVar4 = (long)(PTR_DAT_04bc0588 + 0x10);
    *(undefined4 *)(plVar4 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((long)plVar4 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    plVar4[2] = 0;
    plVar4[3] = 0;
    *plVar4 = (long)(PTR_DAT_04bc05d8 + 0x10);
    *(undefined4 *)(plVar4 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((long)plVar4 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined1 *)(plVar4 + 5) = *(undefined1 *)(param_1 + 0x28);
    *(undefined2 *)((long)plVar4 + 0x2c) = *(undefined2 *)(param_1 + 0x2c);
    *(undefined1 *)((long)plVar4 + 0x2e) = *(undefined1 *)(param_1 + 0x2e);
    *(undefined1 *)((long)plVar4 + 0x2f) = *(undefined1 *)(param_1 + 0x2f);
    *(undefined4 *)(plVar4 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined1 *)((long)plVar4 + 0x34) = *(undefined1 *)(param_1 + 0x34);
    uVar2 = *(undefined1 *)(param_1 + 0x35);
    *plVar4 = (long)&PTR_LAB_04a37b00;
    *(undefined1 *)((long)plVar4 + 0x53) = 0;
    *(undefined1 *)((long)plVar4 + 0x35) = uVar2;
    *(undefined4 *)(plVar4 + 9) = 8;
    plVar4[7] = (long)(PTR_DAT_04bb6a30 + 0x10);
    plVar4[8] = (long)__dest;
    plVar6 = (long *)(param_1 + 0x38);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    __src = *(void **)(param_1 + 0x40);
    if (__dest != __src) {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x18))(plVar6);
      lVar5 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x40) + lVar5) == '\0') goto LAB_01b34624;
        lVar3 = *(long *)(param_1 + 0x40) + lVar5;
        if (*(char *)(lVar3 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_01b34624;
        }
        if (*(char *)(lVar3 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_01b34624;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_01b34624:
      iVar1 = (int)lVar5;
      if ((int)plVar4[9] <= (int)lVar5) {
        iVar1 = (int)plVar4[9] + -1;
      }
      memcpy(__dest,__src,(long)iVar1);
      *(undefined1 *)((long)__dest + (long)iVar1) = 0;
    }
    plVar4[7] = (long)(PTR_DAT_04bb3768 + 0x10);
  }
  return plVar4;
}

