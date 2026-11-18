
void FUN_032966bc(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  char *pcStack_80;
  long local_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined *local_60;
  char *pcStack_58;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined *local_40;
  undefined8 uStack_38;
  long local_18;
  
  puVar2 = PTR_DAT_04bc8e68;
  pcVar4 = *(char **)(param_1 + 0xe0);
  local_78 = param_1;
  if ((*pcVar4 != '\0') && (lVar3 = FUN_032a3a20(&local_78), lVar3 != 0)) {
    plVar1 = *(long **)PTR_DAT_04bc9198;
    if (*(long **)(*(long *)PTR_DAT_04bc6338 + 0x88) != (long *)0x0) {
      plVar1 = *(long **)(*(long *)PTR_DAT_04bc6338 + 0x88);
    }
    local_70 = puVar2 + 0x10;
    uStack_68 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
    local_60 = local_70;
    pcStack_58 = pcVar4;
    local_18 = lVar3;
    (**(code **)(*plVar1 + 0x18))(auStack_50,plVar1,&local_60,&local_70);
    local_40 = PTR_DAT_04bb8610 + 0x10;
    uStack_38 = local_48;
    FUN_032d67f0(&local_18,&local_40);
  }
  if (**(char **)(param_1 + 0xf0) != '\0') {
    local_88 = puVar2 + 0x10;
    pcStack_80 = *(char **)(param_1 + 0xf0);
    FUN_032a3b94(&local_78,&local_88);
  }
  pcStack_90 = *(char **)(param_1 + 0x100);
  if (*pcStack_90 != '\0') {
    local_98 = puVar2 + 0x10;
    FUN_032a3d60(&local_78,0,&local_98);
  }
  pcStack_90 = *(char **)(param_1 + 0x110);
  if (*pcStack_90 != '\0') {
    local_98 = puVar2 + 0x10;
    FUN_032a3d60(&local_78,1,&local_98);
  }
  pcStack_90 = *(char **)(param_1 + 0x120);
  if (*pcStack_90 != '\0') {
    local_98 = puVar2 + 0x10;
    FUN_032a3d60(&local_78,2,&local_98);
  }
  return;
}

