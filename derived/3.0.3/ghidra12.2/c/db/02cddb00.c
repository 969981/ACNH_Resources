
void FUN_02cddb00(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  long lVar4;
  long lVar5;
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined4 local_94;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  
  local_98 = *(undefined2 *)PTR_DAT_04bb37e0;
  local_96 = PTR_DAT_04bb37e0[2];
  local_95 = PTR_DAT_04bb37e0[3];
  local_94 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_90 = local_98;
  local_8e = local_96;
  local_8d = local_95;
  local_8c = local_94;
  local_88 = local_98;
  local_86 = local_96;
  local_85 = local_95;
  local_84 = local_94;
  local_80 = local_98;
  local_7e = local_96;
  local_7d = local_95;
  local_7c = local_94;
  local_78 = local_98;
  local_76 = local_96;
  local_75 = local_95;
  local_74 = local_94;
  local_70 = local_98;
  local_6e = local_96;
  local_6d = local_95;
  local_6c = local_94;
  local_68 = local_98;
  local_66 = local_96;
  local_65 = local_95;
  local_64 = local_94;
  local_60 = local_98;
  local_5e = local_96;
  local_5d = local_95;
  local_5c = local_94;
  local_58 = local_98;
  local_56 = local_96;
  local_55 = local_95;
  local_54 = local_94;
  FUN_025403d0(&local_98);
  puVar1 = PTR_DAT_04bb43c0;
  puVar3 = param_3 + 4;
  lVar4 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(puVar3);
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
LAB_02cddc34:
    uVar2 = FUN_0277d6c4(&local_90);
    lVar4 = *(long *)puVar1;
    if (lVar4 == 0) {
LAB_02cddc74:
      puVar3 = param_2 + 4;
      goto LAB_02cddc78;
    }
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((*(uint *)(lVar5 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_02cddc74;
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((*(uint *)(lVar4 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_02cddc34;
    lVar4 = lVar5;
LAB_02cddc78:
    param_1[4] = *puVar3;
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(puVar3 + 1);
    *(undefined1 *)((long)param_1 + 0xb) = *(undefined1 *)((long)puVar3 + 3);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(puVar3 + 2);
  }
  puVar3 = param_3 + 8;
  uVar2 = FUN_0277d6c4(puVar3);
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
LAB_02cddce4:
    uVar2 = FUN_0277d6c4(&local_88);
    lVar4 = *(long *)puVar1;
    if (lVar4 == 0) {
LAB_02cddd24:
      puVar3 = param_2 + 8;
      goto LAB_02cddd28;
    }
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((*(uint *)(lVar5 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_02cddd24;
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((*(uint *)(lVar4 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_02cddce4;
    lVar4 = lVar5;
LAB_02cddd28:
    param_1[8] = *puVar3;
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(puVar3 + 1);
    *(undefined1 *)((long)param_1 + 0x13) = *(undefined1 *)((long)puVar3 + 3);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(puVar3 + 2);
  }
  uVar2 = FUN_0277d6c4(param_3);
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
LAB_02cddd8c:
    uVar2 = FUN_0277d6c4(&local_98);
    lVar4 = *(long *)puVar1;
    puVar3 = param_2;
    if (lVar4 == 0) goto LAB_02cdddd8;
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((*(uint *)(lVar5 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_02cdddd8;
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((*(uint *)(lVar4 + 0x1d8) <= uVar2) ||
       (puVar3 = param_3, *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) == 0))
    goto LAB_02cddd8c;
LAB_02cdddd8:
    *param_1 = *puVar3;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar3 + 1);
    *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar3 + 3);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar3 + 2);
    lVar4 = *(long *)puVar1;
  }
  puVar3 = param_3 + 0xc;
  uVar2 = FUN_0277d6c4(puVar3);
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
LAB_02cdde48:
    uVar2 = FUN_0277d6c4(&local_80);
    lVar4 = *(long *)puVar1;
    if (lVar4 == 0) {
LAB_02cdde88:
      puVar3 = param_2 + 0xc;
      goto LAB_02cdde8c;
    }
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((*(uint *)(lVar5 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_02cdde88;
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((*(uint *)(lVar4 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_02cdde48;
    lVar4 = lVar5;
LAB_02cdde8c:
    param_1[0xc] = *puVar3;
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(puVar3 + 1);
    *(undefined1 *)((long)param_1 + 0x1b) = *(undefined1 *)((long)puVar3 + 3);
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(puVar3 + 2);
  }
  puVar3 = param_3 + 0x10;
  uVar2 = FUN_0277d6c4(puVar3);
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
LAB_02cddef8:
    uVar2 = FUN_0277d6c4(&local_78);
    lVar4 = *(long *)puVar1;
    if (lVar4 == 0) {
LAB_02cddf38:
      puVar3 = param_2 + 0x10;
      goto LAB_02cddf3c;
    }
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((*(uint *)(lVar5 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_02cddf38;
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((*(uint *)(lVar4 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_02cddef8;
    lVar4 = lVar5;
LAB_02cddf3c:
    param_1[0x10] = *puVar3;
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(puVar3 + 1);
    *(undefined1 *)((long)param_1 + 0x23) = *(undefined1 *)((long)puVar3 + 3);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(puVar3 + 2);
  }
  puVar3 = param_3 + 0x14;
  uVar2 = FUN_0277d6c4(puVar3);
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
LAB_02cddfa8:
    uVar2 = FUN_0277d6c4(&local_70);
    lVar4 = *(long *)puVar1;
    if (lVar4 == 0) {
LAB_02cddfe8:
      puVar3 = param_2 + 0x14;
      goto LAB_02cddfec;
    }
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((*(uint *)(lVar5 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_02cddfe8;
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((*(uint *)(lVar4 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_02cddfa8;
    lVar4 = lVar5;
LAB_02cddfec:
    param_1[0x14] = *puVar3;
    *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(puVar3 + 1);
    *(undefined1 *)((long)param_1 + 0x2b) = *(undefined1 *)((long)puVar3 + 3);
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(puVar3 + 2);
  }
  puVar3 = param_3 + 0x18;
  uVar2 = FUN_0277d6c4(puVar3);
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
LAB_02cde058:
    uVar2 = FUN_0277d6c4(&local_68);
    lVar4 = *(long *)puVar1;
    if (lVar4 == 0) {
LAB_02cde098:
      puVar3 = param_2 + 0x18;
      goto LAB_02cde09c;
    }
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((*(uint *)(lVar5 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_02cde098;
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((*(uint *)(lVar4 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_02cde058;
    lVar4 = lVar5;
LAB_02cde09c:
    param_1[0x18] = *puVar3;
    *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(puVar3 + 1);
    *(undefined1 *)((long)param_1 + 0x33) = *(undefined1 *)((long)puVar3 + 3);
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(puVar3 + 2);
  }
  param_3 = param_3 + 0x1c;
  uVar2 = FUN_0277d6c4(param_3);
  lVar5 = *(long *)puVar1;
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) goto LAB_02cde144;
  }
  uVar2 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar1 != 0) {
    lVar4 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      return;
    }
  }
  param_3 = param_2 + 0x1c;
LAB_02cde144:
  param_1[0x1c] = *param_3;
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_3 + 1);
  *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)param_3 + 3);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_3 + 2);
  return;
}

