
undefined8 * FUN_0393dfa0(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  if (DAT_05ae90b0 != (undefined8 *)0x0) {
    return DAT_05ae90b0;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar3 = malloc(0x4dc0);
  }
  else {
    plVar2 = param_1;
    if (param_1 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar5 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        puVar3 = (undefined8 *)0x0;
        goto LAB_0393e02c;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x4dc0,8);
  }
LAB_0393e02c:
  FUN_038c69f0(puVar3 + 0x9b4,param_1,3);
  DAT_05ae90a8 = puVar3 + 0x9b4;
  *puVar3 = &PTR_FUN_04b67918;
  puVar3[0x9b4] = &PTR_FUN_04b678f8;
  puVar3[3] = puVar3 + 3;
  puVar3[4] = puVar3 + 3;
  *(undefined4 *)(puVar3 + 1) = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  puVar3[2] = 0;
  puVar3[6] = puVar3 + 6;
  puVar3[7] = puVar3 + 6;
  puVar3[9] = 0x1000000000;
  puVar3[10] = puVar3 + 0xb;
  lVar5 = 0x80;
  *(undefined4 *)(puVar3 + 8) = 0;
  lVar1 = 0;
  do {
    lVar5 = lVar5 + -2;
    puVar4 = (undefined1 *)((long)puVar3 + lVar1 + 0xec);
    *puVar4 = 0;
    *(undefined1 **)((long)puVar3 + lVar1 + 0xe0) = puVar4;
    *(undefined4 *)((long)puVar3 + lVar1 + 0xe8) = 0x80;
    puVar4 = (undefined1 *)((long)puVar3 + lVar1 + 0x184);
    *puVar4 = 0;
    *(undefined1 *)((long)puVar3 + lVar1 + 0x16b) = 0;
    *(undefined1 **)((long)puVar3 + lVar1 + 0xd8) = &DAT_048fc708;
    *(undefined1 **)((long)puVar3 + lVar1 + 0x178) = puVar4;
    *(undefined4 *)((long)puVar3 + lVar1 + 0x180) = 0x80;
    *(undefined1 *)((long)puVar3 + lVar1 + 0x203) = 0;
    *(undefined1 **)((long)puVar3 + lVar1 + 0x170) = &DAT_048fc708;
    lVar1 = lVar1 + 0x130;
  } while (lVar5 != 0);
  *(undefined2 *)(puVar3 + 0x99b) = 0x101;
  FUN_038e18e4(puVar3 + 0x99c);
  FUN_038e18e4(puVar3 + 0x9a4);
  FUN_038e18e4(puVar3 + 0x9ac);
  DAT_05ae90b0 = puVar3;
  return puVar3;
}

