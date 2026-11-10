
void * FUN_00287b04(long *param_1,long param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ushort uVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  long *plVar8;
  ulong __n;
  
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00287b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar6 = (void *)(**(code **)(*param_1 + 0x30))(param_1,param_3,param_4);
    return pvVar6;
  }
  if (param_3 == 0) {
    (**(code **)(*param_1 + 0x38))(param_1,param_2);
    return (void *)0x0;
  }
  uVar5 = (**(code **)(*param_1 + 0x88))(param_1,param_2);
  if (param_4 < 0) {
    return (void *)0x0;
  }
  if ((uVar5 & 1) == 0) {
    return (void *)0x0;
  }
  if ((*(ushort *)(param_1 + 0x1a) & 1) == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = param_1 + 0x12;
    FUN_00290438(plVar8);
  }
  lVar3 = param_2 + -0x20;
  if ((*(ulong *)(param_2 + -8) & 1) != 0) {
    lVar3 = *(ulong *)(param_2 + -8) - 1;
  }
  uVar7 = param_3 + 7U & 0xfffffffffffffff8;
  __n = *(ulong *)(lVar3 + 0x18);
  uVar5 = __n - uVar7;
  if (__n < uVar7) {
    iVar2 = 4;
    if (param_4 != 0) {
      iVar2 = param_4;
    }
    uVar4 = *(ushort *)(lVar3 + 0x12);
    pvVar6 = (void *)(**(code **)(*param_1 + 0x30))(param_1,uVar7,iVar2);
    if (pvVar6 != (void *)0x0) {
      memcpy(pvVar6,(void *)(lVar3 + (ulong)uVar4 + 0x20),__n);
      (**(code **)(*param_1 + 0x38))(param_1,param_2);
    }
  }
  else {
    if (uVar5 == 0) {
      pvVar6 = (void *)(lVar3 + (ulong)*(ushort *)(lVar3 + 0x12) + 0x20);
      if ((param_4 == 0) || (((ulong)pvVar6 & (ulong)(param_4 - 1)) == 0)) goto LAB_00287cf0;
    }
    else if ((param_4 == 0) ||
            (pvVar6 = (void *)(lVar3 + (ulong)*(ushort *)(lVar3 + 0x12) + 0x20),
            ((ulong)pvVar6 & (ulong)(param_4 - 1)) == 0)) {
      if (uVar5 < 0x20) {
        pvVar6 = (void *)(lVar3 + (ulong)*(ushort *)(lVar3 + 0x12) + 0x20);
      }
      else {
        *(ulong *)(lVar3 + 0x18) = uVar7;
        puVar1 = (undefined8 *)(lVar3 + 0x20 + uVar7 + (ulong)*(ushort *)(lVar3 + 0x12));
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
        puVar1[3] = uVar5 - 0x20;
        FUN_00286560(param_1);
        pvVar6 = (void *)(lVar3 + 0x20 + (ulong)*(ushort *)(lVar3 + 0x12));
      }
      goto LAB_00287cf0;
    }
    pvVar6 = (void *)FUN_00287a94(param_1,param_2,pvVar6,uVar7,uVar7,param_4);
  }
LAB_00287cf0:
  if (plVar8 == (long *)0x0) {
    return pvVar6;
  }
  FUN_00290440(plVar8);
  return pvVar6;
}

