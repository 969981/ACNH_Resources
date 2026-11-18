
void FUN_0365bbe0(long param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x218c);
  if (iVar1 != 0) {
    uVar2 = FUN_0365c1e0(param_1,param_1 + 0x204c,iVar1);
    uVar2 = FUN_0365c1e0(uVar2,param_1 + 0x2098,iVar1);
    uVar2 = FUN_0365c320(uVar2,param_1 + 0x20e4,iVar1);
    FUN_0365c470(uVar2,param_1 + 0x2114,iVar1);
    *(undefined4 *)(param_1 + 0x218c) = 0;
    *(int *)(param_1 + 0x2038) = *(int *)(param_1 + 0x2038) + iVar1;
  }
  *(byte *)(param_1 + 0x2056) = (byte)param_2 & 1;
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x204c) = 0;
  }
  *(char *)(param_1 + 0x20a2) = (char)((param_2 & 2) >> 1);
  if ((param_2 & 2) == 0) {
    *(undefined4 *)(param_1 + 0x2098) = 0;
  }
  *(char *)(param_1 + 0x20ee) = (char)((param_2 & 4) >> 2);
  if ((param_2 & 4) == 0) {
    *(undefined4 *)(param_1 + 0x20e4) = 0;
  }
  *(char *)(param_1 + 0x211e) = (char)((param_2 & 8) >> 3);
  if ((param_2 & 8) == 0) {
    *(undefined4 *)(param_1 + 0x2114) = 0;
    *(undefined1 *)(param_1 + 0x2185) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x2185) = 0;
  }
  if ((param_2 >> 4 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x215c) = 0;
  }
  else if (*(int *)(param_1 + 0x215c) == 0) {
    *(undefined1 *)(param_1 + 0x21ac) = 1;
  }
  **(uint **)(param_1 + 8) = **(uint **)(param_1 + 8) & 0xffffffef;
  return;
}

