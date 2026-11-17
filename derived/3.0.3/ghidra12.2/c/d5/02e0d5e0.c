
void FUN_02e0d5e0(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined **local_40;
  uint local_38;
  undefined8 local_34;
  undefined2 local_2c;
  undefined8 local_2a;
  undefined4 local_20;
  undefined8 local_1c;
  byte local_14;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x220) + 0x570);
  if (lVar5 != 0) {
    local_20 = 0;
    local_2a = 0x101000001;
    local_38 = *(uint *)(param_1 + 0x1c1b8);
    local_1c = 0x60000000c;
    lVar7 = *(long *)(param_1 + 0x1d5d8);
    local_2c = 0;
    local_40 = &PTR_LAB_04b2b020;
    uVar1 = *(uint *)(param_1 + 0x1d4e8);
    if (*(uint *)(param_1 + 0x1d5d0) <= uVar1) {
      uVar1 = 0;
    }
    if ((param_2 & 1) == 0) {
      if (0 < (int)local_38) {
        uVar6 = 0;
        do {
          if (**(long **)(*(long *)(param_1 + 0x1c1c0) + uVar6 * 8) ==
              *(long *)(lVar7 + (long)(int)uVar1 * 0x10 + 8)) {
            local_34._4_4_ = (int)uVar6;
            if (-1 < local_34._4_4_) {
              iVar2 = *(int *)(lVar7 + (long)(int)uVar1 * 0x10);
              if (-1 < iVar2) {
                iVar3 = *(int *)(lVar5 + 0x2e8);
                iVar4 = 0;
                if (iVar3 != 0) {
                  iVar4 = local_34._4_4_ / iVar3;
                }
                uVar1 = iVar4 * iVar3 - iVar3 * iVar2;
                uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
              }
              goto LAB_02e0d6fc;
            }
            break;
          }
          uVar6 = uVar6 + 1;
        } while (local_38 != uVar6);
      }
      uVar6 = 0;
      local_34._4_4_ = 0;
LAB_02e0d6fc:
      local_34 = CONCAT44(local_34._4_4_,(int)uVar6);
    }
    else if (*(int *)(param_1 + 0x1d4a4) < (int)local_38) {
      local_34 = 0xffffffffffffffff;
    }
    else {
      local_34 = CONCAT44(local_38 - 1,*(undefined4 *)(lVar7 + (long)(int)uVar1 * 0x10 + 4));
    }
    local_14 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_14) {
      local_14 = 0xff;
    }
    FUN_03864290(lVar5,&local_40);
  }
  return;
}

