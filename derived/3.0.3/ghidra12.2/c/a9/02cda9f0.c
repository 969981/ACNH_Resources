
void FUN_02cda9f0(byte *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if (7 < *param_1) {
    return;
  }
  local_a8 = 0xfffe;
  FUN_0277d4ac(&local_a8);
  local_a0 = 0xfffe;
  FUN_0277d4ac(&local_a0);
  local_98 = 0xfffe;
  FUN_0277d4ac(&local_98);
  local_90 = 0xfffe;
  FUN_0277d4ac(&local_90);
  local_88 = 0xfffe;
  FUN_0277d4ac();
  local_80 = 0xfffe;
  FUN_0277d4ac();
  local_78 = 0xfffe;
  FUN_0277d4ac();
  local_70 = 0xfffe;
  FUN_0277d4ac(&local_70);
  local_68 = 0xfffe;
  FUN_0277d4ac(&local_68);
  puVar3 = PTR_DAT_04bb43c0;
  local_68 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_70 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_78 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_80 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_88 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_90 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_98 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_a0 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_a8 = *(undefined8 *)PTR_DAT_04bb37e0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_2);
  lVar5 = *(long *)puVar3;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      local_a8 = *param_2;
      uVar7 = 1;
      goto LAB_02cdabcc;
    }
  }
  uVar7 = 0;
LAB_02cdabcc:
  uVar4 = FUN_0277d6c4(param_2 + 1);
  lVar6 = *(long *)puVar3;
  if (lVar6 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar2 = *(undefined4 *)((long)param_2 + 0xc);
      lVar5 = uVar7 * 8;
      puVar1 = &local_a8 + uVar7;
      uVar7 = (ulong)((int)uVar7 + 1);
      *(undefined4 *)puVar1 = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((long)&local_a8 + lVar5 + 4) = uVar2;
    }
  }
  uVar4 = FUN_0277d6c4(param_2 + 2);
  lVar5 = *(long *)puVar3;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar2 = *(undefined4 *)((long)param_2 + 0x14);
      lVar6 = uVar7 * 8;
      puVar1 = &local_a8 + uVar7;
      uVar7 = (ulong)((int)uVar7 + 1);
      *(undefined4 *)puVar1 = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)((long)&local_a8 + lVar6 + 4) = uVar2;
    }
  }
  uVar4 = FUN_0277d6c4(param_2 + 3);
  lVar6 = *(long *)puVar3;
  if (lVar6 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar2 = *(undefined4 *)((long)param_2 + 0x1c);
      lVar5 = uVar7 * 8;
      puVar1 = &local_a8 + uVar7;
      uVar7 = (ulong)((int)uVar7 + 1);
      *(undefined4 *)puVar1 = *(undefined4 *)(param_2 + 3);
      *(undefined4 *)((long)&local_a8 + lVar5 + 4) = uVar2;
    }
  }
  uVar4 = FUN_0277d6c4(param_2 + 4);
  lVar5 = *(long *)puVar3;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar2 = *(undefined4 *)((long)param_2 + 0x24);
      lVar6 = uVar7 * 8;
      puVar1 = &local_a8 + uVar7;
      uVar7 = (ulong)((int)uVar7 + 1);
      *(undefined4 *)puVar1 = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)((long)&local_a8 + lVar6 + 4) = uVar2;
    }
  }
  uVar4 = FUN_0277d6c4(param_2 + 6);
  lVar6 = *(long *)puVar3;
  if (lVar6 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar2 = *(undefined4 *)((long)param_2 + 0x34);
      lVar5 = uVar7 * 8;
      puVar1 = &local_a8 + uVar7;
      uVar7 = (ulong)((int)uVar7 + 1);
      *(undefined4 *)puVar1 = *(undefined4 *)(param_2 + 6);
      *(undefined4 *)((long)&local_a8 + lVar5 + 4) = uVar2;
    }
  }
  uVar4 = FUN_0277d6c4(param_2 + 5);
  lVar5 = *(long *)puVar3;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar2 = *(undefined4 *)((long)param_2 + 0x2c);
      lVar6 = uVar7 * 8;
      puVar1 = &local_a8 + uVar7;
      uVar7 = (ulong)((int)uVar7 + 1);
      *(undefined4 *)puVar1 = *(undefined4 *)(param_2 + 5);
      *(undefined4 *)((long)&local_a8 + lVar6 + 4) = uVar2;
    }
  }
  uVar4 = FUN_0277d6c4(param_2 + 7);
  lVar6 = *(long *)puVar3;
  if (lVar6 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar2 = *(undefined4 *)((long)param_2 + 0x3c);
      *(undefined4 *)(&local_a8 + uVar7) = *(undefined4 *)(param_2 + 7);
      *(undefined4 *)((long)&local_a8 + uVar7 * 8 + 4) = uVar2;
    }
  }
  uVar4 = FUN_0277d6c4(&local_a8);
  if (*(long *)puVar3 != 0) {
    lVar5 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if (((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
       (uVar7 = FUN_0277e9e0(&local_a8), (uVar7 & 1) == 0)) {
      FUN_02cd8b80(param_1,&local_a8);
      local_a8 = *(undefined8 *)PTR_DAT_04bb37e0;
    }
  }
  lVar5 = *(long *)puVar3;
  uVar4 = FUN_0277d6c4(&local_a0);
  if (*(long *)puVar3 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if (((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
       (uVar7 = FUN_0277e9e0(&local_a0), (uVar7 & 1) == 0)) {
      FUN_02cd8b80(param_1,&local_a0);
      local_a0 = *(undefined8 *)PTR_DAT_04bb37e0;
    }
  }
  lVar5 = *(long *)puVar3;
  uVar4 = FUN_0277d6c4(&local_98);
  if (*(long *)puVar3 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if (((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
       (uVar7 = FUN_0277e9e0(&local_98), (uVar7 & 1) == 0)) {
      FUN_02cd8b80(param_1,&local_98);
      local_98 = *(undefined8 *)PTR_DAT_04bb37e0;
    }
  }
  lVar5 = *(long *)puVar3;
  uVar4 = FUN_0277d6c4(&local_90);
  if (*(long *)puVar3 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if (((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
       (uVar7 = FUN_0277e9e0(&local_90), (uVar7 & 1) == 0)) {
      FUN_02cd8b80(param_1,&local_90);
      local_90 = *(undefined8 *)PTR_DAT_04bb37e0;
    }
  }
  lVar5 = *(long *)puVar3;
  uVar4 = FUN_0277d6c4(&local_88);
  if (*(long *)puVar3 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if (((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
       (uVar7 = FUN_0277e9e0(&local_88), (uVar7 & 1) == 0)) {
      FUN_02cd8b80(param_1,&local_88);
      local_88 = *(undefined8 *)PTR_DAT_04bb37e0;
    }
  }
  lVar5 = *(long *)puVar3;
  uVar4 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar3 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if (((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
       (uVar7 = FUN_0277e9e0(&local_80), (uVar7 & 1) == 0)) {
      FUN_02cd8b80(param_1,&local_80);
      local_80 = *(undefined8 *)PTR_DAT_04bb37e0;
    }
  }
  lVar5 = *(long *)puVar3;
  uVar4 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar3 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if (((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
       (uVar7 = FUN_0277e9e0(&local_78), (uVar7 & 1) == 0)) {
      FUN_02cd8b80(param_1,&local_78);
      local_78 = *(undefined8 *)PTR_DAT_04bb37e0;
    }
  }
  lVar5 = *(long *)puVar3;
  uVar4 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar3 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if (((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
       (uVar7 = FUN_0277e9e0(&local_70), (uVar7 & 1) == 0)) {
      FUN_02cd8b80(param_1,&local_70);
      local_70 = *(undefined8 *)PTR_DAT_04bb37e0;
    }
  }
  lVar5 = *(long *)puVar3;
  uVar4 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar3 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if (((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
       (uVar7 = FUN_0277e9e0(&local_68), (uVar7 & 1) == 0)) {
      FUN_02cd8b80(param_1,&local_68);
      local_68 = *(undefined8 *)PTR_DAT_04bb37e0;
    }
  }
  lVar6 = *(long *)puVar3;
  uVar4 = FUN_0277d6c4(&local_a8);
  lVar5 = *(long *)puVar3;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      FUN_02cd8b80(param_1,&local_a8);
      lVar5 = *(long *)puVar3;
    }
  }
  uVar4 = FUN_0277d6c4(&local_a0);
  lVar6 = *(long *)puVar3;
  if (lVar6 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      FUN_02cd8b80(param_1,&local_a0);
      lVar6 = *(long *)puVar3;
    }
  }
  uVar4 = FUN_0277d6c4(&local_98);
  lVar5 = *(long *)puVar3;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      FUN_02cd8b80(param_1,&local_98);
      lVar5 = *(long *)puVar3;
    }
  }
  uVar4 = FUN_0277d6c4(&local_90);
  lVar6 = *(long *)puVar3;
  if (lVar6 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      FUN_02cd8b80(param_1,&local_90);
      lVar6 = *(long *)puVar3;
    }
  }
  uVar4 = FUN_0277d6c4(&local_88);
  lVar5 = *(long *)puVar3;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      FUN_02cd8b80(param_1,&local_88);
      lVar5 = *(long *)puVar3;
    }
  }
  uVar4 = FUN_0277d6c4(&local_80);
  lVar6 = *(long *)puVar3;
  if (lVar6 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      FUN_02cd8b80(param_1,&local_80);
      lVar6 = *(long *)puVar3;
    }
  }
  uVar4 = FUN_0277d6c4(&local_78);
  lVar5 = *(long *)puVar3;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      FUN_02cd8b80(param_1,&local_78);
      lVar5 = *(long *)puVar3;
    }
  }
  uVar4 = FUN_0277d6c4(&local_70);
  lVar6 = *(long *)puVar3;
  if (lVar6 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      FUN_02cd8b80(param_1,&local_70);
      lVar6 = *(long *)puVar3;
    }
  }
  uVar4 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar3 != 0) {
    lVar5 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      FUN_02cd8b80(param_1,&local_68);
    }
  }
  return;
}

