
void FUN_039e9a58(undefined8 param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_458 [1048];
  
  if (((*PTR_DAT_04bb3490 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3490), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb3488 = PTR_DAT_04bb3498 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3490);
  }
  if ((param_2 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*param_2)(param_2,PTR_DAT_04bb3488), (uVar2 & 1) != 0)) {
    lVar3 = *(long *)(*(long *)(param_2[0x23] + (long)param_3 * 0x70) + 0x48);
    (**(code **)(*(long *)(lVar3 + 0x1070) + 0x18))(lVar3 + 0x1070);
    FUN_006e9454(auStack_458,"%s(Proc)",*(undefined8 *)(lVar3 + 0x1078));
    FUN_039e9b60(param_1,param_2,param_3,auStack_458,param_4);
  }
  return;
}

