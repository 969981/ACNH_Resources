
void FUN_00483a20(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x78))(param_1,0,0);
  if (lVar2 != 0) {
    do {
      FUN_00483a20(lVar2,param_2);
      lVar2 = (**(code **)(*param_1 + 0x78))(param_1,0,lVar2);
    } while (lVar2 != 0);
  }
  lVar2 = (**(code **)(*param_1 + 0x48))(param_1,0,0,0);
  puVar1 = PTR_DAT_048607b8;
  if (lVar2 != 0) {
    do {
      uVar3 = *(uint *)(param_2 + 1);
      if (uVar3 == (*(uint *)((long)param_2 + 0xc) & 0x3fffffff)) {
        FUN_00426990(puVar1,param_2,8);
        uVar3 = *(uint *)(param_2 + 1);
      }
      *(long *)(*param_2 + (long)(int)uVar3 * 8) = lVar2;
      *(uint *)(param_2 + 1) = uVar3 + 1;
      lVar2 = (**(code **)(*param_1 + 0x48))(param_1,0,0,lVar2);
    } while (lVar2 != 0);
  }
  return;
}

