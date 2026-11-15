
void FUN_01eea21c(long param_1)

{
  int iVar1;
  long lVar2;
  char *__dest;
  undefined8 local_18;
  
  *(uint *)(*(long *)(param_1 + 8) + 0x69c) = *(uint *)(*(long *)(param_1 + 8) + 0x69c) | 0x10;
  lVar2 = *(long *)(param_1 + 0x10);
  if ((*(int *)(lVar2 + 0x378) != 0xe) && (*(int *)(lVar2 + 0x378) != 0xd)) {
    if ((*(int *)(lVar2 + 0x360) == 0xe) &&
       ((*(int *)(lVar2 + 0x4b8) != 0 && (*(int *)(lVar2 + 0x378) == 0x23)))) {
      local_18 = 0;
      FUN_01e5a930(0x40000000,lVar2,0xd,PTR_DAT_04bb2150,(long)&local_18 + 4,&local_18,
                   PTR_DAT_04bc1600,6);
      __dest = *(char **)(lVar2 + 0x3b8);
      if (__dest != "CommonPartyPopperPull") {
        iVar1 = 0x15;
        if (*(int *)(lVar2 + 0x3c0) < 0x16) {
          iVar1 = *(int *)(lVar2 + 0x3c0) + -1;
        }
        memcpy(__dest,"CommonPartyPopperPull",(long)iVar1);
        __dest[iVar1] = '\0';
      }
      *(undefined4 *)(lVar2 + 0x3a0) = 0;
      *(undefined1 *)(lVar2 + 0x410) = 0;
    }
    else {
      local_18 = CONCAT44(0xd,(undefined4)local_18);
      if ((*(int *)(lVar2 + 0x360) == 0xd) &&
         ((*(int *)(lVar2 + 0x4b8) != 0 && (*(int *)(lVar2 + 0x378) == 0x23)))) {
        FUN_01e57c78(lVar2,PTR_DAT_04bb37e0,0,1);
        FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
        return;
      }
    }
  }
  return;
}

