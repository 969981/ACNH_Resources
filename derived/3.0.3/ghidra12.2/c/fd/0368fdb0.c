
undefined8 FUN_0368fdb0(long param_1,uint param_2,long *param_3,byte param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  void *__dest;
  uint uVar13;
  undefined1 *__src;
  void *__src_00;
  long lVar14;
  long local_198;
  undefined1 local_190;
  undefined8 local_18e;
  undefined1 local_186;
  undefined2 local_184;
  undefined1 local_182;
  undefined1 local_181;
  undefined4 local_180;
  undefined2 local_17c;
  undefined1 local_17a;
  undefined1 local_179;
  undefined4 local_178;
  undefined2 local_174;
  undefined1 local_172;
  undefined1 local_171;
  undefined4 local_170;
  undefined *local_168;
  undefined1 *puStack_160;
  int local_158;
  undefined1 local_154 [7];
  undefined1 local_14d;
  undefined1 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined *local_110;
  undefined1 *puStack_108;
  undefined4 local_100;
  undefined1 local_fc [127];
  undefined1 local_7d;
  undefined4 local_78;
  ushort local_74;
  long *local_70;
  
  if (param_2 < *(uint *)(param_1 + 0x278)) {
    lVar14 = *(long *)(*(long *)(param_1 + 0x280) + (long)(int)param_2 * 8);
    bVar4 = *(byte *)(lVar14 + 0x48);
  }
  else {
    lVar14 = 0;
    bVar4 = DAT_00000048;
  }
  if ((bVar4 >> 1 & 1) != 0) {
    return 0;
  }
  uVar13 = *(uint *)(lVar14 + 0x4c);
  if (uVar13 == 0xffffffff) {
    return 0;
  }
  lVar2 = param_1 + 0x698 + (ulong)uVar13 * 0xd8;
  if (0x25 < uVar13) {
    lVar2 = param_1 + 0x698;
  }
  if (*(int *)(lVar14 + 0x44) == 0) {
    uVar9 = FUN_0368fbc8(param_1,uVar13,param_3);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  else if (*(int *)(lVar14 + 0x44) != 1) {
    return 0;
  }
  puVar5 = PTR_DAT_04bb27c0;
  uVar13 = *(uint *)(lVar14 + 0x40);
  if (uVar13 == 0) {
    return 0;
  }
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return 0;
  }
  plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) + ((ulong)(uVar13 >> 0x11) & 0x7ff8)
                      );
  if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar12 + 0x46) != uVar13)) {
    plVar12 = (long *)0x0;
  }
  if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
    plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar5;
    iVar7 = (**(code **)(*plVar10 + 0x60))();
    if (iVar7 < 0x11) {
      uVar13 = 1;
      goto joined_r0x0368ff08;
    }
    uVar13 = *(uint *)(lVar11 + 0x5e8);
    if (uVar13 < 5) {
      uVar13 = 0x1aU >> (ulong)(uVar13 & 0x1f) & 1;
      goto joined_r0x0368ff08;
    }
  }
  uVar13 = 0;
joined_r0x0368ff08:
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[0x2a];
    uVar3 = *(uint *)(plVar12 + 0x49);
    if (((*PTR_DAT_04bb3748 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3748), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bb3740 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3748);
    }
    uVar8 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3740);
    puVar6 = PTR_DAT_04bb37e0;
    if ((int)lVar11 != 1) {
      return 0;
    }
    if ((uVar8 & uVar13) == 0) {
      return 0;
    }
    if ((uVar3 >> 4 & 1) == 0) {
      return 0;
    }
    if (plVar12[0xd] != 0) {
      local_7d = 0;
      local_fc[0] = 0;
      puStack_108 = local_fc;
      local_70 = (long *)0x0;
      local_100 = 0x80;
      local_12c = *(undefined4 *)(param_1 + 0x16c);
      local_78 = 7;
      local_110 = PTR_DAT_04bb2d88 + 0x10;
      local_124 = 0;
      local_74 = 1;
      local_11c = 0;
      local_130 = 0x461c4000;
      local_198 = 0;
      local_190 = 0;
      local_18e = 0;
      local_140 = 0x4100000000;
      uStack_138 = 0x461c4000;
      local_128 = *(undefined4 *)(param_1 + 0x170);
      local_184 = *(undefined2 *)PTR_DAT_04bb3170;
      local_186 = 0;
      local_182 = 0xff;
      local_14d = 0;
      local_154[0] = 0;
      local_180 = *(undefined4 *)PTR_DAT_04bb3238;
      local_17c = *(undefined2 *)PTR_DAT_04bb37e0;
      local_17a = PTR_DAT_04bb37e0[2];
      local_179 = PTR_DAT_04bb37e0[3];
      local_178 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      local_158 = 8;
      local_148 = 0;
      local_168 = PTR_DAT_04bb3768 + 0x10;
      local_144 = 0;
      local_181 = 0;
      local_174 = local_17c;
      local_172 = local_17a;
      local_171 = local_179;
      local_170 = local_178;
      puStack_160 = local_154;
      (**(code **)(*param_3 + 0x18))(param_3);
      __src = (undefined1 *)param_3[1];
      if (local_154 != __src) {
        (**(code **)(*param_3 + 0x18))(param_3);
        lVar11 = 0;
        do {
          if (*(char *)(param_3[1] + lVar11) == '\0') goto LAB_03690108;
          lVar1 = param_3[1] + lVar11;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_03690108;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_03690108;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_03690108:
        iVar7 = (int)lVar11;
        if (local_158 <= (int)lVar11) {
          iVar7 = local_158 + -1;
        }
        memcpy(local_154,__src,(long)iVar7);
        local_154[iVar7] = 0;
      }
      local_70 = &local_198;
      local_198 = lVar2 + 0x8c;
      local_17a = puVar6[2];
      local_17c = *(undefined2 *)puVar6;
      local_179 = puVar6[3];
      local_178 = *(undefined4 *)(puVar6 + 4);
      local_74 = local_74 | 0x200;
      local_174 = local_17c;
      local_172 = local_17a;
      local_171 = local_179;
      local_170 = local_178;
      iVar7 = FUN_007402e0(*(undefined8 *)puVar5,&local_140,*(undefined4 *)(param_1 + 0x230),0);
      *(int *)(lVar14 + 0x5c) = iVar7;
      if (iVar7 != 0) {
        __dest = *(void **)(lVar14 + 0x68);
        *(byte *)(lVar14 + 0x48) = *(byte *)(lVar14 + 0x48) | 2;
        (**(code **)(*param_3 + 0x18))(param_3);
        __src_00 = (void *)param_3[1];
        if (__dest != __src_00) {
          (**(code **)(*param_3 + 0x18))(param_3);
          lVar11 = 0;
          do {
            if (*(char *)(param_3[1] + lVar11) == '\0') goto LAB_03690224;
            lVar1 = param_3[1] + lVar11;
            if (*(char *)(lVar1 + 1) == '\0') {
              lVar11 = lVar11 + 1;
              goto LAB_03690224;
            }
            if (*(char *)(lVar1 + 2) == '\0') {
              lVar11 = lVar11 + 2;
              goto LAB_03690224;
            }
            lVar11 = lVar11 + 3;
          } while (lVar11 != 0x80001);
          lVar11 = 0;
LAB_03690224:
          iVar7 = (int)lVar11;
          if (*(int *)(lVar14 + 0x70) <= (int)lVar11) {
            iVar7 = *(int *)(lVar14 + 0x70) + -1;
          }
          memcpy(__dest,__src_00,(long)iVar7);
          *(undefined1 *)((long)__dest + (long)iVar7) = 0;
        }
        bVar4 = 0x10;
        if ((param_4 & 1) == 0) {
          bVar4 = 0;
        }
        *(byte *)(lVar14 + 0x48) = *(byte *)(lVar14 + 0x48) & 0xef | bVar4;
        *(byte *)(lVar2 + 0x40) = param_4 & 1;
        *(undefined4 *)(param_1 + 0x690) = 1;
      }
      return 1;
    }
  }
  return 0;
}

