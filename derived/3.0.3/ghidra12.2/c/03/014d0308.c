
uint FUN_014d0308(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_5c [3];
  
  local_5c[1] = 0.0;
  local_5c[2] = (float)*(int *)(param_1 + 0xc) * 5.0;
  local_5c[0] = (float)*(int *)(param_1 + 8) * 5.0;
  uVar1 = FUN_02b90ee0(local_5c);
  lVar5 = *(long *)PTR_DAT_04bb27c0;
  if (lVar5 != 0) {
    if ((((uVar1 == 0) ||
         (plVar6 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) + (ulong)(uVar1 >> 0x14) * 8),
         plVar6 == (long *)0x0)) || ((*(uint *)(plVar6 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar6 + 0x46) != uVar1)) {
      plVar6 = (long *)0x0;
    }
    if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
      plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar3 + 0x60))();
    }
    if (plVar6 != (long *)0x0) {
      if (((*PTR_DAT_04bb59a0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb59a0), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb5998 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb59a0);
      }
      (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb5998);
      plVar3 = (long *)plVar6[0x193];
      if (plVar3 != (long *)0x0) {
        local_68 = 0;
        local_80 = PTR_DAT_04bbbc20 + 0x10;
        puVar4 = (undefined4 *)(**(code **)(*plVar3 + 0x20))(plVar3);
        local_78 = *puVar4;
        local_6c = *(undefined4 *)(plVar6[0xd] + 0x2b4);
        local_74 = puVar4[1];
        local_70 = puVar4[2];
        (**(code **)(*plVar3 + 0xd8))(plVar3,param_3,&local_80);
        (**(code **)(*plVar3 + 0xd0))(plVar3,param_4,&local_80);
        if ((param_2 & 1) == 0) {
          if (*(int *)(param_4 + 8) != *(int *)(param_1 + 8)) {
            return *(uint *)PTR_DAT_04bb3238;
          }
          if (*(int *)(param_4 + 0xc) != *(int *)(param_1 + 0xc)) {
            return *(uint *)PTR_DAT_04bb3238;
          }
        }
      }
    }
  }
  return uVar1;
}

