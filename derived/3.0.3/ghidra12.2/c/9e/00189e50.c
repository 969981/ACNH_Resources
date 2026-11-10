
void FUN_00189e50(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int local_24;
  
  puVar3 = PTR_DAT_04bcbd80;
  puVar2 = PTR_DAT_04bcbd78;
  if (*PTR_DAT_04bcbd80 == '\0') {
    local_24 = 0;
    nn::os::GenerateRandomBytes(&local_24,4);
    iVar1 = 0x1105;
    if (local_24 != 0) {
      iVar1 = local_24;
    }
    *(int *)puVar2 = iVar1;
    uVar4 = 1;
    *(undefined4 *)(puVar2 + 0x9c0) = 1;
    do {
      *(int *)(puVar2 + (ulong)uVar4 * 4) = *(int *)(puVar2 + (ulong)(uVar4 - 1) * 4) * 0x10dcd;
      uVar4 = *(int *)(puVar2 + 0x9c0) + 1;
      *(uint *)(puVar2 + 0x9c0) = uVar4;
    } while (uVar4 < 0x270);
    *puVar3 = 1;
  }
  FUN_00189f20(PTR_DAT_04bcbd78,param_1);
  return;
}

