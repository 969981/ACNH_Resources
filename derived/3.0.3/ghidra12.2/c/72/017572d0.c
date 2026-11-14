
undefined8 * FUN_017572d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x5e8);
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
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x5e8,8);
    }
  }
  FUN_006f94c0(puVar4,param_1,param_2);
  puVar4[0x5d] = 0;
  *puVar4 = &PTR_LAB_049c23d8;
  *(undefined8 *)((long)puVar4 + 0x35c) = 0;
  *(undefined8 *)((long)puVar4 + 0x354) = 0;
  *(undefined8 *)((long)puVar4 + 0x34c) = 0;
  *(undefined8 *)((long)puVar4 + 0x344) = 0;
  *(undefined8 *)((long)puVar4 + 0x33c) = 0;
  *(undefined8 *)((long)puVar4 + 0x334) = 0;
  *(undefined8 *)((long)puVar4 + 0x32c) = 0;
  *(undefined8 *)((long)puVar4 + 0x324) = 0;
  *(undefined8 *)((long)puVar4 + 0x31c) = 0;
  *(undefined8 *)((long)puVar4 + 0x314) = 0;
  *(undefined8 *)((long)puVar4 + 0x30c) = 0;
  *(undefined8 *)((long)puVar4 + 0x304) = 0;
  *(undefined8 *)((long)puVar4 + 0x2fc) = 0;
  *(undefined8 *)((long)puVar4 + 0x2f4) = 0;
  *(undefined8 *)((long)puVar4 + 0x2ec) = 0;
  puVar4[0x4f] = &PTR_LAB_049c24e0;
  puVar4[0x52] = &PTR_LAB_049c24e0;
  puVar4[0x55] = &PTR_LAB_049c24e0;
  puVar4[0x58] = &PTR_LAB_049c24e0;
  puVar4[0x5b] = &PTR_LAB_049c24e0;
  *(undefined4 *)(puVar4 + 0x60) = 0x3f800000;
  *(undefined4 *)(puVar4 + 99) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x66) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x69) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x6c) = 0x3f800000;
  puVar4[0x6f] = 0;
  puVar4[0x72] = 0;
  puVar4[0x75] = 0;
  puVar4[0x78] = 0;
  *(undefined4 *)(puVar4 + 0x6f) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x72) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x75) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x78) = 0x3f800000;
  puVar4[0x5e] = &PTR_LAB_049c2500;
  puVar4[0x61] = &PTR_LAB_049c2500;
  puVar4[100] = &PTR_LAB_049c2500;
  puVar4[0x67] = &PTR_LAB_049c2500;
  puVar4[0x6a] = &PTR_LAB_049c2500;
  puVar4[0x70] = 0;
  puVar4[0x73] = 0;
  puVar4[0x76] = 0;
  puVar4[0x6d] = &PTR_LAB_049c2500;
  puVar4[0x70] = &PTR_LAB_049c2500;
  puVar4[0x73] = &PTR_LAB_049c2500;
  puVar4[0x76] = &PTR_LAB_049c2500;
  *(undefined1 *)(puVar4 + 0x7c) = 1;
  puVar4[0x79] = &PTR_LAB_049c2520;
  *(undefined8 *)((long)puVar4 + 0x3fc) = 0;
  *(undefined8 *)((long)puVar4 + 0x3f4) = 0;
  *(undefined8 *)((long)puVar4 + 0x3ec) = 0;
  *(undefined8 *)((long)puVar4 + 0x3e4) = 0;
  *(undefined4 *)((long)puVar4 + 0x40b) = 0;
  puVar4[0x51] = 0;
  *(undefined1 *)((long)puVar4 + 0x42c) = 0;
  puVar4[0x53] = 0;
  puVar4[0x54] = 0;
  puVar4[0x56] = 0;
  puVar4[0x57] = 0;
  puVar4[0x59] = 0;
  puVar4[0x5a] = 0;
  puVar4[0x5c] = 0;
  puVar4[0x50] = 0;
  *(undefined4 *)((long)puVar4 + 0x364) = 0;
  puVar4[0x71] = 0;
  puVar4[0x74] = 0;
  puVar4[0x77] = 0;
  puVar4[0x6e] = 0;
  *(undefined1 *)(puVar4 + 0x7a) = 0;
  puVar4[0x7b] = 0;
  *(undefined4 *)(puVar4 + 0x82) = 0;
  *(undefined4 *)(puVar4 + 0x81) = 0;
  puVar4[0x84] = (undefined1 *)((long)puVar4 + 0x42c);
  *(undefined4 *)(puVar4 + 0x85) = 0x80;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  *(undefined1 *)((long)puVar4 + 0x4ab) = 0;
  *(undefined1 *)((long)puVar4 + 0x4c4) = 0;
  puVar4[0x97] = (undefined1 *)((long)puVar4 + 0x4c4);
  puVar4[0x83] = puVar1;
  *(undefined1 *)((long)puVar4 + 0x55c) = 0;
  *(undefined4 *)(puVar4 + 0x98) = 0x80;
  *(undefined1 *)((long)puVar4 + 0x543) = 0;
  puVar4[0x96] = puVar1;
  puVar4[0xaa] = (undefined1 *)((long)puVar4 + 0x55c);
  *(undefined4 *)(puVar4 + 0xab) = 0x80;
  *(undefined1 *)((long)puVar4 + 0x5db) = 0;
  puVar4[0xa9] = puVar1;
  *(undefined1 *)(puVar4 + 0xbc) = 0;
  return puVar4;
}

