
undefined8 * FUN_006bf3f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x438);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar4 = (undefined8 *)(lVar5 + 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x438,8);
  }
  memset(puVar4,0,0x420);
  *(undefined1 *)(puVar4 + 10) = 0;
  puVar1 = PTR_DAT_04bd4738;
  *(undefined4 *)(puVar4 + 0xb) = 0;
  *(undefined4 *)(puVar4 + 0xd) = 0;
  *(undefined4 *)(puVar4 + 7) = 0xffffffff;
  *(undefined4 *)(puVar4 + 8) = 0xffffffff;
  *(undefined4 *)(puVar4 + 9) = 0xffffffff;
  puVar4[6] = puVar1 + 0x10;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar1 = PTR_FUN_04bd2cf0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x14] = puVar4;
  puVar4[0x15] = puVar1;
  puVar2 = PTR_FUN_04bd2cf8;
  puVar1 = PTR_DAT_04bd2d40 + 0x10;
  puVar4[0x18] = puVar4;
  puVar4[0x19] = puVar2;
  *(undefined4 *)((long)puVar4 + 0xec) = 2;
  puVar4[0x1c] = 0xffffffffffffffff;
  puVar4[0x12] = 0;
  puVar4[0x13] = puVar1;
  puVar4[0x17] = puVar1;
  *(undefined1 *)((long)puVar4 + 0xdc) = 1;
  *(undefined1 *)((long)puVar4 + 0x194) = 0;
  puVar4[0x31] = (undefined1 *)((long)puVar4 + 0x194);
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  *(undefined4 *)(puVar4 + 0x32) = 0x20;
  *(undefined4 *)(puVar4 + 0x39) = 0x20;
  *(undefined4 *)((long)puVar4 + 0x3f4) = 0;
  puVar4[0x81] = 0;
  *(undefined1 *)((long)puVar4 + 0x1cc) = 0;
  *(undefined1 *)((long)puVar4 + 0x416) = 1;
  *(undefined1 *)(puVar4 + 0x83) = 1;
  *(undefined1 *)((long)puVar4 + 0x41a) = 0;
  puVar4[0x84] = 0;
  puVar4[0x85] = 0;
  puVar4[0x86] = 0;
  puVar4[0x2f] = 0;
  puVar4[0x30] = puVar1;
  puVar4[0x37] = puVar1;
  puVar4[0x38] = (undefined1 *)((long)puVar4 + 0x1cc);
  *(undefined8 *)((long)puVar4 + 0x3fc) = 0x70800000000;
  *(undefined4 *)((long)puVar4 + 0x404) = 10;
  *(undefined8 *)((long)puVar4 + 0x40e) = 0;
  memset((void *)((long)puVar4 + 0x1f1),0,0x200);
  *puVar4 = &PTR_LAB_048f98b8;
  puVar4[0x1e] = 0;
  puVar4[0x1f] = 0;
  puVar4[0x20] = 0;
  puVar4[0x21] = 0;
  puVar4[0x22] = 0;
  puVar4[0x23] = 0;
  puVar4[0x24] = 0;
  puVar4[0x25] = 0;
  puVar4[0x26] = 0;
  puVar4[0x27] = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  puVar4[0x2a] = 0;
  puVar4[0x2b] = 0;
  puVar4[0x2c] = 0;
  puVar4[0x2d] = 0;
  return puVar4;
}

