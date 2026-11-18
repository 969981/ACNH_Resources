
void FUN_03360e3c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  lVar2 = *(long *)(param_1 + 0xdf8);
  if (lVar2 != 0) {
    iVar1 = 0;
    if (*(char *)(lVar2 + 0x25d) != '\0') {
      iVar1 = *(int *)(lVar2 + 4);
    }
    if ((*(int *)(param_1 + 0x1764) == iVar1) &&
       (FUN_033600f0(param_1,1), (*(byte *)(DAT_0572ba48 + 0xd4) >> 1 & 1) == 0)) {
      local_28 = 0;
      local_38 = 0;
      uStack_30 = 0;
      uStack_40 = 0;
      local_48 = 0x8000000000000;
      if (*(long *)(DAT_0572ba48 + 0xb8) != 0) {
        FUN_032ae69c(*(long *)(DAT_0572ba48 + 0xb8),&local_48);
      }
    }
  }
  return;
}

