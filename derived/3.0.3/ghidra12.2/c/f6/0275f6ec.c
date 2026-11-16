
void FUN_0275f6ec(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined4 local_c8 [2];
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined *local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_1 != 0) {
    local_60 = 0;
    local_98 = 0;
    local_80 = 0;
    local_78 = 0;
    local_90 = PTR_DAT_04bc3858 + 0x10;
    local_70 = 0;
    local_68 = 0;
    local_88 = 0;
    local_58 = 0;
    local_a8 = 0;
    uStack_a0 = 0xc83d5228;
    local_b8 = 0x8b37691;
    uStack_b0 = DAT_0417b578;
    local_c8[0] = 3;
    local_c0 = &local_b8;
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_0272d760(param_1 + 8,&local_58,local_c8);
    if (((local_58 != 0) && (*(int *)(local_58 + 0x2c) == 1)) && (*(long *)(param_1 + 0x30) != 0)) {
      local_88 = local_58;
      local_80 = local_50;
      local_78 = uStack_48;
      local_70 = local_40;
      local_68 = uStack_38;
      local_60 = *(long *)(param_1 + 0x30);
    }
    lVar2 = FUN_027ebd78(&local_90);
    local_58 = *(long *)(lVar2 + 8);
    local_50 = *(undefined8 *)(lVar2 + 0x10);
    uVar1 = FUN_0272e334(&local_58,0xc5367718);
    puVar3 = (undefined2 *)FUN_0272e550(&local_88,local_60,uVar1,0x38b,0);
    puVar4 = (undefined2 *)FUN_0272e550(&local_88,local_60,uVar1,0x5b0,0);
    if ((puVar3 != (undefined2 *)0x0) && (puVar4 != (undefined2 *)0x0)) {
      *puVar4 = *puVar3;
    }
    puVar3 = (undefined2 *)FUN_0272e550(&local_88,local_60,uVar1,0x3b5,0);
    puVar4 = (undefined2 *)FUN_0272e550(&local_88,local_60,uVar1,0x5b9,0);
    if ((puVar3 != (undefined2 *)0x0) && (puVar4 != (undefined2 *)0x0)) {
      *puVar4 = *puVar3;
    }
    puVar3 = (undefined2 *)FUN_0272e550(&local_88,local_60,uVar1,0x38b,0);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = (undefined2 *)FUN_0272e550(&local_88,local_60,uVar1,0x3a1,0);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = (undefined2 *)FUN_0272e550(&local_88,local_60,uVar1,0x3a2,0);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = (undefined2 *)FUN_0272e550(&local_88,local_60,uVar1,0x3b1,0);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = (undefined2 *)FUN_0272e550(&local_88,local_60,uVar1,0x3e0,0);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = (undefined2 *)FUN_0272e550(&local_88,local_60,uVar1,0x434,0);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  return;
}

