
void FUN_00228fd0(long *param_1,undefined4 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  lVar1 = param_1[3];
  (**(code **)(*param_1 + 8))(param_1,&DAT_04be2488,1);
  uVar4 = (ulong)*(uint *)(param_1 + 3) & 0x3f;
  uVar3 = (uint)uVar4;
  uVar2 = 0x40 - uVar3;
  if (uVar3 < 0x39) {
    if (uVar3 == 0x38) goto LAB_0022905c;
  }
  else {
    memset((void *)((long)param_1 + uVar4 + 0x1c),0,(ulong)uVar2);
    (**(code **)(*param_1 + 0x28))(param_1);
    uVar4 = 0;
    uVar2 = 0x40;
  }
  memset((void *)((long)param_1 + uVar4 + 0x1c),0,(ulong)(uVar2 - 8));
LAB_0022905c:
  *(ulong *)((long)param_1 + 0x54) = (ulong)(uint)((int)lVar1 << 3);
  (**(code **)(*param_1 + 0x28))(param_1);
  *param_2 = (int)param_1[1];
  param_2[1] = *(undefined4 *)((long)param_1 + 0xc);
  param_2[2] = (int)param_1[2];
  param_2[3] = *(undefined4 *)((long)param_1 + 0x14);
  return;
}

