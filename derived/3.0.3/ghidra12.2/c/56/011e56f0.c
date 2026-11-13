
void FUN_011e56f0(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long *local_88;
  char local_80;
  char local_7f;
  int local_78;
  undefined4 local_74;
  undefined *local_70;
  uint local_68;
  uint uStack_64;
  
  if ((**(char **)(PTR_DAT_04bc3a88 + 8) == '\0') && (local_78 = DAT_050dfb28, DAT_050dfb28 != 0)) {
    local_74 = param_2;
    FUN_0071c8d0(&local_88,&local_78,&local_74,0);
    plVar6 = local_88;
    if (local_88 != (long *)0x0) {
      if (((*PTR_DAT_04bbbb10 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbbb10), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bbbb08 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbbb10);
      }
      uVar8 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bbbb08);
      if ((uVar8 & 1) == 0) {
        local_7f = '\0';
      }
    }
    if (((local_88 != (long *)0x0) && (local_80 != '\0')) && (local_7f != '\0')) {
      uVar1 = *(int *)(param_1 + 0x24) + 1;
      uVar9 = *(uint *)(param_1 + 0x14);
      if (uVar1 != uVar9) {
        uVar3 = *(uint *)(param_1 + 0x10);
        puVar2 = PTR_DAT_04bb2010 + 0x10;
        uVar10 = uVar3;
        do {
          local_70 = puVar2;
          local_68 = uVar10;
          uStack_64 = uVar9;
          FUN_011dc2e0(local_88,&local_70,0,0,0);
          if (((uVar9 < 0x100) && (uVar10 < 0x120)) &&
             ((uVar4 = uVar10 + uVar9 * 0x120, uVar4 != 0xffffffff && (uVar4 >> 0xd < 9)))) {
            lVar5 = (ulong)(uVar4 >> 5) * 4;
            *(uint *)((long)local_88 + lVar5 + 0x1e368) =
                 *(uint *)((long)local_88 + lVar5 + 0x1e368) | 1 << (ulong)(uVar10 & 0x1f);
          }
          if ((int)uVar10 < *(int *)(param_1 + 0x20)) {
            uVar10 = uVar10 + 1;
          }
          else {
            uVar9 = uVar9 + 1;
            uVar10 = *(uint *)(param_1 + 0x10);
          }
        } while ((uVar3 != uVar10) || (uVar1 != uVar9));
      }
    }
  }
  return;
}

