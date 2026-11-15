
void FUN_0234776c(long param_1,ulong param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  
  if ((param_2 & 1) == 0) {
    if (*(int *)(param_1 + 0xa4) == 0) {
      if (*(char *)(param_1 + 0x3c) == '\0') {
        *(undefined1 *)(param_1 + 0x3c) = 1;
      }
      *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x9c);
      *(undefined1 *)(param_1 + 0x94) = *(undefined1 *)(param_1 + 0xa0);
      iVar3 = FUN_0234f144(param_1,param_1 + 0x9c,param_1 + 0xa8,0,0,0);
      uVar1 = iVar3 - 1U < 2;
      uVar4 = uVar1;
    }
    else {
      if (*(char *)(param_1 + 0x3c) == '\0') {
        *(undefined1 *)(param_1 + 0x3c) = 1;
      }
      *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x9c);
      *(undefined1 *)(param_1 + 0x94) = *(undefined1 *)(param_1 + 0xa0);
      uVar2 = FUN_0234f144(param_1,param_1 + 0x9c,param_1 + 0xa8,1,0,0);
      uVar1 = 0;
      if (uVar2 < 4) {
        uVar1 = (char)(0x10100 >> (ulong)(uVar2 << 3 & 0x1f));
      }
      uVar4 = 0;
      if (uVar2 < 4) {
        uVar4 = (char)(0x1010100 >> (ulong)(uVar2 << 3 & 0x1f));
      }
    }
    *(undefined1 *)(param_1 + 0x180) = uVar1;
    *(undefined1 *)(param_1 + 0x181) = uVar4;
  }
  return;
}

