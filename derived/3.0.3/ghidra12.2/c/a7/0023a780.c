
void FUN_0023a780(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  FUN_0023a5a0();
  if (*(int *)(param_1 + 0x118) == 1) {
    lVar2 = *(long *)(DAT_04c60f48 + (ulong)*(byte *)(DAT_04c60f48 + 0x162) * 8 + 0x168);
    if ((lVar2 != 0) && (uVar1 = FUN_002321f8(lVar2), (uVar1 & 1) == 0)) {
      FUN_0023226c(auStack_30,lVar2);
      FUN_00279ec0(param_1);
      return;
    }
    FUN_00221064(param_1 + 0x118);
  }
  FUN_00279ec0(param_1);
  return;
}

