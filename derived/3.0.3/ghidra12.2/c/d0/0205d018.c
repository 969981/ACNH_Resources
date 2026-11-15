
void FUN_0205d018(long param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  long lVar9;
  undefined4 local_58;
  undefined1 uStack_54;
  byte bStack_53;
  byte bStack_52;
  uint uStack_51;
  undefined2 local_4d;
  
  puVar7 = PTR_DAT_04bb5018;
  puVar6 = PTR_DAT_04bb37e0;
  lVar9 = **(long **)PTR_DAT_04bb27d0;
  bVar5 = *(byte *)(lVar9 + 0x473);
  pcVar8 = PTR_DAT_04bc1220;
  if ((long)(char)bVar5 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
    if (7 < bVar5) {
      puVar1 = (uint *)(lVar9 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      pcVar8 = (char *)(lVar9 + 0x473);
    }
  }
  cVar4 = *pcVar8;
  if (*(char *)(param_1 + 0x97) != cVar4) {
    bVar5 = *PTR_DAT_04bb5018;
    local_58 = 0;
    uVar2 = *(undefined4 *)PTR_DAT_04bb37e0;
    uVar3 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    *(undefined2 *)(param_1 + 0xc0) = 0xffff;
    *(undefined8 *)(param_1 + 0x90) = 0xff08002300000000;
    bStack_53 = bVar5 << 2 | 3;
    *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x9c) = uVar2;
    bStack_52 = bVar5 >> 6 | bVar5 << 2;
    *(undefined4 *)(param_1 + 0xa0) = uVar3;
    local_4d = 0;
    uStack_51 = (uint)(byte)(bVar5 >> 6 | 4);
    uStack_54 = 0xff;
    FUN_020e9c5c(&local_58,param_1 + 0xc2);
  }
  if (*(char *)(param_1 + 0xcf) != cVar4) {
    bVar5 = *puVar7;
    local_58 = 0;
    uVar2 = *(undefined4 *)puVar6;
    uVar3 = *(undefined4 *)(puVar6 + 4);
    *(undefined2 *)(param_1 + 0xf8) = 0xffff;
    *(undefined8 *)(param_1 + 200) = 0xff08002300000000;
    bStack_53 = bVar5 << 2 | 3;
    *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xd4) = uVar2;
    bStack_52 = bVar5 >> 6 | bVar5 << 2;
    *(undefined4 *)(param_1 + 0xd8) = uVar3;
    local_4d = 0;
    uStack_51 = (uint)(byte)(bVar5 >> 6 | 4);
    uStack_54 = 0xff;
    FUN_020e9c5c(&local_58,param_1 + 0xfa);
  }
  if (*(char *)(param_1 + 0x107) != cVar4) {
    bVar5 = *puVar7;
    local_58 = 0;
    uVar2 = *(undefined4 *)puVar6;
    uVar3 = *(undefined4 *)(puVar6 + 4);
    *(undefined2 *)(param_1 + 0x130) = 0xffff;
    *(undefined8 *)(param_1 + 0x100) = 0xff08002300000000;
    *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
    bStack_53 = bVar5 << 2 | 3;
    *(undefined4 *)(param_1 + 0x10c) = uVar2;
    bStack_52 = bVar5 >> 6 | bVar5 << 2;
    *(undefined4 *)(param_1 + 0x110) = uVar3;
    uStack_51 = (uint)(byte)(bVar5 >> 6 | 4);
    local_4d = 0;
    uStack_54 = 0xff;
    FUN_020e9c5c(&local_58,param_1 + 0x132);
  }
  if (*(char *)(param_1 + 0x13f) != cVar4) {
    bVar5 = *puVar7;
    local_58 = 0;
    uVar2 = *(undefined4 *)puVar6;
    uVar3 = *(undefined4 *)(puVar6 + 4);
    *(undefined2 *)(param_1 + 0x168) = 0xffff;
    *(undefined8 *)(param_1 + 0x138) = 0xff08002300000000;
    *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
    bStack_53 = bVar5 << 2 | 3;
    *(undefined4 *)(param_1 + 0x144) = uVar2;
    bStack_52 = bVar5 >> 6 | bVar5 << 2;
    *(undefined4 *)(param_1 + 0x148) = uVar3;
    uStack_51 = (uint)(byte)(bVar5 >> 6 | 4);
    local_4d = 0;
    uStack_54 = 0xff;
    FUN_020e9c5c(&local_58,param_1 + 0x16a);
  }
  if (*(char *)(param_1 + 0x177) != cVar4) {
    bVar5 = *puVar7;
    local_58 = 0;
    uVar2 = *(undefined4 *)puVar6;
    uVar3 = *(undefined4 *)(puVar6 + 4);
    *(undefined2 *)(param_1 + 0x1a0) = 0xffff;
    *(undefined8 *)(param_1 + 0x170) = 0xff08002300000000;
    *(undefined4 *)(param_1 + 0x178) = 0xffffffff;
    bStack_53 = bVar5 << 2 | 3;
    *(undefined4 *)(param_1 + 0x17c) = uVar2;
    bStack_52 = bVar5 >> 6 | bVar5 << 2;
    *(undefined4 *)(param_1 + 0x180) = uVar3;
    uStack_51 = (uint)(byte)(bVar5 >> 6 | 4);
    local_4d = 0;
    uStack_54 = 0xff;
    FUN_020e9c5c(&local_58,param_1 + 0x1a2);
  }
  if (*(char *)(param_1 + 0x1af) != cVar4) {
    bVar5 = *puVar7;
    local_58 = 0;
    uVar2 = *(undefined4 *)puVar6;
    uVar3 = *(undefined4 *)(puVar6 + 4);
    *(undefined2 *)(param_1 + 0x1d8) = 0xffff;
    *(undefined8 *)(param_1 + 0x1a8) = 0xff08002300000000;
    *(undefined4 *)(param_1 + 0x1b0) = 0xffffffff;
    bStack_53 = bVar5 << 2 | 3;
    *(undefined4 *)(param_1 + 0x1b4) = uVar2;
    bStack_52 = bVar5 >> 6 | bVar5 << 2;
    *(undefined4 *)(param_1 + 0x1b8) = uVar3;
    uStack_51 = (uint)(byte)(bVar5 >> 6 | 4);
    local_4d = 0;
    uStack_54 = 0xff;
    FUN_020e9c5c(&local_58,param_1 + 0x1da);
  }
  if (*(char *)(param_1 + 0x1e7) != cVar4) {
    bVar5 = *puVar7;
    local_58 = 0;
    uVar2 = *(undefined4 *)puVar6;
    uVar3 = *(undefined4 *)(puVar6 + 4);
    *(undefined2 *)(param_1 + 0x210) = 0xffff;
    *(undefined8 *)(param_1 + 0x1e0) = 0xff08002300000000;
    *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
    bStack_53 = bVar5 << 2 | 3;
    *(undefined4 *)(param_1 + 0x1ec) = uVar2;
    bStack_52 = bVar5 >> 6 | bVar5 << 2;
    *(undefined4 *)(param_1 + 0x1f0) = uVar3;
    uStack_51 = (uint)(byte)(bVar5 >> 6 | 4);
    local_4d = 0;
    uStack_54 = 0xff;
    FUN_020e9c5c(&local_58,param_1 + 0x212);
  }
  if (*(char *)(param_1 + 0x21f) != cVar4) {
    bVar5 = *puVar7;
    local_58 = 0;
    uVar2 = *(undefined4 *)puVar6;
    uVar3 = *(undefined4 *)(puVar6 + 4);
    *(undefined2 *)(param_1 + 0x248) = 0xffff;
    *(undefined8 *)(param_1 + 0x218) = 0xff08002300000000;
    *(undefined4 *)(param_1 + 0x220) = 0xffffffff;
    bStack_53 = bVar5 << 2 | 3;
    *(undefined4 *)(param_1 + 0x224) = uVar2;
    bStack_52 = bVar5 >> 6 | bVar5 << 2;
    *(undefined4 *)(param_1 + 0x228) = uVar3;
    uStack_51 = (uint)(byte)(bVar5 >> 6 | 4);
    local_4d = 0;
    uStack_54 = 0xff;
    FUN_020e9c5c(&local_58,param_1 + 0x24a);
  }
  if (*(char *)(param_1 + 599) != cVar4) {
    bVar5 = *puVar7;
    local_58 = 0;
    uVar2 = *(undefined4 *)puVar6;
    uVar3 = *(undefined4 *)(puVar6 + 4);
    *(undefined2 *)(param_1 + 0x280) = 0xffff;
    *(undefined8 *)(param_1 + 0x250) = 0xff08002300000000;
    *(undefined4 *)(param_1 + 600) = 0xffffffff;
    bStack_53 = bVar5 << 2 | 3;
    *(undefined4 *)(param_1 + 0x25c) = uVar2;
    bStack_52 = bVar5 >> 6 | bVar5 << 2;
    *(undefined4 *)(param_1 + 0x260) = uVar3;
    uStack_51 = (uint)(byte)(bVar5 >> 6 | 4);
    local_4d = 0;
    uStack_54 = 0xff;
    FUN_020e9c5c(&local_58,param_1 + 0x282);
  }
  if (*(char *)(param_1 + 0x28f) != cVar4) {
    bVar5 = *puVar7;
    local_58 = 0;
    uVar2 = *(undefined4 *)puVar6;
    uVar3 = *(undefined4 *)(puVar6 + 4);
    *(undefined2 *)(param_1 + 0x2b8) = 0xffff;
    *(undefined8 *)(param_1 + 0x288) = 0xff08002300000000;
    *(undefined4 *)(param_1 + 0x290) = 0xffffffff;
    bStack_53 = bVar5 << 2 | 3;
    *(undefined4 *)(param_1 + 0x294) = uVar2;
    bStack_52 = bVar5 >> 6 | bVar5 << 2;
    *(undefined4 *)(param_1 + 0x298) = uVar3;
    uStack_51 = (uint)(byte)(bVar5 >> 6 | 4);
    local_4d = 0;
    uStack_54 = 0xff;
    FUN_020e9c5c(&local_58,param_1 + 0x2ba);
  }
  return;
}

