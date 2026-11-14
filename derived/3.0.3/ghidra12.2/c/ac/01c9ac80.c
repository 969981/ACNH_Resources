
void FUN_01c9ac80(long param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined1 uStack_31;
  int local_30;
  char local_2c [4];
  int local_28;
  uint local_24;
  
  lVar3 = *(long *)(param_1 + 0x28);
  uVar1 = param_2;
  if (*(uint *)(param_1 + 0x20) <= param_2) {
    uVar1 = 0;
  }
  puVar4 = (undefined4 *)(lVar3 + (long)(int)uVar1 * 0x38);
  if (*(char *)(puVar4 + 0xb) == '\0') {
    return;
  }
  pcVar5 = (char *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x2d);
  if (*pcVar5 != '\0') {
    return;
  }
  local_28 = 0;
  local_24 = param_2;
  FUN_01c9aadc(&local_28,local_2c,*puVar4,*(undefined4 *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x28));
  puVar2 = PTR_DAT_04bb21d0;
  if (local_2c[0] != '\0') {
    return;
  }
  local_30 = 0;
  FUN_01c9ad64(&local_30,&uStack_31,*(undefined4 *)(*(long *)PTR_DAT_04bb21d0 + 0x78));
  if (**(char **)(*(long *)puVar2 + 0x2070) == '\0') {
    if (*(char *)(*(long *)puVar2 + 0xf78) != '\0') {
      local_30 = 2;
    }
  }
  else {
    local_30 = 3;
  }
  if (local_28 <= local_30) {
    *pcVar5 = '\x01';
  }
  return;
}

