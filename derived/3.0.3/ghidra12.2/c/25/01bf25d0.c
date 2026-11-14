
void FUN_01bf25d0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  ushort uVar3;
  long lVar4;
  ushort local_e0 [8];
  undefined4 local_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined *local_b8;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  
  *(undefined8 *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x30) = param_4;
  uVar3 = *(ushort *)(param_2 + 0xe);
  if (uVar3 < 7) {
    uVar1 = uVar3 + 2;
    if (uVar1 * 2 <= (uint)*(ushort *)(param_2 + 0x10)) {
      memcpy(local_e0,*(void **)(param_2 + 0x18),(ulong)uVar1 << 1);
    }
    lVar4 = 0;
    puVar2 = PTR_DAT_04bb2bc0 + 0x10;
    do {
      local_a8 = 0x40;
      local_65 = 0;
      local_c0 = 0;
      local_a4[0] = 0;
      local_c8 = 0xffffffff;
      uStack_cc = (uint)*(ushort *)((long)local_e0 + lVar4);
      local_d0 = 1;
      local_b8 = puVar2;
      puStack_b0 = local_a4;
      FUN_038d1270(&local_b8,&DAT_0405bf91);
      (*(code *)**(undefined8 **)(param_1 + 8))((undefined8 *)(param_1 + 8),&local_d0);
      lVar4 = lVar4 + 2;
    } while ((ulong)uVar1 * 2 != lVar4);
  }
  else if (uVar3 == 0x14) {
    FUN_01bf2700();
  }
  else {
    FUN_01bf2100(param_1);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}

