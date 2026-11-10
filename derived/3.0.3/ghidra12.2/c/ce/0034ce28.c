
uint FUN_0034ce28(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int local_64;
  
  puVar2 = PTR_DAT_04bcf028;
  local_64 = 0;
  (**(code **)PTR_DAT_04bcf028)(param_1,0x28,&local_64);
  bVar3 = local_64 != 0;
  (**(code **)puVar2)(param_1,0x29,&local_64);
  uVar1 = (uint)bVar3;
  if (local_64 != 0) {
    uVar1 = bVar3 | 2;
  }
  (**(code **)puVar2)(param_1,0x2a,&local_64);
  if (local_64 != 0) {
    uVar1 = uVar1 | 4;
  }
  (**(code **)puVar2)(param_1,0x32,&local_64);
  if (local_64 != 0) {
    uVar1 = uVar1 | 8;
  }
  (**(code **)puVar2)(param_1,0x3b,&local_64);
  bVar3 = local_64 != 0;
  (**(code **)puVar2)(param_1,0x42,&local_64);
  bVar4 = local_64 != 0;
  (**(code **)puVar2)(param_1,0x43,&local_64);
  bVar5 = local_64 != 0;
  (**(code **)puVar2)(param_1,0x44,&local_64);
  bVar6 = local_64 != 0;
  (**(code **)puVar2)(param_1,0x45,&local_64);
  bVar7 = local_64 != 0;
  (**(code **)puVar2)(param_1,0x47,&local_64);
  bVar8 = local_64 != 0;
  (**(code **)puVar2)(param_1,0x48,&local_64);
  bVar9 = local_64 != 0;
  (**(code **)puVar2)(param_1,0x49,&local_64);
  bVar10 = local_64 != 0;
  (**(code **)puVar2)(param_1,0x4a,&local_64);
  bVar11 = local_64 != 0;
  (**(code **)puVar2)(param_1,0x4b,&local_64);
  bVar12 = local_64 != 0;
  (**(code **)puVar2)(param_1,0x4c,&local_64);
  bVar13 = local_64 != 0;
  (**(code **)puVar2)(param_1,0x57,&local_64);
  bVar14 = local_64 != 0;
  (**(code **)puVar2)(param_1,0x5a,&local_64);
  return uVar1 | (uint)bVar3 << 4 | (uint)bVar4 << 5 | (uint)bVar5 << 6 | (uint)bVar6 << 7 |
         (uint)bVar7 << 8 | (uint)bVar8 << 9 | (uint)bVar9 << 10 | (uint)bVar10 << 0xb |
         (uint)bVar11 << 0xc | (uint)bVar12 << 0xd | (uint)bVar13 << 0xe | (uint)bVar14 << 0xf |
         (uint)(local_64 != 0) << 0x10;
}

