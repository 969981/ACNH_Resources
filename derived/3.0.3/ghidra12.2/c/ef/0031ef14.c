
undefined8 FUN_0031ef14(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long local_38;
  
  lVar2 = *(long *)(param_3 + 0x240);
  if (*(long *)(lVar2 + 0x48) != 0) {
    local_38 = *(long *)(*(long *)(lVar2 + 0x48) + 0x90);
    if (local_38 != -1) {
      cVar1 = *(char *)(param_4 + 0x4d);
      lVar2 = *(long *)(lVar2 + 0x60);
      if (*(char *)(param_4 + 0x10) != -1) {
        FUN_00348c64(param_2,(long)*(char *)(param_4 + 0x10),0,&local_38,lVar2 + 0x28);
      }
      if (cVar1 != -1) {
        FUN_00348c64(param_2,(int)cVar1,4,&local_38,lVar2 + 0x28);
      }
    }
    lVar2 = *(long *)(param_3 + 0x240);
  }
  if (*(long *)(lVar2 + 0x50) != 0) {
    local_38 = *(long *)(*(long *)(lVar2 + 0x50) + 0x90);
    if (local_38 != -1) {
      cVar1 = *(char *)(param_4 + 0x4e);
      lVar2 = *(long *)(lVar2 + 0x68);
      if (*(char *)(param_4 + 0x11) != -1) {
        FUN_00348c64(param_2,(long)*(char *)(param_4 + 0x11),0,&local_38,lVar2 + 0x28);
      }
      if (cVar1 != -1) {
        FUN_00348c64(param_2,(int)cVar1,4,&local_38,lVar2 + 0x28);
      }
    }
    lVar2 = *(long *)(param_3 + 0x240);
  }
  if ((*(long *)(lVar2 + 0x58) != 0) &&
     (local_38 = *(long *)(*(long *)(lVar2 + 0x58) + 0x90), local_38 != -1)) {
    cVar1 = *(char *)(param_4 + 0x4f);
    lVar2 = *(long *)(lVar2 + 0x70);
    if (*(char *)(param_4 + 0x12) != -1) {
      FUN_00348c64(param_2,(long)*(char *)(param_4 + 0x12),0,&local_38,lVar2 + 0x28);
    }
    if (cVar1 != -1) {
      FUN_00348c64(param_2,(int)cVar1,4,&local_38,lVar2 + 0x28);
    }
  }
  plVar3 = (long *)(param_5 + 0x18);
  if (*plVar3 != -1) {
    cVar1 = *(char *)(param_4 + 0x50);
    if (*(char *)(param_4 + 0x13) != -1) {
      FUN_00348c64(param_2,(long)*(char *)(param_4 + 0x13),0,plVar3,*(long *)(param_1 + 0x10) + 0x28
                  );
    }
    if (cVar1 != -1) {
      FUN_00348c64(param_2,(int)cVar1,4,plVar3,*(long *)(param_1 + 0x10) + 0x28);
    }
  }
  plVar3 = (long *)(param_5 + 0x20);
  if (*plVar3 != -1) {
    cVar1 = *(char *)(param_4 + 0x51);
    if (*(char *)(param_4 + 0x14) != -1) {
      FUN_00348c64(param_2,(long)*(char *)(param_4 + 0x14),0,plVar3,*(long *)(param_1 + 0x10) + 0x28
                  );
    }
    if (cVar1 != -1) {
      FUN_00348c64(param_2,(int)cVar1,4,plVar3,*(long *)(param_1 + 0x10) + 0x28);
    }
  }
  lVar2 = FUN_00320d70();
  cVar1 = *(char *)(param_4 + 0x52);
  if (*(char *)(param_4 + 0x15) != -1) {
    FUN_00348c64(param_2,(long)*(char *)(param_4 + 0x15),0,lVar2 + 0x260,
                 *(long *)(param_1 + 8) + 0x28);
  }
  if (cVar1 != -1) {
    FUN_00348c64(param_2,(int)cVar1,4,lVar2 + 0x260,*(long *)(param_1 + 8) + 0x28);
  }
  return 1;
}

