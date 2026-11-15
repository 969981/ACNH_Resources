
void FUN_01fc4494(long param_1)

{
  bool bVar1;
  
  if ((*(uint *)(param_1 + 0xafb0) & 1) == 0) {
    if (*(int *)(param_1 + 0x12084) == 1) {
      return;
    }
    *(uint *)(param_1 + 0xafb0) = *(uint *)(param_1 + 0xafb0) | 1;
    bVar1 = true;
  }
  else {
    bVar1 = *(int *)(param_1 + 0x12084) != 1;
  }
  if (bVar1 && *(int *)(param_1 + 0xb098) < 1) {
    FUN_01f9c378(param_1,1,1);
    *(undefined1 *)(param_1 + 0x7878) = 1;
  }
  return;
}

