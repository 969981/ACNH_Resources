
void FUN_01da0d1c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)PTR_DAT_04bb49f8;
  uVar1 = 0;
  if (*(uint *)(lVar2 + 0x28) != 0xffffffff) {
    uVar1 = *(uint *)(lVar2 + 0x28);
  }
  if (*(uint *)(lVar2 + 8) <= uVar1) {
    uVar1 = 0;
  }
  if (*(char *)(*(long *)(lVar2 + 0x10) + (long)(int)uVar1 * 0x40 + 0x3a) != '\0') {
    FUN_02645730(auStack_38,param_1 + 0x50);
    FUN_02647c50(auStack_38);
  }
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 8) = 1;
    *(undefined8 *)(lVar2 + 0x10) = 0;
  }
  return;
}

