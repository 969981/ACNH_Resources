
/* WARNING: Removing unreachable block (ram,0x02a7c234) */

ulong FUN_02a7c208(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  undefined **local_20;
  int local_18;
  int iStack_14;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    local_20 = (undefined **)CONCAT44(local_20._4_4_,10);
    lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0xc0);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x48) != '\0')) {
      local_20 = &PTR_FUN_048f9730;
      fVar4 = (float)*(int *)(param_2 + 8) * 0.5;
      uVar1 = 0;
      if (fVar4 != (float)(int)fVar4) {
        uVar1 = (uint)(fVar4 < 0.0);
      }
      local_18 = (int)fVar4 - uVar1;
      fVar4 = (float)*(int *)(param_2 + 0xc) * 0.5;
      uVar1 = 0;
      if (fVar4 != (float)(int)fVar4) {
        uVar1 = (uint)(fVar4 < 0.0);
      }
      iStack_14 = (int)fVar4 - uVar1;
      uVar1 = FUN_02ad806c(param_1 + 0xb8,10,&local_20);
      return (ulong)(uVar1 & 1);
    }
  }
  uVar2 = FUN_02a7c2e0();
  return uVar2;
}

