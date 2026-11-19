
void FUN_03a902b4(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  
  *(undefined4 *)(param_1 + 0x210) =
       *(undefined4 *)(&DAT_04130bc8 + (long)*(int *)(param_1 + 0x250) * 4);
  **(undefined4 **)(param_1 + 0x248) =
       *(undefined4 *)(&DAT_041dfefc + (long)*(int *)(param_1 + 0x254) * 0x28);
  *(undefined4 *)(*(long *)(param_1 + 0x248) + 4) =
       *(undefined4 *)(&DAT_041dfefc + (long)*(int *)(param_1 + 0x254) * 0x28);
  *(undefined4 *)(*(long *)(param_1 + 0x248) + (ulong)(1 < *(uint *)(param_1 + 0x240)) * 0x20) =
       *(undefined4 *)(&DAT_041dff00 + (long)*(int *)(param_1 + 0x254) * 0x28);
  *(undefined4 *)(*(long *)(param_1 + 0x248) + (ulong)(1 < *(uint *)(param_1 + 0x240)) * 0x20 + 4) =
       *(undefined4 *)(&DAT_041dff00 + (long)*(int *)(param_1 + 0x254) * 0x28);
  *(undefined4 *)(*(long *)(param_1 + 0x248) + (ulong)(2 < *(uint *)(param_1 + 0x240)) * 0x40) =
       *(undefined4 *)(&DAT_041dff04 + (long)*(int *)(param_1 + 0x254) * 0x28);
  *(undefined4 *)(*(long *)(param_1 + 0x248) + (ulong)(2 < *(uint *)(param_1 + 0x240)) * 0x40 + 4) =
       *(undefined4 *)(&DAT_041dff04 + (long)*(int *)(param_1 + 0x254) * 0x28);
  lVar1 = 0x60;
  if (*(uint *)(param_1 + 0x240) < 4) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1) =
       *(undefined4 *)(&DAT_041dff08 + (long)*(int *)(param_1 + 0x254) * 0x28);
  lVar1 = 0x60;
  if (*(uint *)(param_1 + 0x240) < 4) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 4) =
       *(undefined4 *)(&DAT_041dff08 + (long)*(int *)(param_1 + 0x254) * 0x28);
  *(undefined4 *)(*(long *)(param_1 + 0x248) + (ulong)(4 < *(uint *)(param_1 + 0x240)) * 0x80) =
       *(undefined4 *)(&DAT_041dff0c + (long)*(int *)(param_1 + 0x254) * 0x28);
  *(undefined4 *)(*(long *)(param_1 + 0x248) + (ulong)(4 < *(uint *)(param_1 + 0x240)) * 0x80 + 4) =
       *(undefined4 *)(&DAT_041dff0c + (long)*(int *)(param_1 + 0x254) * 0x28);
  lVar1 = 0xa0;
  if (*(uint *)(param_1 + 0x240) < 6) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1) =
       *(undefined4 *)(&DAT_041dff10 + (long)*(int *)(param_1 + 0x254) * 0x28);
  lVar1 = 0xa0;
  if (*(uint *)(param_1 + 0x240) < 6) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 4) =
       *(undefined4 *)(&DAT_041dff10 + (long)*(int *)(param_1 + 0x254) * 0x28);
  lVar1 = 0xc0;
  if (*(uint *)(param_1 + 0x240) < 7) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1) =
       *(undefined4 *)(&DAT_041dff14 + (long)*(int *)(param_1 + 0x254) * 0x28);
  lVar1 = 0xc0;
  if (*(uint *)(param_1 + 0x240) < 7) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 4) =
       *(undefined4 *)(&DAT_041dff14 + (long)*(int *)(param_1 + 0x254) * 0x28);
  lVar1 = 0xe0;
  if (*(uint *)(param_1 + 0x240) < 8) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1) =
       *(undefined4 *)(&DAT_041dff18 + (long)*(int *)(param_1 + 0x254) * 0x28);
  lVar1 = 0xe0;
  if (*(uint *)(param_1 + 0x240) < 8) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 4) =
       *(undefined4 *)(&DAT_041dff18 + (long)*(int *)(param_1 + 0x254) * 0x28);
  *(undefined4 *)(*(long *)(param_1 + 0x248) + (ulong)(8 < *(uint *)(param_1 + 0x240)) * 0x100) = 2;
  *(undefined4 *)(*(long *)(param_1 + 0x248) + (ulong)(8 < *(uint *)(param_1 + 0x240)) * 0x100 + 4)
       = 2;
  lVar1 = 0x120;
  if (*(uint *)(param_1 + 0x240) < 10) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1) = 2;
  lVar1 = 0x120;
  if (*(uint *)(param_1 + 0x240) < 10) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 4) = 2;
  *(undefined4 *)(*(long *)(param_1 + 0x248) + 8) = 2;
  *(undefined4 *)(*(long *)(param_1 + 0x248) + 0xc) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x10) = 0x3f800000;
  *(undefined4 *)(*(long *)(param_1 + 0x248) + (ulong)(1 < *(uint *)(param_1 + 0x240)) * 0x20 + 8) =
       2;
  *(undefined4 *)(*(long *)(param_1 + 0x248) + (ulong)(1 < *(uint *)(param_1 + 0x240)) * 0x20 + 0xc)
       = 0;
  *(undefined4 *)
   (*(long *)(param_1 + 0x248) + (ulong)(1 < *(uint *)(param_1 + 0x240)) * 0x20 + 0x10) = 0x3f800000
  ;
  *(undefined4 *)(*(long *)(param_1 + 0x248) + (ulong)(2 < *(uint *)(param_1 + 0x240)) * 0x40 + 8) =
       2;
  *(undefined4 *)(*(long *)(param_1 + 0x248) + (ulong)(2 < *(uint *)(param_1 + 0x240)) * 0x40 + 0xc)
       = 0;
  *(undefined4 *)
   (*(long *)(param_1 + 0x248) + (ulong)(2 < *(uint *)(param_1 + 0x240)) * 0x40 + 0x10) = 0x3f800000
  ;
  lVar1 = 0x60;
  if (*(uint *)(param_1 + 0x240) < 4) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 8) = 2;
  lVar1 = 0x60;
  if (*(uint *)(param_1 + 0x240) < 4) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0xc) = 0;
  lVar1 = 0x60;
  if (*(uint *)(param_1 + 0x240) < 4) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0x10) = 0x3f800000;
  *(undefined4 *)(*(long *)(param_1 + 0x248) + (ulong)(4 < *(uint *)(param_1 + 0x240)) * 0x80 + 8) =
       2;
  *(undefined4 *)(*(long *)(param_1 + 0x248) + (ulong)(4 < *(uint *)(param_1 + 0x240)) * 0x80 + 0xc)
       = 0;
  *(undefined4 *)
   (*(long *)(param_1 + 0x248) + (ulong)(4 < *(uint *)(param_1 + 0x240)) * 0x80 + 0x10) = 0x3f800000
  ;
  lVar1 = 0xa0;
  if (*(uint *)(param_1 + 0x240) < 6) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 8) = 2;
  lVar1 = 0xa0;
  if (*(uint *)(param_1 + 0x240) < 6) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0xc) = 0;
  lVar1 = 0xa0;
  if (*(uint *)(param_1 + 0x240) < 6) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0x10) = 0x3f800000;
  lVar1 = 0xc0;
  if (*(uint *)(param_1 + 0x240) < 7) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 8) = 2;
  lVar1 = 0xc0;
  if (*(uint *)(param_1 + 0x240) < 7) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0xc) = 0;
  lVar1 = 0xc0;
  if (*(uint *)(param_1 + 0x240) < 7) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0x10) = 0x3f800000;
  lVar1 = 0xe0;
  if (*(uint *)(param_1 + 0x240) < 8) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 8) = 2;
  lVar1 = 0xe0;
  if (*(uint *)(param_1 + 0x240) < 8) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0xc) = 0;
  lVar1 = 0xe0;
  if (*(uint *)(param_1 + 0x240) < 8) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0x10) = 0x3f800000;
  *(undefined4 *)(*(long *)(param_1 + 0x248) + (ulong)(8 < *(uint *)(param_1 + 0x240)) * 0x100 + 8)
       = 2;
  *(undefined4 *)
   (*(long *)(param_1 + 0x248) + (ulong)(8 < *(uint *)(param_1 + 0x240)) * 0x100 + 0xc) = 0;
  *(undefined4 *)
   (*(long *)(param_1 + 0x248) + (ulong)(8 < *(uint *)(param_1 + 0x240)) * 0x100 + 0x10) =
       0x3f800000;
  lVar1 = 0x120;
  if (*(uint *)(param_1 + 0x240) < 10) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 8) = 2;
  lVar1 = 0x120;
  if (*(uint *)(param_1 + 0x240) < 10) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0xc) = 0;
  lVar1 = 0x120;
  if (*(uint *)(param_1 + 0x240) < 10) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0x10) = 0x3f800000;
  uVar7 = 2;
  if (*(int *)(param_1 + 0x210) != -1) {
    uVar7 = 3;
  }
  if (*(int *)(param_1 + 0x210) == 0) {
    uVar7 = 1;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x14) = uVar7;
  *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x18) = 1;
  *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x1c) = 0x3f800000;
  uVar7 = 2;
  if (*(int *)(param_1 + 0x210) != 0) {
    uVar7 = 3;
  }
  if (*(int *)(param_1 + 0x210) == 1) {
    uVar7 = 1;
  }
  *(undefined4 *)
   (*(long *)(param_1 + 0x248) + (ulong)(1 < *(uint *)(param_1 + 0x240)) * 0x20 + 0x14) = uVar7;
  *(undefined4 *)
   (*(long *)(param_1 + 0x248) + (ulong)(1 < *(uint *)(param_1 + 0x240)) * 0x20 + 0x18) = 1;
  *(undefined4 *)
   (*(long *)(param_1 + 0x248) + (ulong)(1 < *(uint *)(param_1 + 0x240)) * 0x20 + 0x1c) = 0x3f800000
  ;
  uVar7 = 2;
  if (*(int *)(param_1 + 0x210) != 1) {
    uVar7 = 3;
  }
  if (*(int *)(param_1 + 0x210) == 2) {
    uVar7 = 1;
  }
  *(undefined4 *)
   (*(long *)(param_1 + 0x248) + (ulong)(2 < *(uint *)(param_1 + 0x240)) * 0x40 + 0x14) = uVar7;
  *(undefined4 *)
   (*(long *)(param_1 + 0x248) + (ulong)(2 < *(uint *)(param_1 + 0x240)) * 0x40 + 0x18) = 1;
  *(undefined4 *)
   (*(long *)(param_1 + 0x248) + (ulong)(2 < *(uint *)(param_1 + 0x240)) * 0x40 + 0x1c) = 0x3f800000
  ;
  uVar7 = 2;
  if (*(int *)(param_1 + 0x210) != 2) {
    uVar7 = 3;
  }
  if (*(int *)(param_1 + 0x210) == 3) {
    uVar7 = 1;
  }
  lVar1 = 0x60;
  if (*(uint *)(param_1 + 0x240) < 4) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0x14) = uVar7;
  lVar1 = 0x60;
  if (*(uint *)(param_1 + 0x240) < 4) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0x18) = 1;
  lVar1 = 0x60;
  if (*(uint *)(param_1 + 0x240) < 4) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0x1c) = 0x3f800000;
  uVar7 = 2;
  if (*(int *)(param_1 + 0x210) != 3) {
    uVar7 = 3;
  }
  if (*(int *)(param_1 + 0x210) == 4) {
    uVar7 = 1;
  }
  *(undefined4 *)
   (*(long *)(param_1 + 0x248) + (ulong)(4 < *(uint *)(param_1 + 0x240)) * 0x80 + 0x14) = uVar7;
  *(undefined4 *)
   (*(long *)(param_1 + 0x248) + (ulong)(4 < *(uint *)(param_1 + 0x240)) * 0x80 + 0x18) = 1;
  *(undefined4 *)
   (*(long *)(param_1 + 0x248) + (ulong)(4 < *(uint *)(param_1 + 0x240)) * 0x80 + 0x1c) = 0x3f800000
  ;
  uVar7 = 2;
  if (*(int *)(param_1 + 0x210) != 4) {
    uVar7 = 3;
  }
  if (*(int *)(param_1 + 0x210) == 5) {
    uVar7 = 1;
  }
  lVar1 = 0xa0;
  if (*(uint *)(param_1 + 0x240) < 6) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0x14) = uVar7;
  lVar1 = 0xa0;
  if (*(uint *)(param_1 + 0x240) < 6) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0x18) = 1;
  lVar1 = 0xa0;
  if (*(uint *)(param_1 + 0x240) < 6) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0x1c) = 0x3f800000;
  uVar7 = 2;
  if (*(int *)(param_1 + 0x210) != 5) {
    uVar7 = 3;
  }
  if (*(int *)(param_1 + 0x210) == 6) {
    uVar7 = 1;
  }
  lVar1 = 0xc0;
  if (*(uint *)(param_1 + 0x240) < 7) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0x14) = uVar7;
  lVar1 = 0xc0;
  if (*(uint *)(param_1 + 0x240) < 7) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0x18) = 1;
  lVar1 = 0xc0;
  if (*(uint *)(param_1 + 0x240) < 7) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0x1c) = 0x3f800000;
  uVar7 = 2;
  if (*(int *)(param_1 + 0x210) != 6) {
    uVar7 = 3;
  }
  if (*(int *)(param_1 + 0x210) == 7) {
    uVar7 = 1;
  }
  lVar1 = 0xe0;
  if (*(uint *)(param_1 + 0x240) < 8) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0x14) = uVar7;
  lVar1 = 0xe0;
  if (*(uint *)(param_1 + 0x240) < 8) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0x18) = 1;
  lVar1 = 0xe0;
  if (*(uint *)(param_1 + 0x240) < 8) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0x1c) = 0x3f800000;
  uVar7 = 2;
  if (*(int *)(param_1 + 0x210) != 7) {
    uVar7 = 3;
  }
  if (*(int *)(param_1 + 0x210) == 8) {
    uVar7 = 1;
  }
  *(undefined4 *)
   (*(long *)(param_1 + 0x248) + (ulong)(8 < *(uint *)(param_1 + 0x240)) * 0x100 + 0x14) = uVar7;
  *(undefined4 *)
   (*(long *)(param_1 + 0x248) + (ulong)(8 < *(uint *)(param_1 + 0x240)) * 0x100 + 0x18) = 1;
  *(undefined4 *)
   (*(long *)(param_1 + 0x248) + (ulong)(8 < *(uint *)(param_1 + 0x240)) * 0x100 + 0x1c) =
       0x3f800000;
  uVar7 = 2;
  if (*(int *)(param_1 + 0x210) != 8) {
    uVar7 = 3;
  }
  if (*(int *)(param_1 + 0x210) == 9) {
    uVar7 = 1;
  }
  lVar1 = 0x120;
  if (*(uint *)(param_1 + 0x240) < 10) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0x14) = uVar7;
  lVar1 = 0x120;
  if (*(uint *)(param_1 + 0x240) < 10) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0x18) = 1;
  lVar1 = 0x120;
  if (*(uint *)(param_1 + 0x240) < 10) {
    lVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar1 + 0x1c) = 0x3f800000;
  iVar2 = *(int *)(param_1 + 0x264);
  iVar3 = *(int *)(&DAT_04130bc8 + (long)*(int *)(param_1 + 600) * 4);
  iVar4 = *(int *)(&DAT_04130bc8 + (long)*(int *)(param_1 + 0x25c) * 4);
  iVar6 = iVar2 - iVar3;
  *(int *)(param_1 + 0x208) = iVar6;
  *(int *)(param_1 + 0x20c) = iVar2 - iVar4;
  if (iVar6 == 0 || iVar2 < iVar3) {
    iVar6 = 1;
    *(undefined4 *)(param_1 + 0x208) = 1;
  }
  if (iVar2 - iVar4 < 1) {
    *(undefined4 *)(param_1 + 0x20c) = 1;
  }
  uVar5 = iVar6 - *(int *)(param_1 + 0x260);
  *(uint *)(param_1 + 0x214) = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  return;
}

