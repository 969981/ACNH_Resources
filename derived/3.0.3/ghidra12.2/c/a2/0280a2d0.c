
void FUN_0280a2d0(long param_1,uint *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  
  uVar2 = *param_2;
  if ((-1 < (int)uVar2) && ((int)uVar2 < 0x79)) {
    lVar3 = 0;
    iVar4 = 0;
    do {
      if (uVar2 == *(byte *)(param_1 + iVar4)) {
        puVar1 = (undefined1 *)(param_1 + 0x108) + lVar3;
        if (0xff < (uint)lVar3) {
          puVar1 = (undefined1 *)(param_1 + 0x108);
        }
        *puVar1 = 0;
        return;
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 1;
    } while (iVar4 != 0x100);
  }
  return;
}

