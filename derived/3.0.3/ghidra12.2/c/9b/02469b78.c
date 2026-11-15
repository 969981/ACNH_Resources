
void FUN_02469b78(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  uint local_24;
  
  *(undefined8 *)(param_1 + 0x1844) = 0;
  *(undefined8 *)(param_1 + 0x1820) = 0;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xffd7ffff;
  puVar1 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar3 = *(undefined4 *)((long)puVar1 + 0x2b4);
  local_2c = 0x3dcccccd;
  bVar5 = *(byte *)(param_1 + 0x1ee8);
  *(undefined4 *)(param_1 + 0x1858) = 0;
  local_28 = 0;
  *(undefined4 *)(param_1 + 0x1854) = uVar3;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  local_3c = CONCAT31(local_3c._1_3_,bVar5);
  local_30 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
  local_38 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_3c,*(undefined4 *)(param_1 + 0x230),1);
  local_3c = 0x100;
  local_24 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar6 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    local_24 = 0;
    if (uVar6 < 0x149) {
      local_24 = uVar6;
    }
  }
  if (local_24 == 0x100) {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
    bVar5 = *(byte *)(param_1 + 0x1ee8);
    uVar6 = (uint)bVar5;
    bVar4 = 7 < uVar6;
    if (bVar4) {
      uVar6 = 0xff;
    }
    local_40[0] = (undefined1)uVar6;
    lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar6 * 0x740;
    if (bVar4) {
      lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    if (*(short *)(param_1 + 0x18e1) == DAT_04c487d4) {
      *(undefined4 *)(lVar2 + 0x424) = 3;
      FUN_01393458(lVar2 + 0x4c8);
    }
    else {
      *(undefined4 *)(lVar2 + 0x424) = 4;
    }
    if (bVar5 < 8) {
      FUN_02582d8c(local_40,1);
    }
  }
  return;
}

