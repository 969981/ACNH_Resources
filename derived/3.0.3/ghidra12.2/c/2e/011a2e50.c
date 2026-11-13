
undefined8 * FUN_011a2e50(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x2b8);
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
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x2b8,8);
    }
  }
  FUN_006f94c0(puVar3,param_1,param_2);
  *(undefined1 *)((long)puVar3 + 0x286) = 0;
  *(undefined4 *)(puVar3 + 0x51) = 0;
  *(undefined8 *)((long)puVar3 + 0x274) = 0x40a0000043610000;
  *(undefined2 *)((long)puVar3 + 0x284) = 0xffff;
  *(undefined8 *)((long)puVar3 + 0x27c) = 0x2aaaaac0;
  *puVar3 = &PTR_LAB_04984708;
  puVar3[0x52] = 0;
  puVar3[0x53] = 0xffffffffffffffff;
  puVar3[0x54] = 0;
  *(undefined4 *)(puVar3 + 0x55) = 0;
  *(undefined8 *)((long)puVar3 + 0x2ac) = 0x41700000;
  return puVar3;
}

