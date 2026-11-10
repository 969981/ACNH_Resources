
long FUN_0031450c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  FUN_0031acf8();
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  if (param_2 == param_1) {
    *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
    uVar3 = *(undefined4 *)(param_2 + 0x84);
    uVar5 = *(undefined1 *)(param_2 + 0xa4);
    uVar4 = *(undefined4 *)(param_2 + 0xc0);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined1 *)(param_1 + 0xa4) = uVar5;
    *(undefined4 *)(param_1 + 0xc0) = uVar4;
    *(undefined4 *)(param_1 + 0x84) = uVar3;
    *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  }
  else {
    FUN_00317450(param_1 + 0x68,*(long *)(param_2 + 0x68),*(long *)(param_2 + 0x70),
                 *(long *)(param_2 + 0x70) - *(long *)(param_2 + 0x68) >> 2);
    lVar1 = *(long *)(param_2 + 0x88);
    lVar2 = *(long *)(param_2 + 0x90);
    uVar3 = *(undefined4 *)(param_2 + 0x84);
    *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
    *(undefined4 *)(param_1 + 0x84) = uVar3;
    FUN_001a2ac0(param_1 + 0x88,lVar1,lVar2,lVar2 - lVar1);
    lVar1 = *(long *)(param_2 + 0xa8);
    lVar2 = *(long *)(param_2 + 0xb0);
    uVar5 = *(undefined1 *)(param_2 + 0xa4);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined1 *)(param_1 + 0xa4) = uVar5;
    FUN_001a2ac0(param_1 + 0xa8,lVar1,lVar2,lVar2 - lVar1);
    uVar5 = *(undefined1 *)(param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
    uVar6 = *(undefined8 *)(param_2 + 0xd8);
    *(undefined1 *)(param_1 + 0xd0) = uVar5;
    FUN_00202290(param_1 + 0xd8,uVar6,param_2 + 0xe0);
  }
  FUN_001865b0(param_1 + 0xf0,param_2 + 0xf0);
  FUN_00189504(param_1 + 0xf8,param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined2 *)(param_1 + 0x124) = *(undefined2 *)(param_2 + 0x124);
  FUN_00189504(param_1 + 0x128,param_2 + 0x128);
  return param_1;
}

