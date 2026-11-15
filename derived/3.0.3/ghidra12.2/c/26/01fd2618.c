
void FUN_01fd2618(long param_1)

{
  ulong *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  char *__dest;
  undefined4 local_48;
  undefined4 local_44;
  
  lVar5 = *(long *)(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 0xad58);
  if ((*(int *)(lVar5 + 0x378) == 4) || (*(int *)(lVar5 + 0x360) == 4)) {
    local_44 = 4;
    if ((*(int *)(lVar5 + 0x4b8) != 0) && (*(int *)(lVar5 + 0x378) == 0x23)) {
      local_44 = 0;
      local_48 = 0;
      FUN_01e5a930(0x40000000,lVar5,0xd,PTR_DAT_04bb2150,&local_44,&local_48,PTR_DAT_04bc1600,6);
      __dest = *(char **)(lVar5 + 0x3b8);
      if (__dest != "NpcGreeting") {
        iVar2 = 0xb;
        if (*(int *)(lVar5 + 0x3c0) < 0xc) {
          iVar2 = *(int *)(lVar5 + 0x3c0) + -1;
        }
        memcpy(__dest,"NpcGreeting",(long)iVar2);
        __dest[iVar2] = '\0';
      }
      *(undefined4 *)(lVar5 + 0x3a0) = 0;
      *(undefined1 *)(lVar5 + 0x410) = 0;
    }
  }
  else if (((*(int *)(lVar5 + 0x378) == 0xd) || (local_44 = 0xd, *(int *)(lVar5 + 0x360) == 0xd)) &&
          ((local_44 = 0xd, *(int *)(lVar5 + 0x4b8) != 0 && (*(int *)(lVar5 + 0x378) == 0x23)))) {
    *puVar1 = *puVar1 | 0x20000000000;
    FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
  }
  puVar4 = PTR_DAT_04bb32e0;
  puVar3 = PTR_PTR_04bb2238;
  if (*(int *)(param_1 + 0x77b4) < 0x708) {
    return;
  }
  *puVar1 = *puVar1 | 0x20000000000;
  FUN_01ea5c80(param_1,puVar3,puVar3,1,0,puVar4);
  return;
}

