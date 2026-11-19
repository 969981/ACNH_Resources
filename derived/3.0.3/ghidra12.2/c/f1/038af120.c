
void FUN_038af120(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char *__dest;
  undefined **local_70;
  long lStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  undefined **local_50;
  undefined1 **ppuStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  undefined1 *local_18;
  
  if (param_2 == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
  }
  else {
    lVar3 = FUN_038f01ec(param_2,*(undefined8 *)(param_1 + 0x128),0,0x4000);
    *(long *)(param_1 + 0x10) = lVar3;
  }
  if (lVar3 == 0) {
    lVar3 = FUN_038f01ec(0,*(undefined8 *)(param_1 + 0x128),0,0x4000);
    *(long *)(param_1 + 0x10) = lVar3;
    __dest = *(char **)(*(long *)(lVar3 + 8) + 0x30);
    if (__dest != "config") {
      iVar2 = *(int *)(*(long *)(lVar3 + 8) + 0x38);
      iVar1 = 6;
      if (iVar2 < 7) {
        iVar1 = iVar2 + -1;
      }
      memcpy(__dest,"config",(long)iVar1);
      __dest[iVar1] = '\0';
    }
  }
  local_60 = &LAB_038af710;
  uStack_58 = 0;
  local_70 = &PTR_LAB_04b62b80;
  ppuStack_48 = &local_18;
  local_40 = &LAB_038b0c08;
  uStack_38 = 0;
  local_50 = &PTR_LAB_04b62bd0;
  if (*(long *)(param_1 + 0x18) != 0) {
    lStack_68 = param_1;
    local_18 = (undefined1 *)&local_70;
    FUN_038b0c50(*(long *)(param_1 + 0x18),&local_50);
  }
  return;
}

