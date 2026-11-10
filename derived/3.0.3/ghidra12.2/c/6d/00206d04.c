
undefined8
FUN_00206d04(long param_1,undefined8 param_2,long param_3,undefined4 *param_4,long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int local_254;
  undefined1 auStack_250 [16];
  undefined8 local_240;
  undefined4 local_21c;
  long local_218;
  int local_20c;
  undefined1 auStack_208 [8];
  char local_200;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined1 local_1cc;
  undefined *local_1a0;
  undefined4 local_198;
  undefined1 local_194;
  undefined8 local_190;
  undefined1 auStack_168 [8];
  undefined *local_160;
  undefined4 local_158;
  undefined1 local_154;
  undefined1 auStack_128 [40];
  undefined *local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  long local_f0;
  undefined8 uStack_e8;
  long local_d8;
  undefined1 auStack_c8 [8];
  char local_c0;
  undefined *local_98;
  undefined4 local_90;
  undefined1 local_8c;
  
  puVar2 = PTR_DAT_04bcc018;
  local_90 = 1;
  local_8c = 0;
  puVar1 = PTR_DAT_04bcc018 + 0x10;
  local_98 = puVar1;
  uVar3 = FUN_00196a18();
  FUN_00196a24(&local_98,uVar3,0);
  FUN_001968b4(param_1,&local_98);
  FUN_00195b30(auStack_c8,&local_98);
  local_f8 = 1;
  local_f4 = 0;
  local_100 = puVar1;
  uVar3 = FUN_00196a18();
  FUN_00196a24(&local_100,uVar3,0);
  FUN_001968b4(auStack_c8,&local_100);
  FUN_0019c970(auStack_128,local_f0 + local_d8,uStack_e8);
  local_158 = 1;
  local_154 = 0;
  local_160 = puVar1;
  uVar3 = FUN_00196a18();
  FUN_00196a24(&local_160,uVar3,0);
  FUN_001968b4(auStack_c8,&local_160);
  if (*(char *)(param_1 + 8) == '\0' && local_c0 == '\0') {
    plVar4 = (long *)FUN_00185a6c(0xb8);
    if (plVar4 != (long *)0x0) {
      FUN_001fd110(plVar4,&local_160,*(undefined8 *)(param_3 + 0x38));
    }
    FUN_001fd294(plVar4,*(undefined8 *)(param_3 + 0x28),auStack_128);
    FUN_00186524(auStack_168);
    FUN_00187068(auStack_168);
    FUN_0018652c(&local_1a0,plVar4 + 0x10);
    lVar5 = FUN_001867ac(auStack_168,&local_1a0);
    if ((lVar5 < 0x1d4c1) && (uVar6 = FUN_001fd520(plVar4), (uVar6 & 1) != 0)) {
      local_198 = 1;
      local_194 = 0;
      local_1a0 = puVar2 + 0x10;
      uVar3 = FUN_00196a18();
      FUN_00196a24(&local_1a0,uVar3,0);
      FUN_001968b4(param_1,&local_1a0);
      local_1d0 = 1;
      local_1cc = 0;
      local_1d8 = puVar2 + 0x10;
      uVar3 = FUN_00196a18();
      FUN_00196a24(&local_1d8,uVar3,0);
      FUN_001f9d6c(*(undefined8 *)(param_3 + 0x28),&local_1a0,&local_1d8,plVar4 + 0xb);
      FUN_00195b30(auStack_208,&local_1d8);
      FUN_001967bc(auStack_208,&local_218,8,1);
      FUN_001967bc(auStack_208,&local_21c,4,1);
      FUN_001967bc(auStack_208,&local_20c,4,1);
      if ((local_200 == '\0') && (local_218 == plVar4[9])) {
        *param_4 = local_21c;
        FUN_00195a88(auStack_250);
        uVar3 = 1;
        local_254 = local_20c + 1;
        FUN_001967b0(auStack_250,&local_254,4,1);
        FUN_001967c8(param_2,local_240);
        *param_5 = (long)plVar4;
        FUN_00195bf0(auStack_250);
      }
      else {
        (**(code **)(*plVar4 + 8))(plVar4);
        FUN_00195a88(auStack_250);
        local_254 = 0;
        FUN_001967b0(auStack_250,&local_254,4,1);
        FUN_001967c8(param_2,local_240);
        FUN_00195bf0(auStack_250);
        uVar3 = 0;
      }
      FUN_00195bf0(auStack_208);
      FUN_00196ce0(&local_1d8);
      FUN_00196ce0(&local_1a0);
      goto LAB_0020701c;
    }
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  FUN_00195a88(&local_1a0);
  local_1d8 = (undefined *)((ulong)local_1d8._4_4_ << 0x20);
  FUN_001967b0(&local_1a0,&local_1d8,4,1);
  FUN_001967c8(param_2,local_190);
  FUN_00195bf0(&local_1a0);
  uVar3 = 0;
LAB_0020701c:
  FUN_00196ce0(&local_160);
  FUN_0019cd34(auStack_128);
  FUN_00196ce0(&local_100);
  FUN_00195bf0(auStack_c8);
  FUN_00196ce0(&local_98);
  return uVar3;
}

