
void FUN_02559100(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 local_110;
  undefined1 local_10c;
  undefined8 local_108;
  undefined7 uStack_100;
  undefined1 local_f9;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  byte local_84 [4];
  byte local_80 [4];
  undefined4 local_7c;
  undefined2 local_78;
  byte local_74 [4];
  undefined4 local_70;
  undefined2 local_6c;
  
  FUN_02507c6c(local_74,7,1,0,0);
  puVar3 = PTR_DAT_04bc31b8;
  puVar2 = PTR_DAT_04bb5038;
  uVar9 = (uint)local_74[0];
  local_7c = local_70;
  local_80[0] = 0xff;
  if (local_74[0] < 8) {
    local_80[0] = local_74[0];
  }
  local_78 = local_6c;
  if (7 < local_74[0]) {
    return;
  }
  do {
    local_84[0] = (byte)uVar9;
    uVar4 = uVar9;
    if ((param_2 & 1) == 0) {
LAB_02559208:
      puVar6 = (undefined8 *)(DAT_054f5738 + 0x2e8);
      if (uVar4 < 8) {
        puVar6 = puVar6 + (ulong)uVar4 * 0x10;
        uVar1 = *(undefined8 *)(PTR_DAT_04bc31b0 + (ulong)uVar4 * 0x30 + 8);
        uVar7 = *(undefined8 *)(PTR_DAT_04bc31b0 + (ulong)uVar4 * 0x30 + 0x10);
        uVar8 = *(undefined8 *)(PTR_DAT_04bc31b0 + (ulong)uVar4 * 0x30 + 0x18);
        *(undefined4 *)((long)puVar6 + 0x17) =
             *(undefined4 *)(PTR_DAT_04bc31b0 + (ulong)uVar4 * 0x30 + 0x1f);
        *puVar6 = uVar1;
        puVar6[1] = uVar7;
        puVar6[2] = uVar8;
        uVar7 = *(undefined8 *)(puVar3 + (ulong)uVar4 * 0x70 + 0x38);
        uVar1 = *(undefined8 *)(puVar3 + (ulong)uVar4 * 0x70 + 0x20);
        uVar8 = *(undefined8 *)(puVar3 + (ulong)uVar4 * 0x70 + 0x28);
        puVar6[9] = *(undefined8 *)(puVar3 + (ulong)uVar4 * 0x70 + 0x30);
        puVar6[10] = uVar7;
        puVar6[7] = uVar1;
        puVar6[8] = uVar8;
        uVar1 = *(undefined8 *)(puVar3 + (ulong)uVar4 * 0x70 + 0x48);
        uVar7 = *(undefined8 *)(puVar3 + (ulong)uVar4 * 0x70 + 0x50);
        uVar8 = *(undefined8 *)(puVar3 + (ulong)uVar4 * 0x70 + 0x40);
        *(undefined8 *)((long)puVar6 + 0x6e) = *(undefined8 *)(puVar3 + (ulong)uVar4 * 0x70 + 0x56);
        puVar6[0xc] = uVar1;
        puVar6[0xd] = uVar7;
        puVar6[0xb] = uVar8;
        uVar1 = *(undefined8 *)(puVar3 + (ulong)uVar4 * 0x70 + 8);
        uVar7 = *(undefined8 *)(puVar3 + (ulong)uVar4 * 0x70 + 0x18);
        puVar6[5] = *(undefined8 *)(puVar3 + (ulong)uVar4 * 0x70 + 0x10);
        puVar6[6] = uVar7;
        puVar6[4] = uVar1;
      }
      local_a8 = puVar6[0xc];
      uStack_a0 = puVar6[0xd];
      local_98 = puVar6[0xe];
      uStack_90 = puVar6[0xf];
      local_c8 = puVar6[8];
      uStack_c0 = puVar6[9];
      local_b8 = puVar6[10];
      uStack_b0 = puVar6[0xb];
      local_e8 = puVar6[4];
      uStack_e0 = puVar6[5];
      local_d8 = puVar6[6];
      uStack_d0 = puVar6[7];
      local_108 = *puVar6;
      uStack_100 = (undefined7)puVar6[1];
      local_f9 = (undefined1)((ulong)puVar6[1] >> 0x38);
      uStack_f0 = puVar6[3];
      uStack_f8 = (undefined1)puVar6[2];
      uStack_f7 = (undefined7)((ulong)puVar6[2] >> 8);
      if (((uint)uStack_f0 & 0xf) == 1) {
        local_110 = 0x100;
        local_10c = 1;
        local_f9 = (undefined1)*(undefined2 *)(param_1 + 2);
        uStack_f8 = (undefined1)((ushort)*(undefined2 *)(param_1 + 2) >> 8);
        FUN_02558ce0(local_84,&local_108,&local_110);
      }
    }
    else {
      uVar4 = FUN_02582d8c(local_84,1);
      if (((7 < uVar4) ||
          (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) == '\0')) ||
         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) == '\0')) {
        uVar4 = (uint)local_84[0];
        goto LAB_02559208;
      }
    }
    uVar10 = (ulong)uVar9;
    do {
      if (uVar10 == 7) {
        return;
      }
      uVar10 = uVar10 + 1;
      uVar5 = FUN_02507924(local_80,puVar2 + uVar10);
    } while ((uVar5 & 1) == 0);
    local_80[0] = puVar2[uVar10];
    uVar9 = (uint)local_80[0];
    if (7 < uVar9) {
      return;
    }
  } while( true );
}

