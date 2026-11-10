
undefined8 FUN_002daa14(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined4 local_108;
  ErrorResultVariant aEStack_104 [12];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined4 local_68;
  ErrorResultVariant aEStack_64 [12];
  undefined1 auStack_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0x154) == 2) {
    uVar3 = *(undefined8 *)(param_1 + 0x2c0);
    local_48 = local_48 & 0xffffffff00000000;
    local_68 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_68);
    FUN_002296c4(auStack_128,&local_48);
    FUN_00220f8c(uVar3,auStack_128);
    goto LAB_002dadbc;
  }
  if (*(int *)(param_1 + 0x154) != 3) {
    return 0;
  }
  local_48 = *(ulong *)(param_1 + 0x198);
  uStack_40 = *(undefined8 *)(param_1 + 0x1a0);
  local_38 = *(undefined8 *)(param_1 + 0x1a8);
  iVar2 = (int)local_48;
  if (iVar2 < -0x7ffcff1e) {
    if (iVar2 < -0x7ffcff2e) {
      if (iVar2 == -0x7ffefffc) {
        uVar3 = *(undefined8 *)(param_1 + 0x2c0);
        local_68 = 0xac5a;
        local_108 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_108);
        FUN_002296c4(auStack_88,&local_68);
        puVar1 = auStack_88;
      }
      else if (iVar2 == -0x7ffcff8d) {
        uVar3 = *(undefined8 *)(param_1 + 0x2c0);
        local_68 = 0x6c4b;
        local_108 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_108);
        FUN_002296c4(auStack_58,&local_68);
        puVar1 = auStack_58;
      }
      else {
LAB_002dac84:
        local_28 = FUN_0018774c(&local_48);
        local_108 = 0xe437;
        local_68 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_104,(Result *)&local_68);
        FUN_002296c4(&local_68,&local_108);
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)&local_108,(ErrorCode *)&local_28);
        FUN_0022b434(&local_68,&local_108);
        uVar3 = *(undefined8 *)(param_1 + 0x2c0);
        FUN_002296c4(auStack_118,&local_68);
        puVar1 = auStack_118;
      }
    }
    else if (iVar2 == -0x7ffcff2e) {
      uVar3 = *(undefined8 *)(param_1 + 0x2c0);
      local_68 = 0xc406;
      local_108 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_108);
      FUN_002296c4(auStack_98,&local_68);
      puVar1 = auStack_98;
    }
    else {
      if (iVar2 != -0x7ffcff27) goto LAB_002dac84;
      uVar3 = *(undefined8 *)(param_1 + 0x2c0);
      local_68 = 0xac5a;
      local_108 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_108);
      FUN_002296c4(auStack_78,&local_68);
      puVar1 = auStack_78;
    }
  }
  else {
    switch(iVar2) {
    case -0x7f97ffeb:
      uVar3 = *(undefined8 *)(param_1 + 0x2c0);
      local_68 = 0xa472;
      local_108 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_108);
      FUN_002296c4(auStack_c8,&local_68);
      puVar1 = auStack_c8;
      break;
    case -0x7f97ffea:
      uVar3 = *(undefined8 *)(param_1 + 0x2c0);
      local_68 = 0xa473;
      local_108 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_108);
      FUN_002296c4(auStack_d8,&local_68);
      puVar1 = auStack_d8;
      break;
    case -0x7f97ffe9:
      uVar3 = *(undefined8 *)(param_1 + 0x2c0);
      local_68 = 0xa474;
      local_108 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_108);
      FUN_002296c4(auStack_e8,&local_68);
      puVar1 = auStack_e8;
      break;
    case -0x7f97ffe8:
      uVar3 = *(undefined8 *)(param_1 + 0x2c0);
      local_68 = 0xa475;
      local_108 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_108);
      FUN_002296c4(auStack_f8,&local_68);
      puVar1 = auStack_f8;
      break;
    default:
      if (iVar2 == -0x7ffcff1e) {
        uVar3 = *(undefined8 *)(param_1 + 0x2c0);
        local_68 = 0xa471;
        local_108 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_108);
        FUN_002296c4(auStack_a8,&local_68);
        puVar1 = auStack_a8;
      }
      else {
        if (iVar2 != -0x7ffaffff) goto LAB_002dac84;
        uVar3 = *(undefined8 *)(param_1 + 0x2c0);
        local_68 = 0xc406;
        local_108 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_108);
        FUN_002296c4(auStack_b8,&local_68);
        puVar1 = auStack_b8;
      }
    }
  }
  FUN_00220ff8(uVar3,puVar1);
LAB_002dadbc:
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  FUN_001984a0(param_1 + 0x140);
  return 1;
}

