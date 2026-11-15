
void FUN_02247300(uint param_1,byte param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined **local_50;
  byte *pbStack_48;
  byte local_18 [4];
  uint local_14;
  
  puVar1 = PTR_DAT_04bb27c0;
  uVar5 = (ulong)param_1;
  lVar4 = *(long *)PTR_DAT_04bb27c0;
  if (lVar4 == 0) {
    return;
  }
  if (6 < param_1) {
    uVar5 = 0;
  }
  uVar6 = (&DAT_054649d0)[uVar5];
  if ((((uVar6 == 0) ||
       (lVar7 = *(long *)(*(long *)(*(long *)(lVar4 + 0x1c0) + 8) +
                         ((ulong)(uVar6 >> 0x11) & 0x7ff8)), lVar7 == 0)) ||
      ((*(uint *)(lVar7 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar7 + 0x230) != uVar6)) {
    lVar7 = 0;
  }
  local_18[0] = param_2;
  local_14 = param_1;
  if (*(int *)(lVar4 + 0x288) == 1 || *(int *)(lVar4 + 0x288) == -1) {
    plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar4 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar3 + 0x60))();
    if (iVar2 < 0x11) {
      uVar6 = 1;
      goto joined_r0x022473dc;
    }
    if (*(uint *)(lVar4 + 0x5e8) < 5) {
      uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar4 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x022473dc;
    }
  }
  uVar6 = 0;
joined_r0x022473dc:
  if (lVar7 != 0) {
    uVar6 = uVar6 ^ 1;
    if (*(int *)(lVar7 + 0x150) != 1) {
      uVar6 = 1;
    }
    if ((uVar6 == 0) && (lVar4 = *(long *)(lVar7 + 0x60), lVar4 != 0)) {
      uVar6 = 8;
      if ((param_2 & 1) == 0) {
        uVar6 = 0;
      }
      *(uint *)(lVar4 + 0x11a0) = *(uint *)(lVar4 + 0x11a0) & 0xfffffff7 | uVar6;
      if (*(long *)(lVar7 + 0x88) != 0) {
        pbStack_48 = local_18;
        local_50 = &PTR_LAB_04a79698;
        FUN_00714860(*(long *)(lVar7 + 0x88),&local_50);
      }
    }
  }
  return;
}

