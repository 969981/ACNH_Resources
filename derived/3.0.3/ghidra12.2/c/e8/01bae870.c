
void FUN_01bae870(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined4 local_184;
  undefined *local_180;
  undefined8 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined *local_150;
  undefined1 *puStack_148;
  undefined4 local_140;
  undefined1 local_13c [63];
  undefined1 local_fd;
  undefined *local_f8;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  undefined1 local_e4 [63];
  undefined1 local_a5;
  undefined8 local_a0;
  undefined6 uStack_98;
  undefined2 local_92;
  undefined6 uStack_90;
  undefined1 auStack_8a [2];
  uint local_88;
  undefined4 local_80 [2];
  long local_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  
  local_16c = 0;
  local_170 = 0xb;
  local_168 = 0xffffffff;
  uStack_160 = 0xffffffff00000000;
  puStack_178 = &local_a0;
  local_158 = 0xffffffff;
  puStack_148 = local_13c;
  local_140 = 0x40;
  local_fd = 0;
  local_13c[0] = 0;
  local_150 = PTR_DAT_04bb2bc0 + 0x10;
  local_e8 = 0x40;
  local_a5 = 0;
  local_e4[0] = 0;
  puStack_f0 = local_e4;
  uStack_90 = 0;
  local_180 = PTR_DAT_04bb5128 + 0x10;
  local_a0 = 0;
  uStack_98 = 0;
  local_92 = 0;
  puVar1 = auStack_8a;
  if (auStack_8a <= (undefined1 *)((long)&local_a0 + 2U)) {
    puVar1 = (undefined1 *)((long)&local_a0 + 2U);
  }
  local_f8 = local_150;
  memset(puStack_178,0,(ulong)(puVar1 + (-0xe1 - (long)&local_180)) & 0xfffffffffffffffc | 2);
  local_78 = param_2 + 4;
  local_88 = 2;
  local_80[0] = 10;
  FUN_0082b014(&local_180);
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  local_48 = 1;
  local_44 = 0;
  local_70 = PTR_DAT_04bc0cd8 + 0x10;
  uStack_68 = 0;
  FUN_02906b00(&local_70,&local_180,local_80);
  local_88 = 2;
  if (*(byte *)(param_2 + 0x18) < 4) {
    local_88 = (uint)*(byte *)(param_2 + 0x18);
  }
  if (((DAT_0533a3c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0533a3c0), iVar2 != 0)) {
    FUN_01bb25c8(&DAT_0533a3b0);
    __cxa_guard_release(&DAT_0533a3c0);
  }
  if (0 < (int)DAT_0533a3b0) {
    uVar3 = 0;
    do {
      if (*(int *)(DAT_0533a3b8 + uVar3 * 4) == 0x73) goto LAB_01bae9dc;
      uVar3 = uVar3 + 1;
    } while (DAT_0533a3b0 != uVar3);
  }
  uVar3 = 0;
LAB_01bae9dc:
  local_184 = (undefined4)uVar3;
  FUN_01baea40(param_1,&local_180,param_3,&local_184,2);
  return;
}

