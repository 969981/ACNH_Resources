
void FUN_01f85dd8(long param_1)

{
  int iVar1;
  long lVar2;
  char *__dest;
  undefined8 local_18;
  
  local_18 = 0;
  *(undefined1 *)(param_1 + 0xb120) = 1;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x56c) = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  FUN_01e5a930(0x40000000,lVar2,0xd,PTR_DAT_04bb2150,(long)&local_18 + 4,&local_18,PTR_DAT_04bc1600,
               6);
  __dest = *(char **)(lVar2 + 0x3b8);
  if (__dest != "NpcSpPynSighing") {
    iVar1 = 0xf;
    if (*(int *)(lVar2 + 0x3c0) < 0x10) {
      iVar1 = *(int *)(lVar2 + 0x3c0) + -1;
    }
    memcpy(__dest,"NpcSpPynSighing",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  *(undefined4 *)(lVar2 + 0x3a0) = 0;
  *(undefined1 *)(lVar2 + 0x410) = 0;
  return;
}

