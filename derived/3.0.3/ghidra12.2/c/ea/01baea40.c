
void FUN_01baea40(long param_1,undefined8 param_2,undefined4 param_3,uint *param_4,
                 undefined4 param_5)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_4c;
  undefined4 local_44;
  
  lVar4 = FUN_01bc1730(*(long *)PTR_DAT_04bb28f8 + 0x2990,param_1 + 8);
  if (lVar4 != 0) {
    local_4c = 0;
    local_44 = 0;
    if (((*PTR_DAT_04bc0a88 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0533a3c0), iVar3 != 0))
    {
      FUN_01bb25c8(&DAT_0533a3b0);
      __cxa_guard_release(&DAT_0533a3c0);
    }
    uVar2 = *param_4;
    if (*(uint *)PTR_DAT_04bc0a80 <= uVar2) {
      uVar2 = 0;
    }
    local_4c = CONCAT44(param_5,*(undefined4 *)
                                 (*(long *)(PTR_DAT_04bc0a80 + 8) + (long)(int)uVar2 * 4));
    local_44 = param_3;
    while (plVar5 = (long *)FUN_01bc0860(lVar4,&local_4c,1), plVar5 != (long *)0x0) {
      plVar1 = (long *)((long)*(int *)(lVar4 + 0x2c) + (long)plVar5);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(lVar4 + 0x28) = *(int *)(lVar4 + 0x28) + -1;
      (**(code **)(*plVar5 + 0x18))();
    }
    FUN_01bc0ccc(lVar4,&local_4c,param_2);
  }
  return;
}

