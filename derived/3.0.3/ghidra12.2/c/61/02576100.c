
undefined8 * FUN_02576100(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x2e0);
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
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x2e0,8);
    }
  }
  FUN_01739fc0(puVar3,param_1,param_2);
  *(undefined1 *)((long)puVar3 + 0x2db) = 0;
  *puVar3 = &PTR_LAB_04a84f58;
  *(undefined1 *)((long)puVar3 + 0x29c) = 0;
  puVar3[0x52] = (undefined1 *)((long)puVar3 + 0x29c);
  *(undefined4 *)(puVar3 + 0x53) = 0x40;
  puVar3[0x51] = &PTR_LAB_048fb9f8;
  return puVar3;
}

