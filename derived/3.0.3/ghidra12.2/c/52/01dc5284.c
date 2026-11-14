
undefined8 FUN_01dc5284(long param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  short *psVar4;
  undefined *local_168;
  short *psStack_160;
  undefined *local_158;
  undefined8 *puStack_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  undefined1 local_114 [63];
  undefined1 local_d5;
  undefined *local_d0;
  undefined1 *puStack_c8;
  undefined4 local_c0;
  undefined1 local_bc [63];
  undefined1 local_7d;
  undefined8 local_78;
  undefined6 uStack_70;
  undefined2 local_6a;
  undefined6 uStack_68;
  undefined1 auStack_62 [2];
  undefined *local_60;
  undefined2 *puStack_58;
  undefined4 local_50;
  undefined2 local_4c [10];
  undefined2 local_38;
  
  psVar4 = *(short **)(param_1 + 0x50);
  if ((psVar4 != (short *)0x0) && (*psVar4 == 1)) {
    local_144 = 0;
    local_140 = 0xffffffff;
    uStack_138 = 0xffffffff00000000;
    local_148 = 0xb;
    puStack_150 = &local_78;
    local_130 = 0xffffffff;
    puStack_120 = local_114;
    local_118 = 0x40;
    local_d5 = 0;
    local_114[0] = 0;
    local_128 = PTR_DAT_04bb2bc0 + 0x10;
    local_c0 = 0x40;
    local_7d = 0;
    local_bc[0] = 0;
    puStack_c8 = local_bc;
    local_158 = PTR_DAT_04bb5128 + 0x10;
    uStack_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_6a = 0;
    puVar1 = auStack_62;
    if (auStack_62 <= (undefined1 *)((long)&local_78 + 2U)) {
      puVar1 = (undefined1 *)((long)&local_78 + 2U);
    }
    local_d0 = local_128;
    memset(puStack_150,0,(ulong)(puVar1 + (-0xe1 - (long)&local_158)) & 0xfffffffffffffffc | 2);
    psStack_160 = psVar4 + 0xd;
    local_168 = PTR_DAT_04bb2020 + 0x10;
    uVar2 = FUN_01dc5408();
    local_50 = 0xb;
    local_38 = 0;
    puStack_58 = local_4c;
    local_4c[0] = 0;
    local_60 = PTR_DAT_04bc0d30 + 0x10;
    uVar3 = FUN_01df33d0(&local_60,&local_168,uVar2);
    if (((uVar3 & 1) != 0) && (uVar3 = FUN_006f5580(&local_158,&local_60), (uVar3 & 1) != 0)) {
      (**(code **)(*param_2 + 0x28))(param_2,&local_158);
      (**(code **)(*param_2 + 0x30))(param_2,&local_158);
      return 1;
    }
    (**(code **)(local_158 + 0x38))(&local_158);
  }
  return 0;
}

