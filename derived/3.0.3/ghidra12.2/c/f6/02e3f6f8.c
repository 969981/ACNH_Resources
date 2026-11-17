
void FUN_02e3f6f8(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  ulong uVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined8 local_180;
  undefined *local_178;
  undefined8 *puStack_170;
  undefined4 local_168;
  undefined1 local_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined *local_148;
  undefined1 *puStack_140;
  undefined4 local_138;
  undefined1 local_134 [63];
  undefined1 local_f5;
  undefined *local_f0;
  undefined1 *puStack_e8;
  undefined4 local_e0;
  undefined1 local_dc [63];
  undefined1 local_9d;
  undefined8 local_98;
  undefined6 uStack_90;
  undefined2 local_8a;
  undefined6 uStack_88;
  undefined1 auStack_82 [2];
  undefined4 local_80 [2];
  long local_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined1 *)(param_1 + 0x2c8) = 0;
  }
  else if (*(char *)(param_1 + 0x2c8) != '\0') {
    if (*(char *)(*(long *)(DAT_05aec868 + 0x330) + 0x104) == '\0' &&
        *(int *)(DAT_05aec868 + 0x32c) == 0) {
      FUN_03ebb160(param_1 + 8,0);
      return;
    }
    return;
  }
  iVar2 = *(int *)(DAT_05aec868 + 0x32c);
  cVar3 = *(char *)(*(long *)(DAT_05aec868 + 0x330) + 0x104);
  uVar4 = (**(code **)(**(long **)PTR_DAT_04bb2638 + 0x10))();
  if ((cVar3 == '\0' && iVar2 == 0) && ((uVar4 & 1) != 0)) {
    local_164 = 0;
    local_168 = 0xb;
    local_160 = 0xffffffff;
    uStack_158 = 0xffffffff00000000;
    puStack_170 = &local_98;
    local_150 = 0xffffffff;
    puStack_140 = local_134;
    local_138 = 0x40;
    local_f5 = 0;
    local_134[0] = 0;
    local_148 = PTR_DAT_04bb2bc0 + 0x10;
    local_e0 = 0x40;
    local_9d = 0;
    local_dc[0] = 0;
    puStack_e8 = local_dc;
    uStack_88 = 0;
    local_178 = PTR_DAT_04bb5128 + 0x10;
    puVar1 = auStack_82;
    if (auStack_82 <= (undefined1 *)((long)&local_98 + 2U)) {
      puVar1 = (undefined1 *)((long)&local_98 + 2U);
    }
    local_98 = 0;
    uStack_90 = 0;
    local_8a = 0;
    local_f0 = local_148;
    memset(puStack_170,0,(ulong)(puVar1 + (-0xe1 - (long)&local_178)) & 0xfffffffffffffffc | 2);
    local_180 = *(undefined8 *)(param_1 + 0x2b0);
    local_80[0] = 10;
    local_78 = param_1 + 0x180;
    FUN_0082b014(&local_178);
    local_58 = 0;
    uStack_50 = 0;
    local_60 = 0;
    local_48 = 1;
    local_44 = 0;
    local_70 = PTR_DAT_04bc0cd8 + 0x10;
    uStack_68 = 0;
    FUN_02906b00(&local_70,&local_178,local_80);
    iVar2 = *(int *)(param_1 + 0x194);
    puVar5 = (undefined4 *)(**(code **)(local_178 + 0x40))(&local_178);
    uVar7 = 1;
    if (iVar2 == 1) {
      uVar7 = 2;
    }
    *puVar5 = uVar7;
    bVar6 = *(byte *)(param_1 + 0x50);
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    local_70 = (undefined *)CONCAT71(local_70._1_7_,bVar6);
    FUN_01d7e1a0(param_1 + 0x88,&local_180,&local_70);
    *(undefined1 *)(param_1 + 0x2c8) = 1;
  }
  return;
}

