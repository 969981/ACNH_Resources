
bool FUN_02ac7470(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *local_60;
  char local_58;
  char local_56;
  undefined4 local_38;
  undefined4 uStack_34;
  
  uStack_34 = *(undefined4 *)(param_1 + 0x234);
  local_38 = *(undefined4 *)(param_1 + 0x230);
  FUN_0071cb58(&local_60,&uStack_34,&local_38,0);
  plVar6 = local_60;
  if (local_60 != (long *)0x0) {
    if (((*PTR_DAT_04bc4480 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4480), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bc4478 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4480);
    }
    uVar5 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bc4478);
    if ((uVar5 & 1) == 0) {
      local_56 = '\0';
    }
  }
  puVar3 = PTR_DAT_04bc4720;
  puVar2 = PTR_DAT_04bc4718;
  if ((((local_60 != (long *)0x0) && (local_58 != '\0')) && (local_56 != '\0')) &&
     ((*(uint *)(local_60 + 0x49) >> 1 & 1) == 0)) {
    if ((long *)local_60[0x16] != local_60 + 0x15) {
      lVar7 = (long)*(int *)((long)local_60 + 0xbc);
      plVar6 = (long *)(local_60[0x16] - lVar7);
      puVar1 = PTR_DAT_04bb5d98 + 0x10;
      do {
        if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
          *(undefined **)puVar2 = puVar1;
          __cxa_guard_release(puVar3);
        }
        if ((plVar6 != (long *)0x0) &&
           (uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,puVar2), (uVar5 & 1) != 0)) {
          if ((char)plVar6[0x10b] == '\0') {
            return false;
          }
          return *(uint *)(plVar6 + 0x67) < 2;
        }
        plVar6 = (long *)(*(long *)((long)plVar6 + lVar7 + 8) - lVar7);
      } while (plVar6 != (long *)((long)(local_60 + 0x15) - lVar7));
    }
  }
  return false;
}

