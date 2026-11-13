
undefined8 * FUN_014273f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x4e0);
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
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x4e0,8);
    }
  }
  FUN_02249440(puVar4,param_1,param_2);
  puVar4[0x83] = 0;
  *puVar4 = &PTR_LAB_0499ab80;
  *(undefined1 *)((long)puVar4 + 0x454) = 0;
  puVar4[0x89] = (undefined1 *)((long)puVar4 + 0x454);
  puVar4[0x84] = 0;
  puVar4[0x85] = 0;
  puVar4[0x86] = 0;
  *(undefined4 *)(puVar4 + 0x87) = 0;
  *(undefined4 *)(puVar4 + 0x8a) = 0x80;
  *(undefined1 *)((long)puVar4 + 0x4d3) = 0;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  *(undefined1 *)(puVar4 + 0x9b) = 0;
  puVar4[0x88] = puVar1;
  return puVar4;
}

