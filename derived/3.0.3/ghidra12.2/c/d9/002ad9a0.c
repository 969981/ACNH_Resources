
void FUN_002ad9a0(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar3 = PTR_DAT_04bce0e8;
  *(undefined1 *)(param_1 + 2) = 0xfd;
  puVar4 = PTR_DAT_04bce0f0;
  param_1[5] = 0;
  param_1[6] = 1;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = 0;
  param_1[3] = (long)(puVar4 + 0x10);
  param_1[4] = 0;
  lVar5 = -0x500;
  do {
    lVar1 = lVar5 + 0x28;
    *(undefined8 *)((long)param_1 + lVar5 + 0x540) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x548) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x550) = 1;
    *(undefined ***)((long)param_1 + lVar5 + 0x538) = &PTR_LAB_04847a20;
    *(undefined4 *)((long)param_1 + lVar5 + 0x558) = 0xffffffff;
    lVar5 = lVar1;
  } while (lVar1 != 0);
  param_1[200] = 0;
  memset(param_1 + 0xa7,0,0x101);
  puVar3 = PTR_DAT_04bcb8c8;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  *(undefined2 *)(param_1 + 0xcc) = 0;
  uVar2 = *(undefined4 *)puVar3;
  param_1[0xcd] = 0;
  *(undefined4 *)(param_1 + 0xc9) = uVar2;
  memset(param_1 + 0xce,0,4);
  memset((void *)((long)param_1 + 0x674),0,4);
  puVar3 = PTR_DAT_04bcd020;
  *(undefined2 *)(param_1 + 0xd0) = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  *(undefined2 *)((long)param_1 + 0x69c) = 0;
  param_1[0xd4] = 0;
  lVar5 = *(long *)puVar3;
  *(undefined4 *)(param_1 + 0xd3) = 0xffff;
  param_1[0xcf] = (lVar5 * 0x21) / 1000;
  memset(param_1 + 0xd5,0,4);
  *(undefined1 *)((long)param_1 + 0x6ac) = 1;
  return;
}

