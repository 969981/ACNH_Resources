
void FUN_033654d4(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  undefined **local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 local_88 [4];
  byte *local_80;
  undefined8 uStack_78;
  undefined ***local_70;
  undefined *puStack_68;
  char *local_60;
  undefined *local_58;
  char *local_50;
  undefined *local_48;
  char *local_40;
  long *plStack_38;
  
  pbVar5 = (byte *)(param_1 + 1);
  plVar1 = param_1 + 3;
  *pbVar5 = *pbVar5 & 0xfd;
  FUN_03f45838(plVar1);
  if (param_1[2] != 0) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,param_1[2],0);
    param_1[2] = 0;
  }
  pcVar3 = (char *)(**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)(*param_1 + 0x18))(param_1);
  puVar2 = PTR_DAT_04bb2120;
  if (pcVar3 != (char *)0x0) {
    local_90 = 0;
    local_98 = 1;
    puStack_c0 = PTR_DAT_04bb2020 + 0x10;
    local_c8 = &PTR_LAB_04b206a8;
    local_a8 = PTR_DAT_04bb2120;
    uStack_a0 = 0;
    local_b8 = PTR_DAT_04bb2120;
    puStack_b0 = puStack_c0;
    if ((*pbVar5 >> 1 & 1) == 0) {
      local_70 = &local_c8;
      local_88[0] = 0;
      *pbVar5 = *pbVar5 | 2;
      uStack_78 = 0;
      local_60 = puVar2;
      if (*pcVar3 != '\0') {
        local_60 = pcVar3;
      }
      local_40 = "SwkbdObject";
      local_80 = pbVar5;
      puStack_68 = puStack_c0;
      local_58 = puStack_c0;
      local_50 = local_60;
      local_48 = puStack_c0;
      plStack_38 = plVar1;
      FUN_03839ca0(*(undefined8 *)PTR_DAT_04bcb3d8,local_88,0);
    }
  }
  *(undefined1 *)(param_1 + 7) = 0;
  iVar4 = (int)param_1[4];
  if ((param_1[5] != 0) && (iVar4 == 1)) {
    FUN_03f459a0(plVar1);
    iVar4 = (int)param_1[4];
  }
  if (((*pbVar5 & 3) == 2) && (iVar4 == 2)) {
    FUN_038386d0(pbVar5);
    *(undefined1 *)(param_1 + 7) = 1;
  }
  return;
}

