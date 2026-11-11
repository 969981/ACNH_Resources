
long FUN_003fe964(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  FUN_00189504(param_1 + 0x10,param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 0x38);
  FUN_0019d994(param_1 + 0x40,param_2 + 0x40);
  *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)(param_2 + 0x80);
  if (param_2 == param_1) {
    *(undefined2 *)(param_1 + 0xa8) = *(undefined2 *)(param_2 + 0xa8);
    uVar3 = *(undefined4 *)(param_2 + 0xd0);
    uVar4 = *(undefined1 *)(param_2 + 0x110);
    uVar5 = *(undefined2 *)(param_2 + 0x112);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
    uVar6 = *(undefined2 *)(param_2 + 0xcc);
    *(undefined4 *)(param_1 + 0xd0) = uVar3;
    *(undefined1 *)(param_1 + 0x110) = uVar4;
    *(undefined2 *)(param_1 + 0x112) = uVar5;
    *(undefined2 *)(param_1 + 0xcc) = uVar6;
    *(undefined1 *)(param_1 + 0x114) = *(undefined1 *)(param_2 + 0x114);
    return param_1;
  }
  FUN_01c68940(param_1 + 0x88,*(long *)(param_2 + 0x88),*(long *)(param_2 + 0x90),
               *(long *)(param_2 + 0x90) - *(long *)(param_2 + 0x88) >> 3);
  *(undefined2 *)(param_1 + 0xa8) = *(undefined2 *)(param_2 + 0xa8);
  FUN_01c68940(param_1 + 0xb0,*(long *)(param_2 + 0xb0),*(long *)(param_2 + 0xb8),
               *(long *)(param_2 + 0xb8) - *(long *)(param_2 + 0xb0) >> 3);
  lVar1 = *(long *)(param_2 + 0xd8);
  lVar2 = *(long *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined2 *)(param_1 + 0xcc) = *(undefined2 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  FUN_01c66e30(param_1 + 0xd8,lVar1,lVar2,(lVar2 - lVar1 >> 3) * -0x3333333333333333);
  FUN_004055b0(param_1 + 0xf0,*(long *)(param_2 + 0xf0),*(long *)(param_2 + 0xf8),
               (*(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0) >> 3) * 0x6db6db6db6db6db7);
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
  lVar1 = *(long *)(param_2 + 0x118);
  lVar2 = *(long *)(param_2 + 0x120);
  *(undefined2 *)(param_1 + 0x112) = *(undefined2 *)(param_2 + 0x112);
  *(undefined1 *)(param_1 + 0x114) = *(undefined1 *)(param_2 + 0x114);
  FUN_01c66e30(param_1 + 0x118,lVar1,lVar2,(lVar2 - lVar1 >> 3) * -0x3333333333333333);
  return param_1;
}

