
bool FUN_01fa3dec(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char *__dest;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar2 = *(int *)(param_1 + 0x77b0);
  if (iVar2 == 0x40) {
    local_34 = 0;
    lVar3 = *(long *)(param_1 + 0x10);
    local_38 = 0;
    FUN_01e5a930(0x40000000,lVar3,0xd,PTR_DAT_04bb2150,&local_34,&local_38,PTR_DAT_04bc1600,6);
    __dest = *(char **)(lVar3 + 0x3b8);
    if (__dest != "NpcGreeting") {
      iVar1 = 0xb;
      if (*(int *)(lVar3 + 0x3c0) < 0xc) {
        iVar1 = *(int *)(lVar3 + 0x3c0) + -1;
      }
      memcpy(__dest,"NpcGreeting",(long)iVar1);
      __dest[iVar1] = '\0';
    }
    *(undefined4 *)(lVar3 + 0x3a0) = 0;
    *(undefined1 *)(lVar3 + 0x410) = 0;
  }
  return iVar2 == 0x40;
}

