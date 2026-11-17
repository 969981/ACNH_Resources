
undefined8 * FUN_02b79a30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x2e0);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar3 = (long *)(lVar5 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x2e0,8);
    }
  }
  FUN_006f94c0(puVar4,param_1,param_2);
  puVar4[0x57] = 0;
  puVar1 = PTR_DAT_04bc44c0;
  *(undefined4 *)(puVar4 + 0x58) = 0;
  puVar4[0x59] = 0;
  puVar4[0x50] = 0xffffffff00000000;
  *puVar4 = &PTR_LAB_04aa5230;
  *(undefined4 *)(puVar4 + 0x5a) = 0;
  puVar4[0x5b] = 0;
  puVar4[0x4f] = puVar1 + 0x10;
  return puVar4;
}

