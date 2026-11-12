
void _INIT_1057(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *local_40;
  undefined *puStack_38;
  
  if ((*PTR_DAT_04bb1ec0 & 1) == 0) {
    *PTR_DAT_04bb1ec0 = 1;
    puVar1 = PTR_DAT_04bb1eb8;
    *(undefined8 *)PTR_DAT_04bb1eb8 = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    puVar2 = PTR_DAT_04bb1f58;
    if (((*PTR_DAT_04bb1f60 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb1f60), iVar3 != 0)) {
      *(undefined8 *)puVar2 = 0;
      *(undefined4 *)(puVar2 + 8) = 0;
      *(undefined8 *)(puVar2 + 0x10) = 0;
      *(undefined4 *)(puVar2 + 0x18) = 0;
      *(undefined8 *)(puVar2 + 0x20) = 0;
      *(undefined4 *)(puVar2 + 0x28) = 0;
      *(undefined8 *)(puVar2 + 0x30) = 0;
      *(undefined4 *)(puVar2 + 0x38) = 0;
      *(undefined8 *)(puVar2 + 0x40) = 0;
      *(undefined4 *)(puVar2 + 0x48) = 0;
      __cxa_guard_release(PTR_DAT_04bb1f60);
    }
    local_40 = puVar2;
    puStack_38 = puVar2 + 0x50;
    FUN_00691080(&local_40,"kBool, kInt, kFloat, kString, kConst",0x24);
    *(char **)puVar1 = "QueryValueType";
    *(undefined **)(puVar1 + 0x10) = puVar2;
    *(undefined **)(puVar1 + 0x18) = puVar2 + 0x50;
    *(undefined4 *)(puVar1 + 8) = 0xe;
  }
  return;
}

