
undefined8 * FUN_016f9d90(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x290);
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
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x290,8);
    }
  }
  FUN_006f94c0(puVar3,param_1,param_2);
  *(undefined8 *)((long)puVar3 + 0x274) = 0;
  *puVar3 = &DAT_049bc5c0;
  *(undefined4 *)((long)puVar3 + 0x27c) = 0;
  puVar3[0x50] = 0x4120000040700000;
  *(undefined4 *)(puVar3 + 0x51) = 0x3f800000;
  return puVar3;
}

