
void FUN_0301cb64(long param_1,long param_2)

{
  long lVar1;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [4];
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined2 *puStack_60;
  undefined4 local_58;
  undefined2 local_54 [15];
  undefined2 local_36;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x210);
    if (*(long *)(lVar1 + 0x5c0) == param_2) {
      lVar1 = 0;
    }
    else if (*(long *)(lVar1 + 0x5c8) == param_2) {
      lVar1 = 1;
    }
    else if (*(long *)(lVar1 + 0x5d0) == param_2) {
      lVar1 = 2;
    }
    else if (*(long *)(lVar1 + 0x5d8) == param_2) {
      lVar1 = 3;
    }
    else if (*(long *)(lVar1 + 0x5e0) == param_2) {
      lVar1 = 4;
    }
    else if (*(long *)(lVar1 + 0x5e8) == param_2) {
      lVar1 = 5;
    }
    else if (*(long *)(lVar1 + 0x5f0) == param_2) {
      lVar1 = 6;
    }
    else if (*(long *)(lVar1 + 0x5f8) == param_2) {
      lVar1 = 7;
    }
    else if (*(long *)(lVar1 + 0x600) == param_2) {
      lVar1 = 8;
    }
    else if (*(long *)(lVar1 + 0x608) == param_2) {
      lVar1 = 9;
    }
    else if (*(long *)(lVar1 + 0x610) == param_2) {
      lVar1 = 10;
    }
    else if (*(long *)(lVar1 + 0x618) == param_2) {
      lVar1 = 0xb;
    }
    else if (*(long *)(lVar1 + 0x620) == param_2) {
      lVar1 = 0xc;
    }
    else if (*(long *)(lVar1 + 0x628) == param_2) {
      lVar1 = 0xd;
    }
    else if (*(long *)(lVar1 + 0x630) == param_2) {
      lVar1 = 0xe;
    }
    else {
      if (*(long *)(lVar1 + 0x638) != param_2) {
        return;
      }
      lVar1 = 0xf;
    }
    local_d8 = *(undefined4 *)PTR_DAT_04bb37e0;
    uStack_d4 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    FUN_007ef010(auStack_d0,PTR_DAT_04bb3170);
    local_c8 = 0;
    uStack_c0 = 0;
    puStack_60 = local_54;
    local_b8 = 0;
    local_cc = 0xffffffff;
    local_80 = 0xffffffff;
    local_a0 = PTR_DAT_04bc5058 + 0x10;
    local_78 = 0;
    uStack_70 = 0;
    local_36 = 0;
    local_58 = 0x10;
    local_e0 = *(undefined8 *)(param_2 + 0x1d0);
    local_68 = PTR_DAT_04bbd6c0 + 0x10;
    local_54[0] = 0;
    local_b0 = "MyDesignEdit";
    local_a8 = 0;
    (**(code **)((&DAT_056d9b00)[lVar1 * 2] + 0x18))(&DAT_056d9b00 + lVar1 * 2);
    local_a8 = (&DAT_056d9b08)[lVar1 * 2];
    FUN_03111440(*(undefined8 *)(param_1 + 0x8a8),&local_e0);
  }
  return;
}

