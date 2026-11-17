
void FUN_02a07000(long param_1,undefined1 *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  puVar3 = *(undefined8 **)(param_2 + 0x20);
  local_60 = *puVar3;
  local_58 = *(undefined4 *)(puVar3 + 1);
  local_70 = *puVar3;
  local_68 = *(undefined4 *)(puVar3 + 1);
  lVar2 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0xb4510);
  local_d8 = *(undefined8 *)(lVar2 + 0x130);
  local_d0 = CONCAT44(local_d0._4_4_,(int)*(undefined8 *)(lVar2 + 0x138));
  FUN_02a1e144(lVar2,&local_70,&local_60,&local_d8,*param_2);
  puVar3 = *(undefined8 **)(param_2 + 0x28);
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    local_a0 = *puVar3;
    uStack_90 = puVar3[2];
    puVar4 = &local_a0;
    local_80 = puVar3[4];
    _uStack_88 = CONCAT44(local_70._4_4_,(int)puVar3[3]);
    _uStack_98 = CONCAT44((undefined4)local_70,(int)puVar3[1]);
    _uStack_78 = CONCAT44(local_68,(int)puVar3[5]);
  }
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar6 = 0;
    uVar5 = 0;
    do {
      local_d0 = *(undefined8 *)(param_2 + 0x10);
      uStack_c8 = *(undefined8 *)(param_2 + 0x18);
      local_d8 = *(undefined8 *)(param_2 + 4);
      local_b8 = local_70;
      local_b0 = local_68;
      local_ac = local_60;
      local_a4 = local_58;
      local_c0 = puVar4;
      uVar1 = FUN_02a08450(param_1 + 0x20,&local_d8);
      iVar6 = iVar6 + 1;
      uVar5 = uVar1 | uVar5;
    } while (iVar6 < *(int *)(param_1 + 0x18));
    if ((uVar5 & 1) != 0) {
      *(int *)(param_1 + 0x169c) = *(int *)(param_1 + 0x169c) + 1;
    }
  }
  return;
}

