
undefined8 FUN_025480a0(byte *param_1,undefined4 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  uint *puVar7;
  long *local_40;
  char local_38;
  char local_37;
  char local_36;
  undefined4 local_18;
  int local_14;
  
  puVar5 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar5 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_18 = *puVar5;
  FUN_0071c8d0(&local_40,&local_18,PTR_DAT_04bb3238,0);
  plVar1 = local_40;
  if (local_40 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3770);
    if ((uVar3 & 1) == 0) {
      local_37 = '\0';
    }
  }
  uVar4 = 0;
  if ((((local_40 != (long *)0x0) && (local_38 != '\0')) && (local_37 != '\0')) &&
     (local_36 != '\0')) {
    local_14 = FUN_00a74b78(local_40 + 0x3dd);
    if (local_14 == 4) {
      FUN_02330048(local_40);
    }
    uVar3 = FUN_0244b8bc(local_40,param_2);
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      if ((param_4 & 1) != 0) {
        FUN_02332994(local_40);
      }
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar2 = __cxa_guard_acquire(&DAT_054f0960);
          puVar7 = (uint *)&DAT_054f0958;
          if (iVar2 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar7 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar7 = (uint *)(DAT_054f5738 + 0x204);
        if ((ulong)*param_1 < 8) {
          puVar7 = puVar7 + (ulong)*param_1 * 2;
        }
      }
      local_14 = 6;
      *puVar7 = *puVar7 & 0xffffffbf;
      if (local_40[0xc] != 0) {
        FUN_0172fad0(local_40[0xc] + 0x12c0,local_40,PTR_DAT_04bbe070,PTR_DAT_04bbe078,
                     PTR_DAT_04bb6928);
        lVar6 = local_40[0xc];
        if (lVar6 != 0) {
          *(undefined4 *)(lVar6 + 0x12d0) = 0;
          *(undefined1 *)(lVar6 + 0x142d) = 0;
          **(undefined1 **)(lVar6 + 0x12e0) = 0;
          *(undefined4 *)(lVar6 + 0x1330) = 0xffffffff;
          *(undefined4 *)(lVar6 + 0x1428) = 0;
          *(undefined8 *)(lVar6 + 0x1334) = 0;
          *(undefined8 *)(lVar6 + 0x133c) = 0;
          *(undefined4 *)(lVar6 + 0x1344) = 0;
          return 1;
        }
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}

