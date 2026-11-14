
undefined8 FUN_01dc5020(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  short *__dest;
  ulong __n;
  long lVar7;
  short local_44 [4];
  undefined2 local_3c;
  undefined4 local_34;
  
  if (*(int *)(param_1 + 8) != 0xd) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_04bb21d0;
  iVar1 = *(int *)(param_1 + 0xc4);
  if (iVar1 < *(int *)(*(long *)(lVar7 + 0x28) + 0x20)) {
    local_44[0] = 0;
    if (DAT_04ca9180 == 0) {
      uVar2 = 0;
      uVar6 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(DAT_04ca9180 + 0x140);
      uVar6 = *(undefined8 *)(DAT_04ca9180 + 0x148);
    }
    __dest = *(short **)(lVar7 + 0x228);
    *(undefined8 *)(lVar7 + 0x1f8) = 0;
    *(undefined8 *)(lVar7 + 0x200) = 0;
    local_3c = 0;
    *(ulong *)(lVar7 + 0x1d8) = CONCAT44(1,iVar1);
    *(undefined8 *)(lVar7 + 0x1e0) = uVar2;
    *(undefined8 *)(lVar7 + 0x1e8) = uVar6;
    *(undefined8 *)(lVar7 + 0x1f0) = 0;
    *(undefined8 *)(lVar7 + 0x208) = 0;
    *(undefined8 *)(lVar7 + 0x210) = 0;
    *(undefined8 *)(lVar7 + 0x218) = 0;
    if (__dest != local_44) {
      lVar3 = 0;
      local_3c = 0;
      do {
        if (local_44[lVar3] == 0) goto LAB_01dc516c;
        if (local_44[lVar3 + 1] == 0) {
          lVar3 = lVar3 + 1;
          goto LAB_01dc516c;
        }
        if (local_44[lVar3 + 2] == 0) {
          lVar3 = lVar3 + 2;
          goto LAB_01dc516c;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_01dc516c:
      uVar4 = (uint)lVar3;
      if (*(int *)(lVar7 + 0x230) <= (int)(uint)lVar3) {
        uVar4 = *(int *)(lVar7 + 0x230) - 1;
      }
      __n = -(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1;
      memcpy(__dest,local_44,__n);
      *(undefined2 *)((long)__dest + __n) = 0;
    }
    *(undefined1 *)(lVar7 + 0x1d0) = 1;
    lVar7 = DAT_05357d70;
    lVar3 = *(long *)(DAT_05357d70 + 0x28);
    iVar1 = *(int *)(DAT_05357d70 + 0x20);
    uVar4 = 0;
    if (iVar1 != 0) {
      iVar5 = 0;
      do {
        *(undefined1 *)(lVar3 + (long)iVar5 * 0x38 + 0x2e) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar1 != iVar5);
      uVar4 = *(uint *)(lVar7 + 0x20);
      lVar3 = *(long *)(lVar7 + 0x28);
    }
    local_34 = 0xc;
    iVar1 = 0xc;
    if (uVar4 < 0xd) {
      iVar1 = 0;
    }
    *(undefined1 *)(lVar3 + (long)iVar1 * 0x38 + 0x2c) = 0;
    iVar1 = 0xc;
    if (*(uint *)(lVar7 + 0x20) < 0xd) {
      iVar1 = 0;
    }
    *(undefined1 *)(*(long *)(lVar7 + 0x28) + (long)iVar1 * 0x38 + 0x2d) = 0;
    iVar1 = 0xc;
    if (*(uint *)(lVar7 + 0x20) < 0xd) {
      iVar1 = 0;
    }
    *(undefined4 *)(*(long *)(lVar7 + 0x28) + (long)iVar1 * 0x38) = 6;
    iVar1 = 0xc;
    if (*(uint *)(lVar7 + 0x20) < 0xd) {
      iVar1 = 0;
    }
    *(undefined1 *)(*(long *)(lVar7 + 0x28) + (long)iVar1 * 0x38 + 0x2f) = 0;
    *(undefined1 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    FUN_03ebb160(param_1,0xe);
    uVar2 = 1;
  }
  else {
    FUN_03ebb160(param_1,0);
    uVar2 = 0;
  }
  return uVar2;
}

