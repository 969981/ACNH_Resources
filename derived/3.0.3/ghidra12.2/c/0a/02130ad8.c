
void FUN_02130ad8(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 local_18;
  
  local_18 = CONCAT44(0xd,(undefined4)local_18);
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x3b0);
  if ((*(int *)(lVar3 + 0x360) == 0xd && *(int *)(lVar3 + 0x4b8) != 0) &&
     (*(int *)(lVar3 + 0x378) == 0x23)) {
    *(undefined4 *)(param_1 + 0x10) = 2;
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 0x3b8);
    (**(code **)(*plVar1 + 0x328))(plVar1,1);
    local_18 = 0;
    uVar2 = 0xf;
    if (*(char *)(param_1 + 0x24) == '\0') {
      uVar2 = 0x10;
    }
    *(undefined4 *)(lVar3 + 0x56c) = uVar2;
    FUN_01e5a930(0x40000000,lVar3,0,PTR_DAT_04bb2150,(long)&local_18 + 4,&local_18,PTR_DAT_04bc1600,
                 6);
    *(uint *)(*(long *)(param_1 + 8) + 0x69c) =
         *(uint *)(*(long *)(param_1 + 8) + 0x69c) & 0xffffffef;
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  return;
}

