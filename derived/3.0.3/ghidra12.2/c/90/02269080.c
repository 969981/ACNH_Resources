
undefined8 * FUN_02269080(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x4c8);
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
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x4c8,8);
    }
  }
  FUN_02249440(puVar4,param_1,param_2);
  puVar4[0x83] = 0;
  *puVar4 = &PTR_LAB_04a7c0e0;
  puVar4[0x84] = 0;
  puVar4[0x87] = 0x3f80000000000000;
  puVar4[0x85] = 0;
  puVar4[0x8d] = 0xffffffffffffffff;
  puVar4[0x86] = 0;
  *(undefined4 *)(puVar4 + 0x8e) = 1;
  puVar4[0x88] = 0;
  *(undefined1 *)((long)puVar4 + 0x474) = 0xff;
  puVar4[0x89] = 0;
  puVar4[0x8a] = 0;
  puVar4[0x8b] = 0;
  *(undefined4 *)(puVar4 + 0x8c) = 0;
  puVar4[0x97] = 0;
  *(undefined4 *)(puVar4 + 0x98) = 0;
  puVar4[0x93] = 0;
  *(undefined1 *)(puVar4 + 0x94) = 0;
  *(undefined1 *)(puVar4 + 0x80) = 0;
  puVar4[0x8f] = 0;
  puVar4[0x90] = 0;
  *(undefined4 *)(puVar4 + 0x91) = 0;
  *(undefined8 *)((long)puVar4 + 0x4a4) = 0;
  *(undefined8 *)((long)puVar4 + 0x4ac) = 0;
  if ((puVar4[0x81] != 0) && (pcVar1 = (char *)(puVar4[0x81] + 0x5074), *pcVar1 != '\0')) {
    *pcVar1 = '\0';
  }
  return puVar4;
}

