
undefined8 * FUN_02250ad0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x5e0);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar5 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x5e0,8);
    }
  }
  FUN_02249440(puVar4,param_1,param_2);
  *(undefined4 *)(puVar4 + 0x87) = 0;
  puVar4[0x8c] = puVar4 + 0x8d;
  *puVar4 = &PTR_LAB_04a7a538;
  puVar4[0x88] = 0;
  puVar4[0x89] = 0;
  puVar4[0x8a] = puVar4 + 0x8c;
  puVar4[0x9f] = 0;
  puVar4[0x8b] = puVar4 + 0x8c;
  puVar4[0x83] = &PTR_FUN_048fc6e0;
  puVar4[0x8d] = puVar4 + 0x8e;
  puVar4[0x8e] = puVar4 + 0x8f;
  puVar4[0x8f] = puVar4 + 0x90;
  puVar4[0x90] = puVar4 + 0x91;
  puVar4[0x91] = puVar4 + 0x92;
  puVar4[0x92] = puVar4 + 0x93;
  puVar4[0x93] = puVar4 + 0x94;
  puVar4[0x94] = puVar4 + 0x95;
  puVar4[0x95] = puVar4 + 0x96;
  puVar4[0x96] = puVar4 + 0x97;
  puVar4[0x97] = puVar4 + 0x98;
  puVar4[0x98] = puVar4 + 0x99;
  puVar4[0x99] = puVar4 + 0x9a;
  puVar4[0x9a] = puVar4 + 0x9b;
  puVar4[0x9b] = puVar4 + 0x9c;
  puVar4[0x9c] = puVar4 + 0x9d;
  puVar4[0x9d] = puVar4 + 0x9e;
  puVar4[0x9e] = puVar4 + 0x9f;
  if (puVar4 + 0xa0 != (undefined8 *)0x0) {
    puVar4[0x89] = puVar4 + 0xa0;
    puVar4[0x88] = 0x1400000000;
  }
  *(undefined4 *)(puVar4 + 0xb7) = 0;
  *(undefined4 *)((long)puVar4 + 0x5c4) = 0;
  *(undefined8 *)((long)puVar4 + 0x5cc) = 0;
  *(undefined1 *)(puVar4 + 0x80) = 0;
  if ((puVar4[0x81] != 0) && (pcVar1 = (char *)(puVar4[0x81] + 0x5074), *pcVar1 != '\0')) {
    *pcVar1 = '\0';
  }
  *PTR_DAT_04bc2dd8 = 0;
  return puVar4;
}

