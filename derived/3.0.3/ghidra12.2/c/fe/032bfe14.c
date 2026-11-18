
void FUN_032bfe14(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_a0;
  char *pcStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined *local_60;
  undefined8 uStack_58;
  long local_38;
  
  puVar6 = PTR_DAT_04bc9198;
  puVar5 = PTR_DAT_04bc6338;
  puVar4 = PTR_PTR_04bb2238;
  local_38 = param_1[2];
  uStack_78 = *(undefined8 *)(param_2 + 8);
  plVar3 = *(long **)PTR_DAT_04bc9198;
  if (*(long **)(*(long *)PTR_DAT_04bc6338 + 0x88) != (long *)0x0) {
    plVar3 = *(long **)(*(long *)PTR_DAT_04bc6338 + 0x88);
  }
  puVar1 = PTR_DAT_04bc8e68 + 0x10;
  uStack_88 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
  local_90 = puVar1;
  local_80 = puVar1;
  (**(code **)(*plVar3 + 0x18))(auStack_70,plVar3,&local_80,&local_90);
  puVar2 = PTR_DAT_04bb8610 + 0x10;
  uStack_58 = local_68;
  local_60 = puVar2;
  FUN_032d67f0(&local_38,&local_60);
  local_60 = *(undefined **)(*param_1 + 0xf0);
  pcStack_98 = "L_HeadSub/T_00";
  local_a0 = puVar1;
  local_38 = FUN_032bff60(&local_60,&local_a0);
  if (local_38 != 0) {
    uStack_78 = *(undefined8 *)(param_2 + 8);
    uStack_88 = *(undefined8 *)(puVar4 + 8);
    plVar3 = *(long **)puVar6;
    if (*(long **)(*(long *)puVar5 + 0x88) != (long *)0x0) {
      plVar3 = *(long **)(*(long *)puVar5 + 0x88);
    }
    local_90 = puVar1;
    local_80 = puVar1;
    (**(code **)(*plVar3 + 0x18))(auStack_70,plVar3,&local_80,&local_90);
    uStack_58 = local_68;
    local_60 = puVar2;
    FUN_032d67f0(&local_38,&local_60);
  }
  return;
}

