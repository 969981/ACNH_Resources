
/* WARNING: Removing unreachable block (ram,0x02542098) */

void FUN_02541e70(byte *param_1,undefined1 param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  uint *puVar8;
  long *plVar9;
  byte local_60 [2];
  undefined1 local_5e;
  undefined8 local_5d;
  undefined2 local_54;
  undefined1 local_52;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  puVar2 = PTR_DAT_04bb27c0;
  puVar8 = (uint *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar8 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  uVar5 = *puVar8;
  if ((((uVar5 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar5 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar5)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar6 + 0x60))();
    if (iVar3 < 0x11) {
      uVar5 = 1;
      goto joined_r0x02541f70;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02541f70;
    }
  }
  uVar5 = 0;
joined_r0x02541f70:
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[0x2a];
    uVar1 = *(uint *)(plVar9 + 0x49);
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar4 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3770);
    if ((((int)lVar7 == 1) && ((uVar4 & uVar5) != 0)) &&
       (((uVar1 >> 4 & 1) != 0 && (lVar7 = plVar9[0x53], lVar7 != 0)))) {
      local_5d = *(undefined8 *)(lVar7 + 0xc1a9);
      local_54 = *(undefined2 *)(lVar7 + 0xc1b2);
      local_52 = 1;
      local_50 = 0;
      local_4c = 0x100;
      local_60[0] = *param_1;
      if (local_60[0] < 8) {
        local_5e = param_2;
        uVar5 = FUN_02582d8c(local_60,1);
        if (((uVar5 < 8) &&
            (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')) &&
           (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0')) {
          FUN_0254410c(local_60);
          local_48 = 0;
          local_42 = 0;
          local_44 = 0xff00;
          if (-1 < *(int *)(PTR_DAT_04bc31c8 + 0x78)) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(PTR_DAT_04bc31c8 + 0x78),
                         &local_48,local_60,0x18,0);
          }
        }
      }
    }
  }
  return;
}

