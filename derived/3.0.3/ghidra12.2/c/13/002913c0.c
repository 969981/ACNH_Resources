
void FUN_002913c0(void)

{
  undefined1 auStack_30 [16];
  
  if (DAT_04c60f40 == '\x01') {
    if (DAT_04c60f41 == '\x01') {
      FUN_00291310(auStack_30);
    }
    if (DAT_04c603c8 != 0) {
      FUN_00269270();
      FUN_00269218();
    }
    FUN_0021f39c(0x15);
    DAT_04c60f40 = '\0';
    FUN_0022962c(auStack_30,0x15);
  }
  return;
}

