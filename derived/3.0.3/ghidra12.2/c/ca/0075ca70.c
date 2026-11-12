
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffeb4 : 0x0075cda4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0075ca70(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined1 *__dest;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined1 *__src;
  long lVar9;
  long lVar10;
  undefined2 local_14c [2];
  undefined *local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  long local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined *local_100;
  undefined1 *local_f8;
  int local_f0;
  undefined1 local_ec [127];
  undefined1 local_6d;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  
  if (*(long *)(param_1 + 0x3b0) != 0) {
    if (((param_4 & 1) == 0) && (uVar5 = FUN_0075c824(param_1), (uVar5 & 1) != 0)) {
      local_120 = 0;
      local_130 = 0xffffffff00000000;
      uStack_128 = 0;
      local_11c = 0x3f800000;
      local_f8 = local_ec;
      local_f0 = 0x80;
      local_6d = 0;
      local_ec[0] = 0;
      plVar8 = *(long **)(param_1 + 0x3b0);
      local_100 = PTR_DAT_04bb2d88 + 0x10;
      local_60 = 0;
      local_63 = 0;
      local_68 = 7;
      local_64 = *(undefined1 *)(param_1 + 0x224);
      local_114 = 0;
      local_10c = 0;
      if (((*PTR_DAT_04bb37c8 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37c8), iVar4 != 0)) {
        *(undefined ***)PTR_DAT_04bb37c0 = &PTR_LAB_04908e00;
        __cxa_guard_release(PTR_DAT_04bb37c8);
      }
      if ((plVar8 != (long *)0x0) &&
         (uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,PTR_DAT_04bb37c0), __dest = local_f8,
         (uVar5 & 1) != 0)) {
        (**(code **)(*(long *)(param_1 + 0x448) + 0x18))(param_1 + 0x448);
        __src = *(undefined1 **)(param_1 + 0x450);
        if (__dest != __src) {
          (**(code **)(*(long *)(param_1 + 0x448) + 0x18))(param_1 + 0x448);
          lVar7 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x450) + lVar7) == '\0') goto LAB_0075cc40;
            lVar9 = *(long *)(param_1 + 0x450) + lVar7;
            if (*(char *)(lVar9 + 1) == '\0') {
              lVar7 = lVar7 + 1;
              goto LAB_0075cc40;
            }
            if (*(char *)(lVar9 + 2) == '\0') {
              lVar7 = lVar7 + 2;
              goto LAB_0075cc40;
            }
            lVar7 = lVar7 + 3;
          } while (lVar7 != 0x80001);
          lVar7 = 0;
LAB_0075cc40:
          iVar4 = (int)lVar7;
          if (local_f0 <= (int)lVar7) {
            iVar4 = local_f0 + -1;
          }
          memcpy(__dest,__src,(long)iVar4);
          __dest[iVar4] = 0;
        }
      }
      puVar2 = PTR_DAT_04bb43c0;
      lVar7 = param_1 + 0x474;
      lVar10 = *(long *)PTR_DAT_04bb43c0;
      uVar3 = FUN_0277d6c4(lVar7);
      lVar9 = *(long *)puVar2;
      if (lVar9 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          local_140 = *(undefined4 *)(param_1 + 0x474);
          local_138 = 0;
          local_148 = PTR_DAT_04bc0510 + 0x10;
          uStack_13c = *(undefined4 *)(param_1 + 0x478);
          uVar3 = FUN_0277d6c4(&local_140);
          if (*(long *)puVar2 != 0) {
            lVar9 = *(long *)(lVar9 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
              lVar9 = *(long *)PTR_DAT_04bc0428;
              uVar3 = FUN_0277d6c4(lVar7);
              uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
              if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
                 (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8), lVar9 != 0)) {
                local_138 = lVar9;
              }
            }
          }
          local_14c[0] = 0;
          FUN_01adab50(&local_148,local_14c);
          local_58 = 6;
          local_54 = 6;
          if (((byte)local_14c[0] >> 6 & 1) != 0) {
            uVar1 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
            *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)PTR_DAT_04bb37e0;
            *(undefined4 *)(param_1 + 0x478) = uVar1;
          }
        }
      }
      lVar9 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3a0))();
      if (lVar9 != 0) {
        uVar6 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3a0))();
        local_148 = (undefined *)((ulong)local_148 & 0xffffffff00000000);
        FUN_017327f0(uVar6,lVar7,&local_148,&local_130,0xffffffff);
      }
      plVar8 = *(long **)(param_1 + 0x3b0);
    }
    else {
      if ((param_3 & 1) != 0) {
        FUN_0075bd1c(param_1,param_2);
      }
      local_120 = 0;
      local_130 = 0xffffffff00000000;
      uStack_128 = 0;
      local_11c = 0x3f800000;
      local_f8 = local_ec;
      local_f0 = 0x80;
      local_6d = 0;
      plVar8 = *(long **)(param_1 + 0x3b0);
      local_100 = PTR_DAT_04bb2d88 + 0x10;
      local_ec[0] = 0;
      local_60 = 0;
      local_63 = 0;
      local_10c = 0;
      local_114 = 0;
      local_68 = 7;
      local_64 = *(undefined1 *)(param_1 + 0x224);
    }
    lVar7 = (**(code **)(*plVar8 + 0x3a8))();
    if (lVar7 != 0) {
      uVar6 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3a8))();
      local_148 = (undefined *)((ulong)local_148 & 0xffffffff00000000);
      FUN_017327f0(uVar6,param_2,&local_148,&local_130,0xffffffff);
    }
  }
  return;
}

