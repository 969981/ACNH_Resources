
void FUN_0337a850(long param_1,uint param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 local_1c0;
  undefined1 *puStack_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac [10];
  undefined2 local_1a2;
  undefined1 local_16d;
  undefined8 local_168;
  undefined *local_160;
  undefined8 *puStack_158;
  undefined4 local_150;
  undefined1 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined *local_130;
  undefined1 *puStack_128;
  undefined4 local_120;
  undefined1 local_11c [63];
  undefined1 local_dd;
  undefined *local_d8;
  undefined1 *puStack_d0;
  undefined4 local_c8;
  undefined1 local_c4 [63];
  undefined1 local_85;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined6 uStack_68;
  undefined2 local_62;
  undefined6 uStack_60;
  undefined1 auStack_5a [2];
  uint local_58;
  
  if (param_1 != 0) {
    local_14c = 0;
    local_150 = 0x13;
    local_148 = 0xffffffff;
    uStack_140 = 0xffffffff00000000;
    puStack_128 = local_11c;
    local_138 = 0xffffffff;
    puStack_158 = &local_80;
    local_120 = 0x40;
    local_dd = 0;
    local_11c[0] = 0;
    puVar2 = PTR_DAT_04bb2bc0 + 0x10;
    local_c8 = 0x40;
    local_85 = 0;
    local_c4[0] = 0;
    puStack_d0 = local_c4;
    local_160 = PTR_DAT_04bc0bc0 + 0x10;
    local_80 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    puVar3 = auStack_5a;
    if (auStack_5a <= (undefined1 *)((long)&local_80 + 2U)) {
      puVar3 = (undefined1 *)((long)&local_80 + 2U);
    }
    local_70 = 0;
    uStack_68 = 0;
    local_62 = 0;
    local_130 = puVar2;
    local_d8 = puVar2;
    memset(puStack_158,0,(ulong)(puVar3 + (-0xe1 - (long)&local_160)) & 0xfffffffffffffffc | 2);
    local_58 = 0;
    uVar4 = 3;
    if (**(int **)PTR_DAT_04bb3448 != 8) {
      uVar4 = 0;
    }
    FUN_01be4af0(&local_160,**(int **)PTR_DAT_04bb3448,param_2,10,uVar4,0);
    puVar17 = (undefined8 *)**(long **)(param_1 + 0x3f8);
    local_58 = param_2;
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar9 = (**(code **)*puVar17)(puVar17,PTR_DAT_04bc4e58);
    if ((uVar9 & 1) == 0) {
      puVar17 = (undefined8 *)0x0;
    }
    local_168 = *(undefined8 *)(puVar17[0x43] + (ulong)(1 < *(uint *)(puVar17 + 0x42)) * 8);
    local_1b0 = 0x40;
    local_16d = 0;
    local_1ac[0] = 0;
    puStack_1b8 = local_1ac;
    local_1c0 = puVar2;
    FUN_034632e0(&local_1c0,&local_160);
    plVar10 = *(long **)(**(long **)(param_1 + 0x3f8) + 0x1b0);
    if (((plVar10 == (long *)0x0) || (uVar9 = (**(code **)(*plVar10 + 0x48))(), (uVar9 & 1) != 0))
       && (lVar16 = *(long *)PTR_DAT_04bc1118, lVar16 != 0)) {
      local_1c0 = (undefined *)((ulong)local_1c0 & 0xffffffffffff0000);
      local_1a2 = 0;
      iVar8 = 0;
      lVar13 = 0;
      bVar6 = false;
      uVar15 = 0xf;
      uVar14 = 0x10;
      do {
        if (uVar14 < 2) {
          uVar7 = 1;
        }
        else {
          if (iVar8 - 8U < 7) {
            uVar7 = 1;
          }
          else {
            uVar11 = uVar15 & 0xfffffff8;
            uVar7 = 1;
            do {
              uVar7 = uVar7 * 100000000;
              uVar11 = uVar11 - 8;
            } while (uVar11 != 0);
          }
          if ((0xfU - iVar8 & 7) != 0) {
            uVar11 = uVar15 & 7;
            do {
              uVar11 = uVar11 - 1;
              uVar7 = uVar7 * 10;
            } while (uVar11 != 0);
          }
        }
        bVar1 = bVar6;
        if (!bVar6) {
          bVar1 = true;
        }
        if (uVar7 <= param_2) {
          bVar6 = bVar1;
        }
        if (bVar6) {
          uVar11 = 0;
          if (uVar7 != 0) {
            uVar11 = param_2 / uVar7;
          }
          iVar12 = (int)lVar13;
          if (iVar12 < 0xf) {
            puVar5 = (undefined2 *)(DAT_05735ec0 + (ulong)uVar11 * 2);
            if (DAT_05735ec8 <= (int)uVar11 || 0x7fffffff < uVar11) {
              puVar5 = (undefined2 *)PTR_DAT_04bb2da0;
            }
            *(undefined2 *)(local_1ac + (long)iVar12 * 2 + -0x14) = *puVar5;
            lVar13 = (long)iVar12 + 1;
            *(undefined2 *)(local_1ac + lVar13 * 2 + -0x14) = 0;
          }
          param_2 = param_2 - uVar11 * uVar7;
        }
        iVar8 = iVar8 + 1;
        uVar15 = uVar15 - 1;
        bVar1 = 1 < uVar14;
        uVar14 = uVar14 - 1;
      } while (bVar1);
      FUN_032e4b30(*(long *)(lVar16 + 0x20) + 0x6e8,0x14,&local_1c0);
      *(undefined1 *)(lVar16 + 0xf81) = 0;
    }
  }
  return;
}

