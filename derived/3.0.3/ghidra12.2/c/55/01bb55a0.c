
undefined8 FUN_01bb55a0(long *param_1,long *param_2,ulong param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint local_6c;
  uint local_68 [2];
  long local_60 [3];
  ulong local_48;
  long local_40;
  long lStack_38;
  
  local_60[2] = *(long *)(param_3 + 0x18);
  lStack_38 = local_60[2] + (ulong)*(ushort *)(param_3 + 0x10);
  local_48 = param_3;
  local_40 = local_60[2];
  FUN_006f4120(local_60 + 2,local_60,local_68,2);
  uVar3 = *(ushort *)(param_3 + 0xe);
  uVar4 = *(ushort *)(param_3 + 0xc);
  local_60[2] = (long)CONCAT24(uVar3,(uint)uVar4);
  for (lVar11 = **(long **)(DAT_0533ec08 + 0x29d0); lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
    while( true ) {
      uVar1 = *(uint *)(lVar11 + 0x20);
      uVar9 = (uint)uVar4;
      if ((uVar4 <= uVar1 && uVar1 != uVar9) ||
         (((uVar1 == uVar9 && (uVar2 = *(uint *)(lVar11 + 0x24), uVar3 <= uVar2 && uVar2 != uVar3))
          && (uVar2 != 0xffffffff)))) break;
      if ((uVar9 <= uVar1) && ((uint)uVar3 <= *(uint *)(lVar11 + 0x24))) {
        if (*(code **)(lVar11 + 0x58) == (code *)0x0) goto LAB_01bb5664;
        uVar5 = (**(code **)(lVar11 + 0x58))(param_3);
        local_48 = CONCAT44(local_48._4_4_,uVar5);
        goto joined_r0x01bb56d8;
      }
      lVar11 = *(long *)(lVar11 + 0x10);
      if (lVar11 == 0) goto LAB_01bb5664;
    }
  }
LAB_01bb5664:
  local_48 = local_48 & 0xffffffff00000000;
joined_r0x01bb56d8:
  if (param_4 == 0) {
    uVar8 = 0;
  }
  else {
    plVar6 = (long *)FUN_01bc06e0(param_4,local_60 + 2,1);
    uVar8 = 0;
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x20))();
      piVar7 = (int *)(**(code **)(*plVar6 + 0x48))();
      uVar8 = 0;
      if (piVar7 != (int *)0x0) {
        local_6c = 0;
        if (*piVar7 == 2) {
          uVar8 = 1;
          local_6c = 1;
        }
        else {
          uVar8 = 0;
          if (*piVar7 == 1) {
            uVar8 = 1;
          }
        }
        uVar10 = (ulong)local_6c;
        if (1 < local_6c) {
          uVar10 = 0;
        }
        lVar11 = local_60[uVar10];
        *param_1 = lVar11;
        uVar10 = (ulong)local_6c;
        if (1 < local_6c) {
          uVar10 = 0;
        }
        *param_2 = lVar11 + (ulong)local_68[uVar10] * 2;
      }
    }
  }
  return uVar8;
}

