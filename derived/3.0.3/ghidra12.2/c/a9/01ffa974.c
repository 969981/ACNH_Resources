
void FUN_01ffa974(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_4;
  
  FUN_01f92d30();
  lVar2 = DAT_053e0208;
  puVar1 = PTR_DAT_04bb3238;
  if ((*(byte *)(param_1 + 0xad5a) >> 1 & 1) == 0) {
    if ((*(byte *)(param_1 + 0xe742) & 1) != 0) {
      local_4 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x230);
      FUN_0376f6e0(&local_4,*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278,
                   *(undefined2 *)(param_1 + 0xe740));
    }
  }
  else if (DAT_053e0208 != 0) {
    if (*(int *)(DAT_053e0208 + 0x175a8) == 0) {
      if (*(int *)(DAT_053e0208 + 0x175ac) != 1) {
        return;
      }
      uVar5 = 0;
      uVar4 = 0;
      *(undefined4 *)(DAT_053e0208 + 0x175ac) = 0;
      uVar3 = 0xffff;
    }
    else {
      *(undefined4 *)(DAT_053e0208 + 0x175ac) = 2;
      uVar3 = 0;
      uVar4 = 999;
      uVar5 = *(undefined4 *)puVar1;
    }
    *(undefined4 *)(lVar2 + 0x175b0) = uVar5;
    *(undefined2 *)(lVar2 + 0x175b4) = uVar3;
    *(undefined4 *)(lVar2 + 0x17608) = uVar4;
  }
  return;
}

