
void FUN_001fd294(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  uint *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint *puVar15;
  undefined *local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  undefined2 local_e0;
  undefined1 local_de;
  undefined1 local_dd;
  undefined1 local_dc;
  undefined1 local_db;
  undefined1 local_da;
  undefined1 local_d9;
  uint *local_d8;
  undefined8 uStack_d0;
  undefined **local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  long local_b8;
  long local_b0;
  long local_a0;
  undefined **local_90;
  undefined1 auStack_88 [16];
  undefined8 local_78;
  long local_70;
  int local_68;
  long local_60;
  undefined1 auStack_58 [40];
  
  FUN_001f9f54(auStack_58,param_2 + 0x378,param_3);
  uVar13 = FUN_00195a88(auStack_88);
  uVar14 = FUN_001f9d6c(uVar13,param_1 + 0x10,local_78,auStack_58);
  if ((uVar14 & 1) != 0) {
    *(undefined1 *)(param_1 + 8) = 1;
    FUN_00195bd8(auStack_88);
    FUN_001967bc(auStack_88,&local_90,8,1);
    local_c8 = local_90;
    FUN_001865b0(param_1 + 0x80,&local_c8);
    FUN_001967bc(auStack_88,param_1 + 0x48,8,1);
    uVar13 = FUN_0019cd9c(param_1 + 0x58,0x20);
    FUN_00196210(auStack_88,uVar13,0x100);
    FUN_001967bc(auStack_88,param_1 + 0x88,4,1);
    FUN_001967bc(auStack_88,param_1 + 0x8c,4,1);
    FUN_0018a58c((undefined1 *)(param_1 + 0x90),&DAT_0407ebb1);
    if (local_60 != (ulong)(7 - local_68) + local_70 * 8) {
      local_c0 = 1;
      local_bc = 0;
      local_c8 = &PTR_FUN_048393d8;
      uVar13 = FUN_00196a18();
      FUN_00196a24(&local_c8,uVar13,0);
      FUN_001968b4(auStack_88,&local_c8);
      if (local_b0 != 0) {
        puVar1 = PTR_DAT_04bc0ec8 + 0x10;
        *(undefined1 *)(local_b0 + local_b8 + local_a0 + -1) = 0;
        local_e8 = local_e8 & 0xffffff00;
        uStack_d0 = 0x10;
        local_f0 = puVar1;
        local_d8 = &local_e8;
        FUN_0018b070(&local_f0,local_b8 + local_a0,0xffffffffffffffff);
        puVar12 = local_d8;
        if ((undefined **)(param_1 + 0x90) != &local_f0) {
          puVar15 = (uint *)(param_1 + 0x98);
          uVar2 = *puVar15;
          uVar3 = *(undefined4 *)(param_1 + 0x9c);
          *puVar15 = local_e8;
          *(undefined4 *)(param_1 + 0x9c) = uStack_e4;
          uVar11 = *(undefined2 *)(param_1 + 0xa0);
          *(undefined2 *)(param_1 + 0xa0) = local_e0;
          uVar5 = *(undefined1 *)(param_1 + 0xa2);
          *(undefined1 *)(param_1 + 0xa2) = local_de;
          uVar6 = *(undefined1 *)(param_1 + 0xa3);
          *(undefined1 *)(param_1 + 0xa3) = local_dd;
          uVar7 = *(undefined1 *)(param_1 + 0xa4);
          *(undefined1 *)(param_1 + 0xa4) = local_dc;
          uVar8 = *(undefined1 *)(param_1 + 0xa5);
          *(undefined1 *)(param_1 + 0xa5) = local_db;
          uVar9 = *(undefined1 *)(param_1 + 0xa6);
          *(undefined1 *)(param_1 + 0xa6) = local_da;
          uVar10 = *(undefined1 *)(param_1 + 0xa7);
          *(undefined1 *)(param_1 + 0xa7) = local_d9;
          puVar4 = *(uint **)(param_1 + 0xa8);
          uVar13 = *(undefined8 *)(param_1 + 0xb0);
          *(uint **)(param_1 + 0xa8) = local_d8;
          *(undefined8 *)(param_1 + 0xb0) = uStack_d0;
          local_d8 = puVar4;
          if (puVar4 == puVar15) {
            local_d8 = &local_e8;
          }
          local_e8 = uVar2;
          uStack_e4 = uVar3;
          local_e0 = uVar11;
          local_de = uVar5;
          local_dd = uVar6;
          local_dc = uVar7;
          local_db = uVar8;
          local_da = uVar9;
          local_d9 = uVar10;
          uStack_d0 = uVar13;
          if (puVar12 == &local_e8) {
            *(uint **)(param_1 + 0xa8) = puVar15;
          }
        }
        local_f0 = puVar1;
        FUN_0018b1a0(&local_f0);
      }
      FUN_00196ce0(&local_c8);
    }
  }
  FUN_00195bf0(auStack_88);
  FUN_0019cd34(auStack_58);
  return;
}

