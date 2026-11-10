
void FUN_00335990(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_04bcef08;
  FUN_00335288(param_1 + 0x3e,*(undefined8 *)(param_1 + 8),5,3,*(undefined8 *)PTR_PTR_04bcef08);
  FUN_00335288(param_1 + 0x3f,*(undefined8 *)(param_1 + 8),5,3,*(undefined8 *)(puVar1 + 8));
  FUN_00335288(param_1 + 0x40,*(undefined8 *)(param_1 + 8),5,3,*(undefined8 *)(puVar1 + 0x10));
  FUN_00335288(param_1 + 0x41,*(undefined8 *)(param_1 + 8),5,3,*(undefined8 *)(puVar1 + 0x18));
  FUN_00335288(param_1 + 0x42,*(undefined8 *)(param_1 + 8),5,3,*(undefined8 *)(puVar1 + 0x20));
  FUN_00335288(param_1 + 0x43,*(undefined8 *)(param_1 + 8),5,3,*(undefined8 *)(puVar1 + 0x28));
  puVar1 = PTR_PTR_04bcef10;
  FUN_00335288(param_1 + 0x44,*(undefined8 *)(param_1 + 8),5,3,*(undefined8 *)PTR_PTR_04bcef10);
  FUN_00335288(param_1 + 0x45,*(undefined8 *)(param_1 + 8),5,3,*(undefined8 *)(puVar1 + 8));
  FUN_00335288(param_1 + 0x46,*(undefined8 *)(param_1 + 8),5,3,*(undefined8 *)(puVar1 + 0x10));
  FUN_00335288(param_1 + 0x47,*(undefined8 *)(param_1 + 8),5,3,*(undefined8 *)(puVar1 + 0x18));
  FUN_00335288(param_1 + 0x48,*(undefined8 *)(param_1 + 8),5,4,*(undefined8 *)PTR_PTR_04bcef18);
  puVar1 = PTR_PTR_04bcef20;
  FUN_00335288(param_1 + 0x49,*(undefined8 *)(param_1 + 8),5,4,*(undefined8 *)PTR_PTR_04bcef20);
  FUN_00335288(param_1 + 0x4a,*(undefined8 *)(param_1 + 8),5,4,*(undefined8 *)(puVar1 + 8));
  FUN_00335288(param_1 + 0x4b,*(undefined8 *)(param_1 + 8),5,4,*(undefined8 *)(puVar1 + 0x10));
  FUN_00335288(param_1 + 0x4c,*(undefined8 *)(param_1 + 8),5,4,*(undefined8 *)(puVar1 + 0x18));
  puVar1 = PTR_PTR_04bcef28;
  FUN_00335288(param_1 + 0x10,*(undefined8 *)(param_1 + 8),5,2,*(undefined8 *)PTR_PTR_04bcef28);
  FUN_00335288(param_1 + 0x11,*(undefined8 *)(param_1 + 8),5,2,*(undefined8 *)(puVar1 + 8));
  FUN_00335288(param_1 + 0x12,*(undefined8 *)(param_1 + 8),5,2,*(undefined8 *)(puVar1 + 0x10));
  FUN_00335288(param_1 + 0x13,*(undefined8 *)(param_1 + 8),5,2,*(undefined8 *)(puVar1 + 0x18));
  FUN_00335288(param_1 + 0x14,*(undefined8 *)(param_1 + 8),5,2,*(undefined8 *)(puVar1 + 0x20));
  FUN_00335288(param_1 + 0x15,*(undefined8 *)(param_1 + 8),5,2,*(undefined8 *)(puVar1 + 0x28));
  puVar1 = PTR_PTR_04bcef30;
  lVar3 = 0;
  do {
    FUN_00335288(param_1 + 0x16 + lVar3,*(undefined8 *)(param_1 + 8),5,2,
                 *(undefined8 *)(puVar1 + lVar3 * 8));
    puVar2 = PTR_PTR_04bcef38;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x28);
  FUN_00335288(param_1 + 0x4d,*(undefined8 *)(param_1 + 8),5,4,*(undefined8 *)PTR_PTR_04bcef38);
  FUN_00335288(param_1 + 0x4e,*(undefined8 *)(param_1 + 8),5,4,*(undefined8 *)(puVar2 + 8));
  FUN_00335288(param_1 + 0x4f,*(undefined8 *)(param_1 + 8),5,4,*(undefined8 *)(puVar2 + 0x10));
  FUN_00335288(param_1 + 0x50,*(undefined8 *)(param_1 + 8),5,4,*(undefined8 *)(puVar2 + 0x18));
  FUN_00335288(param_1 + 0x51,*(undefined8 *)(param_1 + 8),5,4,*(undefined8 *)(puVar2 + 0x20));
  FUN_00335288(param_1 + 0x52,*(undefined8 *)(param_1 + 8),5,4,*(undefined8 *)(puVar2 + 0x28));
  FUN_00335288(param_1 + 0x53,*(undefined8 *)(param_1 + 8),5,4,*(undefined8 *)(puVar2 + 0x30));
  FUN_00335288(param_1 + 0x54,*(undefined8 *)(param_1 + 8),5,4,*(undefined8 *)(puVar2 + 0x38));
  return;
}

