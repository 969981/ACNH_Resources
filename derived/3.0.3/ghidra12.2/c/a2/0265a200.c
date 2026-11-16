
uint FUN_0265a200(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined *local_190;
  undefined8 *puStack_188;
  undefined4 local_180;
  undefined1 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined *local_160;
  undefined1 *puStack_158;
  undefined4 local_150;
  undefined1 local_14c [63];
  undefined1 local_10d;
  undefined *local_108;
  undefined1 *puStack_100;
  undefined4 local_f8;
  undefined1 local_f4 [63];
  undefined1 local_b5;
  undefined8 local_b0;
  undefined6 uStack_a8;
  undefined2 local_a2;
  undefined6 uStack_a0;
  undefined1 auStack_9a [2];
  undefined4 local_98;
  undefined *local_90;
  undefined2 *local_88;
  undefined4 local_80;
  undefined2 local_7c [10];
  undefined2 local_68;
  undefined4 local_60 [2];
  undefined8 *local_58;
  
  local_68 = 0;
  local_7c[0] = 0;
  local_80 = 0xb;
  local_88 = local_7c;
  lVar4 = 0;
  local_90 = PTR_DAT_04bc0d30 + 0x10;
  puStack_188 = (undefined8 *)(param_2 + 0x10);
  local_190 = PTR_DAT_04bb2020 + 0x10;
  do {
    if (*(char *)(param_2 + lVar4 + 0x10) == '\0') {
LAB_0265a2a0:
      uVar3 = FUN_01df33d0(&local_90,&local_190,lVar4);
      if ((uVar3 & 1) != 0) {
        local_180 = 0xb;
        local_17c = 0;
        puStack_188 = &local_b0;
        local_178 = 0xffffffff;
        uStack_170 = 0xffffffff00000000;
        puStack_158 = local_14c;
        local_168 = 0xffffffff;
        local_150 = 0x40;
        local_10d = 0;
        local_14c[0] = 0;
        local_160 = PTR_DAT_04bb2bc0 + 0x10;
        local_f8 = 0x40;
        local_b5 = 0;
        local_f4[0] = 0;
        puStack_100 = local_f4;
        uStack_a0 = 0;
        local_190 = PTR_DAT_04bb5128 + 0x10;
        local_b0 = 0;
        uStack_a8 = 0;
        local_a2 = 0;
        puVar1 = auStack_9a;
        if (auStack_9a <= (undefined1 *)((long)&local_b0 + 2U)) {
          puVar1 = (undefined1 *)((long)&local_b0 + 2U);
        }
        local_108 = local_160;
        memset(puStack_188,0,(ulong)(puVar1 + (-0xe1 - (long)&local_190)) & 0xfffffffffffffffc | 2);
        local_98 = 2;
        FUN_01c138cc(&local_190);
        (**(code **)(local_90 + 0x18))(&local_90);
        FUN_01c13f00(&local_190,local_88,local_80,*(undefined1 *)(param_2 + 0x39));
        uVar2 = *(undefined4 *)(param_2 + 0x3c);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        *(undefined4 *)((long)param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 3) = 0;
        local_58 = (undefined8 *)((long)param_1 + 4);
        *local_58 = 0;
        *(undefined1 *)(param_1 + 3) = 2;
        *(undefined8 *)((long)param_1 + 0xc) = 0;
        local_60[0] = 10;
        FUN_02906c90(local_60,&local_190);
        *(undefined4 *)param_1 = uVar2;
        *(char *)(param_1 + 3) = (char)local_98;
      }
      return uVar3 & 1;
    }
    if (lVar4 == 0x28) {
      lVar4 = 0xffffffff;
      goto LAB_0265a2a0;
    }
    if (*(char *)(param_2 + lVar4 + 0x11) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_0265a2a0;
    }
    lVar4 = lVar4 + 2;
  } while( true );
}

