
uint FUN_022bdd00(long param_1,uint *param_2,long param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  uint local_d8;
  uint local_d4;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined2 local_a8;
  undefined4 local_a6;
  undefined1 local_a2;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_94;
  undefined2 local_8c;
  undefined4 local_84 [2];
  uint uStack_7c;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_70;
  undefined1 local_6e;
  byte local_6d;
  undefined1 local_6b;
  undefined1 local_66;
  undefined4 local_64;
  undefined1 auStack_60 [8];
  undefined4 local_58;
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffe;
  FUN_0277d4ac(&local_48);
  lVar8 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar8 != 0) && (*(long *)(lVar8 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar8 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar8 + 0x488) != 0 && (*(long *)(*(long *)(lVar8 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar8 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar8 + 0x2b0) + 8) != 0)))) {
    uVar4 = FUN_0277d6c4(param_2);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar6 = param_2[1];
      uVar4 = *param_2;
      goto LAB_022bddcc;
    }
  }
  uVar3 = FUN_0123eba0(param_2);
  local_d8 = (uint)uVar3;
  local_d4 = 0;
  FUN_0277d4ac(&local_d8);
  uVar6 = local_d4;
  uVar4 = local_d8;
LAB_022bddcc:
  local_48 = CONCAT44(uVar6,uVar4);
  FUN_0124c030(auStack_60,&local_48);
  iVar5 = FUN_0123db50(&local_58,local_50);
  if (iVar5 == 0x2d) {
    iVar5 = FUN_0123db50(&local_58,local_50);
    if (iVar5 == 0x2d) {
      local_54 = local_54 & 0xfffffffe | ~param_4 & 1;
    }
    local_64 = 0;
    local_6b = 0;
    local_6e = 0x15;
    local_6d = *(byte *)(param_1 + 0x10);
    local_84[0] = 0;
    local_48._0_4_ = local_58;
    local_c0 = *(undefined4 *)(param_3 + 0x10);
    uStack_bc = *(undefined4 *)(param_3 + 0x14);
    local_70 = *(undefined2 *)PTR_DAT_04bb6298;
    local_66 = 0;
    if (7 < local_6d) {
      local_6d = 0xff;
    }
    local_78 = (undefined2)local_c0;
    local_76 = (undefined2)uStack_bc;
    local_b0 = *(undefined4 *)(param_3 + 0x20);
    uStack_ac = *(undefined4 *)(param_3 + 0x24);
    local_d0 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_c8 = PTR_DAT_04bb2010 + 0x10;
    local_a6 = 0;
    local_a2 = 0;
    local_98 = 0;
    local_d8 = CONCAT22(local_d8._2_2_,local_70);
    local_a0 = 0xffffffffffffffff;
    local_a8 = 0xff00;
    local_8c = 0xff00;
    local_94 = 0x41200000;
    local_b8 = puStack_c8;
    local_48._4_4_ = local_54;
    uStack_7c = local_54;
    uVar4 = FUN_022af440(param_1,&local_d8,local_84);
    if ((uVar4 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_3 + 0x10);
      uVar2 = *(undefined4 *)(param_3 + 0x14);
      puVar7 = (undefined8 *)(param_1 + 0x14);
      *puVar7 = 0xfffe;
      FUN_0277d4ac(puVar7);
      *(undefined8 *)(param_1 + 0x1c) = 0xfffe;
      FUN_0277d4ac((undefined8 *)(param_1 + 0x1c));
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x2c) = 0;
      *(undefined8 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x48) = uVar1;
      *(undefined4 *)(param_1 + 0x4c) = uVar2;
      *(undefined4 *)puVar7 = (undefined4)local_48;
      *(uint *)(param_1 + 0x18) = local_48._4_4_;
      *(undefined8 *)(param_1 + 0x50) = 0x1500000000;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4 & 1;
}

