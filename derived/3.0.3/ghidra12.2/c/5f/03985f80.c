
undefined8 * FUN_03985f80(long *param_1)

{
  void *__dest;
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  void *__src;
  
  if (DAT_05ae9300 != (undefined8 *)0x0) {
    return DAT_05ae9300;
  }
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar6 = malloc(0x180);
  }
  else {
    plVar5 = param_1;
    if (param_1 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar7 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        puVar6 = (undefined8 *)0x0;
        goto LAB_0398600c;
      }
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x180,8);
  }
LAB_0398600c:
  FUN_038c69f0(puVar6 + 0x2c,param_1,3);
  *(undefined1 *)((long)puVar6 + 0x11b) = 0;
  puVar6[0x2c] = &PTR_FUN_04b68af0;
  __dest = (void *)((long)puVar6 + 0x1c);
  DAT_05ae92f8 = puVar6 + 0x2c;
  puVar6[2] = __dest;
  *(undefined4 *)(puVar6 + 3) = 0x100;
  puVar3 = PTR_PTR_04bb2238;
  puVar1 = PTR_DAT_04bb4520 + 0x10;
  *puVar6 = &PTR_LAB_04b68b10;
  puVar6[1] = puVar1;
  (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
  __src = *(void **)(puVar3 + 8);
  if (__dest != __src) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar7) == '\0') goto LAB_039860e0;
      lVar4 = *(long *)(puVar3 + 8) + lVar7;
      if (*(char *)(lVar4 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_039860e0;
      }
      if (*(char *)(lVar4 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_039860e0;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_039860e0:
    iVar2 = (int)lVar7;
    if (*(int *)(puVar6 + 3) <= (int)lVar7) {
      iVar2 = *(int *)(puVar6 + 3) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  puVar6[1] = PTR_DAT_04bb21f8 + 0x10;
  FUN_038e18e4(puVar6 + 0x24);
  DAT_05ae9300 = puVar6;
  return puVar6;
}

