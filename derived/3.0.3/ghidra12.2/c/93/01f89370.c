
void FUN_01f89370(long param_1)

{
  int iVar1;
  long lVar2;
  char *__dest;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if ((*(int *)(lVar2 + 0x56c) == 0x35) || (*(int *)(lVar2 + 0x56c) == 0x32)) {
    local_34 = 0;
    local_38 = 0;
    FUN_01e5a930(0x40000000,lVar2,0xd,PTR_DAT_04bb2150,&local_34,&local_38,PTR_DAT_04bc1600,6);
    __dest = *(char **)(lVar2 + 0x3b8);
    if (__dest != "KppPosturalChangeLieToSit") {
      iVar1 = 0x19;
      if (*(int *)(lVar2 + 0x3c0) < 0x1a) {
        iVar1 = *(int *)(lVar2 + 0x3c0) + -1;
      }
      memcpy(__dest,"KppPosturalChangeLieToSit",(long)iVar1);
      __dest[iVar1] = '\0';
    }
    *(undefined4 *)(lVar2 + 0x3a0) = 0;
    *(undefined1 *)(lVar2 + 0x410) = 0;
  }
  *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) & 0xfffffffffffffffe;
  return;
}

