
byte FUN_023de480(long param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  byte local_64;
  undefined1 local_63;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined7 uStack_40;
  undefined4 local_39;
  undefined4 local_34;
  undefined4 local_14;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffffe) == 2) {
    local_34 = 0;
    local_63 = 0;
    local_64 = *(byte *)(param_1 + 0x1ee8);
    local_48 = 0;
    uStack_40 = 0;
    local_39 = 0;
    local_58 = PTR_DAT_04bb2010 + 0x10;
    uStack_50 = 0;
    puVar2 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x4c8);
    }
    if (7 < local_64) {
      local_64 = 0xff;
    }
    local_6c = *(undefined4 *)(puVar2 + 0x50);
    local_60 = *(undefined4 *)PTR_DAT_04bb37e0;
    uStack_5c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_74 = puVar2[0x4f];
    local_68 = *(undefined4 *)((long)puVar2 + 0x2b4);
    bVar4 = FUN_01507210(&local_60,&local_74);
  }
  else if (*(uint *)(param_1 + 0x1810) == 7) {
    local_34 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_64 = *(byte *)(param_1 + 0x1ee8);
    puVar2 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_39 = 0;
    local_58 = PTR_DAT_04bb2010 + 0x10;
    uStack_50 = 0;
    if (7 < local_64) {
      local_64 = 0xff;
    }
    local_6c = *(undefined4 *)(puVar2 + 0x50);
    local_60 = *(undefined4 *)PTR_DAT_04bb37e0;
    uStack_5c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_74 = puVar2[0x4f];
    local_68 = *(undefined4 *)((long)puVar2 + 0x2b4);
    local_63 = 1;
    local_14 = 2;
    bVar4 = FUN_01508a18(&local_60,&local_74,&local_14);
  }
  else {
    pbVar1 = (byte *)(param_1 + 0x1ee8);
    if ((*pbVar1 < 8) && (uVar5 = FUN_02582d8c(pbVar1,1), puVar3 = PTR_DAT_04bb4fb8, uVar5 < 8)) {
      if ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0') &&
         (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0' &&
           (uVar5 = FUN_02582d8c(pbVar1,1), uVar5 < 8)) &&
          (*(char *)(*(long *)puVar3 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')))) {
        bVar4 = *(int *)(*(long *)puVar3 + (ulong)uVar5 * 0x13f0 + 0x4f8) != 0;
        goto LAB_023de66c;
      }
    }
    bVar4 = 0;
  }
LAB_023de66c:
  return bVar4 & 1;
}

