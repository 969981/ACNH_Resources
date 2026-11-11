
void FUN_00482b60(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    lVar2 = FUN_0043c4e0(DAT_04c6f050);
    lVar1 = DAT_04c6f058;
    if (lVar2 != 0) {
      lVar1 = lVar2;
    }
    FUN_004220c0(*(undefined8 *)(lVar1 + 0x58),lVar3,4,0x270);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

