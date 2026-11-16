
uint FUN_02548454(byte *param_1,ulong param_2,uint param_3,undefined8 param_4,undefined4 param_5)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  long *local_48;
  char local_40;
  char local_3f;
  char local_3e;
  undefined4 local_38 [2];
  
  puVar5 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar5 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_38[0] = *puVar5;
  FUN_0071c8d0(&local_48,local_38,PTR_DAT_04bb3238,0);
  plVar1 = local_48;
  if (local_48 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3770);
    if ((uVar4 & 1) == 0) {
      local_3f = '\0';
    }
  }
  uVar2 = 0;
  if ((((local_48 != (long *)0x0) && (local_40 != '\0')) && (local_3f != '\0')) &&
     (local_3e != '\0')) {
    if ((param_2 & 1) == 0) {
      uVar2 = FUN_0244bf8c(local_48,0,param_3 & 1,param_5);
    }
    else {
      uVar4 = FUN_0244bf8c(local_48,1,param_3 & 1,param_5);
      if ((uVar4 & 1) == 0) {
        uVar2 = 0;
      }
      else {
        if (DAT_054f5738 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar3 = __cxa_guard_acquire(&DAT_054f0960);
            puVar6 = (uint *)&DAT_054f0958;
            if (iVar3 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
            }
          }
          else {
            puVar6 = (uint *)&DAT_054f0958;
          }
        }
        else {
          puVar6 = (uint *)(DAT_054f5738 + 0x204);
          if ((ulong)*param_1 < 8) {
            puVar6 = puVar6 + (ulong)*param_1 * 2;
          }
        }
        *puVar6 = *puVar6 | 0x40;
        uVar2 = 1;
      }
    }
  }
  return uVar2 & 1;
}

