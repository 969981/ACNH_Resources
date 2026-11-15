
undefined8 * FUN_02237c10(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x5c0);
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
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x5c0,8);
    }
  }
  FUN_006f94c0(puVar3,param_1,param_2);
  *(undefined1 *)((long)puVar3 + 0x286) = 0;
  *(undefined8 *)((long)puVar3 + 0x274) = 0x40a0000043610000;
  *(undefined8 *)((long)puVar3 + 0x27c) = 0x2aaaaac0;
  *(undefined2 *)((long)puVar3 + 0x284) = 0xffff;
  *puVar3 = &PTR_LAB_04a7d4b0;
  *(undefined4 *)(puVar3 + 0x52) = 0;
  puVar3[0x51] = &PTR_LAB_04983720;
  FUN_01184f54(puVar3 + 0x53);
  *(undefined1 *)((long)puVar3 + 0x37c) = 0;
  *(undefined1 *)((long)puVar3 + 0x414) = 0;
  *(undefined4 *)(puVar3 + 0x6f) = 0x80;
  puVar3[0x6e] = (undefined1 *)((long)puVar3 + 0x37c);
  puVar3[0x81] = (undefined1 *)((long)puVar3 + 0x414);
  *(undefined1 *)((long)puVar3 + 0x3fb) = 0;
  *(undefined4 *)(puVar3 + 0x82) = 0x40;
  puVar3[0x6d] = &DAT_048fc708;
  *(undefined4 *)(puVar3 + 0x8d) = 0x40;
  *(undefined4 *)(puVar3 + 0x98) = 0x40;
  *(undefined1 *)((long)puVar3 + 0x46c) = 0;
  puVar3[0x8c] = (undefined1 *)((long)puVar3 + 0x46c);
  *(undefined4 *)(puVar3 + 0xa3) = 0x40;
  *(undefined1 *)((long)puVar3 + 0x4c4) = 0;
  puVar3[0x97] = (undefined1 *)((long)puVar3 + 0x4c4);
  *(undefined4 *)(puVar3 + 0xae) = 0x40;
  *puVar3 = &PTR_LAB_04a784e8;
  *(undefined1 *)((long)puVar3 + 0x453) = 0;
  puVar3[0x80] = &PTR_LAB_048fb9f8;
  *(undefined1 *)((long)puVar3 + 0x51c) = 0;
  puVar3[0xa2] = (undefined1 *)((long)puVar3 + 0x51c);
  *(undefined1 *)((long)puVar3 + 0x4ab) = 0;
  *(undefined1 *)((long)puVar3 + 0x574) = 0;
  puVar3[0x8b] = &PTR_LAB_048fb9f8;
  *(undefined1 *)((long)puVar3 + 0x503) = 0;
  puVar3[0x96] = &PTR_LAB_048fb9f8;
  *(undefined1 *)((long)puVar3 + 0x55b) = 0;
  puVar3[0xa1] = &PTR_LAB_048fb9f8;
  puVar3[0xad] = (undefined1 *)((long)puVar3 + 0x574);
  *(undefined1 *)((long)puVar3 + 0x5b3) = 0;
  puVar3[0xac] = &PTR_LAB_048fb9f8;
  puVar3[0xb7] = 0;
  *(undefined4 *)(puVar3 + 0x4f) = 0x41200000;
  return puVar3;
}

