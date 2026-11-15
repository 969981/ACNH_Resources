
/* WARNING: Removing unreachable block (ram,0x0205b8f0) */
/* WARNING: Removing unreachable block (ram,0x0205b740) */
/* WARNING: Removing unreachable block (ram,0x0205b590) */
/* WARNING: Removing unreachable block (ram,0x0205b3e0) */
/* WARNING: Removing unreachable block (ram,0x0205b22c) */
/* WARNING: Removing unreachable block (ram,0x0205b300) */
/* WARNING: Removing unreachable block (ram,0x0205b4b0) */
/* WARNING: Removing unreachable block (ram,0x0205b660) */
/* WARNING: Removing unreachable block (ram,0x0205b810) */
/* WARNING: Removing unreachable block (ram,0x0205b9bc) */

void FUN_0205b138(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined4 local_78;
  undefined1 uStack_74;
  byte bStack_73;
  byte bStack_72;
  uint uStack_71;
  undefined2 local_6d;
  
  puVar10 = PTR_DAT_04bb5018;
  puVar8 = PTR_DAT_04bb37e0;
  local_78 = 0;
  *(undefined8 *)(param_1 + 0x90) = 0xff08002300000000;
  *(undefined2 *)(param_1 + 0xc0) = 0xffff;
  bVar3 = *puVar10;
  local_6d = 0;
  uVar1 = *(undefined4 *)puVar8;
  uVar2 = *(undefined4 *)(puVar8 + 4);
  uStack_74 = 0xff;
  bStack_73 = bVar3 << 2 | 3;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  bStack_72 = bVar3 >> 6 | bVar3 << 2;
  uStack_71 = (uint)(byte)(bVar3 >> 6 | 4);
  FUN_020e9c5c(&local_78,param_1 + 0xc2);
  if (*(char *)(param_1 + 0xb9) == '\0') {
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined1 *)(param_1 + 0xb9) = 1;
  }
  puVar9 = PTR_DAT_04bb4760;
  lVar11 = *(long *)PTR_DAT_04bb4760;
  bVar3 = *puVar10;
  bStack_73 = bVar3 << 2 | 3;
  bStack_72 = bVar3 >> 6 | bVar3 << 2;
  uVar4 = puVar8[3];
  bVar3 = bVar3 >> 6 | 4;
  *(byte *)(lVar11 + 0x810) = bStack_72;
  *(byte *)(lVar11 + 0x811) = bVar3;
  *(undefined1 *)(lVar11 + 0x80e) = 0xff;
  *(byte *)(lVar11 + 0x80f) = bStack_73;
  local_78 = 0;
  uStack_74 = 0xff;
  uVar1 = *(undefined4 *)(puVar8 + 4);
  *(byte *)(lVar11 + 0x812) = *(byte *)(lVar11 + 0x812) & 0xc0;
  uStack_71 = (uint)bVar3;
  *(byte *)(lVar11 + 0x815) = *(byte *)(lVar11 + 0x815) & 0x3f;
  *(byte *)(lVar11 + 0x816) = *(byte *)(lVar11 + 0x816) & 0xfc;
  uVar6 = *(undefined2 *)puVar8;
  uVar5 = puVar8[2];
  *(undefined8 *)(param_1 + 200) = 0xff08002300000000;
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xd7) = uVar4;
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  *(undefined2 *)(param_1 + 0xf8) = 0xffff;
  local_6d = 0;
  *(undefined2 *)(param_1 + 0xd4) = uVar6;
  *(undefined1 *)(param_1 + 0xd6) = uVar5;
  FUN_020e9c5c(&local_78,param_1 + 0xfa);
  if (*(char *)(param_1 + 0xf1) == '\0') {
    *(undefined4 *)(param_1 + 0xec) = 1;
    *(undefined1 *)(param_1 + 0xf1) = 1;
  }
  lVar11 = *(long *)puVar9;
  bVar3 = *puVar10;
  bStack_72 = bVar3 >> 6 | bVar3 << 2;
  bVar7 = bVar3 >> 6 | 4;
  bStack_73 = bVar3 << 2 | 3;
  *(byte *)(lVar11 + 0x825) = bStack_72;
  *(byte *)(lVar11 + 0x826) = bVar7;
  *(undefined1 *)(lVar11 + 0x823) = 0xff;
  *(byte *)(lVar11 + 0x824) = bStack_73;
  local_78 = 0;
  uStack_74 = 0xff;
  *(byte *)(lVar11 + 0x827) = *(byte *)(lVar11 + 0x827) & 0xc0;
  uStack_71 = (uint)bVar7;
  *(byte *)(lVar11 + 0x82a) = *(byte *)(lVar11 + 0x82a) & 0x3f;
  *(byte *)(lVar11 + 0x82b) = *(byte *)(lVar11 + 0x82b) & 0xfc;
  uVar6 = *(undefined2 *)puVar8;
  uVar1 = *(undefined4 *)(puVar8 + 4);
  *(undefined8 *)(param_1 + 0x100) = 0xff08002300000000;
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  local_6d = 0;
  *(undefined2 *)(param_1 + 0x10c) = uVar6;
  uVar4 = puVar8[2];
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  *(undefined1 *)(param_1 + 0x10e) = uVar4;
  *(undefined *)(param_1 + 0x10f) = puVar8[3];
  FUN_020e9c5c(&local_78,param_1 + 0x132);
  if (*(char *)(param_1 + 0x129) == '\0') {
    *(undefined4 *)(param_1 + 0x124) = 2;
    *(undefined1 *)(param_1 + 0x129) = 1;
  }
  lVar11 = *(long *)puVar9;
  bVar3 = *puVar10;
  bStack_73 = bVar3 << 2 | 3;
  bStack_72 = bVar3 >> 6 | bVar3 << 2;
  uVar4 = puVar8[3];
  bVar3 = bVar3 >> 6 | 4;
  *(byte *)(lVar11 + 0x83a) = bStack_72;
  *(byte *)(lVar11 + 0x83b) = bVar3;
  *(undefined1 *)(lVar11 + 0x838) = 0xff;
  *(byte *)(lVar11 + 0x839) = bStack_73;
  local_78 = 0;
  uStack_74 = 0xff;
  *(byte *)(lVar11 + 0x83c) = *(byte *)(lVar11 + 0x83c) & 0xc0;
  uStack_71 = (uint)bVar3;
  *(byte *)(lVar11 + 0x83f) = *(byte *)(lVar11 + 0x83f) & 0x3f;
  *(byte *)(lVar11 + 0x840) = *(byte *)(lVar11 + 0x840) & 0xfc;
  uVar6 = *(undefined2 *)puVar8;
  uVar5 = puVar8[2];
  *(undefined8 *)(param_1 + 0x138) = 0xff08002300000000;
  *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x147) = uVar4;
  *(undefined2 *)(param_1 + 0x168) = 0xffff;
  local_6d = 0;
  *(undefined2 *)(param_1 + 0x144) = uVar6;
  uVar1 = *(undefined4 *)(puVar8 + 4);
  *(undefined1 *)(param_1 + 0x146) = uVar5;
  *(undefined4 *)(param_1 + 0x148) = uVar1;
  FUN_020e9c5c(&local_78,param_1 + 0x16a);
  if (*(char *)(param_1 + 0x161) == '\0') {
    *(undefined4 *)(param_1 + 0x15c) = 3;
    *(undefined1 *)(param_1 + 0x161) = 1;
  }
  lVar11 = *(long *)puVar9;
  bVar3 = *puVar10;
  bStack_72 = bVar3 >> 6 | bVar3 << 2;
  bVar7 = bVar3 >> 6 | 4;
  bStack_73 = bVar3 << 2 | 3;
  *(byte *)(lVar11 + 0x84f) = bStack_72;
  *(byte *)(lVar11 + 0x850) = bVar7;
  *(undefined1 *)(lVar11 + 0x84d) = 0xff;
  *(byte *)(lVar11 + 0x84e) = bStack_73;
  local_78 = 0;
  uStack_74 = 0xff;
  *(byte *)(lVar11 + 0x851) = *(byte *)(lVar11 + 0x851) & 0xc0;
  uStack_71 = (uint)bVar7;
  *(byte *)(lVar11 + 0x854) = *(byte *)(lVar11 + 0x854) & 0x3f;
  *(byte *)(lVar11 + 0x855) = *(byte *)(lVar11 + 0x855) & 0xfc;
  uVar6 = *(undefined2 *)puVar8;
  uVar1 = *(undefined4 *)(puVar8 + 4);
  *(undefined8 *)(param_1 + 0x170) = 0xff08002300000000;
  *(undefined4 *)(param_1 + 0x178) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x1a0) = 0xffff;
  local_6d = 0;
  *(undefined2 *)(param_1 + 0x17c) = uVar6;
  uVar4 = puVar8[2];
  *(undefined4 *)(param_1 + 0x180) = uVar1;
  *(undefined1 *)(param_1 + 0x17e) = uVar4;
  *(undefined *)(param_1 + 0x17f) = puVar8[3];
  FUN_020e9c5c(&local_78,param_1 + 0x1a2);
  if (*(char *)(param_1 + 0x199) == '\0') {
    *(undefined4 *)(param_1 + 0x194) = 4;
    *(undefined1 *)(param_1 + 0x199) = 1;
  }
  lVar11 = *(long *)puVar9;
  bVar3 = *puVar10;
  bStack_73 = bVar3 << 2 | 3;
  bStack_72 = bVar3 >> 6 | bVar3 << 2;
  uVar4 = puVar8[3];
  bVar3 = bVar3 >> 6 | 4;
  *(byte *)(lVar11 + 0x864) = bStack_72;
  *(byte *)(lVar11 + 0x865) = bVar3;
  *(undefined1 *)(lVar11 + 0x862) = 0xff;
  *(byte *)(lVar11 + 0x863) = bStack_73;
  local_78 = 0;
  uStack_74 = 0xff;
  *(byte *)(lVar11 + 0x866) = *(byte *)(lVar11 + 0x866) & 0xc0;
  uStack_71 = (uint)bVar3;
  *(byte *)(lVar11 + 0x869) = *(byte *)(lVar11 + 0x869) & 0x3f;
  *(byte *)(lVar11 + 0x86a) = *(byte *)(lVar11 + 0x86a) & 0xfc;
  uVar6 = *(undefined2 *)puVar8;
  uVar5 = puVar8[2];
  *(undefined8 *)(param_1 + 0x1a8) = 0xff08002300000000;
  *(undefined4 *)(param_1 + 0x1b0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1b7) = uVar4;
  *(undefined2 *)(param_1 + 0x1d8) = 0xffff;
  local_6d = 0;
  *(undefined2 *)(param_1 + 0x1b4) = uVar6;
  uVar1 = *(undefined4 *)(puVar8 + 4);
  *(undefined1 *)(param_1 + 0x1b6) = uVar5;
  *(undefined4 *)(param_1 + 0x1b8) = uVar1;
  FUN_020e9c5c(&local_78,param_1 + 0x1da);
  if (*(char *)(param_1 + 0x1d1) == '\0') {
    *(undefined4 *)(param_1 + 0x1cc) = 5;
    *(undefined1 *)(param_1 + 0x1d1) = 1;
  }
  lVar11 = *(long *)puVar9;
  bVar3 = *puVar10;
  bStack_72 = bVar3 >> 6 | bVar3 << 2;
  bVar7 = bVar3 >> 6 | 4;
  bStack_73 = bVar3 << 2 | 3;
  *(byte *)(lVar11 + 0x879) = bStack_72;
  *(byte *)(lVar11 + 0x87a) = bVar7;
  *(undefined1 *)(lVar11 + 0x877) = 0xff;
  *(byte *)(lVar11 + 0x878) = bStack_73;
  local_78 = 0;
  uStack_74 = 0xff;
  *(byte *)(lVar11 + 0x87b) = *(byte *)(lVar11 + 0x87b) & 0xc0;
  uStack_71 = (uint)bVar7;
  *(byte *)(lVar11 + 0x87e) = *(byte *)(lVar11 + 0x87e) & 0x3f;
  *(byte *)(lVar11 + 0x87f) = *(byte *)(lVar11 + 0x87f) & 0xfc;
  uVar6 = *(undefined2 *)puVar8;
  uVar1 = *(undefined4 *)(puVar8 + 4);
  *(undefined8 *)(param_1 + 0x1e0) = 0xff08002300000000;
  *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x210) = 0xffff;
  local_6d = 0;
  *(undefined2 *)(param_1 + 0x1ec) = uVar6;
  uVar4 = puVar8[2];
  *(undefined4 *)(param_1 + 0x1f0) = uVar1;
  *(undefined1 *)(param_1 + 0x1ee) = uVar4;
  *(undefined *)(param_1 + 0x1ef) = puVar8[3];
  FUN_020e9c5c(&local_78,param_1 + 0x212);
  if (*(char *)(param_1 + 0x209) == '\0') {
    *(undefined4 *)(param_1 + 0x204) = 6;
    *(undefined1 *)(param_1 + 0x209) = 1;
  }
  lVar11 = *(long *)puVar9;
  bVar3 = *puVar10;
  bStack_73 = bVar3 << 2 | 3;
  bStack_72 = bVar3 >> 6 | bVar3 << 2;
  uVar4 = puVar8[3];
  bVar3 = bVar3 >> 6 | 4;
  *(byte *)(lVar11 + 0x88e) = bStack_72;
  *(byte *)(lVar11 + 0x88f) = bVar3;
  *(undefined1 *)(lVar11 + 0x88c) = 0xff;
  *(byte *)(lVar11 + 0x88d) = bStack_73;
  local_78 = 0;
  uStack_74 = 0xff;
  *(byte *)(lVar11 + 0x890) = *(byte *)(lVar11 + 0x890) & 0xc0;
  uStack_71 = (uint)bVar3;
  *(byte *)(lVar11 + 0x893) = *(byte *)(lVar11 + 0x893) & 0x3f;
  *(byte *)(lVar11 + 0x894) = *(byte *)(lVar11 + 0x894) & 0xfc;
  uVar6 = *(undefined2 *)puVar8;
  uVar5 = puVar8[2];
  *(undefined8 *)(param_1 + 0x218) = 0xff08002300000000;
  *(undefined4 *)(param_1 + 0x220) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x227) = uVar4;
  *(undefined2 *)(param_1 + 0x248) = 0xffff;
  local_6d = 0;
  *(undefined2 *)(param_1 + 0x224) = uVar6;
  uVar1 = *(undefined4 *)(puVar8 + 4);
  *(undefined1 *)(param_1 + 0x226) = uVar5;
  *(undefined4 *)(param_1 + 0x228) = uVar1;
  FUN_020e9c5c(&local_78,param_1 + 0x24a);
  if (*(char *)(param_1 + 0x241) == '\0') {
    *(undefined4 *)(param_1 + 0x23c) = 7;
    *(undefined1 *)(param_1 + 0x241) = 1;
  }
  lVar11 = *(long *)puVar9;
  bVar3 = *puVar10;
  bStack_72 = bVar3 >> 6 | bVar3 << 2;
  bVar7 = bVar3 >> 6 | 4;
  bStack_73 = bVar3 << 2 | 3;
  *(byte *)(lVar11 + 0x8a3) = bStack_72;
  *(byte *)(lVar11 + 0x8a4) = bVar7;
  *(undefined1 *)(lVar11 + 0x8a1) = 0xff;
  *(byte *)(lVar11 + 0x8a2) = bStack_73;
  local_78 = 0;
  uStack_74 = 0xff;
  *(byte *)(lVar11 + 0x8a5) = *(byte *)(lVar11 + 0x8a5) & 0xc0;
  uStack_71 = (uint)bVar7;
  *(byte *)(lVar11 + 0x8a8) = *(byte *)(lVar11 + 0x8a8) & 0x3f;
  *(byte *)(lVar11 + 0x8a9) = *(byte *)(lVar11 + 0x8a9) & 0xfc;
  uVar6 = *(undefined2 *)puVar8;
  uVar1 = *(undefined4 *)(puVar8 + 4);
  *(undefined8 *)(param_1 + 0x250) = 0xff08002300000000;
  *(undefined4 *)(param_1 + 600) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x280) = 0xffff;
  local_6d = 0;
  *(undefined2 *)(param_1 + 0x25c) = uVar6;
  uVar4 = puVar8[2];
  *(undefined4 *)(param_1 + 0x260) = uVar1;
  *(undefined1 *)(param_1 + 0x25e) = uVar4;
  *(undefined *)(param_1 + 0x25f) = puVar8[3];
  FUN_020e9c5c(&local_78,param_1 + 0x282);
  if (*(char *)(param_1 + 0x279) == '\0') {
    *(undefined4 *)(param_1 + 0x274) = 8;
    *(undefined1 *)(param_1 + 0x279) = 1;
  }
  lVar11 = *(long *)puVar9;
  bVar3 = *puVar10;
  bStack_73 = bVar3 << 2 | 3;
  bStack_72 = bVar3 >> 6 | bVar3 << 2;
  uVar4 = puVar8[3];
  bVar3 = bVar3 >> 6 | 4;
  *(byte *)(lVar11 + 0x8b8) = bStack_72;
  *(byte *)(lVar11 + 0x8b9) = bVar3;
  *(undefined1 *)(lVar11 + 0x8b6) = 0xff;
  *(byte *)(lVar11 + 0x8b7) = bStack_73;
  local_78 = 0;
  uStack_74 = 0xff;
  uVar1 = *(undefined4 *)(puVar8 + 4);
  *(byte *)(lVar11 + 0x8ba) = *(byte *)(lVar11 + 0x8ba) & 0xc0;
  uStack_71 = (uint)bVar3;
  *(byte *)(lVar11 + 0x8bd) = *(byte *)(lVar11 + 0x8bd) & 0x3f;
  *(byte *)(lVar11 + 0x8be) = *(byte *)(lVar11 + 0x8be) & 0xfc;
  uVar6 = *(undefined2 *)puVar8;
  uVar5 = puVar8[2];
  *(undefined8 *)(param_1 + 0x288) = 0xff08002300000000;
  *(undefined4 *)(param_1 + 0x290) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x297) = uVar4;
  *(undefined4 *)(param_1 + 0x298) = uVar1;
  *(undefined2 *)(param_1 + 0x2b8) = 0xffff;
  local_6d = 0;
  *(undefined2 *)(param_1 + 0x294) = uVar6;
  *(undefined1 *)(param_1 + 0x296) = uVar5;
  FUN_020e9c5c(&local_78,param_1 + 0x2ba);
  if (*(char *)(param_1 + 0x2b1) == '\0') {
    *(undefined4 *)(param_1 + 0x2ac) = 9;
    *(undefined1 *)(param_1 + 0x2b1) = 1;
  }
  lVar11 = *(long *)puVar9;
  bVar3 = *puVar10;
  *(byte *)(lVar11 + 0x8ce) = bVar3 >> 6 | 4;
  *(byte *)(lVar11 + 0x8cd) = bVar3 >> 6 | bVar3 << 2;
  *(undefined1 *)(lVar11 + 0x8cb) = 0xff;
  *(byte *)(lVar11 + 0x8cc) = bVar3 << 2 | 3;
  *(byte *)(lVar11 + 0x8cf) = *(byte *)(lVar11 + 0x8cf) & 0xc0;
  *(byte *)(lVar11 + 0x8d2) = *(byte *)(lVar11 + 0x8d2) & 0x3f;
  *(byte *)(lVar11 + 0x8d3) = *(byte *)(lVar11 + 0x8d3) & 0xfc;
  return;
}

