
void FUN_0252be2c(byte *param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long *local_40;
  undefined8 local_38;
  undefined4 local_18 [2];
  
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_054f0960);
      puVar4 = (uint *)&DAT_054f0958;
      if (iVar2 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar4 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar4 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar4 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar4 = puVar4 + (ulong)*param_1 * 2;
    }
  }
  local_40._0_4_ = 0x12;
  *puVar4 = *puVar4 & 0xfffbffff;
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_054f0960);
      puVar4 = (uint *)&DAT_054f0958;
      if (iVar2 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar4 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar4 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar4 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar4 = puVar4 + (ulong)*param_1 * 2;
    }
  }
  local_40._0_4_ = 0x13;
  *puVar4 = *puVar4 & 0xfff7ffff;
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_054f0960);
      puVar4 = (uint *)&DAT_054f0958;
      if (iVar2 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar4 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar4 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar4 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar4 = puVar4 + (ulong)*param_1 * 2;
    }
  }
  local_40 = (long *)CONCAT44(local_40._4_4_,0x14);
  *puVar4 = *puVar4 & 0xffefffff;
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_054f0960);
      puVar4 = (uint *)&DAT_054f0958;
      if (iVar2 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar4 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar4 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar4 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar4 = puVar4 + (ulong)*param_1 * 2;
    }
  }
  *puVar4 = *puVar4 & 0xffdfffff;
  local_40 = (long *)(PTR_DAT_04bb2020 + 0x10);
  local_38 = "ForceToolBreakDemo";
  FUN_027533a8(param_1,&local_40,0);
  if (((ulong)*param_1 < 8) && (DAT_054f5738 != 0)) {
    puVar5 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
  }
  else {
    puVar5 = (undefined4 *)PTR_DAT_04bb3238;
  }
  local_18[0] = *puVar5;
  FUN_0071c8d0(&local_40,local_18,PTR_DAT_04bb3238,0);
  plVar1 = local_40;
  if (local_40 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3770);
    if ((uVar3 & 1) == 0) {
      local_38._0_2_ = (ushort)(byte)local_38;
    }
  }
  if ((((local_40 != (long *)0x0) && ((byte)local_38 != '\0')) && (local_38._1_1_ != '\0')) &&
     (local_38._2_1_ != '\0')) {
    *(uint *)(local_40 + 0x2fa) = *(uint *)(local_40 + 0x2fa) & 0xfff7ffff;
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_054f0960);
        puVar6 = &DAT_054f0958;
        if (iVar2 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar6 = &DAT_054f0958;
      }
    }
    else {
      puVar6 = (undefined8 *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_1 < 8) {
        puVar6 = puVar6 + *param_1;
      }
    }
    *(uint *)((long)puVar6 + 4) = *(uint *)((long)puVar6 + 4) & 0xffffefff;
    *(uint *)((long)local_40 + 0x17d4) = *(uint *)((long)local_40 + 0x17d4) & 0xffffff7f;
  }
  return;
}

