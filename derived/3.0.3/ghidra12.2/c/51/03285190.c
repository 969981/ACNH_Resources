
void FUN_03285190(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_58 [8];
  undefined *local_50;
  char *pcStack_48;
  
  *(undefined4 *)(param_2 + 0x760) = param_1;
  puVar1 = PTR_PTR_04bb2238;
  pcStack_48 = *(char **)(PTR_PTR_04bb2238 + 8);
  if (*pcStack_48 == '\0') {
    lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x390) + 0xf0) + 0x18);
  }
  else {
    local_50 = &DAT_04b177a8;
    lVar2 = FUN_032cb8e0(auStack_58,&local_50,*(undefined8 *)(*(long *)(param_2 + 0x390) + 0xf0));
    pcStack_48 = *(char **)(puVar1 + 8);
  }
  *(undefined4 *)(lVar2 + 0x48) = param_1;
  *(undefined4 *)(lVar2 + 0x4c) = param_1;
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x10;
  uVar3 = *(undefined4 *)(param_2 + 0x764);
  fVar4 = *(float *)(param_2 + 0x768);
  fVar5 = *(float *)(param_2 + 0x760);
  if (*pcStack_48 == '\0') {
    lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x390) + 0xf0) + 0x18);
  }
  else {
    local_50 = &DAT_04b177a8;
    lVar2 = FUN_032cb8e0(auStack_58,&local_50,*(undefined8 *)(*(long *)(param_2 + 0x390) + 0xf0));
  }
  *(undefined4 *)(lVar2 + 0x30) = uVar3;
  *(undefined4 *)(lVar2 + 0x38) = 0;
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x10;
  *(float *)(lVar2 + 0x34) = fVar4 + (1.0 - fVar5) * -80.0;
  return;
}

