
void FUN_0240f650(byte *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*param_1 * 0x740;
  if (7 < *param_1) {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  if (*(short *)(param_2 + 1) == DAT_04c487d4) {
    *(undefined4 *)(lVar1 + 0x424) = 3;
    FUN_01393458(lVar1 + 0x4c8);
  }
  else {
    *(undefined4 *)(lVar1 + 0x424) = 4;
  }
  if (*param_1 < 8) {
    FUN_02582d8c(param_1,1);
    return;
  }
  return;
}

