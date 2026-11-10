
void FUN_00218260(void)

{
  undefined1 auStack_20 [16];
  
  if (DAT_04c5efa0 == '\x01') {
    if (DAT_04c5efa1 == '\x01') {
      FUN_002182c0(auStack_20);
    }
    FUN_0021f39c(0x10);
    DAT_04c5efa0 = '\0';
    FUN_0022962c(auStack_20,0x10);
  }
  return;
}

