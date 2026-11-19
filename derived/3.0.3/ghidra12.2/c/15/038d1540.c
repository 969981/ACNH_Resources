
int FUN_038d1540(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 *local_60;
  long lStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  
  lVar2 = param_1[1];
  local_d0 = param_3;
  uStack_c8 = param_4;
  local_c0 = param_5;
  uStack_b8 = param_6;
  local_b0 = param_7;
  uStack_a8 = param_8;
  (**(code **)(*param_1 + 0x18))();
  lVar6 = 0;
  do {
    if (*(short *)(param_1[1] + lVar6 * 2) == 0) goto LAB_038d1600;
    lVar1 = param_1[1] + lVar6 * 2;
    if (*(short *)(lVar1 + 2) == 0) {
      lVar6 = lVar6 + 1;
      goto LAB_038d1600;
    }
    if (*(short *)(lVar1 + 4) == 0) {
      lVar6 = lVar6 + 2;
      goto LAB_038d1600;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_038d1600:
  iVar3 = (int)lVar6;
  lVar2 = lVar2 + (long)iVar3 * 2;
  lVar6 = (long)(int)param_1[2] - (long)iVar3;
  uStack_48 = 0xffffff80ffffffd0;
  local_60 = (undefined1 *)register0x00000008;
  lStack_58 = (long)register0x00000008 + -0xa0;
  local_50 = &local_d0;
  iVar4 = FUN_038d3ee0(lVar2,lVar6,param_2,&local_60);
  iVar5 = (int)lVar6;
  if ((iVar4 < 0) || (iVar5 <= iVar4)) {
    iVar4 = iVar5 + -1;
    *(undefined2 *)(lVar2 + (long)iVar4 * 2) = 0;
  }
  return iVar4 + iVar3;
}

