
void FUN_03b1f234(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 local_a0 [2];
  long local_98;
  undefined4 local_90;
  long local_88;
  long lStack_80;
  undefined *local_78;
  long *plStack_70;
  ushort local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = 0;
  uVar5 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
  FUN_0034fb74(&local_60);
  lVar7 = *param_3;
  lVar1 = param_3[1];
  local_60 = CONCAT44(local_60._4_4_,0x22);
  lVar3 = FUN_003490ac(uVar5,&local_60);
  uVar6 = (lVar7 + lVar1 + lVar3) - 1U & -lVar3;
  uVar4 = FUN_003490a4(uVar5,&local_60);
  if (uVar6 != 0) {
    lVar7 = uVar6 << 1;
    local_58 = (**(code **)(*param_2 + 0x30))(param_2,lVar7,uVar4);
    *(undefined8 *)(param_1 + 0x1c0) = local_58;
    local_60 = CONCAT44((int)lVar7,(undefined4)local_60);
    local_50 = lVar7;
    FUN_003490c4(param_1,uVar5,&local_60);
  }
  puVar2 = PTR_LAB_04bd1da0;
  local_98 = *param_3;
  lStack_80 = 0;
  if (local_98 != 0) {
    local_90 = 2;
    local_68 = (ushort)param_3[2];
    local_a0[0] = 0x10;
    lStack_80 = 0;
    local_78 = PTR_LAB_04bd1da0;
    local_88 = param_1;
    plStack_70 = param_2;
    FUN_00351f90(param_1 + 0x120,uVar5,local_a0);
    lStack_80 = *param_3;
    *(undefined1 *)(param_1 + 0x1c9) = 1;
    lStack_80 = lStack_80 << 1;
  }
  local_98 = param_3[1];
  if (local_98 != 0) {
    local_a0[0] = 0x10;
    local_90 = 2;
    local_68 = (ushort)*(byte *)(param_3 + 2);
    local_78 = puVar2;
    local_88 = param_1;
    plStack_70 = param_2;
    FUN_00351f90(param_1 + 0x170,uVar5,local_a0);
    *(undefined1 *)(param_1 + 0x1ca) = 1;
  }
  return;
}

