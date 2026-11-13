
void FUN_00e9d7f0(long param_1,uint param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 local_28 [8];
  
  if (param_1 == 0) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x3b8);
  if (0x19 < param_2) {
    return;
  }
  uVar2 = (uint)param_3;
  switch(param_2) {
  case 0:
    bVar1 = (param_3 & 1) == 0;
    uVar5 = 0x40;
    uVar3 = *(ulong *)(lVar7 + 0xad58) & 0xffffffffffffffbf;
    break;
  case 1:
    bVar1 = (param_3 & 1) == 0;
    uVar5 = 0x80;
    uVar3 = *(ulong *)(lVar7 + 0xad58) & 0xffffffffffffff7f;
    break;
  case 2:
    uVar3 = *(ulong *)(lVar7 + 0xad58) & 0xfffffffffffffffe | param_3 & 1;
    goto LAB_00e9daa0;
  case 3:
    bVar1 = (param_3 & 1) == 0;
    uVar5 = 2;
    uVar3 = *(ulong *)(lVar7 + 0xad58) & 0xfffffffffffffffd;
    break;
  case 4:
    uVar2 = (uVar2 ^ 0xffffffff) & 1;
    *(uint *)(lVar7 + 0x7cf8) = uVar2;
    *(uint *)(lVar7 + 0x7cfc) = uVar2;
    *(uint *)(lVar7 + 32000) = uVar2;
    return;
  case 5:
    if ((param_3 & 1) == 0) {
      *(byte *)(param_1 + 0x286) = *(byte *)(param_1 + 0x286) | 8;
      return;
    }
    *(byte *)(param_1 + 0x286) = *(byte *)(param_1 + 0x286) & 0xf7;
    return;
  case 6:
    if ((param_3 & 1) == 0) {
      *(uint *)(param_1 + 0x69c) = *(uint *)(param_1 + 0x69c) & 0xffffffef;
      return;
    }
    *(uint *)(param_1 + 0x69c) = *(uint *)(param_1 + 0x69c) | 0x10;
    return;
  case 7:
    if ((param_3 & 1) == 0) {
      *(byte *)(param_1 + 0x286) = *(byte *)(param_1 + 0x286) | 0x40;
      return;
    }
    *(byte *)(param_1 + 0x286) = *(byte *)(param_1 + 0x286) & 0xbf;
    return;
  case 8:
    if ((param_3 & 1) == 0) {
      if (*(int *)(param_1 + 0x750) != 0) {
        return;
      }
      uVar3 = 0;
    }
    else {
      uVar3 = 0x1000;
    }
    uVar3 = *(ulong *)(lVar7 + 0xad58) & 0xffffffffffffefff | uVar3;
    goto LAB_00e9daa0;
  case 9:
    bVar1 = (param_3 & 1) == 0;
    uVar5 = 4;
    uVar3 = *(ulong *)(lVar7 + 0xad58) & 0xfffffffffffffffb;
    break;
  case 10:
    bVar1 = (param_3 & 1) == 0;
    uVar5 = 0x100;
    uVar3 = *(ulong *)(lVar7 + 0xad58) & 0xfffffffffffffeff;
    break;
  case 0xb:
    bVar1 = (param_3 & 1) == 0;
    uVar4 = 0x10000;
    uVar2 = *(uint *)(param_1 + 0x69c) & 0xfffeffff;
    goto LAB_00e9da78;
  case 0xc:
    FUN_0204f004(lVar7 + 0x7c58,(uVar2 ^ 0xffffffff) & 1);
    return;
  case 0xd:
    bVar1 = (param_3 & 1) == 0;
    uVar5 = 0x8000000;
    uVar3 = *(ulong *)(lVar7 + 0xad58) & 0xfffffffff7ffffff;
    break;
  case 0xe:
    FUN_0212eca8(lVar7 + 0xaa50,uVar2 & 1,0);
    return;
  case 0xf:
    if ((param_3 & 1) == 0) {
      return;
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar7 + 8) + 0x3b0);
    FUN_01e3b790(local_28);
    FUN_01e57c78(uVar6,local_28,1,1);
    FUN_01e3afc0(*(undefined8 *)(lVar7 + 8));
    return;
  case 0x10:
    if ((param_3 & 1) == 0) {
      uVar3 = *(ulong *)(lVar7 + 0xad58) & 0xfffffffbffffffff;
      goto LAB_00e9daa0;
    }
    uVar5 = FUN_01e5e100(*(undefined8 *)(*(long *)(lVar7 + 8) + 0x3b0));
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar3 = *(ulong *)(lVar7 + 0xad58);
    uVar5 = 0x400001000;
    goto LAB_00e9da9c;
  case 0x11:
    bVar1 = (param_3 & 1) == 0;
    uVar4 = 0x800;
    uVar2 = *(uint *)(param_1 + 0x69c) & 0xfffff7ff;
    goto LAB_00e9da78;
  case 0x12:
    bVar1 = (param_3 & 1) == 0;
    uVar5 = 0x100000;
    uVar3 = *(ulong *)(lVar7 + 0xad58) & 0xffffffffffefffff;
    break;
  case 0x13:
    bVar1 = (param_3 & 1) == 0;
    uVar5 = 0x100000000000000;
    uVar3 = *(ulong *)(lVar7 + 0xad58) & 0xfeffffffffffffff;
    break;
  case 0x14:
    bVar1 = (param_3 & 1) == 0;
    uVar5 = 0x200000000000000;
    uVar3 = *(ulong *)(lVar7 + 0xad58) & 0xfdffffffffffffff;
    break;
  case 0x15:
    if ((param_3 & 1) == 0) {
      return;
    }
    if (*(int *)(lVar7 + 0x7cfc) == 1) {
      *(undefined4 *)(lVar7 + 0x7cfc) = 0;
      return;
    }
    return;
  case 0x16:
    bVar1 = (param_3 & 1) == 0;
    uVar5 = 0x800000000000000;
    uVar3 = *(ulong *)(lVar7 + 0xad58) & 0xf7ffffffffffffff;
    break;
  case 0x17:
    bVar1 = (param_3 & 1) == 0;
    uVar4 = 0x200000;
    uVar2 = *(uint *)(param_1 + 0x69c) & 0xffdfffff;
    goto LAB_00e9da78;
  case 0x18:
    bVar1 = (param_3 & 1) == 0;
    uVar4 = 0x400000;
    uVar2 = *(uint *)(param_1 + 0x69c) & 0xffbfffff;
LAB_00e9da78:
    if (bVar1) {
      uVar4 = 0;
    }
    *(uint *)(param_1 + 0x69c) = uVar2 | uVar4;
    return;
  case 0x19:
    bVar1 = (param_3 & 1) == 0;
    uVar5 = 0x2000000000000000;
    uVar3 = *(ulong *)(lVar7 + 0xad58) & 0xdfffffffffffffff;
  }
  if (bVar1) {
    uVar5 = 0;
  }
LAB_00e9da9c:
  uVar3 = uVar3 | uVar5;
LAB_00e9daa0:
  *(ulong *)(lVar7 + 0xad58) = uVar3;
  return;
}

