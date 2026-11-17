
void FUN_030389b4(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  
  iVar4 = *param_2;
  *(int *)(param_1 + 0x6c) = iVar4;
  iVar5 = param_2[1];
  *(undefined4 *)(param_1 + 300) = 0;
  if (iVar4 <= iVar5) {
    iVar5 = iVar4;
  }
  *(int *)(param_1 + 0x128) = iVar5;
  *(int *)(param_1 + 0x70) = param_2[2];
  uVar8 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x78) = uVar8;
  (**(code **)(*(long *)(param_2 + 6) + 0x10))(param_2 + 6,param_1 + 0x80);
  (**(code **)(*(long *)(param_2 + 0xe) + 0x10))(param_2 + 0xe,param_1 + 0xa0);
  iVar5 = *(int *)(param_1 + 0x128);
  iVar4 = *(int *)(param_1 + 0x6c);
  FUN_03037ed0(param_1);
  if (iVar4 < 2) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 300);
  uVar9 = (ulong)uVar6;
  uVar1 = uVar6 + 1 & 1;
  uVar2 = -uVar1;
  if (-2 < (int)uVar6) {
    uVar2 = uVar1;
  }
  uVar1 = uVar6 + 3 & 1;
  uVar3 = -uVar1;
  if (-1 < (int)(uVar6 + 3)) {
    uVar3 = uVar1;
  }
  if (iVar5 == 0) {
    lVar7 = param_1 + uVar9 * 0x20;
    if (1 < uVar6) {
      lVar7 = param_1;
    }
    lVar10 = param_1 + (ulong)uVar3 * 0x20;
    if (1 < uVar3) {
      lVar10 = param_1;
    }
  }
  else if (iVar4 + -1 == iVar5) {
    lVar7 = param_1 + (ulong)uVar2 * 0x20;
    if (1 < uVar2) {
      lVar7 = param_1;
    }
    lVar10 = param_1 + uVar9 * 0x20;
    if (1 < uVar6) {
      lVar10 = param_1;
    }
  }
  else {
    lVar10 = param_1 + uVar9 * 0x20;
    if (1 < uVar6) {
      lVar10 = param_1;
    }
    lVar7 = param_1 + (ulong)uVar3 * 0x20;
    if (1 < uVar3) {
      lVar7 = param_1;
    }
    FUN_03038060(lVar10,lVar7);
    lVar7 = param_1 + (ulong)uVar2 * 0x20;
    if (1 < uVar2) {
      lVar7 = param_1;
    }
  }
  FUN_03038060(lVar7,lVar10);
  return;
}

