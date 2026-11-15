
undefined8 * FUN_02109950(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  void *__dest;
  void *__src;
  
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar6 = malloc(0x2e0);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar7 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x2e0,8);
    }
  }
  FUN_01739fc0(puVar6,param_1,param_2);
  puVar2 = PTR_DAT_04bb2a08;
  *puVar6 = &PTR_LAB_04a74860;
  *(undefined4 *)(puVar6 + 0x53) = 0x20;
  *(undefined1 *)((long)puVar6 + 699) = 0;
  __dest = (void *)((long)puVar6 + 0x29c);
  puVar6[0x51] = puVar2 + 0x10;
  puVar6[0x52] = __dest;
  plVar5 = (long *)(param_1 + 0x30);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  __src = *(void **)(param_1 + 0x38);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x18))(plVar5);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x38) + lVar7) == '\0') goto LAB_02109a90;
      lVar4 = *(long *)(param_1 + 0x38) + lVar7;
      if (*(char *)(lVar4 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_02109a90;
      }
      if (*(char *)(lVar4 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_02109a90;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_02109a90:
    iVar1 = (int)lVar7;
    if (*(int *)(puVar6 + 0x53) <= (int)lVar7) {
      iVar1 = *(int *)(puVar6 + 0x53) + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  puVar2 = PTR_DAT_04bb2028;
  *(undefined1 *)((long)puVar6 + 0x2db) = 0;
  *(undefined4 *)(puVar6 + 0x5a) = 8;
  *(undefined1 *)((long)puVar6 + 0x2d4) = 0;
  puVar3 = PTR_DAT_04bb3768;
  puVar6[0x59] = (undefined1 *)((long)puVar6 + 0x2d4);
  puVar6[0x51] = puVar2 + 0x10;
  puVar6[0x58] = puVar3 + 0x10;
  return puVar6;
}

