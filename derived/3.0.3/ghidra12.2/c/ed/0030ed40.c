
void FUN_0030ed40(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  undefined4 local_24;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x18);
  if (3 < (ulong)(*(long *)(lVar2 + 0x18) - lVar3)) {
    local_24 = *(undefined4 *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28) + lVar3);
    *(long *)(param_1 + 0x18) = lVar3 + 4;
    if ((*(char *)(param_1 + 8) != '\0') ||
       (FUN_0019761c(param_1,&uStack_25), *(char *)(param_1 + 8) != '\0')) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x18);
    lVar4 = *(long *)(lVar2 + 0x18);
    if (3 < (ulong)(lVar4 - lVar3)) {
      lVar1 = *(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28);
      lVar2 = lVar3 + 4;
      local_2c = *(undefined4 *)(lVar1 + lVar3);
      *(long *)(param_1 + 0x18) = lVar2;
      if (3 < (ulong)(lVar4 - lVar2)) {
        local_30 = *(undefined4 *)(lVar1 + lVar2);
        *(long *)(param_1 + 0x18) = lVar3 + 8;
        (**(code **)(*param_3 + 0xf0))(param_3,&local_24,&uStack_25,&local_2c,&local_30);
        FUN_001fb7e0(param_2,0x8007);
        return;
      }
    }
  }
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

