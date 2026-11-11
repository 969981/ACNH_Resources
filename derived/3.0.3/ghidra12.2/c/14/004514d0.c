
ulong FUN_004514d0(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_30;
  long local_28;
  
  if (param_2 == 0) {
    uVar5 = 0;
    goto LAB_004515d8;
  }
  local_28 = param_2;
  lVar4 = FUN_004518c0(param_1,&local_28);
  if ((lVar4 != 0) &&
     (uVar5 = *(ulong *)(*param_1 + (long)*(int *)(lVar4 + 4) * 0x10 + 8), uVar5 != 0))
  goto LAB_004515d8;
  uVar2 = FUN_00451960(param_1,&local_28);
  if (*(uint *)(param_1 + 1) == uVar2) {
    if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == uVar2) {
      FUN_00426990(PTR_DAT_048607b8,param_1,0x10);
      uVar2 = *(uint *)(param_1 + 1);
    }
    plVar1 = (long *)(*param_1 + (long)(int)uVar2 * 0x10);
    *plVar1 = local_28;
    plVar1[1] = 0x100000000;
    *(uint *)(param_1 + 1) = uVar2 + 1;
    if (*(long *)(local_28 + 8) == 0) {
      uVar3 = 0;
    }
    else {
LAB_004515a4:
      uVar3 = FUN_004514d0(param_1);
    }
  }
  else {
    *(undefined8 *)(*param_1 + ((long)((ulong)uVar2 << 0x20) >> 0x1c) + 8) = 0x100000000;
    uVar3 = 0;
    if (*(long *)(local_28 + 8) != 0) goto LAB_004515a4;
  }
  local_30 = FUN_00451150(param_1,uVar3,local_28);
  uVar5 = local_30 & 0xffffffff;
  local_30 = local_30 & 0xffffffff;
  FUN_004515f0(param_1,&local_28,&local_30);
LAB_004515d8:
  return uVar5 & 0xffffffff;
}

