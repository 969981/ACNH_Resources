
undefined8 * FUN_0174e870(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x300);
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
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x300,8);
    }
  }
  FUN_006f94c0(puVar3,param_1,param_2);
  puVar3[0x52] = 0;
  *puVar3 = &PTR_LAB_049c1bf0;
  *(undefined8 *)((long)puVar3 + 0x274) = 0;
  *(undefined8 *)((long)puVar3 + 0x27c) = 0;
  *(undefined8 *)((long)puVar3 + 0x284) = 0;
  *(undefined1 *)((long)puVar3 + 0x28c) = 0;
  puVar3[0x53] = 0xfffe;
  FUN_0277d4ac(puVar3 + 0x53);
  *(undefined4 *)(puVar3 + 0x54) = 0;
  *(undefined1 *)((long)puVar3 + 700) = 0;
  puVar3[0x56] = (undefined1 *)((long)puVar3 + 700);
  *(undefined1 *)((long)puVar3 + 0x2fb) = 0;
  *(undefined4 *)(puVar3 + 0x57) = 0x40;
  puVar3[0x55] = &PTR_LAB_048fb9f8;
  return puVar3;
}

