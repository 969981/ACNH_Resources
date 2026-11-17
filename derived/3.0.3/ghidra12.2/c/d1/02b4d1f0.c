
undefined8 * FUN_02b4d1f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x488);
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
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x488,8);
    }
  }
  FUN_006f94c0(puVar4,param_1,param_2);
  *(undefined1 *)((long)puVar4 + 0x286) = 0;
  puVar4[0x51] = 0;
  *(undefined8 *)((long)puVar4 + 0x274) = 0x40a0000043610000;
  *(undefined2 *)((long)puVar4 + 0x284) = 0xffff;
  *(undefined8 *)((long)puVar4 + 0x27c) = 0x2aaaaac0;
  *puVar4 = &PTR_LAB_04aa3240;
  *(undefined4 *)(puVar4 + 0x52) = 0;
  puVar4[0x54] = 0;
  puVar4[0x55] = 0;
  puVar4[0x56] = 0;
  *(undefined8 *)((long)puVar4 + 0x2b5) = 0;
  puVar4[0x58] = 0;
  puVar4[0x59] = 0;
  puVar4[0x5a] = 0;
  puVar4[0x5b] = 0;
  *(undefined4 *)(puVar4 + 0x5c) = 0;
  puVar4[0x53] = &PTR_LAB_0492a770;
  *(undefined4 *)((long)puVar4 + 0x2e4) = 0x800000;
  puVar4[0x5d] = &PTR_LAB_04929bc8;
  *(undefined4 *)(puVar4 + 0x5e) = 0;
  puVar4[0x60] = 0;
  puVar4[0x61] = 0;
  puVar4[99] = 0;
  puVar4[100] = 0;
  puVar4[0x66] = 0;
  puVar4[0x67] = 0;
  puVar4[0x69] = 0;
  puVar4[0x6a] = 0;
  puVar4[0x6d] = 0;
  puVar4[0x6c] = 0;
  puVar4[0x70] = 0;
  puVar4[0x6f] = 0;
  puVar4[0x73] = 0;
  puVar4[0x72] = 0;
  puVar4[0x76] = 0;
  puVar4[0x75] = 0;
  puVar4[0x79] = 0;
  puVar4[0x78] = 0;
  puVar4[0x7c] = 0;
  puVar4[0x7b] = 0;
  puVar4[0x7f] = 0;
  puVar4[0x7e] = 0;
  puVar4[0x82] = 0;
  puVar4[0x81] = 0;
  puVar4[0x85] = 0;
  puVar4[0x84] = 0;
  puVar4[0x88] = 0;
  puVar4[0x87] = 0;
  puVar4[0x5f] = &PTR_LAB_04929b50;
  puVar4[0x62] = &PTR_LAB_04929b50;
  puVar4[0x65] = &PTR_LAB_04929b50;
  puVar4[0x68] = &PTR_LAB_04929b50;
  puVar4[0x6b] = &PTR_LAB_04929b50;
  puVar4[0x6e] = &PTR_LAB_04929b50;
  puVar4[0x71] = &PTR_LAB_04929b50;
  puVar4[0x74] = &PTR_LAB_04929b50;
  puVar4[0x77] = &PTR_LAB_04929b50;
  puVar4[0x7a] = &PTR_LAB_04929b50;
  puVar4[0x7d] = &PTR_LAB_04929b50;
  puVar4[0x80] = &PTR_LAB_04929b50;
  puVar4[0x83] = &PTR_LAB_04929b50;
  puVar4[0x86] = &PTR_LAB_04929b50;
  *(undefined4 *)(puVar4 + 0x89) = 0;
  *(undefined1 *)(puVar4 + 0x8a) = 0;
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  puVar4[0x8d] = 0;
  puVar4[0x8b] = puVar1;
  puVar4[0x8f] = 0;
  *(undefined4 *)(puVar4 + 0x90) = 0;
  *(undefined1 *)((long)puVar4 + 0x484) = 0;
  puVar4[0x8c] = &DAT_048f9750;
  puVar4[0x8e] = &DAT_048f9750;
  return puVar4;
}

