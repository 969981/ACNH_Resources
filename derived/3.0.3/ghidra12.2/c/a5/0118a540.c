
undefined8 * FUN_0118a540(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x338);
  }
  else {
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar2 = (long *)(lVar4 + 8);
    if (lVar1 != 0) {
      plVar2 = (long *)(lVar1 + 0xa8);
    }
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x338,8);
    }
  }
  FUN_006f94c0(puVar3,param_1,param_2);
  puVar3[0x50] = puVar3 + 0x4f;
  puVar3[0x4f] = puVar3 + 0x4f;
  puVar3[0x55] = puVar3 + 0x58;
  puVar3[0x58] = puVar3 + 0x5b;
  *puVar3 = &PTR_FUN_04983a48;
  puVar3[0x5b] = puVar3 + 0x5e;
  puVar3[0x52] = puVar3 + 0x55;
  puVar3[0x5e] = puVar3 + 0x61;
  puVar3[0x53] = puVar3 + 0x55;
  *(undefined4 *)(puVar3 + 0x51) = 0;
  puVar3[0x61] = puVar3 + 100;
  puVar3[100] = 0;
  *(undefined4 *)(puVar3 + 0x54) = 6;
  return puVar3;
}

