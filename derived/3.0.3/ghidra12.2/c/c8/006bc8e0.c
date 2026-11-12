
void FUN_006bc8e0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined *local_30;
  undefined *puStack_28;
  
  puVar3 = PTR_DAT_04bb1f48;
  if (((*PTR_DAT_04bb1f50 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb1f50), iVar4 != 0))
  {
    *(undefined8 *)puVar3 = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined4 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined4 *)(puVar3 + 0x28) = 0;
    *(undefined8 *)(puVar3 + 0x30) = 0;
    *(undefined4 *)(puVar3 + 0x38) = 0;
    *(undefined8 *)(puVar3 + 0x40) = 0;
    *(undefined4 *)(puVar3 + 0x48) = 0;
    *(undefined8 *)(puVar3 + 0x50) = 0;
    *(undefined4 *)(puVar3 + 0x58) = 0;
    *(undefined8 *)(puVar3 + 0x60) = 0;
    *(undefined4 *)(puVar3 + 0x68) = 0;
    *(undefined8 *)(puVar3 + 0x70) = 0;
    *(undefined4 *)(puVar3 + 0x78) = 0;
    *(undefined8 *)(puVar3 + 0x80) = 0;
    *(undefined4 *)(puVar3 + 0x88) = 0;
    *(undefined8 *)(puVar3 + 0x90) = 0;
    *(undefined4 *)(puVar3 + 0x98) = 0;
    *(undefined8 *)(puVar3 + 0xa0) = 0;
    *(undefined4 *)(puVar3 + 0xa8) = 0;
    *(undefined8 *)(puVar3 + 0xb0) = 0;
    *(undefined4 *)(puVar3 + 0xb8) = 0;
    *(undefined8 *)(puVar3 + 0xc0) = 0;
    *(undefined4 *)(puVar3 + 200) = 0;
    __cxa_guard_release(PTR_DAT_04bb1f50);
  }
  puStack_28 = puVar3 + 0xd0;
  local_30 = puVar3;
  lVar5 = 0;
  do {
    lVar1 = lVar5 + 1;
    lVar5 = lVar5 + 1;
  } while ("kArgument, kContainer, kInt, kBool, kFloat, kString, kWString, kIntArray, kBoolArray, kFloatArray, kStringArray, kWStringArray, kActorIdentifier"
           [lVar1] != '\0');
  FUN_00691080(&local_30,
               "kArgument, kContainer, kInt, kBool, kFloat, kString, kWString, kIntArray, kBoolArray, kFloatArray, kStringArray, kWStringArray, kActorIdentifier"
              );
  puVar2 = PTR_DAT_04bb1ea8;
  *(char **)PTR_DAT_04bb1ea8 = "DataType";
  *(undefined4 *)(puVar2 + 8) = 8;
  *(undefined **)(puVar2 + 0x10) = puVar3;
  *(undefined **)(puVar2 + 0x18) = puVar3 + 0xd0;
  return;
}

