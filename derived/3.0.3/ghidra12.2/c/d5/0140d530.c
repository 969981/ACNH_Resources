
undefined8 * FUN_0140d530(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x398);
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
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x398,8);
    }
  }
  FUN_006f94c0(puVar4,param_1,param_2);
  *(undefined1 *)((long)puVar4 + 0x313) = 0;
  *(undefined8 *)((long)puVar4 + 0x274) = 0xfffe00000000;
  *(undefined4 *)(puVar4 + 0x52) = 0x80;
  *(undefined1 *)((long)puVar4 + 0x294) = 0;
  *puVar4 = &PTR_LAB_049976e0;
  puVar4[0x51] = (undefined1 *)((long)puVar4 + 0x294);
  *(undefined1 *)((long)puVar4 + 0x32c) = 0;
  puVar4[100] = (undefined1 *)((long)puVar4 + 0x32c);
  *(undefined4 *)(puVar4 + 0x65) = 0x40;
  *(undefined1 *)((long)puVar4 + 0x36b) = 0;
  puVar4[0x50] = &DAT_048fc708;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  puVar4[0x6e] = 0;
  *(undefined4 *)((long)puVar4 + 0x394) = 0;
  puVar4[99] = puVar1;
  *(undefined8 *)((long)puVar4 + 0x376) = 0;
  *(undefined1 *)((long)puVar4 + 0x37e) = 1;
  *(undefined8 *)((long)puVar4 + 0x38c) = 0xffffffffffffffff;
  return puVar4;
}

