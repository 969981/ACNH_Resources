
bool FUN_01250070(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  
  lVar1 = param_1 + 8;
  iVar3 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10));
  if ((0x1f < iVar3 - 1U) || ((0x80000355U >> (ulong)(iVar3 - 1U & 0x1f) & 1) == 0)) {
    iVar3 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10));
    if ((iVar3 - 2U & 0xfffffff9) != 0) {
      iVar3 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10));
      if (6 < iVar3 - 0xbU) {
        iVar3 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10));
        if (5 < iVar3 - 0x12U) {
          iVar3 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10));
          if ((6 < iVar3 - 0x18U) &&
             (iVar3 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10)), iVar3 != 0x1f)) {
            iVar3 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10));
            if ((8 < iVar3 - 0x23U) &&
               (iVar3 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10)), iVar3 != 0x2e)) {
              iVar3 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
              if (iVar3 == 0x21) {
                bVar2 = true;
              }
              else {
                iVar3 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
                bVar2 = iVar3 == 0x22;
              }
              return bVar2;
            }
          }
        }
      }
    }
  }
  return true;
}

