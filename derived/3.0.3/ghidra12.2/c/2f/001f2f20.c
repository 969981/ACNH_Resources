
void FUN_001f2f20(undefined4 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_78 [8];
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined *local_40;
  undefined *puStack_38;
  long local_28;
  
  plVar1 = (long *)(param_1 + 0x76);
  (**(code **)(*(long *)(param_1 + 0x76) + 0x10))(plVar1);
  local_50 = DAT_0483d3d0;
  uStack_48 = DAT_0483d3d8;
  local_40 = PTR_LAB_0483d3e0;
  puStack_38 = PTR_LAB_0483d3e8;
  local_70 = PTR_LAB_0483d3b0;
  puStack_68 = PTR_LAB_0483d3b8;
  local_60 = PTR_LAB_0483d3c0;
  uStack_58 = DAT_0483d3c8;
  FUN_001f5100(*(undefined8 *)(param_1 + 0x56),&local_70);
  if (DAT_04be21f1 == '\0') {
    FUN_0018cb8c(&local_28);
  }
  else {
    FUN_0018c9b0(&local_28,0);
  }
  uVar3 = param_1[0x5e];
  uVar5 = (ulong)uVar3;
  uVar6 = (ulong)(uVar3 * 5);
  *(long *)PTR_DAT_04bcbcb0 = local_28;
  if ((int)uVar3 < 0) {
    uVar5 = -(ulong)-uVar3;
  }
  if ((int)uVar3 < 0) {
    uVar6 = -(ulong)(uVar3 * -5);
  }
  *(ulong *)(param_1 + 0x58) = uVar5 + local_28;
  *(ulong *)(param_1 + 0x5c) = uVar6 + local_28;
  if (param_3 != 0) {
    FUN_0018a5b8(*(long *)(param_1 + 0x52) + 0x10,param_2,param_3);
  }
  lVar2 = *(long *)(param_1 + 0x60);
  *param_1 = 0;
  if ((lVar2 != *(long *)(param_1 + 0x62)) &&
     (iVar4 = FUN_001f3970(param_1,lVar2,*(long *)(param_1 + 0x62) - lVar2,auStack_78), iVar4 == 0))
  {
    *(undefined8 *)(param_1 + 0x62) = *(undefined8 *)(param_1 + 0x60);
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}

