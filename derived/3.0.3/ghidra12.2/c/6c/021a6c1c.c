
undefined8 FUN_021a6c1c(long param_1,undefined8 param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  long lVar15;
  uint uVar16;
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  uint local_64;
  
  puVar14 = (uint *)(param_1 + 0x92cc);
  lVar15 = **(long **)PTR_DAT_04bb27d0;
  bVar3 = *(byte *)(lVar15 + 0x473);
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    pbVar2 = (byte *)(lVar15 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
    if (7 < bVar3) {
      pbVar2 = (byte *)(lVar15 + 0x48);
    }
    if (((*pbVar2 >> 3 & 1) != 0) && (*(byte *)(lVar15 + 0x472) != bVar3)) {
      puVar14 = (uint *)(param_1 + 0x92d8);
    }
  }
  uVar4 = 1 << (ulong)(*puVar14 & 0x1f);
  if (9 < *puVar14) {
    uVar4 = 0;
  }
  uVar16 = 1 << (ulong)(puVar14[1] & 0x1f);
  local_64 = 1 << (ulong)(puVar14[2] & 0x1f);
  if (9 < puVar14[1]) {
    uVar16 = 0;
  }
  if (9 < puVar14[2]) {
    local_64 = 0;
  }
  local_64 = uVar16 | uVar4 | local_64;
  uVar4 = FUN_021a6fcc(auStack_8c,0,&local_64,param_2);
  if (uVar4 == 0) {
    uVar16 = 0;
  }
  else if (uVar4 == 1) {
    uVar16 = 1;
  }
  else {
    uVar16 = 0;
    uVar4 = 1;
  }
  iVar5 = FUN_021a6fcc(auStack_88,1,&local_64,param_2);
  uVar1 = uVar16 | 2;
  if (iVar5 != 1) {
    uVar1 = uVar16;
  }
  if (iVar5 != 0) {
    uVar16 = uVar1;
  }
  iVar6 = FUN_021a6fcc(auStack_84,2,&local_64,param_2);
  uVar1 = uVar16 | 4;
  if (iVar6 != 1) {
    uVar1 = uVar16;
  }
  if (iVar6 != 0) {
    uVar16 = uVar1;
  }
  iVar7 = FUN_021a6fcc(auStack_80,3,&local_64,param_2);
  uVar1 = uVar16 | 8;
  if (iVar7 != 1) {
    uVar1 = uVar16;
  }
  if (iVar7 != 0) {
    uVar16 = uVar1;
  }
  iVar8 = FUN_021a6fcc(auStack_7c,4,&local_64,param_2);
  uVar1 = uVar16 | 0x10;
  if (iVar8 != 1) {
    uVar1 = uVar16;
  }
  if (iVar8 != 0) {
    uVar16 = uVar1;
  }
  iVar9 = FUN_021a6fcc(auStack_78,5,&local_64,param_2);
  uVar1 = uVar16 | 0x20;
  if (iVar9 != 1) {
    uVar1 = uVar16;
  }
  if (iVar9 != 0) {
    uVar16 = uVar1;
  }
  iVar10 = FUN_021a6fcc(auStack_74,6,&local_64,param_2);
  uVar1 = uVar16 | 0x40;
  if (iVar10 != 1) {
    uVar1 = uVar16;
  }
  if (iVar10 != 0) {
    uVar16 = uVar1;
  }
  iVar11 = FUN_021a6fcc(auStack_70,7,&local_64,param_2);
  uVar1 = uVar16 | 0x80;
  if (iVar11 != 1) {
    uVar1 = uVar16;
  }
  if (iVar11 != 0) {
    uVar16 = uVar1;
  }
  iVar12 = FUN_021a6fcc(auStack_6c,8,&local_64,param_2);
  uVar1 = uVar16 | 0x100;
  if (iVar12 != 1) {
    uVar1 = uVar16;
  }
  if (iVar12 != 0) {
    uVar16 = uVar1;
  }
  iVar13 = FUN_021a6fcc(auStack_68,9,&local_64,param_2);
  uVar1 = uVar16 | 0x200;
  if (iVar13 != 1) {
    uVar1 = uVar16;
  }
  if (iVar13 != 0) {
    uVar16 = uVar1;
  }
  uVar16 = uVar16 - (uVar16 >> 1 & 0x55555555);
  uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
  uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
  uVar16 = uVar16 + (uVar16 >> 8);
  if ((uVar16 + (uVar16 >> 0x10) & 0x3f) != 0) {
    if (iVar5 != 0) {
      uVar4 = uVar4 | 2;
    }
    if (iVar6 != 0) {
      uVar4 = uVar4 | 4;
    }
    if (iVar7 != 0) {
      uVar4 = uVar4 | 8;
    }
    if (iVar8 != 0) {
      uVar4 = uVar4 | 0x10;
    }
    if (iVar9 != 0) {
      uVar4 = uVar4 | 0x20;
    }
    if (iVar10 != 0) {
      uVar4 = uVar4 | 0x40;
    }
    if (iVar11 != 0) {
      uVar4 = uVar4 | 0x80;
    }
    if (iVar12 != 0) {
      uVar4 = uVar4 | 0x100;
    }
    if (iVar13 != 0) {
      uVar4 = uVar4 | 0x200;
    }
    uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
    uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
    uVar4 = uVar4 + (uVar4 >> 8);
    if (2 < (uVar4 + (uVar4 >> 0x10) & 0x3f)) {
      return 1;
    }
  }
  return 0;
}

