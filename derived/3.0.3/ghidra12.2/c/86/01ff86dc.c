
void FUN_01ff86dc(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  long lVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar4 = *(int *)(param_1 + 0xaf9c);
  *(undefined4 *)(param_1 + 0xaf90) = 0;
  if (iVar4 < 0) {
    puVar3 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar2 = puVar3[3];
    uVar1 = *puVar3 ^ *puVar3 << 0xb;
    *puVar3 = puVar3[1];
    puVar3[1] = puVar3[2];
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    puVar3[2] = uVar2;
    puVar3[3] = uVar1;
    iVar4 = (int)((float)DAT_053ba4cc +
                 ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) * (float)(DAT_053ba4d0 - DAT_053ba4cc));
  }
  *(int *)(param_1 + 0xaf9c) = iVar4;
  iVar4 = *(int *)(param_1 + 0xaf98);
  if (iVar4 < 0) {
    puVar3 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar2 = puVar3[3];
    uVar1 = *puVar3 ^ *puVar3 << 0xb;
    *puVar3 = puVar3[1];
    puVar3[1] = puVar3[2];
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    puVar3[2] = uVar2;
    puVar3[3] = uVar1;
    iVar4 = (int)((float)DAT_053ba4c4 +
                 ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) * (float)(DAT_053ba4c8 - DAT_053ba4c4));
  }
  *(int *)(param_1 + 0xaf98) = iVar4;
  local_24 = 0;
  local_28 = 0;
  FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,&local_24,&local_28,
               PTR_DAT_04bc1600,10);
  lVar5 = *(long *)(param_1 + 8);
  if (*(int *)(lVar5 + 0x750) == 2) {
    return;
  }
  *(uint *)(lVar5 + 0x69c) = *(uint *)(lVar5 + 0x69c) | 0x100000;
  FUN_01e5e500(*(undefined8 *)(param_1 + 0x10));
  return;
}

