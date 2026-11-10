
undefined8 FUN_00172200(long param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00172b84(param_1,(int)param_2[1],*(undefined4 *)((long)param_2 + 0xc));
  if (iVar1 != 0) {
    uVar2 = FUN_0016cb78(*param_2,*(undefined4 *)(param_1 + 0xb8),3);
    return uVar2;
  }
  if (((*(byte *)(*param_2 + 0x99c) & 1) == 0) && (*(char *)(param_1 + 0xe7) == '\0')) {
    uVar2 = FUN_001686ac(*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xc0));
    if (((int)uVar2 != 0) &&
       (uVar2 = FUN_001717d8(*param_2,0,*(undefined4 *)(param_1 + 0xb8),
                             *(undefined4 *)(param_1 + 0xc0)), (int)uVar2 == 0)) {
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

