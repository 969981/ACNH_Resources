
void FUN_004d9dc0(long param_1,long *param_2,int param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  byte *pbVar7;
  long lVar8;
  undefined8 uVar9;
  uint *puVar10;
  long local_a0;
  long lStack_98;
  ulong local_90;
  byte *local_88;
  byte *pbStack_80;
  long local_68;
  
  if (0 < param_3) {
    pbVar7 = (byte *)param_2[1];
    local_88 = pbVar7;
    if ((*pbVar7 & 1) == 0) {
      do {
        local_88 = *(byte **)(local_88 + 8);
      } while ((*local_88 & 1) == 0);
    }
    local_68 = (long)*(int *)(param_1 + 0x1f8);
    uVar9 = *(undefined8 *)PTR_PTR_04bd4d20;
    lVar4 = FUN_004705d0(param_1 + 0x48,uVar9,&local_88,&local_68);
    lVar4 = *(long *)(*(long *)(param_1 + 0x48) + ((lVar4 << 0x20) >> 0x1c) + 8);
    uVar2 = (uint)lVar4;
    if (*(uint *)(param_1 + 0x1f8) == uVar2) {
      if ((*(uint *)(param_1 + 0x1fc) & 0x3fffffff) == uVar2) {
        FUN_00426990(uVar9,param_1 + 0x1f0,0x10);
        uVar2 = *(uint *)(param_1 + 0x1f8);
      }
      *(uint *)(param_1 + 0x1f8) = uVar2 + 1;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x1f0) + (long)(int)uVar2 * 0x10);
      *puVar1 = 0;
      puVar1[1] = 0x8000000000000000;
    }
    plVar6 = (long *)(*(long *)(param_1 + 0x1f0) + ((lVar4 << 0x20) >> 0x1c));
    puVar10 = (uint *)(plVar6 + 1);
    uVar2 = *puVar10;
    if (uVar2 == (*(uint *)((long)plVar6 + 0xc) & 0x3fffffff)) {
      FUN_00426990(uVar9,plVar6,0x18);
      uVar2 = *puVar10;
    }
    plVar6 = (long *)(*plVar6 + (long)(int)uVar2 * 0x18);
    *puVar10 = uVar2 + 1;
    *(undefined4 *)(plVar6 + 2) = 0;
    *plVar6 = *param_2;
    uVar2 = param_6;
    if (param_5 != 0xffffffff) {
      uVar2 = param_5;
    }
    *(int *)(plVar6 + 1) = param_3;
    *(undefined4 *)((long)plVar6 + 0xc) = param_4;
    *(uint *)(plVar6 + 2) = uVar2 & 0x7fffffff | (uint)(param_5 == 0xffffffff) << 0x1f;
    uVar5 = FUN_00428440(pbVar7);
    if ((pbVar7 != (byte *)0x0) && ((uVar5 & 0x1f) == 7)) {
      FUN_00427c30(&local_88,pbVar7,0);
LAB_004d9f4c:
      while( true ) {
        if (local_88 + 8 < pbStack_80) goto code_r0x004d9f5c;
        uVar5 = FUN_00427c40(&local_88);
        if ((uVar5 & 1) == 0) break;
        uVar2 = FUN_004290b0(local_88);
        if ((uVar2 >> 5 & 1) != 0) goto LAB_004d9f84;
      }
    }
  }
  return;
code_r0x004d9f5c:
  local_88 = local_88 + 8;
  uVar2 = FUN_004290b0();
  if ((uVar2 >> 5 & 1) == 0) goto LAB_004d9f4c;
LAB_004d9f84:
  local_68 = *(long *)local_88;
  lVar8 = *param_2;
  iVar3 = FUN_00429050(&local_68);
  lVar4 = local_68;
  if (local_68 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00428370(local_68);
    if ((uVar5 & 1) != 0) {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      lStack_98 = lVar4;
      local_a0 = lVar8 + iVar3;
      local_90 = uVar5;
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      goto LAB_004d9fe8;
    }
  }
  lStack_98 = lVar4;
  local_a0 = lVar8 + iVar3;
  local_90 = uVar5;
LAB_004d9fe8:
  FUN_004d9dc0(param_1,&local_a0,param_3,param_4,param_5,param_6);
  if ((local_90 & 1) != 0) {
    FUN_0043dd50(local_90 & 0xfffffffffffffffe);
  }
  if ((uVar5 & 1) != 0) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  goto LAB_004d9f4c;
}

