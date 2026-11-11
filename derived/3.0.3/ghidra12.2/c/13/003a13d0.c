
void FUN_003a13d0(undefined4 param_1,long param_2,undefined4 *param_3,char *param_4)

{
  ulong uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 local_5c [3];
  
  uVar1 = (ulong)*(ushort *)(param_2 + 0x22);
  if (uVar1 != 0) {
    pcVar2 = (char *)(*(long *)(param_2 + 0x18) + 8);
    do {
      if (*param_4 != -1) {
        if (*pcVar2 != -1) {
          local_5c[0] = 0x7f800000;
          uVar3 = FUN_0039dbd4(param_1,*(long *)(param_2 + 8) + (long)(int)*pcVar2 * 0x30,local_5c);
          *param_3 = uVar3;
        }
      }
      param_3 = param_3 + 1;
      uVar1 = uVar1 - 1;
      pcVar2 = pcVar2 + 0x10;
      param_4 = param_4 + 1;
    } while (uVar1 != 0);
  }
  return;
}

