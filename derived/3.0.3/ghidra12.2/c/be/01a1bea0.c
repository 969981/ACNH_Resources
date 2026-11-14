
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01a1bea0(float param_1,uint param_2,uint param_3,undefined1 *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  undefined *local_d8;
  uint local_d0;
  uint uStack_cc;
  undefined **local_c8;
  undefined **local_c0;
  undefined *local_b8;
  uint local_b0;
  uint local_ac;
  undefined *local_a8;
  undefined *puStack_a0;
  uint local_98;
  uint uStack_94;
  undefined *local_90;
  int local_88;
  int iStack_84;
  undefined **local_80;
  int local_78;
  int iStack_74;
  
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  local_d8 = puVar2;
  local_d0 = param_2;
  uStack_cc = param_3;
  uVar4 = FUN_01a198c0(&local_d8,*param_4);
  puVar3 = PTR_DAT_04bb27c8;
  if ((uVar4 & 1) == 0) {
LAB_01a1c110:
    uVar5 = 0;
  }
  else {
    param_2 = param_2 - ((param_2 & 0x80000001) == 1);
    local_ac = param_3 - ((param_3 & 0x80000001) == 1);
    local_a8 = PTR_DAT_04bbc1a0 + 0x10;
    local_c8 = &puStack_a0;
    local_c0 = &local_90;
    local_88 = param_2 + 1;
    iStack_84 = local_ac + 1;
    uVar1 = local_ac + 2;
    local_b8 = puVar2;
    local_b0 = param_2;
    puStack_a0 = puVar2;
    local_98 = param_2;
    uStack_94 = local_ac;
    local_90 = puVar2;
    do {
      local_78 = 0;
      local_80 = (undefined **)0x0;
      local_80 = (undefined **)0x20;
      local_78 = 0;
      lVar6 = *(long *)puVar3;
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa8) != 0)) {
        uVar4 = FUN_00949898(lVar6 + 0x28,&local_b8,&local_80);
        if ((uVar4 & 1) != 0) goto LAB_01a1c110;
        lVar6 = *(long *)puVar3;
      }
      if ((((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0xa8), lVar6 != 0)) && (-1 < (int)local_b0))
         && ((-1 < (int)local_ac &&
             (local_b0 < *(uint *)(lVar6 + 0x38) && local_ac < *(uint *)(lVar6 + 0x3c))))) {
        uVar7 = local_b0 + *(uint *)(lVar6 + 0x38) * local_ac;
        if ((uVar7 < *(uint *)(lVar6 + 0x68) && *(long *)(lVar6 + 0x70) != 0) &&
           ((*(uint *)(*(long *)(lVar6 + 0x70) + (long)(int)uVar7 * 4) >> 3 & 1) != 0))
        goto LAB_01a1c110;
      }
      local_80 = &PTR_FUN_048f9730;
      fVar8 = (float)(int)local_b0 * 0.5;
      uVar7 = 0;
      if (fVar8 != (float)(int)fVar8) {
        uVar7 = (uint)(fVar8 < 0.0);
      }
      local_78 = (int)fVar8 - uVar7;
      fVar8 = (float)(int)local_ac * 0.5;
      uVar7 = 0;
      if (fVar8 != (float)(int)fVar8) {
        uVar7 = (uint)(fVar8 < 0.0);
      }
      iStack_74 = (int)fVar8 - uVar7;
      uVar4 = FUN_01318220(&local_80);
      if (((uVar4 & 1) != 0) || (fVar8 = (float)FUN_01a1c140(&local_b8), param_1 < fVar8))
      goto LAB_01a1c110;
      if ((int)local_b0 < *(int *)(local_c0 + 1)) {
        local_b0 = local_b0 + 1;
      }
      else {
        local_ac = local_ac + 1;
        local_b0 = *(uint *)(local_c8 + 1);
      }
    } while ((param_2 != local_b0) || (uVar1 != local_ac));
    uVar5 = 1;
  }
  return uVar5;
}

