
void FUN_03580c20(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined **local_60;
  undefined4 local_58;
  uint local_54;
  uint local_50;
  undefined2 local_4c;
  undefined8 local_4a;
  undefined4 local_40;
  undefined8 local_3c;
  byte local_34;
  
  lVar8 = *(long *)(*(long *)(param_1 + 0x210) + 0x580);
  if (lVar8 == 0) {
    return;
  }
  uVar7 = *(uint *)(param_1 + 0x248);
  iVar6 = -1;
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_1 + 0x230))) {
    lVar5 = param_1 + 0x220;
    uVar1 = uVar7 + 1 & 3;
    if (2 < uVar7) {
      uVar7 = uVar7 + 1 & 0xfffffffc;
      do {
        uVar7 = uVar7 - 4;
        lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 8) + 8) + 8) + 8);
      } while (uVar7 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      lVar5 = *(long *)(lVar5 + 8);
    }
    iVar6 = -1;
    if ((lVar5 != 0) && (lVar5 = lVar5 - *(int *)(param_1 + 0x234), lVar5 != 0)) {
      iVar6 = *(int *)(lVar5 + 0x270);
    }
  }
  local_60 = (undefined **)CONCAT44(local_60._4_4_,iVar6);
  if (DAT_05771228 == iVar6) {
    lVar5 = 0;
  }
  else if (DAT_05771298 == iVar6) {
    lVar5 = 1;
  }
  else if (DAT_05771308 == iVar6) {
    lVar5 = 2;
  }
  else if (DAT_05771378 == iVar6) {
    lVar5 = 3;
  }
  else if (DAT_057713e8 == iVar6) {
    lVar5 = 4;
  }
  else if (DAT_05771458 == iVar6) {
    lVar5 = 5;
  }
  else if (DAT_057714c8 == iVar6) {
    lVar5 = 6;
  }
  else if (DAT_05771538 == iVar6) {
    lVar5 = 7;
  }
  else if (DAT_057715a8 == iVar6) {
    lVar5 = 8;
  }
  else if (DAT_05771618 == iVar6) {
    lVar5 = 9;
  }
  else {
    if (DAT_05771688 != iVar6) {
      local_50 = 0;
      iVar6 = 0;
      goto LAB_03580e00;
    }
    lVar5 = 10;
  }
  lVar4 = FUN_033d0598(&DAT_0548e140);
  lVar4 = lVar4 + lVar5 * 8;
  local_50 = *(uint *)(lVar4 + 0x338);
  iVar6 = *(int *)(lVar4 + 0x33c);
LAB_03580e00:
  uVar7 = (uint)*(ushort *)(param_1 + 0x350);
  if (*(uint *)(param_1 + 0x340) <= (uint)*(ushort *)(param_1 + 0x350)) {
    uVar7 = 0;
  }
  local_58 = *(undefined4 *)(*(long *)(param_1 + 0x348) + (ulong)uVar7 * 0x160);
  local_4a = 0x1000001;
  local_40 = 0;
  local_3c = 0x60000000c;
  local_4c = 0;
  local_60 = &PTR_LAB_04b2b020;
  if ((int)local_50 < 0) {
    local_54 = 0;
    local_50 = 0;
  }
  else {
    local_54 = local_50;
    if (-1 < iVar6) {
      iVar2 = *(int *)(lVar8 + 0x2e8);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = (int)local_50 / iVar2;
      }
      local_54 = iVar3 * iVar2 - iVar2 * iVar6;
      local_54 = local_54 & ((int)local_54 >> 0x1f ^ 0xffffffffU);
    }
  }
  local_34 = *(byte *)(param_1 + 0x1f8);
  if (7 < local_34) {
    local_34 = 0xff;
  }
  FUN_03864290(lVar8,&local_60);
  return;
}

