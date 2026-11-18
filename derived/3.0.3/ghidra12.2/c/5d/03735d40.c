
void FUN_03735d40(long param_1,long param_2)

{
  undefined2 *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined1 *__src;
  undefined2 local_e0;
  undefined1 local_de;
  undefined1 local_dd;
  undefined4 local_dc;
  undefined2 local_d8;
  undefined2 local_d6;
  undefined4 local_d4;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined4 local_cc;
  undefined2 local_c8;
  undefined2 local_c6;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined2 local_be;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined4 local_ac;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined2 local_9e;
  undefined4 local_9c;
  undefined1 local_98;
  undefined4 local_97;
  undefined1 local_93;
  undefined *local_90;
  undefined1 *puStack_88;
  int local_80;
  undefined1 local_7c [15];
  undefined1 local_6d;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 local_34;
  
  lVar6 = param_2 + 0x3e0;
  iVar3 = FUN_03722560(param_1,lVar6);
  if (iVar3 == -1) {
    local_97 = 0;
    local_6d = 0;
    local_7c[0] = 0;
    local_80 = 0x10;
    local_58 = 0;
    local_90 = PTR_DAT_04bb2ab0 + 0x10;
    local_54 = 0;
    local_98 = 1;
    local_93 = 0;
    local_68 = 0xffffffff;
    uStack_60 = 0xffffffff00000000;
    puStack_88 = local_7c;
    (**(code **)(*(long *)(param_2 + 0x3e0) + 0x18))(lVar6);
    __src = *(undefined1 **)(param_2 + 1000);
    if (local_7c != __src) {
      (**(code **)(*(long *)(param_2 + 0x3e0) + 0x18))(lVar6);
      lVar5 = 0;
      do {
        if (*(char *)(*(long *)(param_2 + 1000) + lVar5) == '\0') goto LAB_03735e5c;
        lVar2 = *(long *)(param_2 + 1000) + lVar5;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_03735e5c;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_03735e5c;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_03735e5c:
      iVar3 = (int)lVar5;
      if (local_80 <= (int)lVar5) {
        iVar3 = local_80 + -1;
      }
      memcpy(local_7c,__src,(long)iVar3);
      local_7c[iVar3] = 0;
    }
    local_97 = CONCAT31(local_97._1_3_,1);
    FUN_03724440(param_1,&local_98);
    uVar4 = FUN_03722560(param_1,lVar6);
    if (uVar4 != 0xffffffff) {
      if (uVar4 < *(uint *)(param_1 + 0xe0)) {
        lVar6 = *(long *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar4 * 8);
      }
      else {
        lVar6 = 0;
      }
      *(undefined4 *)(lVar6 + 8) = *(undefined4 *)(param_2 + 0x230);
      if (*(long *)(param_2 + 0x2a0) != 0) {
        local_e0 = *(undefined2 *)PTR_DAT_04bb37e0;
        puVar1 = (undefined2 *)(PTR_DAT_04bb37e0 + 2);
        local_de = *(undefined1 *)puVar1;
        local_dd = PTR_DAT_04bb37e0[3];
        local_9e = *puVar1;
        local_a6 = *puVar1;
        local_ae = *puVar1;
        local_b6 = *puVar1;
        local_be = *puVar1;
        local_c6 = *puVar1;
        local_d6 = *puVar1;
        local_dc = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        local_34 = *(undefined4 *)(param_2 + 0x230);
        local_d8 = local_e0;
        local_d4 = local_dc;
        local_d0 = local_e0;
        local_ce = local_de;
        local_cd = local_dd;
        local_cc = local_dc;
        local_c8 = local_e0;
        local_c4 = local_dc;
        local_c0 = local_e0;
        local_bc = local_dc;
        local_b8 = local_e0;
        local_b4 = local_dc;
        local_b0 = local_e0;
        local_ac = local_dc;
        local_a8 = local_e0;
        local_a4 = local_dc;
        local_a0 = local_e0;
        local_9c = local_dc;
        FUN_021f9cc0(&local_e0,&local_34,0);
        *(undefined4 *)(lVar6 + 0x4c) = local_d4;
        *(undefined1 *)(lVar6 + 0x42) = local_de;
        *(undefined1 *)(lVar6 + 0x8a) = local_de;
        *(undefined2 *)(lVar6 + 0x40) = local_e0;
        *(undefined2 *)(lVar6 + 0x88) = local_e0;
        *(undefined1 *)(lVar6 + 0x52) = local_ce;
        *(undefined2 *)(lVar6 + 0x58) = local_c8;
        *(undefined2 *)(lVar6 + 0xa0) = local_c8;
        *(undefined1 *)(lVar6 + 0x43) = local_dd;
        *(undefined4 *)(lVar6 + 0x44) = local_dc;
        *(undefined2 *)(lVar6 + 0x50) = local_d0;
        *(undefined2 *)(lVar6 + 0x98) = local_d0;
        *(undefined2 *)(lVar6 + 0x4a) = local_d6;
        *(undefined1 *)(lVar6 + 0x8b) = local_dd;
        *(undefined4 *)(lVar6 + 0x8c) = local_dc;
        *(undefined4 *)(lVar6 + 0x94) = local_d4;
        *(undefined4 *)(lVar6 + 0x9c) = local_cc;
        *(undefined4 *)(lVar6 + 0xa4) = local_c4;
        *(undefined1 *)(lVar6 + 0x53) = local_cd;
        *(undefined1 *)(lVar6 + 0xa2) = (undefined1)local_c6;
        *(undefined1 *)(lVar6 + 0x9a) = local_ce;
        *(undefined4 *)(lVar6 + 0xac) = local_bc;
        *(undefined4 *)(lVar6 + 0xb4) = local_b4;
        *(undefined2 *)(lVar6 + 0x60) = local_c0;
        *(undefined4 *)(lVar6 + 0x54) = local_cc;
        *(undefined1 *)(lVar6 + 0xa3) = local_c6._1_1_;
        *(undefined1 *)(lVar6 + 0x9b) = local_cd;
        *(undefined2 *)(lVar6 + 0x68) = local_b8;
        *(undefined2 *)(lVar6 + 0xa8) = local_c0;
        *(undefined2 *)(lVar6 + 0x78) = local_a8;
        *(undefined2 *)(lVar6 + 0xb0) = local_b8;
        *(undefined2 *)(lVar6 + 0x5a) = local_c6;
        *(undefined1 *)(lVar6 + 0xaa) = (undefined1)local_be;
        *(undefined2 *)(lVar6 + 0x80) = local_a0;
        *(undefined2 *)(lVar6 + 200) = local_a0;
        *(undefined4 *)(lVar6 + 0xbc) = local_ac;
        *(undefined2 *)(lVar6 + 0xc0) = local_a8;
        *(undefined4 *)(lVar6 + 0xc4) = local_a4;
        *(undefined4 *)(lVar6 + 0xcc) = local_9c;
        *(undefined4 *)(lVar6 + 0x5c) = local_c4;
        *(undefined1 *)(lVar6 + 0xab) = local_be._1_1_;
        *(undefined1 *)(lVar6 + 0xca) = (undefined1)local_9e;
        *(undefined2 *)(lVar6 + 0x62) = local_be;
        *(undefined1 *)(lVar6 + 0xb2) = (undefined1)local_b6;
        *(undefined1 *)(lVar6 + 0xcb) = local_9e._1_1_;
        *(undefined4 *)(lVar6 + 100) = local_bc;
        *(undefined1 *)(lVar6 + 0xb3) = local_b6._1_1_;
        *(undefined2 *)(lVar6 + 0x6a) = local_b6;
        *(undefined1 *)(lVar6 + 0xba) = (undefined1)local_ae;
        *(undefined4 *)(lVar6 + 0x6c) = local_b4;
        *(undefined1 *)(lVar6 + 0xbb) = local_ae._1_1_;
        *(undefined2 *)(lVar6 + 0x72) = local_ae;
        *(undefined1 *)(lVar6 + 0xc2) = (undefined1)local_a6;
        *(undefined4 *)(lVar6 + 0x74) = local_ac;
        *(undefined1 *)(lVar6 + 0xc3) = local_a6._1_1_;
        *(undefined2 *)(lVar6 + 0x7a) = local_a6;
        *(undefined4 *)(lVar6 + 0x7c) = local_a4;
        *(undefined2 *)(lVar6 + 0x82) = local_9e;
        *(undefined4 *)(lVar6 + 0x84) = local_9c;
        *(ushort *)(lVar6 + 0x114) = *(ushort *)(lVar6 + 0x114) | 2;
        *(undefined2 *)(lVar6 + 0x48) = local_d8;
        *(undefined2 *)(lVar6 + 0x90) = local_d8;
        *(undefined2 *)(lVar6 + 0x92) = local_d6;
        *(undefined2 *)(lVar6 + 0x70) = local_b0;
        *(undefined2 *)(lVar6 + 0xb8) = local_b0;
      }
    }
  }
  return;
}

