
void FUN_032ba5b0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  undefined *local_40;
  char *pcStack_38;
  
  lVar4 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(lVar4 + 8);
  if (**(char **)(PTR_PTR_04bb2238 + 8) == '\0') {
    lVar2 = *(long *)(*(long *)(lVar2 + 0xf0) + 0x18);
    lVar3 = *(long *)(lVar2 + 0x18);
  }
  else {
    local_40 = PTR_DAT_04bc8e68 + 0x10;
    pcStack_38 = *(char **)(PTR_PTR_04bb2238 + 8);
    lVar2 = FUN_032cb8e0(auStack_48,&local_40,*(undefined8 *)(lVar2 + 0xf0));
    lVar3 = *(long *)(lVar2 + 0x18);
  }
  if (lVar3 != 0) {
    FUN_0037d044(lVar3,lVar2);
    FUN_0037cfe0(lVar3,lVar2);
  }
  plVar1 = *(long **)(lVar4 + 0x28);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  }
  return;
}

