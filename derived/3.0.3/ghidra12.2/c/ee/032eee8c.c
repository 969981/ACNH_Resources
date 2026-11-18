
void FUN_032eee8c(long param_1)

{
  char cVar1;
  short sVar2;
  undefined2 local_24 [2];
  
  *(undefined1 *)(param_1 + 0x260) = 1;
  if (*(char *)(param_1 + 0x25d) == '\0') {
    FUN_032ed5c4(param_1,*(undefined4 *)(param_1 + 0x254),*(undefined1 *)(param_1 + 600));
    *(undefined1 *)(param_1 + 0x25d) = 1;
    cVar1 = *(char *)(param_1 + 0x238);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x238);
  }
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 300) == 2) {
      local_24[0] = 0;
      sVar2 = FUN_032ef2b0(*(undefined8 *)PTR_DAT_04bc96a8,0,local_24,0,0,0x37);
      *(int *)(param_1 + 4) = (int)sVar2;
    }
    else if (*(int *)(param_1 + 300) == 1) {
      FUN_032eda90(param_1,param_1 + 0x130,*(undefined1 *)(param_1 + 0x239));
    }
    *(undefined1 *)(param_1 + 0x238) = 1;
  }
  *(undefined1 *)(param_1 + 0x260) = 0;
  return;
}

