
void FUN_004ca4b0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *local_f0;
  undefined8 *puStack_e8;
  ulong local_d0;
  long lStack_c8;
  undefined4 local_34;
  
  uVar2 = FUN_004274f0(param_2);
  if ((uVar2 >> 5 & 1) != 0) {
    return;
  }
  plVar6 = (long *)*param_1;
  if (0 < (int)plVar6[1]) {
    lVar8 = 0;
    lVar10 = 0;
    do {
      lVar5 = *plVar6;
      if (1 < *(ulong *)(lVar5 + lVar8)) {
        uVar7 = *(ulong *)(lVar5 + lVar8) & 0xfffffffffffffffe;
        iVar3 = FUN_0043c110();
        lStack_c8 = uVar7 + (long)iVar3;
        local_d0 = uVar7;
        uVar4 = FUN_00427270(param_2);
        FUN_004297c0(&local_f0,uVar4);
        uVar7 = FUN_00429cb0(&local_d0,&local_f0);
        if ((uVar7 & 1) != 0) {
          return;
        }
        plVar6 = (long *)*param_1;
        lVar5 = *plVar6;
      }
      if (param_2 == *(long *)(lVar5 + lVar8 + 0x10)) {
        return;
      }
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + 0x20;
    } while (lVar10 < (int)plVar6[1]);
  }
  uVar2 = *(uint *)(plVar6 + 1);
  if (uVar2 == (*(uint *)((long)plVar6 + 0xc) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,plVar6,0x20);
    uVar2 = *(uint *)(plVar6 + 1);
  }
  *(uint *)(plVar6 + 1) = uVar2 + 1;
  puVar1 = (undefined8 *)(*plVar6 + (long)(int)uVar2 * 0x20);
  *puVar1 = 0;
  FUN_0043be10(puVar1);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  puVar1[2] = param_2;
  puVar1[3] = 0;
  FUN_004225b0(&local_d0);
  uVar9 = param_1[1];
  uVar4 = FUN_00427570(param_2,&local_d0,0,0);
  FUN_0043bce0(&local_f0,uVar4,0xffffffff);
  local_34 = FUN_00427340(param_2);
  FUN_004c9cd0(uVar9,&local_f0,&local_34);
  FUN_0043be10(&local_f0);
  FUN_00427c30(&local_f0,param_2,0);
  do {
    if (local_f0 + 1 < puStack_e8) {
      local_f0 = local_f0 + 1;
      uVar7 = FUN_004290b0();
    }
    else {
      uVar7 = FUN_00427c40(&local_f0);
      if ((uVar7 & 1) == 0) {
        if (*(long *)(param_2 + 8) != 0) {
          FUN_004c94a0(param_1);
        }
        FUN_00422550(&local_d0);
        return;
      }
      uVar7 = FUN_004290b0(local_f0);
    }
    if ((uVar7 & 0x30) != 0) {
      FUN_004c94a0(param_1,*local_f0);
    }
  } while( true );
}

