
void FUN_02e2f23c(undefined8 *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined *local_40;
  undefined4 local_38;
  
  if (((*PTR_DAT_04bc6aa8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc6aa8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc6aa0 = PTR_DAT_04bc6a68 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc6aa8);
  }
  if ((param_1 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*param_1)(param_1,PTR_DAT_04bc6aa0), (uVar2 & 1) != 0)) {
    puVar3 = *(undefined8 **)param_1[0x7f];
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc4e58);
    if ((uVar2 & 1) == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    plVar4 = *(long **)(puVar3[0x45] + (ulong)(1 < *(uint *)(puVar3 + 0x44)) * 8);
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      local_40 = PTR_DAT_04bc4f00 + 0x10;
      local_38 = 0x14;
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
      (**(code **)(plVar4[3] + 0x158))((float)param_2,plVar4[1]);
    }
  }
  return;
}

