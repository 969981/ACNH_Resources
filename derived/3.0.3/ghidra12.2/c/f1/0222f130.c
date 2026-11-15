
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0222f130(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar5 = malloc(0x470);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar4 = (long *)(lVar6 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x470,8);
    }
  }
  FUN_006f94c0(puVar5,param_1,param_2);
  puVar5[0x55] = 0x40a0000040a00000;
  puVar1 = PTR_DAT_04bb5cb0;
  *puVar5 = &PTR_LAB_04a77e30;
  *(undefined1 *)((long)puVar5 + 0x27c) = 0;
  puVar5[0x50] = puVar1 + 0x10;
  puVar5[0x51] = 0;
  puVar5[0x52] = 0;
  puVar5[0x53] = 0;
  *(undefined4 *)((long)puVar5 + 0x2cc) = 0;
  uVar2 = DAT_0558600c;
  *(undefined4 *)((long)puVar5 + 0x274) = _DAT_05586008;
  *(undefined4 *)(puVar5 + 0x4f) = uVar2;
  *(undefined8 *)((long)puVar5 + 0x29d) = 0;
  *(undefined4 *)(puVar5 + 0x56) = 0x40a00000;
  *(undefined8 *)((long)puVar5 + 0x2b4) = 0;
  *(undefined8 *)((long)puVar5 + 700) = 0;
  *(undefined8 *)((long)puVar5 + 0x2c4) = 0;
  puVar5[0x5a] = &PTR_LAB_04929bc8;
  *(undefined4 *)(puVar5 + 0x5b) = 0;
  puVar5[0x5e] = 0;
  puVar5[0x5d] = 0;
  puVar5[0x60] = 0;
  puVar5[0x61] = 0;
  puVar5[99] = 0;
  puVar5[100] = 0;
  puVar5[0x66] = 0;
  puVar5[0x67] = 0;
  puVar5[0x69] = 0;
  puVar5[0x6a] = 0;
  puVar5[0x6d] = 0;
  puVar5[0x6c] = 0;
  puVar5[0x70] = 0;
  puVar5[0x6f] = 0;
  puVar5[0x73] = 0;
  puVar5[0x72] = 0;
  puVar5[0x76] = 0;
  puVar5[0x75] = 0;
  puVar5[0x79] = 0;
  puVar5[0x78] = 0;
  puVar5[0x7c] = 0;
  puVar5[0x7b] = 0;
  puVar5[0x7f] = 0;
  puVar5[0x7e] = 0;
  puVar5[0x82] = 0;
  puVar5[0x81] = 0;
  puVar5[0x85] = 0;
  puVar5[0x84] = 0;
  puVar5[0x5c] = &PTR_LAB_04929b50;
  puVar5[0x5f] = &PTR_LAB_04929b50;
  puVar5[0x62] = &PTR_LAB_04929b50;
  puVar5[0x65] = &PTR_LAB_04929b50;
  puVar5[0x68] = &PTR_LAB_04929b50;
  puVar5[0x6b] = &PTR_LAB_04929b50;
  puVar5[0x6e] = &PTR_LAB_04929b50;
  puVar5[0x71] = &PTR_LAB_04929b50;
  puVar5[0x74] = &PTR_LAB_04929b50;
  puVar5[0x77] = &PTR_LAB_04929b50;
  puVar5[0x7a] = &PTR_LAB_04929b50;
  puVar5[0x7d] = &PTR_LAB_04929b50;
  puVar5[0x80] = &PTR_LAB_04929b50;
  puVar5[0x83] = &PTR_LAB_04929b50;
  *(undefined4 *)(puVar5 + 0x86) = 0;
  *(undefined1 *)(puVar5 + 0x87) = 0;
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  puVar5[0x8a] = 0;
  puVar5[0x88] = puVar1;
  puVar5[0x8c] = 0;
  *(undefined4 *)(puVar5 + 0x8d) = 0;
  *(undefined1 *)((long)puVar5 + 0x46c) = 0;
  puVar5[0x89] = &DAT_048f9750;
  puVar5[0x8b] = &DAT_048f9750;
  return puVar5;
}

