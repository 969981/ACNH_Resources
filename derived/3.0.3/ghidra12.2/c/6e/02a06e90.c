
void FUN_02a06e90(uint param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  ulong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  local_70 = *param_3;
  local_68 = *(undefined4 *)(param_3 + 1);
  local_80 = *param_3;
  lVar2 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0xb4510);
  local_78 = *(undefined4 *)(param_3 + 1);
  local_e8 = *(ulong *)(lVar2 + 0x130);
  local_e0 = CONCAT44(local_e0._4_4_,(int)*(undefined8 *)(lVar2 + 0x138));
  FUN_02a1e144(lVar2,&local_80,&local_70,&local_e8);
  if (param_5 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    local_b0 = *param_5;
    uStack_a0 = param_5[2];
    puVar3 = &local_b0;
    local_90 = param_5[4];
    _uStack_98 = CONCAT44(local_80._4_4_,(int)param_5[3]);
    _uStack_a8 = CONCAT44((undefined4)local_80,(int)param_5[1]);
    _uStack_88 = CONCAT44(local_78,(int)param_5[5]);
  }
  if (0 < *(int *)(param_2 + 0x18)) {
    iVar5 = 0;
    uVar4 = 0;
    do {
      local_e8 = (ulong)param_1;
      uStack_d8 = 0;
      local_c8 = local_80;
      local_c0 = local_78;
      local_bc = local_70;
      local_b4 = local_68;
      local_e0 = param_4;
      local_d0 = puVar3;
      uVar1 = FUN_02a08450(param_2 + 0x20,&local_e8);
      iVar5 = iVar5 + 1;
      uVar4 = uVar1 | uVar4;
    } while (iVar5 < *(int *)(param_2 + 0x18));
    if ((uVar4 & 1) != 0) {
      *(int *)(param_2 + 0x169c) = *(int *)(param_2 + 0x169c) + 1;
    }
  }
  return;
}

