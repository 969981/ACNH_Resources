
float FUN_0018a080(float param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int local_14;
  
  puVar3 = PTR_DAT_04bcbd80;
  if (*PTR_DAT_04bcbd80 == '\0') {
    local_14 = 0;
    nn::os::GenerateRandomBytes(&local_14,4);
    puVar2 = PTR_DAT_04bcbd78;
    iVar1 = 0x1105;
    if (local_14 != 0) {
      iVar1 = local_14;
    }
    *(int *)PTR_DAT_04bcbd78 = iVar1;
    uVar4 = 1;
    *(undefined4 *)(puVar2 + 0x9c0) = 1;
    do {
      *(int *)(puVar2 + (ulong)uVar4 * 4) = *(int *)(puVar2 + (ulong)(uVar4 - 1) * 4) * 0x10dcd;
      uVar4 = *(int *)(puVar2 + 0x9c0) + 1;
      *(uint *)(puVar2 + 0x9c0) = uVar4;
    } while (uVar4 < 0x270);
    *puVar3 = 1;
  }
  if (param_1 <= 0.0) {
    return 0.0;
  }
  uVar4 = FUN_00189f20(0,PTR_DAT_04bcbd78,0x10000);
  return (float)uVar4 * 1.5258789e-05 * param_1;
}

