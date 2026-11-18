
void FUN_0337f720(long param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  bool bVar5;
  undefined *puVar6;
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
  undefined8 local_1b0;
  undefined1 *puStack_1a8;
  undefined4 local_1a0;
  undefined1 local_19c [10];
  undefined2 local_192;
  undefined1 local_15d;
  undefined8 local_158;
  undefined *local_150;
  undefined8 *puStack_148;
  undefined4 local_140;
  undefined1 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined *local_120;
  undefined1 *puStack_118;
  undefined4 local_110;
  undefined1 local_10c [63];
  undefined1 local_cd;
  undefined *local_c8;
  undefined1 *puStack_c0;
  undefined4 local_b8;
  undefined1 local_b4 [63];
  undefined1 local_75;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined6 uStack_58;
  undefined2 local_52;
  undefined6 uStack_50;
  undefined1 auStack_4a [2];
  uint local_48;
  
  puVar6 = PTR_DAT_04bb2bc0;
  if (param_1 != 0) {
    local_13c = 0;
    local_140 = 0x13;
    local_138 = 0xffffffff;
    uStack_130 = 0xffffffff00000000;
    puStack_118 = local_10c;
    local_128 = 0xffffffff;
    puStack_148 = &local_70;
    local_110 = 0x40;
    local_cd = 0;
    local_10c[0] = 0;
    local_120 = PTR_DAT_04bb2bc0 + 0x10;
    local_b8 = 0x40;
    local_75 = 0;
    local_b4[0] = 0;
    puStack_c0 = local_b4;
    local_150 = PTR_DAT_04bc0bc0 + 0x10;
    local_70 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    puVar2 = auStack_4a;
    if (auStack_4a <= (undefined1 *)((long)&local_70 + 2U)) {
      puVar2 = (undefined1 *)((long)&local_70 + 2U);
    }
    local_60 = 0;
    uStack_58 = 0;
    local_52 = 0;
    local_c8 = local_120;
    memset(puStack_148,0,(ulong)(puVar2 + (-0xe1 - (long)&local_150)) & 0xfffffffffffffffc | 2);
    local_48 = 0;
    iVar8 = **(int **)PTR_DAT_04bb3448;
    uVar3 = 3;
    if (iVar8 != 8) {
      uVar3 = 0;
    }
    if (param_3 == 0) {
      FUN_01be4af0(&local_150,iVar8,param_2,10,uVar3,0);
      local_48 = param_2;
    }
    else {
      FUN_01be4af0(&local_150,iVar8,param_3,10,uVar3,0);
      local_48 = param_3;
      FUN_01be5210(&local_150,2);
    }
    puVar17 = (undefined8 *)**(long **)(param_1 + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar9 = (**(code **)*puVar17)(puVar17,PTR_DAT_04bc4e58);
    local_1b0 = puVar6 + 0x10;
    if ((uVar9 & 1) == 0) {
      puVar17 = (undefined8 *)0x0;
    }
    lVar16 = 0x18;
    if (*(uint *)(puVar17 + 0x42) < 4) {
      lVar16 = 0;
    }
    local_158 = *(undefined8 *)(puVar17[0x43] + lVar16);
    local_15d = 0;
    local_19c[0] = 0;
    local_1a0 = 0x40;
    puStack_1a8 = local_19c;
    FUN_034632e0(&local_1b0,&local_150);
    plVar10 = *(long **)(**(long **)(param_1 + 0x3f8) + 0x1b0);
    if (((plVar10 == (long *)0x0) || (uVar9 = (**(code **)(*plVar10 + 0x48))(), (uVar9 & 1) != 0))
       && (lVar16 = *(long *)PTR_DAT_04bc1118, lVar16 != 0)) {
      local_1b0 = (undefined *)((ulong)local_1b0 & 0xffffffffffff0000);
      local_192 = 0;
      iVar8 = 0;
      lVar13 = 0;
      bVar5 = false;
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
        bVar1 = bVar5;
        if (!bVar5) {
          bVar1 = true;
        }
        if (uVar7 <= param_2) {
          bVar5 = bVar1;
        }
        if (bVar5) {
          uVar11 = 0;
          if (uVar7 != 0) {
            uVar11 = param_2 / uVar7;
          }
          iVar12 = (int)lVar13;
          if (iVar12 < 0xf) {
            puVar4 = (undefined2 *)(DAT_05735ec0 + (ulong)uVar11 * 2);
            if (DAT_05735ec8 <= (int)uVar11 || 0x7fffffff < uVar11) {
              puVar4 = (undefined2 *)PTR_DAT_04bb2da0;
            }
            *(undefined2 *)(local_19c + (long)iVar12 * 2 + -0x14) = *puVar4;
            lVar13 = (long)iVar12 + 1;
            *(undefined2 *)(local_19c + lVar13 * 2 + -0x14) = 0;
          }
          param_2 = param_2 - uVar11 * uVar7;
        }
        iVar8 = iVar8 + 1;
        uVar15 = uVar15 - 1;
        bVar1 = 1 < uVar14;
        uVar14 = uVar14 - 1;
      } while (bVar1);
      FUN_032e4b30(*(long *)(lVar16 + 0x20) + 0x6e8,0x14,&local_1b0);
      *(undefined1 *)(lVar16 + 0xf81) = 0;
    }
  }
  return;
}

