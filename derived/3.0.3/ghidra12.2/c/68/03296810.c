
void FUN_03296810(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *local_90;
  undefined8 *puStack_88;
  undefined *local_80;
  undefined8 *puStack_78;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  char *pcStack_58;
  
  puVar1 = PTR_DAT_04bc8e68;
  puVar4 = PTR_PTR_04bb2238;
  pcVar3 = PTR_DAT_04bb2120;
  lVar6 = param_1 + 0x250;
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x230) + 8) + 0xf0);
  pcVar2 = PTR_DAT_04bb2120;
  if (*(char **)(PTR_PTR_04bb2238 + 8) != (char *)0x0) {
    pcVar2 = *(char **)(PTR_PTR_04bb2238 + 8);
  }
  if (*pcVar2 != '\0') {
    local_60 = PTR_DAT_04bc8e68 + 0x10;
    pcStack_58 = pcVar2;
    lVar5 = FUN_032cb8e0(&local_70,&local_60);
    if (lVar5 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar5 + 0xe8);
    }
  }
  *(undefined8 *)(param_1 + 0x278) = uVar7;
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 0xb8);
  FUN_032c6ccc(lVar6);
  puVar1 = puVar1 + 0x10;
  pcStack_58 = "In";
  pcStack_68 = "In";
  puStack_78 = &DAT_0407ebb1;
  puStack_88 = &DAT_0407ebb1;
  local_90 = puVar1;
  local_80 = puVar1;
  local_70 = puVar1;
  local_60 = puVar1;
  FUN_032c7320(lVar6,&local_60,&local_70,&local_80,&local_90);
  pcStack_58 = "OutYes";
  pcStack_68 = "OutYes";
  puStack_78 = &DAT_0407ebb1;
  puStack_88 = &DAT_0407ebb1;
  local_90 = puVar1;
  local_80 = puVar1;
  local_70 = puVar1;
  local_60 = puVar1;
  FUN_032c7320(lVar6,&local_60,&local_70,&local_80,&local_90);
  pcStack_58 = "OutNo";
  pcStack_68 = "OutNo";
  puStack_78 = &DAT_0407ebb1;
  puStack_88 = &DAT_0407ebb1;
  local_90 = puVar1;
  local_80 = puVar1;
  local_70 = puVar1;
  local_60 = puVar1;
  FUN_032c7320(lVar6,&local_60,&local_70,&local_80,&local_90);
  FUN_032c6ccc(lVar6);
  pcStack_58 = "ContentsIn";
  pcStack_68 = "ContentsIn";
  puStack_78 = &DAT_0407ebb1;
  puStack_88 = &DAT_0407ebb1;
  local_90 = puVar1;
  local_80 = puVar1;
  local_70 = puVar1;
  local_60 = puVar1;
  FUN_032c7320(lVar6,&local_60,&local_70,&local_80,&local_90);
  pcStack_58 = "ContentsOut";
  pcStack_68 = "ContentsOut";
  puStack_78 = &DAT_0407ebb1;
  puStack_88 = &DAT_0407ebb1;
  local_90 = puVar1;
  local_80 = puVar1;
  local_70 = puVar1;
  local_60 = puVar1;
  FUN_032c7320(lVar6,&local_60,&local_70,&local_80,&local_90);
  FUN_032c83b0(lVar6,0,0);
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x230) + 8) + 0xf0);
  if (*(char **)(puVar4 + 8) != (char *)0x0) {
    pcVar3 = *(char **)(puVar4 + 8);
  }
  if (*pcVar3 != '\0') {
    local_60 = puVar1;
    pcStack_58 = pcVar3;
    lVar6 = FUN_032cb8e0(&local_70,&local_60);
    if (lVar6 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar6 + 0xe8);
    }
  }
  lVar6 = param_1 + 0x2a8;
  *(undefined8 *)(param_1 + 0x2d0) = uVar7;
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_1 + 0xb8);
  FUN_032c6ccc(lVar6);
  pcStack_58 = "InEffect";
  pcStack_68 = "InEffect";
  puStack_78 = &DAT_0407ebb1;
  puStack_88 = &DAT_0407ebb1;
  local_90 = puVar1;
  local_80 = puVar1;
  local_70 = puVar1;
  local_60 = puVar1;
  FUN_032c7320(lVar6,&local_60,&local_70,&local_80,&local_90);
  FUN_032c83b0(lVar6,0,0);
  return;
}

