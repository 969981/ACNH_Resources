
void FUN_00bbe398(undefined8 param_1,long param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  char *local_a0;
  undefined *puStack_98;
  uint local_90;
  undefined8 local_8c;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined6 uStack_58;
  undefined2 local_52;
  undefined6 uStack_50;
  undefined8 local_48;
  
  local_8c = 0;
  local_a0 = "STR_Select_Talk";
  puStack_98 = &DAT_040a0745;
  lVar4 = *(long *)(*(long *)(param_2 + 0x28) + 0x10);
  puVar1 = (undefined4 *)(lVar4 + 8) + (ulong)*(uint *)(lVar4 + 0xa88) * 0x60;
  if (6 < *(uint *)(lVar4 + 0xa88)) {
    puVar1 = (undefined4 *)(lVar4 + 8);
  }
  *puVar1 = 0xffffffff;
  local_90 = param_3;
  (**(code **)(*(long *)(puVar1 + 2) + 0x38))();
  puVar1[0x5d] = 0;
  *puVar1 = 0;
  puVar1[0x5a] = param_3;
  puVar1[0x5b] = 0;
  FUN_01b9be60(puVar1,&local_a0);
  local_48 = 0;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_60 = 0;
  uStack_58 = 0;
  local_52 = 0;
  uStack_50 = 0;
  pcStack_68 = "STR_Select_Talk";
  puStack_78 = &DAT_040a0745;
  local_70 = local_80;
  FUN_01b970f0(&local_60,&local_70);
  FUN_01b9735c(&local_60,&local_70,&local_80);
  uVar2 = FUN_01b97400(&local_60);
  puVar1[0x5c] = uVar2;
  uVar3 = (ulong)param_3;
  if (2 < param_3) {
    uVar3 = 0;
  }
  *(int *)(lVar4 + 0xa88) = *(int *)(lVar4 + 0xa88) + 1;
  (&DAT_05453f10)[uVar3] = 0x11;
  return;
}

