
void FUN_0045cec0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  char **ppcVar8;
  ulong uVar9;
  long *plVar10;
  ulong *puVar11;
  undefined8 uVar12;
  char *local_f78;
  long local_f70;
  ulong local_f68;
  char *local_f38;
  char *pcStack_f30;
  undefined *local_e88;
  undefined *puStack_e80;
  undefined *local_e08;
  undefined *local_df0;
  undefined *local_dc0;
  undefined *local_db0;
  undefined8 *local_cb0;
  undefined1 **local_ca8;
  undefined8 local_ca0;
  undefined8 *local_c98;
  long local_c90;
  long local_c88;
  ulong local_c80;
  undefined1 *local_c78;
  undefined8 local_c70;
  undefined1 auStack_c68 [3080];
  
  local_c78 = auStack_c68;
  local_c70 = 0x8000004000000000;
  uVar2 = FUN_004274f0(param_3[1]);
  if ((uVar2 >> 3 & 1) != 0) {
    FUN_00427c30(&local_f38,param_2[1],0);
    uVar12 = *(undefined8 *)PTR_PTR_04bd4d20;
LAB_0045d014:
    while( true ) {
      if (local_f38 + 8 < pcStack_f30) goto code_r0x0045d024;
      uVar9 = FUN_00427c40(&local_f38);
      if ((uVar9 & 1) == 0) break;
      uVar9 = FUN_004290b0(local_f38);
      if ((uVar9 & 0x30) != 0) goto LAB_0045d054;
    }
    goto LAB_0045d25c;
  }
  lVar6 = FUN_00461bf0(param_1 + 0xb,param_2[1],param_3[1]);
  if (lVar6 == 0) {
    if (1 < DAT_04c70110) {
      FUN_00444bc0(&local_f38,&DAT_04c700c0,2);
      if (param_3[1] == 0) {
        local_f78 = "<No name>";
      }
      else {
        local_f78 = (char *)FUN_00427270();
      }
      lVar6 = FUN_004446b0(&local_f38,"Cannot compile type {}",PTR_DAT_04bd4928,&local_f78);
      *(char **)(lVar6 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
      ;
      *(undefined8 *)(lVar6 + 0x30) = 0x17c;
      ppcVar8 = &local_f38;
LAB_0045d340:
      FUN_00444c00(ppcVar8);
    }
  }
  else {
    FUN_00466aa0(&local_f38);
    local_e88 = PTR_FUN_04bd5ac8;
    puStack_e80 = PTR_LAB_04bd5af0;
    local_df0 = PTR_LAB_04bd5ae8;
    local_ca8 = &local_c78;
    local_cb0 = param_1 + 7;
    local_e08 = PTR_LAB_04bd5ad0;
    local_db0 = PTR_LAB_04bd5ae0;
    local_dc0 = PTR_LAB_04bd5af8;
    local_ca0 = *param_1;
    uVar12 = *param_3;
    local_c98 = param_1;
    uVar3 = FUN_00426fc0(param_3[1]);
    uVar7 = *param_2;
    uVar4 = FUN_00426fc0(param_2[1]);
    iVar5 = FUN_0045d430(&local_f38,lVar6,uVar12,uVar3,uVar7,uVar4,uVar4,uVar3,1);
    if (-1 < iVar5) {
      FUN_00458880(param_1[6],param_3);
LAB_0045d25c:
      FUN_0045c850(param_1,local_c78,local_c70 & 0xffffffff);
      iVar5 = (uint)local_c70;
      goto joined_r0x0045d358;
    }
    if (1 < DAT_04c70110) {
      FUN_00444bc0(&local_f78,&DAT_04c700c0,2);
      lVar6 = FUN_004446b0(&local_f78,"Cannot copy object",PTR_DAT_04bd4920);
      *(char **)(lVar6 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
      ;
      *(undefined8 *)(lVar6 + 0x30) = 0x186;
      ppcVar8 = &local_f78;
      goto LAB_0045d340;
    }
  }
  *(undefined4 *)(param_1 + 1) = 0x80040200;
  iVar5 = (uint)local_c70;
joined_r0x0045d358:
  if (0 < iVar5) {
    puVar11 = (ulong *)(local_c78 + (long)iVar5 * 0x30 + -0x20);
    do {
      while ((puVar11[3] & 1) != 0) {
        FUN_0043dd50(puVar11[3] & 0xfffffffffffffffe);
        uVar9 = *puVar11;
        if ((uVar9 & 1) != 0) goto LAB_0045d3a0;
LAB_0045d380:
        iVar5 = iVar5 + -1;
        puVar11 = puVar11 + -6;
        if (iVar5 == 0) goto LAB_0045d3b4;
      }
      uVar9 = *puVar11;
      if ((uVar9 & 1) == 0) goto LAB_0045d380;
LAB_0045d3a0:
      FUN_0043dd50(uVar9 & 0xfffffffffffffffe);
      iVar5 = iVar5 + -1;
      puVar11 = puVar11 + -6;
    } while (iVar5 != 0);
  }
LAB_0045d3b4:
  uVar9 = local_c70;
  uVar2 = local_c70._4_4_;
  local_c70 = (ulong)local_c70._4_4_ << 0x20;
  if ((-1 < (long)uVar9) && (local_c78 != (undefined1 *)0x0)) {
    FUN_00421f90(*(undefined8 *)PTR_PTR_04bd4d20,local_c78,0x30,uVar2 & 0x3fffffff);
  }
  return;
code_r0x0045d024:
  local_f38 = local_f38 + 8;
  uVar9 = FUN_004290b0();
  if ((uVar9 & 0x30) == 0) goto LAB_0045d014;
LAB_0045d054:
  FUN_0043f280(&local_f78,param_2,*(undefined8 *)local_f38);
  uVar7 = FUN_00427b40(local_f38);
  FUN_0043f220(&local_c90,param_3,uVar7);
  if (local_c90 == 0) goto joined_r0x0045d238;
  uVar2 = FUN_00428440(local_c88);
  uVar2 = uVar2 & 0x1f;
  if (uVar2 != 8) {
    if (uVar2 == 6) {
      if ((uint)local_c70 == (local_c70._4_4_ & 0x3fffffff)) {
        FUN_00426990(uVar12,&local_c78,0x30);
      }
      puVar1 = local_c78;
      iVar5 = (int)local_c70;
      plVar10 = (long *)(local_c78 + (long)iVar5 * 0x30);
      *plVar10 = 0;
      plVar10[1] = 0;
      plVar10[2] = 0;
      lVar6 = (long)iVar5;
      if ((local_c88 != 0) && (uVar9 = FUN_00428440(), (uVar9 & 0x1f) == 6)) {
        *plVar10 = local_c90;
        plVar10[1] = local_c88;
        if ((local_c80 & 1) != 0) {
          FUN_0043dd30(local_c80 & 0xfffffffffffffffe);
        }
        uVar9 = *(ulong *)(puVar1 + lVar6 * 0x30 + 0x10);
        if ((uVar9 & 1) != 0) {
          FUN_0043dd50(uVar9 & 0xfffffffffffffffe);
        }
        *(ulong *)(puVar1 + lVar6 * 0x30 + 0x10) = local_c80;
      }
      *(undefined8 *)(puVar1 + lVar6 * 0x30 + 0x18) = 0;
      *(undefined8 *)(puVar1 + lVar6 * 0x30 + 0x20) = 0;
      *(undefined8 *)(puVar1 + lVar6 * 0x30 + 0x28) = 0;
      if ((local_f70 != 0) && (uVar9 = FUN_00428440(), (uVar9 & 0x1f) == 6)) {
        *(char **)(puVar1 + lVar6 * 0x30 + 0x18) = local_f78;
        *(long *)(puVar1 + lVar6 * 0x30 + 0x20) = local_f70;
        if ((local_f68 & 1) != 0) {
          FUN_0043dd30(local_f68 & 0xfffffffffffffffe);
        }
        uVar9 = *(ulong *)(puVar1 + lVar6 * 0x30 + 0x28);
        if ((uVar9 & 1) != 0) {
          FUN_0043dd50(uVar9 & 0xfffffffffffffffe);
        }
        *(ulong *)(puVar1 + lVar6 * 0x30 + 0x28) = local_f68;
      }
      local_c70 = CONCAT44(local_c70._4_4_,iVar5 + 1);
      goto joined_r0x0045d238;
    }
    if (uVar2 != 3) {
      FUN_0045b0e0(param_1,&local_f78,&local_c90);
      goto joined_r0x0045d238;
    }
  }
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 == (*(uint *)((long)param_1 + 0x44) & 0x3fffffff)) {
    FUN_00426990(uVar12,param_1 + 7,0x30);
    uVar2 = *(uint *)(param_1 + 8);
  }
  lVar6 = param_1[7];
  plVar10 = (long *)(lVar6 + (long)(int)uVar2 * 0x30);
  *plVar10 = local_c90;
  plVar10[1] = local_c88;
  plVar10[2] = local_c80;
  if ((local_c80 & 1) != 0) {
    FUN_0043dd30(local_c80 & 0xfffffffffffffffe);
  }
  lVar6 = lVar6 + (long)(int)uVar2 * 0x30;
  *(char **)(lVar6 + 0x18) = local_f78;
  *(long *)(lVar6 + 0x20) = local_f70;
  *(ulong *)(lVar6 + 0x28) = local_f68;
  if ((local_f68 & 1) != 0) {
    FUN_0043dd30(local_f68 & 0xfffffffffffffffe);
  }
  *(uint *)(param_1 + 8) = uVar2 + 1;
joined_r0x0045d238:
  if ((local_c80 & 1) != 0) {
    FUN_0043dd50(local_c80 & 0xfffffffffffffffe);
  }
  if ((local_f68 & 1) != 0) {
    FUN_0043dd50(local_f68 & 0xfffffffffffffffe);
  }
  goto LAB_0045d014;
}

