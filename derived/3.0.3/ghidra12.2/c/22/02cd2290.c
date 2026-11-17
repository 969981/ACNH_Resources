
/* WARNING: Removing unreachable block (ram,0x02cd235c) */

void FUN_02cd2290(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  *(undefined4 *)((long)param_1 + 0x1c294) = 0xffffffff;
  (**(code **)(*param_1 + 0x478))();
  FUN_03136ca0(param_1 + 0x42,param_1 + 0x3f,0);
  (**(code **)(*param_1 + 0x368))(param_1);
  FUN_02cc9468(param_1);
  FUN_02cc959c(param_1,1);
  uVar2 = (**(code **)(*param_1 + 0x278))(param_1);
  (**(code **)param_1[0x387b])(param_1 + 0x387b,uVar2);
  iVar1 = (**(code **)(*param_1 + 0x268))(param_1);
  if (iVar1 == 3) {
    puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
    if (((*PTR_DAT_04bc7280 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc7280);
    }
    if ((puVar5 != (undefined8 *)0x0) &&
       (uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc7278), (uVar3 & 1) != 0)) {
      *(byte *)((long)puVar5 + 0x239) = *(byte *)((long)puVar5 + 0x239) | 1;
    }
    (**(code **)(*param_1 + 0x4c0))(param_1);
  }
  (**(code **)(*param_1 + 0x358))(param_1);
  (**(code **)(*param_1 + 0x248))(param_1);
  plVar4 = (long *)(**(code **)(*param_1 + 0x270))(param_1);
                    /* WARNING: Could not recover jumptable at 0x02cd23f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x120))(plVar4,0);
  return;
}

