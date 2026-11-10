
long FUN_003151e0(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  if (param_2 != param_1) {
    FUN_01c66e30(param_1 + 0x10,*(long *)(param_2 + 0x10),*(long *)(param_2 + 0x18),
                 (*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) >> 3) * -0x3333333333333333)
    ;
  }
  FUN_00189504(param_1 + 0x28,param_2 + 0x28);
  FUN_00189504(param_1 + 0x50,param_2 + 0x50);
  FUN_00189504(param_1 + 0x78,param_2 + 0x78);
  FUN_00189504(param_1 + 0xa0,param_2 + 0xa0);
  *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
  *(undefined2 *)(param_1 + 0xc9) = *(undefined2 *)(param_2 + 0xc9);
  uVar2 = *(undefined2 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  uVar1 = *(undefined1 *)(param_2 + 0xe0);
  *(undefined2 *)(param_1 + 0xd0) = uVar2;
  *(undefined1 *)(param_1 + 0xe0) = uVar1;
  if (param_2 != param_1) {
    FUN_00202290(param_1 + 0xe8,*(undefined8 *)(param_2 + 0xe8),param_2 + 0xf0);
  }
  *(undefined2 *)(param_1 + 0x100) = *(undefined2 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  FUN_00189504(param_1 + 0x108,param_2 + 0x108);
  FUN_001fed98(param_1 + 0x130,param_2 + 0x130);
  return param_1;
}

