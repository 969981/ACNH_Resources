
void _INIT_1059(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *local_40;
  undefined *puStack_38;
  
  if ((*PTR_DAT_04bb1ee0 & 1) == 0) {
    *PTR_DAT_04bb1ee0 = 1;
    puVar1 = PTR_DAT_04bb1ed8;
    *(undefined8 *)PTR_DAT_04bb1ed8 = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    puVar2 = PTR_DAT_04bb1f88;
    if (((*PTR_DAT_04bb1f90 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb1f90), iVar3 != 0)) {
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
      *(undefined8 *)(puVar2 + 0x50) = 0;
      *(undefined4 *)(puVar2 + 0x58) = 0;
      __cxa_guard_release(PTR_DAT_04bb1f90);
    }
    local_40 = puVar2;
    puStack_38 = puVar2 + 0x60;
    FUN_00691080(&local_40,"kInt, kBool, kFloat, kString, kWString, kFloatList",0x32);
    *(char **)puVar1 = "DataType";
    *(undefined **)(puVar1 + 0x10) = puVar2;
    *(undefined **)(puVar1 + 0x18) = puVar2 + 0x60;
    *(undefined4 *)(puVar1 + 8) = 8;
  }
  return;
}

