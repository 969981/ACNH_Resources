
/* WARNING: Removing unreachable block (ram,0x02f089dc) */

void FUN_02f08998(byte *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined *local_208;
  undefined2 *puStack_200;
  undefined4 local_1f8;
  undefined2 local_1f4 [48];
  undefined2 local_194;
  byte local_18c [4];
  undefined *local_188;
  undefined8 *puStack_180;
  undefined4 local_178;
  undefined1 local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  undefined1 local_144 [63];
  undefined1 local_105;
  undefined *local_100;
  undefined1 *puStack_f8;
  undefined4 local_f0;
  undefined1 local_ec [63];
  undefined1 local_ad;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined1 auStack_46 [6];
  
  local_188 = (undefined *)CONCAT44(local_188._4_4_,0xd);
  puVar6 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if ((puVar6 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc73c0), (uVar3 & 1) != 0)) {
    *(undefined4 *)((long)puVar6 + 700) = 0;
    local_170 = 0xffffffff;
    uStack_168 = 0xffffffff00000000;
    bVar4 = *param_1;
    local_174 = 0;
    bVar5 = *(byte *)(puVar6 + 0x3f);
    local_178 = 0x31;
    puStack_180 = &local_a8;
    local_160 = 0xffffffff;
    puStack_150 = local_144;
    local_148 = 0x40;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    local_105 = 0;
    local_158 = PTR_DAT_04bb2bc0 + 0x10;
    local_144[0] = 0;
    local_f0 = 0x40;
    local_ad = 0;
    local_ec[0] = 0;
    puStack_f8 = local_ec;
    local_188 = PTR_DAT_04bb8dc0 + 0x10;
    local_48 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    puVar1 = auStack_46;
    if (auStack_46 <= (undefined1 *)((long)&local_a8 + 2U)) {
      puVar1 = (undefined1 *)((long)&local_a8 + 2U);
    }
    local_100 = local_158;
    memset(puStack_180,0,(ulong)(puVar1 + (-0xe1 - (long)&local_188)) & 0xfffffffffffffff8 | 2);
    local_18c[0] = bVar4;
    uVar3 = FUN_0266a2d0(&local_188,local_18c,param_2);
    if ((uVar3 & 1) != 0) {
      local_1f8 = 0x31;
      local_194 = 0;
      puStack_200 = local_1f4;
      local_1f4[0] = 0;
      local_208 = PTR_DAT_04bb7418 + 0x10;
      FUN_006f4da4(&local_188,&local_208,0);
      if (*(long *)PTR_DAT_04bc5c78 != 0) {
        if (7 < bVar5) {
          bVar5 = 0xff;
        }
        FUN_02cb11c0(*(long *)PTR_DAT_04bc5c78,&local_208,param_1,bVar5 == bVar4);
      }
    }
  }
  return;
}

