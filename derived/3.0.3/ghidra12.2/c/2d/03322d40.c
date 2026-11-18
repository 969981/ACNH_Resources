
void FUN_03322d40(long param_1,byte param_2)

{
  long lVar1;
  undefined *local_30;
  char *pcStack_28;
  undefined1 auStack_8 [8];
  
  pcStack_28 = *(char **)(PTR_PTR_04bb2238 + 8);
  if (*pcStack_28 == '\0') {
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x2f0) + 0xf0) + 0x18);
  }
  else {
    local_30 = PTR_DAT_04bc8e68 + 0x10;
    lVar1 = FUN_032cb8e0(auStack_8,&local_30,*(undefined8 *)(*(long *)(param_1 + 0x2f0) + 0xf0));
  }
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | param_2 & 1;
  return;
}

