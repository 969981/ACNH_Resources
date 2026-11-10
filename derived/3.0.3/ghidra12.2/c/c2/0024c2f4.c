
uint FUN_0024c2f4(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_16c [16];
  undefined1 auStack_15c [16];
  undefined1 auStack_14c [16];
  undefined1 auStack_13c [16];
  undefined1 auStack_12c [16];
  int local_11c;
  ErrorResultVariant aEStack_118 [12];
  int local_10c [4];
  undefined4 local_fc;
  undefined1 auStack_f8 [48];
  undefined8 local_c8;
  undefined8 uStack_c0;
  char local_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  uint local_a8;
  undefined1 auStack_a4 [64];
  undefined1 auStack_64 [16];
  int local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  
  local_54 = 0;
  local_a8 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_a8);
  lVar8 = *(long *)(param_1 + 0x70);
  FUN_00248510(&local_a8,lVar8);
  FUN_00229780(&local_54,&local_a8);
  if (local_54 == 0) {
    FUN_00258178(*(undefined8 *)(param_1 + 0x70),2);
    pvVar3 = memcpy(auStack_a4,(void *)(param_1 + 0x2ac),(ulong)*(byte *)(param_1 + 0x2ec));
    local_c8 = *(undefined8 *)(lVar8 + 0x8424);
    uStack_c0 = *(undefined8 *)(lVar8 + 0x842c);
    uVar7 = 1;
    if (*(char *)(lVar8 + 0x83c0) != '\0') {
      uVar7 = 2;
    }
    local_a8 = (uint)CONCAT12(*(undefined1 *)(param_1 + 0x2ec),uVar7);
    uStack_b0 = *(undefined8 *)(lVar8 + 0x843c);
    _local_b8 = CONCAT71((int7)((ulong)*(undefined8 *)(lVar8 + 0x8434) >> 8),
                         (char)*(undefined8 *)(lVar8 + 0x8434) + '\x01');
    FUN_0024ac6c(pvVar3,auStack_f8);
    uVar2 = FUN_0024769c(*(undefined8 *)(param_1 + 0x70));
    local_fc = nn::ldn::ConnectPrivate(param_1 + 0x2f0,&local_a8,&local_c8,auStack_f8,uVar2,0);
    FUN_00247918(local_10c,lVar8,&local_fc);
    if (local_10c[0] != 0) {
      local_44 = 0;
      local_11c = 0x6838;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_118,(Result *)&local_44);
      if (local_10c[0] == local_11c) {
        local_fc = nn::ldn::ConnectPrivate(param_1 + 0x2f0,&local_a8,&local_c8,auStack_f8,uVar2,0);
        FUN_00247918(local_10c,lVar8,&local_fc);
        if (local_10c[0] == 0) goto LAB_0024c4a8;
        local_11c = 0x6838;
        local_44 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_118,(Result *)&local_44);
      }
      lVar9 = *(long *)(param_1 + 0x58);
      FUN_002296c4(auStack_12c,local_10c);
      puVar4 = auStack_12c;
      goto LAB_0024c4e8;
    }
LAB_0024c4a8:
    FUN_002478cc(lVar8);
    FUN_00249f28(local_10c,lVar8);
    FUN_00229780(&local_54,local_10c);
    if (local_54 != 0) {
      lVar9 = *(long *)(param_1 + 0x58);
      FUN_002296c4(auStack_13c,&local_54);
      puVar4 = auStack_13c;
      goto LAB_0024c4e8;
    }
    FUN_002485a8(local_10c,lVar8);
    FUN_00229780(&local_54,local_10c);
    lVar9 = *(long *)(param_1 + 0x58);
    if (local_54 != 0) {
      FUN_002296c4(auStack_14c,&local_54);
      puVar4 = auStack_14c;
      goto LAB_0024c4e8;
    }
    if (*(char *)(lVar9 + 0x28) == '\0') {
      (**(code **)(**(long **)(param_1 + 0x70) + 0x130))
                (local_10c,*(long **)(param_1 + 0x70),param_1 + 0x2a0);
      FUN_0024a064(&local_11c,lVar8);
      FUN_00229780(&local_54,&local_11c);
      puVar1 = PTR_FUN_04bcd5a0;
      if (local_54 == 0) {
        if (local_10c[0] == 0) {
          *(char **)(param_1 + 0x40) = "LdnBackgroundProcessJob::WaitConnectNetworkEvent";
          uVar6 = 4;
          *(undefined **)(param_1 + 0x30) = puVar1;
          *(undefined8 *)(param_1 + 0x38) = 0;
          uVar5 = 0xf0000;
          goto LAB_0024c4f8;
        }
        lVar9 = *(long *)(param_1 + 0x58);
        FUN_002296c4(auStack_16c,local_10c);
        puVar4 = auStack_16c;
      }
      else {
        lVar9 = *(long *)(param_1 + 0x58);
        FUN_002296c4(auStack_15c,&local_54);
        puVar4 = auStack_15c;
      }
      goto LAB_0024c4e8;
    }
    FUN_00221064(lVar9);
  }
  else {
    lVar9 = *(long *)(param_1 + 0x58);
    FUN_002296c4(auStack_64,&local_54);
    puVar4 = auStack_64;
LAB_0024c4e8:
    FUN_00220ff8(lVar9,puVar4);
  }
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar6 = 1;
LAB_0024c4f8:
  return uVar5 | uVar6;
}

