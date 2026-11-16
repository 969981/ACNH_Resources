
undefined8 FUN_027fe600(short *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  short *psVar6;
  long lVar7;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar2 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
         (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
        local_38 = lVar7;
      }
    }
  }
  uVar3 = 99999;
  uVar4 = FUN_01aed730(&local_48);
  uVar1 = *(uint *)(param_1 + 0xb8);
  if ((*(byte *)((long)param_1 + 0x177) != 0 ||
       (((ulong)uVar1 != 0 || param_1[0xba] != 0) || *(byte *)(param_1 + 0xbb) != 0)) &&
     ((uint)*(byte *)((long)param_1 + 0x177) ==
      ((uVar1 + (uVar1 >> 0x10) + (uVar1 >> 0x18) + (uVar1 >> 8)) - 0x2d & 0xff))) {
    lVar7 = (ulong)uVar1 << ((ulong)(0x1d - *(byte *)(param_1 + 0xbb)) & 0x3f);
    uVar3 = 0x7f1e5b8e - (((int)lVar7 - (uint)(ushort)param_1[0xba]) + (int)((ulong)lVar7 >> 0x20));
  }
  if (uVar3 < uVar4) {
    uVar3 = *(uint *)(param_1 + 0xac);
    if (0x13 < uVar3) {
      uVar3 = 0x14;
    }
    if (uVar3 != 0) {
      uVar5 = 0;
      psVar6 = param_1 + 0x5c;
      do {
        if (*psVar6 == -2) {
          if (-1 < (int)(uint)uVar5) {
            if (0x13 < (uint)uVar5) {
              return 0;
            }
            goto LAB_027fe804;
          }
          break;
        }
        uVar5 = uVar5 + 1;
        psVar6 = psVar6 + 4;
      } while (uVar3 != uVar5);
    }
    uVar3 = *(uint *)(param_1 + 0x50);
    if (0x13 < uVar3) {
      uVar3 = 0x14;
    }
    if (uVar3 != 0) {
      uVar5 = 0;
      psVar6 = param_1;
      do {
        if (*psVar6 == -2) {
          if (-1 < (int)(uint)uVar5) {
            if (0x13 < (uint)uVar5) {
              return 0;
            }
            uVar5 = uVar5 + 0x14;
            goto LAB_027fe804;
          }
          break;
        }
        uVar5 = uVar5 + 1;
        psVar6 = psVar6 + 4;
      } while (uVar3 != uVar5);
    }
    uVar5 = (ulong)DAT_0559bc2c;
    if (0x27 < DAT_0559bc2c) {
      return 0;
    }
LAB_027fe804:
    FUN_027fa2dc(param_1,uVar5 & 0xffffffff,param_2,0);
  }
  else {
    FUN_0285dc20(param_1 + 0xb8,uVar4,99999);
  }
  return 1;
}

