
void FUN_021319e8(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  char *__dest;
  undefined4 local_38;
  undefined4 local_34;
  
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 8) + 0x3c0) + 0x29c) = 0x41f00000;
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x3b0);
  if (*(char *)(param_1 + 0x27) != '\0') {
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 8) + 0x3c0) + 0x29c) = 0x41f00000;
    plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x3b8);
    (**(code **)(*plVar2 + 0x328))(plVar2,0);
    *(undefined4 *)(lVar3 + 0x56c) = 0;
    local_34 = 0;
    local_38 = 0;
    FUN_01e5a930(0x40000000,lVar3,0,PTR_DAT_04bb2150,&local_34,&local_38,PTR_DAT_04bc1600,6);
    *(undefined2 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_01ea5c80(*(undefined8 *)(*(long *)(param_1 + 8) + 0x3b8),PTR_PTR_04bb2238,PTR_PTR_04bb2238,1
                 ,0,PTR_DAT_04bb32e0);
    return;
  }
  local_34 = 0;
  local_38 = 0;
  FUN_01e5a930(0x40000000,lVar3,0xd,PTR_DAT_04bb2150,&local_34,&local_38,PTR_DAT_04bc1600,6);
  __dest = *(char **)(lVar3 + 0x3b8);
  if (__dest != "MaReSighing") {
    iVar1 = 0xb;
    if (*(int *)(lVar3 + 0x3c0) < 0xc) {
      iVar1 = *(int *)(lVar3 + 0x3c0) + -1;
    }
    memcpy(__dest,"MaReSighing",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  *(undefined4 *)(lVar3 + 0x3a0) = 0;
  *(undefined1 *)(lVar3 + 0x410) = 1;
  *(undefined4 *)(param_1 + 0x10) = 3;
  return;
}

