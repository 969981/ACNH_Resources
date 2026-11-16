
bool FUN_027fe840(short *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  short *psVar7;
  long lVar8;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar1 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if (uVar3 < *(uint *)(lVar8 + 0x1d8)) {
        lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8);
        if (lVar8 != 0) {
          local_38 = lVar8;
        }
      }
    }
  }
  uVar3 = 99999;
  uVar4 = FUN_01aed730(&local_48);
  uVar5 = *(uint *)(param_1 + 0xb8);
  if ((*(byte *)((long)param_1 + 0x177) != 0 ||
       (((ulong)uVar5 != 0 || param_1[0xba] != 0) || *(byte *)(param_1 + 0xbb) != 0)) &&
     ((uint)*(byte *)((long)param_1 + 0x177) ==
      ((uVar5 + (uVar5 >> 0x10) + (uVar5 >> 0x18) + (uVar5 >> 8)) - 0x2d & 0xff))) {
    lVar8 = (ulong)uVar5 << ((ulong)(0x1d - *(byte *)(param_1 + 0xbb)) & 0x3f);
    uVar3 = 0x7f1e5b8e - (((int)lVar8 - (uint)(ushort)param_1[0xba]) + (int)((ulong)lVar8 >> 0x20));
  }
  if (uVar3 < uVar4) {
    uVar3 = *(uint *)(param_1 + 0xac);
    if (0x13 < uVar3) {
      uVar3 = 0x14;
    }
    if (uVar3 != 0) {
      uVar6 = 0;
      psVar7 = param_1 + 0x5c;
      do {
        if (*psVar7 == -2) {
          uVar3 = (uint)uVar6;
          if (-1 < (int)uVar3) {
            if (0x13 < uVar3) {
              uVar3 = 0xffffffff;
            }
            goto LAB_027fea28;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        psVar7 = psVar7 + 4;
      } while (uVar3 != uVar6);
    }
    uVar3 = *(uint *)(param_1 + 0x50);
    if (0x13 < uVar3) {
      uVar3 = 0x14;
    }
    if (uVar3 != 0) {
      uVar6 = 0;
      do {
        if (*param_1 == -2) {
          uVar5 = (uint)uVar6;
          if (-1 < (int)uVar5) {
            uVar3 = uVar5 + 0x14;
            if (0x13 < uVar5) {
              uVar3 = 0xffffffff;
            }
            goto LAB_027fea28;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        param_1 = param_1 + 4;
      } while (uVar3 != uVar6);
    }
    uVar3 = DAT_0559bc2c;
LAB_027fea28:
    bVar2 = uVar3 < 0x28;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

