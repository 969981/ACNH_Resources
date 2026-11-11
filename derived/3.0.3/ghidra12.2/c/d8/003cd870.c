
void FUN_003cd870(uint param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (DAT_04c64430 != '\0') {
    uVar2 = FUN_003ca198();
    lVar3 = FUN_003cde20();
    uVar1 = *(uint *)(lVar3 + 0xd8);
    while (uVar1 < param_1) {
      FUN_003ca5e0(uVar2,0);
      FUN_003cbf00(lVar3);
      FUN_003cbf90(lVar3,1,0);
      uVar1 = *(uint *)(lVar3 + 0xd8);
    }
  }
  return;
}

