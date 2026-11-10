
void FUN_00278c98(void)

{
  uint uVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  lVar2 = FUN_0026c88c(DAT_04c603c8);
  if ((lVar2 != 0) && (uVar1 = FUN_0026be6c(DAT_04c603c8), (uVar1 & 0xff) < 0x20)) {
    FUN_00282f30(auStack_30,lVar2,uVar1);
  }
  return;
}

