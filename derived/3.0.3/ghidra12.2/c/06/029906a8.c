
void FUN_029906a8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  uint *puVar11;
  uint local_1d0 [6];
  undefined8 uStack_1b8;
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
  uint local_34;
  
  lVar7 = *(long *)(param_1 + 0x28);
  puVar11 = (uint *)*param_3;
  local_1d0[0] = 0xffffffff;
  local_1d0[1] = 0;
  local_1d0[2] = 0;
  uVar4 = *(undefined4 *)(lVar7 + 0x14);
  uVar3 = *(uint *)(lVar7 + 0xc);
  iVar10 = *(int *)(lVar7 + 0x10);
  local_1d0[3] = 0;
  local_1d0[4] = 0;
  local_1d0[5] = 0;
  uStack_1b8._0_4_ = 0;
  uStack_1b8._4_4_ = 0;
  uVar2 = 0;
  if (uVar3 != 99999 && -1 < (int)uVar3) {
    uVar2 = uVar3;
  }
  if (iVar10 < 0xfa1) {
    iVar10 = 4000;
  }
  if ((int)uVar2 < 1) {
    if (puVar11 == (uint *)0x0) goto LAB_029908d0;
    uVar5 = 0;
    uStack_1b8 = (long *)0x0;
    if (*(long *)(puVar11 + 2) != 0) {
      if (*(uint *)(*(long *)(puVar11 + 2) + 0x10) == puVar11[4]) {
        uVar5 = FUN_03b46270();
        uStack_1b8 = (long *)CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b8);
      }
      else {
        uVar5 = 0;
        uStack_1b8 = (long *)0x0;
      }
    }
  }
  else {
    if (puVar11 != (uint *)0x0) {
      if (*(long *)(puVar11 + 6) == 0) {
        lVar7 = *(long *)(puVar11 + 2);
        if ((lVar7 != 0) && (puVar11[4] == *(uint *)(lVar7 + 0x10))) {
          lVar8 = *(long *)(*(long *)(lVar7 + 0x120) + 8);
          lVar9 = *(long *)(lVar8 + 0x38);
          if ((DAT_05aebc00 != '\0') || (lVar9 != 0)) {
            if (DAT_05aebc00 != '\0') {
              lVar9 = lVar8 + 0x70;
            }
            lVar9 = *(long *)(lVar9 + 8);
            if (((lVar9 != 0) && (*(uint *)(lVar9 + 0x18) != 0)) &&
               (*(long *)((ulong)*(uint *)(lVar9 + 0x18) + lVar9) == 0x101feff464e494d))
            goto LAB_02990728;
          }
        }
      }
      else {
        lVar7 = *(long *)(puVar11 + 2);
LAB_02990728:
        if (((lVar7 != 0) && (*(uint *)(lVar7 + 0x10) == puVar11[4])) &&
           ((*(int *)(lVar7 + 0xc) != 0 &&
            ((*(int *)(lVar7 + 0xc) != 7 && (*(float *)(lVar7 + 0x2c) <= 0.0)))))) {
          uVar5 = FUN_03b46270();
          uStack_1b8 = (long *)CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b8);
          if (uVar5 != 0) goto LAB_029908e4;
        }
      }
    }
    local_190[0] = local_190[0] & 0xffffff00;
    local_1a0 = local_190;
    local_198 = 0x10000000000;
    local_1b0 = &PTR_LAB_048f9770;
    puStack_1a8 = &DAT_0405db6e;
    local_34 = uVar2;
    FUN_02a21700(&local_1a0,&local_1b0,2,&local_34);
    local_90 = 0;
    local_88 = 0;
    local_80 = 0xff;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    ppuStack_60 = &PTR_LAB_048f9770;
    local_58 = local_1a0;
    uVar6 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_90,&ppuStack_60);
    if (((((uVar6 & 1) == 0) || (local_88 == 0)) || (*(uint *)(local_88 + 0x18) == 0)) ||
       (plVar1 = (long *)((ulong)*(uint *)(local_88 + 0x18) + local_88),
       *plVar1 != 0x101feff464e494d)) {
LAB_029908d0:
      local_190[0] = 0;
      local_1a0 = (uint *)0x0;
      local_198 = 0xffffffff;
      goto LAB_029908f0;
    }
    local_1d0[0] = iVar10 - 4000;
    local_1d0[1] = 0;
    local_1d0[4] = 0;
    local_1d0[2] = 0;
    local_1d0[3] = 0;
    puVar11 = local_1d0;
    uStack_1b8 = plVar1;
    uVar5 = local_1d0[0];
  }
LAB_029908e4:
  local_198 = CONCAT44(uVar4,uVar5);
  local_1a0 = puVar11;
  local_190[0] = uVar3;
LAB_029908f0:
  FUN_029899a0(*param_2,&local_1a0);
  return;
}

