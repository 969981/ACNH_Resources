
void FUN_01877130(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  if (*(int *)((long)param_1 + 0x4ac) == 1) {
    uVar1 = (**(code **)(*param_1 + 0x2b8))(param_1);
    uVar7 = 2;
    if ((uVar1 & 1) != 0) {
      uVar7 = 3;
    }
    *(undefined4 *)((long)param_1 + 0x4ac) = uVar7;
  }
  if (*(int *)((long)param_1 + 0x3e4) == 1) {
    uVar1 = (**(code **)(*param_1 + 0x228))(param_1);
    uVar7 = 2;
    if ((uVar1 & 1) == 0) {
      uVar7 = 3;
    }
    *(undefined4 *)((long)param_1 + 0x3e4) = uVar7;
  }
  uVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((uVar1 & 1) == 0) {
    (**(code **)(*param_1 + 0x120))(param_1);
    (**(code **)(*param_1 + 0x128))(param_1);
  }
  if ((param_1[0x7a] != 0) && (lVar3 = *(long *)(param_1[0x7a] + 0x90), lVar3 != 0)) {
    lVar2 = param_1[0x60];
    uVar7 = *(undefined4 *)(lVar2 + 0x278);
    fVar8 = *(float *)(lVar2 + 0x27c);
    fVar9 = *(float *)(lVar2 + 0x280);
    fVar4 = (float)(**(code **)(*param_1 + 0x200))(param_1);
    fVar5 = (float)(**(code **)(*param_1 + 0x208))(param_1);
    if (param_1[0x7a] == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(param_1[0x7a] + 0x2e8);
    }
    *(undefined4 *)(lVar3 + 0x390) = uVar7;
    *(float *)(lVar3 + 0x394) = fVar8 + fVar4;
    *(float *)(lVar3 + 0x398) = fVar9 + fVar5;
    *(undefined4 *)(lVar3 + 0x39c) = uVar6;
    *(undefined4 *)(lVar3 + 0x3a0) = uVar6;
  }
  return;
}

