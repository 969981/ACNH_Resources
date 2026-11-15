
undefined8 * FUN_0224b870(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x818);
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
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x818,8);
    }
  }
  FUN_006f94c0(puVar4,param_1,param_2);
  *(undefined1 *)((long)puVar4 + 0x286) = 0;
  *(undefined8 *)((long)puVar4 + 0x274) = 0x40a0000043610000;
  *(undefined8 *)((long)puVar4 + 0x27c) = 0x2aaaaac0;
  *(undefined2 *)((long)puVar4 + 0x284) = 0xffff;
  *puVar4 = &PTR_LAB_04a7d4b0;
  *(undefined4 *)(puVar4 + 0x52) = 0;
  puVar4[0x51] = &PTR_LAB_04983720;
  FUN_01184f54(puVar4 + 0x53);
  *(undefined1 *)((long)puVar4 + 0x3fb) = 0;
  *(undefined4 *)(puVar4 + 0x6f) = 0x80;
  *(undefined1 *)((long)puVar4 + 0x37c) = 0;
  *(undefined1 *)((long)puVar4 + 0x414) = 0;
  puVar1 = PTR_DAT_04bb2d88;
  puVar4[0x6e] = (undefined1 *)((long)puVar4 + 0x37c);
  puVar4[0x81] = (undefined1 *)((long)puVar4 + 0x414);
  *(undefined4 *)(puVar4 + 0x82) = 0x40;
  *(undefined1 *)((long)puVar4 + 0x453) = 0;
  puVar4[0x6d] = puVar1 + 0x10;
  *(undefined4 *)(puVar4 + 0x8d) = 0x40;
  *(undefined4 *)(puVar4 + 0x98) = 0x40;
  *(undefined1 *)((long)puVar4 + 0x46c) = 0;
  puVar4[0x8c] = (undefined1 *)((long)puVar4 + 0x46c);
  *(undefined4 *)(puVar4 + 0xa3) = 0x40;
  *(undefined1 *)((long)puVar4 + 0x4c4) = 0;
  puVar4[0x97] = (undefined1 *)((long)puVar4 + 0x4c4);
  *(undefined4 *)(puVar4 + 0xae) = 0x40;
  *puVar4 = &PTR_LAB_04a79ac0;
  *(undefined8 *)((long)puVar4 + 0x644) = 0;
  puVar4[0x80] = &PTR_LAB_048fb9f8;
  *(undefined1 *)((long)puVar4 + 0x51c) = 0;
  puVar4[0xa2] = (undefined1 *)((long)puVar4 + 0x51c);
  *(undefined1 *)((long)puVar4 + 0x4ab) = 0;
  *(undefined1 *)((long)puVar4 + 0x574) = 0;
  puVar4[0x8b] = &PTR_LAB_048fb9f8;
  *(undefined1 *)((long)puVar4 + 0x503) = 0;
  puVar4[0x96] = &PTR_LAB_048fb9f8;
  *(undefined1 *)((long)puVar4 + 0x55b) = 0;
  puVar4[0xa1] = &PTR_LAB_048fb9f8;
  puVar4[0xad] = (undefined1 *)((long)puVar4 + 0x574);
  *(undefined1 *)((long)puVar4 + 0x5b3) = 0;
  puVar4[0xac] = &PTR_LAB_048fb9f8;
  puVar4[0xb7] = 0;
  puVar4[0xb8] = 0;
  puVar4[0xcc] = 0;
  *(undefined8 *)((long)puVar4 + 0x5d4) = 0;
  *(undefined8 *)((long)puVar4 + 0x5dc) = 0;
  *(undefined8 *)((long)puVar4 + 0x5e4) = 0;
  *(undefined8 *)((long)puVar4 + 0x5ec) = 0;
  *(undefined8 *)((long)puVar4 + 0x5f4) = 0;
  *(undefined8 *)((long)puVar4 + 0x5fc) = 0;
  *(undefined8 *)((long)puVar4 + 0x604) = 0;
  *(undefined8 *)((long)puVar4 + 0x60c) = 0;
  *(undefined8 *)((long)puVar4 + 0x614) = 0;
  *(undefined8 *)((long)puVar4 + 0x61c) = 0;
  *(undefined8 *)((long)puVar4 + 0x624) = 0;
  *(undefined8 *)((long)puVar4 + 0x62c) = 0;
  *(undefined8 *)((long)puVar4 + 0x634) = 0;
  *(undefined8 *)((long)puVar4 + 0x63c) = 0;
  *(undefined8 *)((long)puVar4 + 0x66d) = 0;
  puVar4[0xcd] = 0;
  puVar1 = PTR_DAT_04bb5cc0 + 0x10;
  puVar4[0xcb] = 0;
  puVar4[0xca] = puVar1;
  puVar4[0xd1] = 0;
  puVar4[0xd0] = 0;
  puVar4[0xcf] = 0;
  puVar4[0xd2] = PTR_DAT_04bb5bb8 + 0x10;
  *(undefined4 *)(puVar4 + 0xd3) = 0;
  puVar4[0xd4] = &PTR_LAB_04929b50;
  puVar4[0xd5] = 0;
  puVar4[0xd6] = 0;
  puVar4[0xd7] = &PTR_LAB_04929b50;
  puVar4[0xd9] = 0;
  puVar4[0xd8] = 0;
  puVar4[0xda] = &PTR_LAB_04929b50;
  puVar4[0xdb] = 0;
  puVar4[0xdc] = 0;
  puVar4[0xdd] = &PTR_LAB_04929b50;
  puVar4[0xdf] = 0;
  puVar4[0xde] = 0;
  puVar4[0xe0] = &PTR_LAB_04929b50;
  puVar4[0xe2] = 0;
  puVar4[0xe1] = 0;
  puVar4[0xe3] = &PTR_LAB_04929b50;
  puVar4[0xe5] = 0;
  puVar4[0xe4] = 0;
  puVar4[0xe6] = &PTR_LAB_04929b50;
  puVar4[0xe8] = 0;
  puVar4[0xe7] = 0;
  puVar4[0xe9] = &PTR_LAB_04929b50;
  puVar4[0xeb] = 0;
  puVar4[0xea] = 0;
  puVar4[0xec] = &PTR_LAB_04929b50;
  puVar4[0xee] = 0;
  puVar4[0xed] = 0;
  puVar4[0xef] = &PTR_LAB_04929b50;
  puVar4[0xf1] = 0;
  puVar4[0xf0] = 0;
  puVar4[0xf2] = &PTR_LAB_04929b50;
  puVar4[0xf4] = 0;
  puVar4[0xf3] = 0;
  puVar4[0xf5] = &PTR_LAB_04929b50;
  puVar4[0xf7] = 0;
  puVar4[0xf6] = 0;
  puVar4[0xf8] = &PTR_LAB_04929b50;
  puVar4[0xfa] = 0;
  puVar4[0xf9] = 0;
  puVar4[0xfb] = &PTR_LAB_04929b50;
  puVar4[0xfd] = 0;
  puVar4[0xfc] = 0;
  *(undefined4 *)(puVar4 + 0xfe) = 0;
  *(undefined4 *)(puVar4 + 0xff) = 0;
  *(undefined1 *)((long)puVar4 + 0x7fc) = 0;
  puVar4[0x100] = 0;
  *(undefined4 *)(puVar4 + 0x101) = 0x447a0000;
  *(undefined1 *)((long)puVar4 + 0x814) = 0;
  *(undefined8 *)((long)puVar4 + 0x80c) = 0;
  return puVar4;
}

