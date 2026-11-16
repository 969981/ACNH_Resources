
bool FUN_0255594c(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  int *piVar8;
  uint *puVar9;
  long *local_38;
  char local_30;
  char local_2f;
  char local_2e;
  int local_24;
  undefined4 local_8;
  uint local_4;
  
  local_8 = param_2;
  uVar6 = FUN_025506ac(param_1,param_3,param_2,param_3,1);
  if ((uVar6 & 1) != 0) {
    piVar8 = (int *)PTR_DAT_04bb3238;
    if ((ulong)*param_1 < 8) {
      if (DAT_054f5738 != 0) {
        piVar8 = (int *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
      }
    }
    local_24 = *piVar8;
    if (local_24 != 0) {
      FUN_0071cb58(&local_38,&local_24,&local_8,0);
      plVar4 = local_38;
      if (local_38 != (long *)0x0) {
        if (((*PTR_DAT_04bb3778 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3778);
        }
        uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb3770);
        if ((uVar6 & 1) == 0) {
          local_2e = '\0';
        }
      }
      if (local_38 == (long *)0x0) {
        return false;
      }
      if (local_30 == '\0') {
        return false;
      }
      if (local_2e == '\0') {
        return false;
      }
      if (local_2f == '\0') {
        return false;
      }
      local_4 = 0;
      if (local_38[0xe] != 0) {
        uVar3 = *(uint *)(local_38[0xe] + 0x280);
        local_4 = 0;
        if (uVar3 < 0x149) {
          local_4 = uVar3;
        }
      }
      puVar7 = (uint *)FUN_0251d928(local_4);
      uVar3 = *puVar7;
      if (uVar3 == 0) {
        return false;
      }
      if (puVar7 == (uint *)(ulong)uVar3) {
        return false;
      }
      puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
      if (((*puVar9 != 0) && (uVar3 = puVar9[1], uVar3 != 0)) && ((ulong)(ushort)puVar9[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar3);
          }
          if (*puVar9 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if (uVar2 < *(uint *)PTR_DAT_04bc2ff0) {
            return (ushort)(*(short *)(*(long *)(PTR_DAT_04bc2ff0 + 8) + (long)(int)uVar2 * 2) - 1U)
                   < 7;
          }
        }
      }
    }
  }
  return false;
}

