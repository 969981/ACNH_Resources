
void FUN_02ce1ec8(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  ulong uVar5;
  undefined *puVar6;
  void *__s;
  undefined8 *puVar7;
  undefined8 uVar8;
  int *piVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined8 local_68;
  undefined *puStack_60;
  int local_44;
  
  plVar10 = (long *)(param_1 + 0xf000);
  *(int *)(param_1 + 0xc) = param_2;
  local_44 = param_2;
  __s = (void *)(**(code **)(*plVar10 + 0x18))(plVar10);
  memset(__s,0,0x468);
  puVar7 = (undefined8 *)(**(code **)(*(long *)(param_1 + 0x150) + 0x18))(param_1 + 0x150);
  *puVar7 = 0;
  switch(local_44) {
  case 0:
    ppuVar11 = &PTR_FUN_04b2a200;
    break;
  default:
    goto switchD_02ce1f4c_caseD_1;
  case 0x1d:
    ppuVar11 = &PTR_FUN_04b2a250;
    break;
  case 0x1e:
    ppuVar11 = &PTR_FUN_04b2a278;
    break;
  case 0x1f:
    ppuVar11 = &PTR_FUN_04b2a2a0;
    break;
  case 0x20:
    ppuVar11 = &PTR_FUN_04b2a2c8;
    break;
  case 0x21:
    ppuVar11 = &PTR_FUN_04b2a2f0;
    break;
  case 0x22:
    ppuVar11 = &PTR_FUN_04b2a318;
    break;
  case 0x23:
    ppuVar11 = &PTR_FUN_04b2a340;
    break;
  case 0x24:
    ppuVar11 = &PTR_FUN_04b2a368;
  }
  local_68 = ppuVar11;
  FUN_02ce2200(param_1 + 0x150,&local_68);
  local_68 = ppuVar11;
  FUN_02ce2380(plVar10,&local_68);
switchD_02ce1f4c_caseD_1:
  puVar6 = PTR_LAB_04bc5dc0;
  lVar1 = param_1 + 0x158;
  local_68 = &PTR_LAB_04ab89c0;
  puStack_60 = PTR_LAB_04bc5dc0;
  (**(code **)(*(long *)(param_1 + 0x158) + 0x20))(lVar1);
  uVar8 = (**(code **)(*(long *)(param_1 + 0x158) + 0x10))(lVar1);
  FUN_02ceebc0(uVar8,&local_68);
  plVar10 = (long *)(param_1 + 0xf008);
  local_68 = &PTR_LAB_04ab89c0;
  puStack_60 = puVar6;
  (**(code **)(*plVar10 + 0x20))(plVar10);
  uVar8 = (**(code **)(*plVar10 + 0x10))(plVar10);
  FUN_02ceebc0(uVar8,&local_68);
  FUN_02cdff48(param_1 + 0x78,local_44);
  FUN_02ce119c(param_1 + 0x10,local_44);
  bVar4 = *(byte *)(param_1 + 0x4c);
  *(uint *)(param_1 + 0x68a50) = -(uint)(bVar4 == 0);
  *(uint *)(param_1 + 0x68a54) = (uint)bVar4;
  iVar2 = *(int *)(param_1 + 0x148) + (uint)bVar4;
  piVar9 = (int *)(**(code **)(*(long *)(param_1 + 0x158) + 0x18))(lVar1);
  iVar3 = *piVar9;
  if (iVar3 < 1) {
    *(undefined4 *)(param_1 + 0x68a58) = 0xffffffff;
    piVar9 = (int *)(**(code **)(*plVar10 + 0x18))(plVar10);
    if (*piVar9 != 0) {
      *(int *)(param_1 + 0x68a5c) = iVar2;
      goto joined_r0x02ce20ec;
    }
  }
  else {
    *(int *)(param_1 + 0x68a58) = iVar2;
    piVar9 = (int *)(**(code **)(*plVar10 + 0x18))(plVar10);
    if (*piVar9 != 0) {
      *(int *)(param_1 + 0x68a5c) = *(int *)(param_1 + 0x68a58) + iVar3;
      goto joined_r0x02ce20ec;
    }
  }
  *(undefined4 *)(param_1 + 0x68a5c) = 0xffffffff;
joined_r0x02ce20ec:
  if (local_44 == 0) {
    FUN_02ce2510(param_1,0);
    FUN_02ce2510(param_1,1);
    FUN_02ce2510(param_1,2);
    FUN_02ce2510(param_1,3);
    FUN_02ce2510(param_1,4);
    FUN_02ce2510(param_1,5);
    FUN_02ce2510(param_1,6);
    FUN_02ce2510(param_1,7);
    FUN_02ce2510(param_1,8);
    uVar8 = 9;
  }
  else {
    *(undefined4 *)(param_1 + 0x68a6c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x68a7c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x68a8c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x68a9c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x68aac) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x68abc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x68acc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x68adc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x68aec) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x68afc) = 0xffffffff;
    if (local_44 == 0x1e) {
      FUN_02ce2510(param_1,1);
      uVar8 = 2;
    }
    else {
      uVar5 = (ulong)local_68 >> 0x20;
      local_68 = (undefined **)CONCAT44((int)uVar5,local_44);
      if (local_44 - 0x1dU < 8) {
        uVar8 = *(undefined8 *)(&DAT_04180478 + (long)(int)(local_44 - 0x1dU) * 8);
      }
      else {
        uVar8 = 0xffffffff;
      }
    }
  }
  FUN_02ce2510(param_1,uVar8);
  return;
}

