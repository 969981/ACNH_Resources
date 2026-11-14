
void FUN_017fc190(long param_1,undefined4 *param_2,char param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint local_48;
  undefined4 local_44;
  uint local_28;
  undefined4 local_24;
  
  puVar2 = PTR_DAT_04bb46d0;
  uVar5 = 8;
  if (param_3 != '\x03') {
    uVar5 = 1;
  }
  uVar1 = 7;
  if (param_3 != '\x02') {
    uVar1 = uVar5;
  }
  uVar3 = FUN_017c2f80(*(undefined8 *)PTR_DAT_04bb46d0,uVar1);
  local_24 = 0;
  local_28 = 0x30ad;
  if (uVar3 != 0xfffe) {
    local_28 = uVar3;
  }
  local_28 = local_28 & 0xffff;
  FUN_0277d4ac(&local_28);
  uVar5 = *(undefined8 *)puVar2;
  *(uint *)(param_1 + 0xd0) = local_28;
  *(undefined4 *)(param_1 + 0xd4) = local_24;
  uVar3 = FUN_017c31f0(uVar5,uVar1);
  local_48 = 0x308f;
  if (uVar3 != 0xfffe) {
    local_48 = uVar3;
  }
  local_44 = 0;
  local_48 = local_48 & 0xffff;
  FUN_0277d4ac(&local_48);
  uVar5 = *(undefined8 *)puVar2;
  *(uint *)(param_1 + 0xb4) = local_48;
  *(undefined4 *)(param_1 + 0xb8) = local_44;
  uVar4 = FUN_017c3460(uVar5,uVar1);
  *param_2 = uVar4;
  uVar5 = *(undefined8 *)puVar2;
  *(undefined1 *)(param_1 + 0xfe) = 0;
  *(undefined1 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x100) = 2;
  FUN_017c36d0(uVar5,uVar1);
  FUN_017fc288();
  return;
}

