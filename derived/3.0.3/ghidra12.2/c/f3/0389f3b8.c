
void FUN_0389f3b8(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar4 = malloc(0x1d0);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar4 = (undefined8 *)(lVar6 + 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x1d0,8);
  }
  bVar2 = *(byte *)(param_1 + 8);
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  *puVar4 = &PTR_LAB_04b611f0;
  puVar4[1] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar1 = PTR_DAT_04bcba80 + 0x10;
  puVar4[0xe] = 0;
  *(undefined4 *)(puVar4 + 0x10) = 0;
  puVar4[0x11] = 0;
  *(undefined2 *)(puVar4 + 0x12) = 0;
  plVar7 = puVar4 + 0xf;
  *plVar7 = (long)puVar1;
  uVar5 = nn::os::GetSystemTick();
  puVar4[0x14] = uVar5;
  *(undefined2 *)((long)puVar4 + 0xc4) = 0;
  *(undefined4 *)(puVar4 + 0x18) = 0x15;
  *(undefined2 *)((long)puVar4 + 0xec) = 0;
  puVar4[0x16] = &DAT_04a5a568;
  puVar4[0x17] = (undefined2 *)((long)puVar4 + 0xc4);
  (**(code **)*plVar7)(plVar7);
  puVar4[0x2c] = 0;
  puVar4[0x22] = 0;
  puVar4[0x23] = 0;
  *(undefined4 *)(puVar4 + 0x2d) = 0;
  *(undefined4 *)(puVar4 + 0x2b) = 0;
  *(uint *)(puVar4 + 0x34) = (uint)bVar2;
  *(undefined2 *)((long)puVar4 + 0x1a4) = 0;
  *(undefined1 *)((long)puVar4 + 0x1a6) = 0;
  *(undefined4 *)(puVar4 + 0x35) = 0;
  puVar4[0x36] = 0;
  *(undefined1 *)(puVar4 + 0x37) = 0;
  *(undefined4 *)((long)puVar4 + 0x1bc) = 0;
  *puVar4 = &PTR_LAB_04b61eb8;
  puVar4[0x20] = 0;
  puVar4[0x21] = 0;
  puVar4[0x25] = 0;
  puVar4[0x26] = 0;
  puVar4[0x27] = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  puVar4[0x2a] = 0;
  puVar4[0x2e] = 0;
  puVar4[0x2f] = 0;
  puVar4[0x30] = 0;
  puVar4[0x31] = 0;
  puVar4[0x32] = 0;
  puVar4[0x33] = 0;
  *(undefined8 **)(param_1 + 0xf8) = puVar4;
  FUN_0388c7b0(puVar4);
  return;
}

