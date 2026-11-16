
void FUN_02691128(long param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 4);
  piVar4 = param_2 + 1;
  iVar5 = *param_2;
  if (((*(int *)(param_1 + 0x20) != 0 && iVar3 != 0) && iVar3 == *param_2) &&
     (iVar5 = iVar3, *(short *)(param_1 + 8) == 0)) {
    uVar1 = *(undefined8 *)piVar4;
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(int *)(param_1 + 0x18) = param_2[5];
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    iVar5 = *param_2;
  }
  if ((((*(int *)(param_1 + 0x610) != 0) && (*(int *)(param_1 + 0x5f4) != 0)) &&
      (*(int *)(param_1 + 0x5f4) == iVar5)) && (*(short *)(param_1 + 0x5f8) == 0)) {
    uVar1 = *(undefined8 *)piVar4;
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(int *)(param_1 + 0x608) = param_2[5];
    *(undefined8 *)(param_1 + 0x5f8) = uVar1;
    *(undefined8 *)(param_1 + 0x600) = uVar2;
    iVar5 = *param_2;
  }
  if (((*(int *)(param_1 + 0xc00) != 0) && (*(int *)(param_1 + 0xbe4) != 0)) &&
     ((*(int *)(param_1 + 0xbe4) == iVar5 && (*(short *)(param_1 + 0xbe8) == 0)))) {
    uVar1 = *(undefined8 *)piVar4;
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(int *)(param_1 + 0xbf8) = param_2[5];
    *(undefined8 *)(param_1 + 0xbe8) = uVar1;
    *(undefined8 *)(param_1 + 0xbf0) = uVar2;
    iVar5 = *param_2;
  }
  if (((*(int *)(param_1 + 0x11f0) != 0) && (*(int *)(param_1 + 0x11d4) != 0)) &&
     ((*(int *)(param_1 + 0x11d4) == iVar5 && (*(short *)(param_1 + 0x11d8) == 0)))) {
    uVar1 = *(undefined8 *)piVar4;
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(int *)(param_1 + 0x11e8) = param_2[5];
    *(undefined8 *)(param_1 + 0x11d8) = uVar1;
    *(undefined8 *)(param_1 + 0x11e0) = uVar2;
    iVar5 = *param_2;
  }
  if ((((*(int *)(param_1 + 0x17e0) != 0) && (*(int *)(param_1 + 0x17c4) != 0)) &&
      (*(int *)(param_1 + 0x17c4) == iVar5)) && (*(short *)(param_1 + 0x17c8) == 0)) {
    uVar1 = *(undefined8 *)piVar4;
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(int *)(param_1 + 0x17d8) = param_2[5];
    *(undefined8 *)(param_1 + 0x17c8) = uVar1;
    *(undefined8 *)(param_1 + 0x17d0) = uVar2;
    iVar5 = *param_2;
  }
  if (((*(int *)(param_1 + 0x1dd0) != 0) && (*(int *)(param_1 + 0x1db4) != 0)) &&
     ((*(int *)(param_1 + 0x1db4) == iVar5 && (*(short *)(param_1 + 0x1db8) == 0)))) {
    uVar1 = *(undefined8 *)piVar4;
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(int *)(param_1 + 0x1dc8) = param_2[5];
    *(undefined8 *)(param_1 + 0x1db8) = uVar1;
    *(undefined8 *)(param_1 + 0x1dc0) = uVar2;
    iVar5 = *param_2;
  }
  if (((*(int *)(param_1 + 0x23c0) != 0) && (*(int *)(param_1 + 0x23a4) != 0)) &&
     ((*(int *)(param_1 + 0x23a4) == iVar5 && (*(short *)(param_1 + 0x23a8) == 0)))) {
    uVar1 = *(undefined8 *)piVar4;
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(int *)(param_1 + 0x23b8) = param_2[5];
    *(undefined8 *)(param_1 + 0x23a8) = uVar1;
    *(undefined8 *)(param_1 + 0x23b0) = uVar2;
    iVar5 = *param_2;
  }
  if ((((*(int *)(param_1 + 0x29b0) == 0) || (*(int *)(param_1 + 0x2994) == 0)) ||
      (*(int *)(param_1 + 0x2994) != iVar5)) || (*(short *)(param_1 + 0x2998) != 0)) {
    return;
  }
  uVar1 = *(undefined8 *)piVar4;
  uVar2 = *(undefined8 *)(param_2 + 3);
  *(int *)(param_1 + 0x29a8) = param_2[5];
  *(undefined8 *)(param_1 + 0x2998) = uVar1;
  *(undefined8 *)(param_1 + 0x29a0) = uVar2;
  return;
}

