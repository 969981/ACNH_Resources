
void FUN_0038a244(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  
  if ((*(short *)(param_1 + 0x112) != 0 && *(long *)(param_1 + 0xf0) != 0) &&
     (*(long *)(param_1 + 0x140) != 0)) {
    FUN_0037ba78(*(long *)(param_1 + 0x140),param_3);
    if ((*(byte *)(param_1 + 0x62) >> 1 & 1) != 0) {
      uVar1 = FUN_00366284(*(undefined8 *)(param_2 + 0xb8),1);
      FUN_00348090(param_3,uVar1);
    }
    plVar2 = *(long **)(*(long *)(param_2 + 0xb8) + 0x80);
    FUN_00365054(param_2);
    (**(code **)(*plVar2 + 0x20))(plVar2,param_3,*(undefined8 *)(param_1 + 0x148));
    *(undefined1 *)(param_2 + 0x18c) = 1;
  }
  return;
}

