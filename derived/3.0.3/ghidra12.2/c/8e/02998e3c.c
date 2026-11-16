
void FUN_02998e3c(int *param_1,uint *param_2,long param_3,uint *param_4,uint *param_5)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  uint local_1d8 [6];
  undefined8 uStack_1c0;
  uint local_1b4;
  undefined **local_1b0;
  undefined1 *puStack_1a8;
  uint *local_1a0;
  undefined8 local_198;
  uint local_190 [64];
  undefined8 local_90;
  long local_88;
  undefined2 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined **ppuStack_60;
  uint *local_58;
  
  lVar7 = *(long *)(param_3 + 0x18);
  lVar12 = (long)*(int *)(lVar7 + 4) - (long)*param_1;
  uVar3 = *(uint *)(lVar7 + 0xc);
  iVar9 = *(int *)(lVar7 + 0x10);
  uVar2 = 0;
  if (uVar3 != 99999 && -1 < (int)uVar3) {
    uVar2 = uVar3;
  }
  if (iVar9 < 0xfa1) {
    iVar9 = 4000;
  }
  uVar11 = (uint)lVar12;
  if (0 < (int)uVar11 && uVar2 == 0) {
    return;
  }
  uVar4 = *(undefined4 *)(lVar7 + 0x14);
  local_1d8[0] = 0xffffffff;
  local_1d8[1] = 0;
  local_1d8[2] = 0;
  local_1d8[3] = 0;
  local_1d8[4] = 0;
  local_1d8[5] = 0;
  uStack_1c0._0_4_ = 0;
  uStack_1c0._4_4_ = 0;
  if ((((int)uVar2 < 1) || (param_5 == (uint *)0x0)) || (uVar2 != *param_4)) {
LAB_02998f8c:
    local_190[0] = local_190[0] & 0xffffff00;
    local_1a0 = local_190;
    local_198 = 0x10000000000;
    local_1b0 = &PTR_LAB_048f9770;
    puStack_1a8 = &DAT_0405db6e;
    local_1b4 = uVar2;
    FUN_02a21700(&local_1a0,&local_1b0,2,&local_1b4);
    local_90 = 0;
    local_88 = 0;
    local_80 = 0xff;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    ppuStack_60 = &PTR_LAB_048f9770;
    local_58 = local_1a0;
    uVar6 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_90,&ppuStack_60);
    if ((((uVar6 & 1) == 0) || (local_88 == 0)) ||
       ((*(uint *)(local_88 + 0x18) == 0 ||
        (plVar1 = (long *)((ulong)*(uint *)(local_88 + 0x18) + local_88),
        *plVar1 != 0x101feff464e494d)))) {
      local_190[0] = 0;
      local_1a0 = (uint *)0x0;
      local_198 = 0xffffffff;
      goto LAB_0299907c;
    }
    uVar5 = iVar9 - 4000;
    param_5 = local_1d8;
    local_1d8[1] = 0;
    local_1d8[4] = 0;
    local_1d8[2] = 0;
    local_1d8[3] = 0;
    local_1d8[0] = uVar5;
  }
  else {
    if (*(long *)(param_5 + 6) == 0) {
      lVar7 = *(long *)(param_5 + 2);
      if ((lVar7 != 0) && (param_5[4] == *(uint *)(lVar7 + 0x10))) {
        lVar8 = *(long *)(*(long *)(lVar7 + 0x120) + 8);
        lVar10 = *(long *)(lVar8 + 0x38);
        if ((DAT_05aebc00 != '\0') || (lVar10 != 0)) {
          if (DAT_05aebc00 != '\0') {
            lVar10 = lVar8 + 0x70;
          }
          lVar10 = *(long *)(lVar10 + 8);
          if (((lVar10 != 0) && (*(uint *)(lVar10 + 0x18) != 0)) &&
             (*(long *)((ulong)*(uint *)(lVar10 + 0x18) + lVar10) == 0x101feff464e494d))
          goto LAB_02998ee0;
        }
      }
      goto LAB_02998f8c;
    }
    lVar7 = *(long *)(param_5 + 2);
LAB_02998ee0:
    if ((((lVar7 == 0) || (*(uint *)(lVar7 + 0x10) != param_5[4])) || (*(int *)(lVar7 + 0xc) == 0))
       || ((*(int *)(lVar7 + 0xc) == 7 || (0.0 < *(float *)(lVar7 + 0x2c))))) goto LAB_02998f8c;
    uVar5 = FUN_03b46270();
    plVar1 = (long *)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0);
    if (uVar5 == 0) goto LAB_02998f8c;
  }
  local_198 = CONCAT44(uVar4,uVar5);
  local_1a0 = param_5;
  local_190[0] = uVar3;
  uStack_1c0 = plVar1;
LAB_0299907c:
  if ((uVar11 < *param_2) && (*(long *)(param_2 + 2) != 0)) {
    FUN_029899a0(*(long *)(param_2 + 2) + lVar12 * 0xae0,&local_1a0);
  }
  return;
}

