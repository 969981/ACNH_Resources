
undefined8 FUN_002e38f8(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined4 local_118;
  ErrorResultVariant aEStack_114 [12];
  undefined1 auStack_108 [16];
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
    FUN_002296c4(auStack_138,&local_48);
    FUN_00220f8c(uVar3,auStack_138);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    FUN_00314428(*(undefined8 *)(param_1 + 0xd8));
    FUN_001984a0(param_1 + 0x140);
    return 1;
  }
  if (*(int *)(param_1 + 0x154) != 3) {
    return 0;
  }
  local_48 = *(undefined8 *)(param_1 + 0x198);
  uStack_40 = *(undefined8 *)(param_1 + 0x1a0);
  local_38 = *(undefined8 *)(param_1 + 0x1a8);
  iVar2 = (int)local_48;
  if (iVar2 < -0x7ffcff1e) {
    if (iVar2 < -0x7ffcff8d) {
      if (iVar2 == -0x7ffefffc) {
        uVar3 = *(undefined8 *)(param_1 + 0x2c0);
        local_68 = 0xac5a;
        local_118 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_118);
        FUN_002296c4(auStack_98,&local_68);
        puVar1 = auStack_98;
        goto LAB_002e3d08;
      }
      if (iVar2 == -0x7ffefff6) {
        uVar3 = *(undefined8 *)(param_1 + 0x2c0);
        local_68 = 0x10c07;
        local_118 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_118);
        FUN_002296c4(auStack_58,&local_68);
        puVar1 = auStack_58;
        goto LAB_002e3d08;
      }
    }
    else {
      if (iVar2 == -0x7ffcff8d) {
        uVar3 = *(undefined8 *)(param_1 + 0x2c0);
        local_68 = 0x6c4b;
        local_118 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_118);
        FUN_002296c4(auStack_78,&local_68);
        puVar1 = auStack_78;
        goto LAB_002e3d08;
      }
      if (iVar2 == -0x7ffcff2e) {
        uVar3 = *(undefined8 *)(param_1 + 0x2c0);
        local_68 = 0xc406;
        local_118 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_118);
        FUN_002296c4(auStack_a8,&local_68);
        puVar1 = auStack_a8;
        goto LAB_002e3d08;
      }
      if (iVar2 == -0x7ffcff27) {
        uVar3 = *(undefined8 *)(param_1 + 0x2c0);
        local_68 = 0xac5a;
        local_118 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_118);
        FUN_002296c4(auStack_88,&local_68);
        puVar1 = auStack_88;
        goto LAB_002e3d08;
      }
    }
LAB_002e3bd8:
    local_28 = FUN_0018774c(&local_48);
    local_118 = 0xe437;
    local_68 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_114,(Result *)&local_68);
    FUN_002296c4(&local_68,&local_118);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)&local_118,(ErrorCode *)&local_28);
    FUN_0022b434(&local_68,&local_118);
    uVar3 = *(undefined8 *)(param_1 + 0x2c0);
    FUN_002296c4(auStack_128,&local_68);
    puVar1 = auStack_128;
  }
  else {
    switch(iVar2) {
    case -0x7f97ffeb:
      uVar3 = *(undefined8 *)(param_1 + 0x2c0);
      local_68 = 0xa472;
      local_118 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_118);
      FUN_002296c4(auStack_d8,&local_68);
      puVar1 = auStack_d8;
      break;
    case -0x7f97ffea:
      uVar3 = *(undefined8 *)(param_1 + 0x2c0);
      local_68 = 0xa473;
      local_118 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_118);
      FUN_002296c4(auStack_e8,&local_68);
      puVar1 = auStack_e8;
      break;
    case -0x7f97ffe9:
      uVar3 = *(undefined8 *)(param_1 + 0x2c0);
      local_68 = 0xa474;
      local_118 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_118);
      FUN_002296c4(auStack_f8,&local_68);
      puVar1 = auStack_f8;
      break;
    case -0x7f97ffe8:
      uVar3 = *(undefined8 *)(param_1 + 0x2c0);
      local_68 = 0xa475;
      local_118 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_118);
      FUN_002296c4(auStack_108,&local_68);
      puVar1 = auStack_108;
      break;
    default:
      if (iVar2 == -0x7ffcff1e) {
        uVar3 = *(undefined8 *)(param_1 + 0x2c0);
        local_68 = 0xa471;
        local_118 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_118);
        FUN_002296c4(auStack_b8,&local_68);
        puVar1 = auStack_b8;
        break;
      }
      if (iVar2 == -0x7ffaffff) {
        uVar3 = *(undefined8 *)(param_1 + 0x2c0);
        local_68 = 0xc406;
        local_118 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_118);
        FUN_002296c4(auStack_c8,&local_68);
        puVar1 = auStack_c8;
        break;
      }
      goto LAB_002e3bd8;
    }
  }
LAB_002e3d08:
  FUN_00220ff8(uVar3,puVar1);
  FUN_00314428(*(undefined8 *)(param_1 + 0xd8));
  FUN_001984a0(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  return 1;
}

