
void FUN_01f118a4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0xb010) = *(undefined4 *)(lVar1 + 0x278);
    *(undefined4 *)(param_1 + 0xb014) = *(undefined4 *)(lVar1 + 0x27c);
    *(undefined4 *)(param_1 + 0xb018) = *(undefined4 *)(lVar1 + 0x280);
    *(undefined4 *)(param_1 + 0xb01c) = *(undefined4 *)(lVar1 + 0x2b4);
  }
  FUN_01ea5580(param_1,0x42,0,0);
  return;
}

