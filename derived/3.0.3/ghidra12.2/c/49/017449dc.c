
void FUN_017449dc(long param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  char *__dest;
  long lVar15;
  uint local_148 [12];
  undefined *local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined1 local_104 [127];
  undefined1 local_85;
  undefined4 local_80;
  undefined2 local_7c;
  undefined2 *local_78;
  undefined *local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  uint *local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  
  puVar6 = PTR_DAT_04bb27c0;
  puVar1 = (undefined2 *)PTR_DAT_04bb37e0;
  if (*(undefined2 **)(param_1 + 0x228) != (undefined2 *)0x0) {
    puVar1 = *(undefined2 **)(param_1 + 0x228);
  }
  uVar5 = *puVar1;
  uVar3 = *(undefined1 *)(puVar1 + 1);
  uVar4 = *(undefined1 *)((long)puVar1 + 3);
  uVar9 = *(undefined4 *)(puVar1 + 2);
  local_58 = uVar5;
  local_56 = uVar3;
  local_55 = uVar4;
  local_54 = uVar9;
  if ((*(long *)PTR_DAT_04bb27c0 != 0) &&
     (iVar10 = *(int *)(*(long *)PTR_DAT_04bb27c0 + 0x288), iVar10 == 1 || iVar10 == -1)) {
    plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    (**(code **)(*plVar11 + 0x60))();
  }
  puVar7 = PTR_DAT_04bb43c0;
  local_70 = PTR_DAT_04bc0510 + 0x10;
  local_60 = (uint *)0x0;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  local_68 = uVar5;
  local_66 = uVar3;
  local_65 = uVar4;
  local_64 = uVar9;
  uVar8 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar7 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(&local_58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
         (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8),
         puVar13 != (uint *)0x0)) {
        uVar8 = *puVar13;
        local_148[0] = 0;
        local_60 = puVar13;
        if ((uVar8 != 0) && (puVar13 != (uint *)(ulong)uVar8)) {
          puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar8);
          local_148[0] = 0;
          if (*puVar14 != 0) {
            uVar8 = puVar14[1];
            if ((uVar8 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
              if (lVar15 != 0) {
                uVar2 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar8);
                }
                if (*puVar14 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *(uint *)PTR_DAT_04bc0148) &&
                   (local_148[0] = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar2 * 2),
                   local_148[0] < 0xa2)) goto LAB_01744bf4;
              }
            }
            local_148[0] = 0;
          }
        }
        goto LAB_01744bf4;
      }
    }
  }
  local_148[0] = 0x21;
LAB_01744bf4:
  if (local_148[0] != 0x3f) {
    local_148[6] = 0;
    local_148[2] = 0;
    local_148[3] = 0;
    local_148[4] = 0;
    local_148[5] = 0x3f800000;
    puStack_110 = local_104;
    local_85 = 0;
    local_108 = 0x80;
    local_148[0] = *(uint *)(param_1 + 0x230);
    local_104[0] = 0;
    local_118 = PTR_DAT_04bb2d88 + 0x10;
    local_148[7] = 0;
    local_148[8] = 0;
    local_148[9] = 0;
    local_148[10] = 0;
    local_80 = 7;
    local_7c = 0x200;
    local_148[1] = 0xa2;
    local_78 = &local_58;
    uVar9 = FUN_007402e0(*(undefined8 *)puVar6,local_148,local_148[0],0);
    *(undefined4 *)(param_1 + 0x3a4) = uVar9;
  }
  plVar11 = *(long **)(param_1 + 0x60);
  if (plVar11 != (long *)0x0) {
    if (((*PTR_DAT_04bb3ed0 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3ed0), iVar10 != 0)) {
      *(undefined **)PTR_DAT_04bb3ec8 = PTR_DAT_04bb3070 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3ed0);
    }
    uVar12 = (**(code **)(*plVar11 + 0x10))(plVar11,PTR_DAT_04bb3ec8);
    if (((uVar12 & 1) != 0) && (__dest = (char *)plVar11[0x23f], __dest != "ToolRodAPose")) {
      iVar10 = 0xc;
      if ((int)plVar11[0x240] < 0xd) {
        iVar10 = (int)plVar11[0x240] + -1;
      }
      memcpy(__dest,"ToolRodAPose",(long)iVar10);
      __dest[iVar10] = '\0';
    }
  }
  return;
}

