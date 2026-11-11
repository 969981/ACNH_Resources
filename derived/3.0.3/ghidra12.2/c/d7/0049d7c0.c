
undefined8 FUN_0049d7c0(long param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  lVar2 = param_1 + 0x50;
  iVar3 = FUN_0049f630(lVar2);
  if (iVar3 != 8) {
    return 6;
  }
  uVar4 = *(uint *)(param_1 + 0xc0);
  uVar5 = *(undefined8 *)PTR_PTR_04bd4d20;
  if (uVar4 != (*(uint *)(param_1 + 0xc4) & 0x3fffffff)) goto LAB_0049d830;
  do {
    FUN_00426990(uVar5,param_1 + 0xb8,8);
    uVar4 = *(uint *)(param_1 + 0xc0);
LAB_0049d830:
    do {
      *(uint *)(param_1 + 0xc0) = uVar4 + 1;
      piVar1 = (int *)(*(long *)(param_1 + 0xb8) + (long)(int)uVar4 * 8);
      *piVar1 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80);
      piVar1[1] = (*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x90)) - *(int *)(param_1 + 0x80);
      iVar3 = FUN_0049f630(lVar2);
      if (iVar3 != 8) {
        if (iVar3 == 7) {
          FUN_0049d610(param_1);
          return 0;
        }
        return 6;
      }
      uVar4 = *(uint *)(param_1 + 0xc0);
      if (uVar4 == (*(uint *)(param_1 + 0xc4) & 0x3fffffff)) {
        FUN_00426990(uVar5,param_1 + 0xb8,8);
        uVar4 = *(uint *)(param_1 + 0xc0);
      }
      *(uint *)(param_1 + 0xc0) = uVar4 + 1;
      piVar1 = (int *)(*(long *)(param_1 + 0xb8) + (long)(int)uVar4 * 8);
      *piVar1 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80);
      piVar1[1] = (*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x90)) - *(int *)(param_1 + 0x80);
      iVar3 = FUN_0049f630(lVar2);
      if (iVar3 != 9) {
        return 6;
      }
      iVar3 = FUN_0049f630(lVar2);
      if (iVar3 != 10) {
        return 6;
      }
      uVar4 = *(uint *)(param_1 + 0xc0);
    } while (uVar4 != (*(uint *)(param_1 + 0xc4) & 0x3fffffff));
  } while( true );
}

