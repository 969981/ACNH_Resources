
void FUN_004daa90(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0 [2];
  undefined8 local_98;
  long lStack_90;
  ulong local_88;
  uint local_80 [2];
  undefined8 local_78;
  long lStack_70;
  ulong local_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  ulong local_48;
  
  puVar5 = local_c0;
  lVar7 = param_2[1];
  uVar3 = FUN_00428440(lVar7);
  if ((lVar7 != 0) && ((uVar3 & 0x1f) == 7)) {
    local_58 = *param_2;
    uStack_50 = param_2[1];
    local_48 = param_2[2];
    if ((local_48 & 1) == 0) {
      local_60[0] = *(undefined4 *)(param_2 + 4);
      uVar4 = param_2[3];
      puVar6 = &local_58;
      puVar5 = local_60;
      goto LAB_004dacec;
    }
    uVar3 = local_48 & 0xfffffffffffffffe;
    FUN_0043dd30(uVar3);
    local_60[0] = *(undefined4 *)(param_2 + 4);
    uVar4 = param_2[3];
    puVar6 = &local_58;
    puVar5 = local_60;
LAB_004dabe0:
    FUN_004dc3c0(param_1,puVar6,uVar4,puVar5);
LAB_004dac8c:
    FUN_0043dd50(uVar3);
    return;
  }
  lVar8 = param_2[1];
  uVar3 = FUN_00428440(lVar8);
  lVar7 = lStack_90;
  if ((lVar8 != 0) && ((uVar3 & 0x1f) == 6)) {
    uVar1 = *(uint *)*param_2;
    lVar10 = (long)(int)uVar1;
    lVar8 = FUN_00426d90(lVar8);
    if ((lVar8 != 0) && (uVar3 = FUN_00428440(), (uVar3 & 0x1f) != 7)) {
      lVar8 = 0;
    }
    lVar7 = lStack_90;
    if ((uVar1 != 0) && (lVar8 == 0)) {
      lVar8 = *(long *)(*(long *)(param_2[3] + 0x228) + lVar10 * 0x18 + 8);
      if (lVar8 == 0) {
        lVar8 = 0;
      }
      else {
        uVar3 = FUN_00428370(lVar8);
        if ((uVar3 & 1) != 0) {
          FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
          FUN_0043dd50(uVar3 & 0xfffffffffffffffe);
        }
        uVar3 = FUN_00428440(lVar8);
        lVar7 = lStack_90;
        if ((uVar3 & 0x1f) != 7) {
          lVar8 = 0;
        }
      }
    }
    lStack_90 = lVar8;
    if (uVar1 != 0) {
      lStack_90 = lVar7;
      if (*(long *)(*(long *)(param_2[3] + 0x228) + lVar10 * 0x18 + 8) == 0) {
        uVar3 = 0;
        bVar2 = true;
      }
      else {
        uVar3 = FUN_00428370();
        if ((uVar3 & 1) == 0) {
          bVar2 = true;
        }
        else {
          FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
          bVar2 = false;
        }
      }
      puVar6 = (undefined8 *)(*(long *)(param_2[3] + 0x228) + lVar10 * 0x18);
      local_78 = *puVar6;
      lStack_70 = puVar6[1];
      local_68 = 0;
      if (lStack_70 != 0) {
        local_68 = FUN_00428370();
      }
      if ((local_68 & 1) == 0) {
        local_80[0] = uVar1 & 0x7fffffff;
        FUN_004dc3c0(param_1,&local_78,param_2[3],local_80);
      }
      else {
        uVar9 = local_68 & 0xfffffffffffffffe;
        FUN_0043dd30(uVar9);
        local_80[0] = uVar1 & 0x7fffffff;
        FUN_004dc3c0(param_1,&local_78,param_2[3],local_80);
        FUN_0043dd50(uVar9);
      }
      if (bVar2) {
        return;
      }
      uVar3 = uVar3 & 0xfffffffffffffffe;
      goto LAB_004dac8c;
    }
    if (lStack_90 != 0) {
      local_98 = 0;
      local_88 = FUN_00428370();
      if ((local_88 & 1) == 0) {
        uVar4 = param_2[3];
        puVar6 = &local_98;
        puVar5 = local_a0;
        local_a0[0] = 0;
        goto LAB_004dacec;
      }
      uVar3 = local_88 & 0xfffffffffffffffe;
      FUN_0043dd30(uVar3);
      uVar4 = param_2[3];
      puVar6 = &local_98;
      puVar5 = local_a0;
      local_a0[0] = 0;
      goto LAB_004dabe0;
    }
  }
  lStack_90 = lVar7;
  local_b0 = 0;
  uStack_a8 = 0;
  puVar6 = &local_b8;
  local_b8 = 0;
  uVar4 = param_2[3];
  local_c0[0] = 0;
LAB_004dacec:
  FUN_004dc3c0(param_1,puVar6,uVar4,puVar5);
  return;
}

