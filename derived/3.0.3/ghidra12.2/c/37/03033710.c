
bool FUN_03033710(long param_1,byte *param_2,int param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  ulong uVar6;
  byte bVar7;
  undefined4 uVar8;
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
  undefined1 auStack_9a [6];
  uint local_94;
  undefined4 local_90 [2];
  long local_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  
  lVar3 = DAT_05690d38;
  local_94 = 0xffffffff;
  if (*(uint *)(param_1 + 0x6680) == 0 && param_3 == 1) {
    if (DAT_05690d38 != 0) {
      local_17c = 0;
      local_180 = 0xb;
      local_178 = 0xffffffff;
      uStack_170 = 0xffffffff00000000;
      puStack_188 = &local_b0;
      local_168 = 0xffffffff;
      puStack_158 = local_14c;
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
      puVar2 = auStack_9a;
      if (auStack_9a <= (undefined1 *)((long)&local_b0 + 2U)) {
        puVar2 = (undefined1 *)((long)&local_b0 + 2U);
      }
      local_108 = local_160;
      memset(puStack_188,0,(ulong)(puVar2 + (-0xe1 - (long)&local_190)) & 0xfffffffffffffffc | 2);
      local_90[0] = 10;
      local_88 = param_1 + 0x66a4;
      FUN_0082b014(&local_190);
      local_68 = 0;
      uStack_60 = 0;
      local_70 = 0;
      local_58 = 1;
      local_54 = 0;
      local_80 = PTR_DAT_04bc0cd8 + 0x10;
      uStack_78 = 0;
      FUN_02906b00(&local_80,&local_190,local_90);
      iVar4 = *(int *)(param_1 + 0x66b8);
      puVar5 = (undefined4 *)(**(code **)(local_190 + 0x40))(&local_190);
      uVar8 = 1;
      if (iVar4 == 1) {
        uVar8 = 2;
      }
      *puVar5 = uVar8;
      if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar4 != 0)) {
        FUN_01bb25c8(&DAT_0533a3b0);
        __cxa_guard_release(&DAT_0533a3c0);
      }
      if (0 < (int)DAT_0533a3b0) {
        uVar6 = 0;
        do {
          if (*(int *)(DAT_0533a3b8 + uVar6 * 4) == 0x73) goto LAB_030338c0;
          uVar6 = uVar6 + 1;
        } while (DAT_0533a3b0 != uVar6);
      }
      uVar6 = 0;
LAB_030338c0:
      local_80 = (undefined *)CONCAT44(local_80._4_4_,(int)uVar6);
      FUN_01bae480(lVar3 + 0x260,&local_190,0,&local_80,0);
      *(undefined8 *)(param_1 + 0x668c) = 0;
      *(undefined8 *)(param_1 + 0x6694) = 0;
      *(undefined4 *)(param_1 + 0x66b8) = 0;
      *(undefined8 *)(param_1 + 0x6684) = 0;
      *(undefined8 *)(param_1 + 0x66a0) = 0;
      *(undefined8 *)(param_1 + 0x66a8) = 0;
      *(undefined8 *)(param_1 + 0x66b0) = 0;
      *(undefined1 *)(param_1 + 0x669c) = 2;
    }
    local_94 = 1;
  }
  if (local_94 != 0xffffffff) {
    uVar1 = local_94;
    if (1 < local_94) {
      uVar1 = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = (&DAT_056db830)[(long)(int)uVar1 * 2];
    bVar7 = *(byte *)(param_1 + 0x1f8);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    *param_2 = bVar7;
    *(uint *)(param_1 + 0x6680) = local_94;
  }
  return local_94 != 0xffffffff;
}

