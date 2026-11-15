
/* WARNING: Removing unreachable block (ram,0x01ee8f38) */

void FUN_01ee8b7c(long param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined2 local_140;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  int iStack_13c;
  undefined4 uStack_138;
  undefined8 local_134;
  undefined4 local_12c;
  undefined *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined1 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  uint local_54;
  
  local_d8 = 0;
  local_d4 = 0xffffffffffffffff;
  local_128 = (undefined *)0xbf800000;
  local_120 = 0;
  iVar11 = -1;
  local_118 = 0xffffffffffffffff;
  uStack_110 = 0xffffffff00000000;
  iVar5 = *(int *)(param_1 + 0x77b4);
  local_cc = 0xffffffffffffffff;
  local_c4 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xffffffff;
  local_140 = 0;
  iStack_13c = -1;
  uStack_138 = 0xffffffff;
  local_134 = 0xffffffffffffffff;
  local_12c = 0xffffffff;
  local_108 = 0xffffffff00000000;
  uStack_100 = 0xffffffffffffffff;
  local_e8 = 0xffffffff00000000;
  uStack_e0 = 0xffffffff00000000;
  local_c0 = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffbf800000;
  lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  local_f8 = 0;
  uStack_f0 = 0xffffffff;
  if (lVar8 != 0) {
    FUN_029a7b28(*(long *)PTR_DAT_04bb26a8 + 0x6d8,&local_140,lVar8 + 0x278);
  }
  if (iStack_13c == *(int *)(param_1 + 0xaed8)) {
    if (*(char *)(param_1 + 0x789c) != '\0') {
      if (iVar5 == 0) {
        return;
      }
      puVar10 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
      if (puVar10 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          puVar10 = &DAT_05240280;
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar10 = &DAT_05240280;
        }
      }
      if (puVar10[0x227] == 0) {
        local_54 = 0;
        uVar4 = 0;
      }
      else {
        local_54 = *(uint *)(puVar10 + 0x2d3) >> 1 & 1;
        local_140 = 6;
        uStack_13e = 0;
        uStack_13d = 0;
        uVar4 = FUN_03850890(puVar10[0x227],6,0,local_54);
      }
      puVar10 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
      if (puVar10 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          puVar10 = &DAT_05240280;
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar10 = &DAT_05240280;
        }
      }
      FUN_0170c5d8(puVar10,uVar4 & 1,*(undefined4 *)PTR_DAT_04bb3238);
      return;
    }
  }
  else {
    *(int *)(param_1 + 0xaed8) = iStack_13c;
    puVar6 = (undefined2 *)FUN_01e57b44(*(undefined8 *)(*(long *)(param_1 + 8) + 0x3b0));
    local_140 = *puVar6;
    uStack_13e = *(undefined1 *)(puVar6 + 1);
    uStack_13d = *(undefined1 *)((long)puVar6 + 3);
    iStack_13c = *(int *)(puVar6 + 2);
    FUN_01ee87f0(param_1,&local_140,0);
    FUN_01ee8aa4(param_1);
    if (*(char *)(param_1 + 0x789c) != '\0') {
      return;
    }
  }
  lVar8 = *(long *)(param_1 + 8);
  local_d8 = 0;
  local_d4 = 0xffffffffffffffff;
  uVar4 = *(uint *)(param_1 + 0xaedc);
  local_cc = 0xffffffffffffffff;
  local_c4 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xffffffff;
  local_140 = 0;
  iStack_13c = 0xffffffff;
  uStack_138 = 0xffffffff;
  local_134 = 0xffffffffffffffff;
  local_12c = 0xffffffff;
  local_c0 = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffbf800000;
  local_128 = (undefined *)0xbf800000;
  local_120 = 0;
  local_118 = 0xffffffffffffffff;
  uStack_110 = 0xffffffff00000000;
  local_108 = 0xffffffff00000000;
  uStack_100 = 0xffffffffffffffff;
  local_f8 = 0;
  uStack_f0 = 0xffffffff;
  local_e8 = 0xffffffff00000000;
  uStack_e0 = 0xffffffff00000000;
  if (*(long *)(lVar8 + 0x68) != 0) {
    FUN_029a7b28(*(long *)PTR_DAT_04bb26a8 + 0x6d8,&local_140,*(long *)(lVar8 + 0x68) + 0x278);
    iVar11 = (int)local_d4;
  }
  if ((iVar11 == 0) || (*(int *)(param_1 + 0x787c) < iVar11)) {
    uVar3 = *(uint *)(lVar8 + 0x288);
    *(undefined4 *)(lVar8 + 0x288) = *(undefined4 *)(lVar8 + 0x28c);
    uVar3 = uVar3 ^ uVar3 << 0xb;
    uVar2 = local_cc._4_4_;
    if (-1 < (int)uVar4) {
      uVar2 = uVar4;
    }
    *(undefined4 *)(lVar8 + 0x28c) = *(undefined4 *)(lVar8 + 0x290);
    uVar4 = *(uint *)(lVar8 + 0x294);
    *(uint *)(lVar8 + 0x290) = uVar4;
    uVar4 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    *(uint *)(lVar8 + 0x294) = uVar4;
    bVar1 = (uint)((ulong)uVar4 * 100 >> 0x20) < uVar2;
  }
  else {
    bVar1 = false;
  }
  iVar5 = *(int *)(param_1 + 0x7880);
  *(int *)(param_1 + 0x787c) = iVar11;
  *(int *)(param_1 + 0x7880) = local_d4._4_4_;
  if (((local_d4._4_4_ == 0) || (iVar5 < local_d4._4_4_)) || (bVar1)) {
    lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    local_12c = CONCAT31(local_12c._1_3_,1);
    local_120 = *(undefined8 *)(param_1 + 0x7818);
    local_128 = PTR_DAT_04bb2010 + 0x10;
    uStack_138 = *(undefined4 *)(lVar8 + 0x280);
    uVar9 = *(undefined8 *)(lVar8 + 0x278);
    local_140 = (undefined2)uVar9;
    uStack_13e = (undefined1)((ulong)uVar9 >> 0x10);
    uStack_13d = (undefined1)((ulong)uVar9 >> 0x18);
    iStack_13c = (int)((ulong)uVar9 >> 0x20);
    local_134 = CONCAT44(0x41200000,*(undefined4 *)(lVar8 + 0x2b4));
    uVar7 = FUN_01521d80(*(undefined8 *)PTR_DAT_04bb4c80,&local_140);
    if ((uVar7 & 1) != 0) {
      puVar10 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
      if (puVar10 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          puVar10 = &DAT_05240280;
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar10 = &DAT_05240280;
        }
      }
      *(uint *)((long)puVar10 + 0x15f4) = *(uint *)((long)puVar10 + 0x15f4) | 0x200;
    }
  }
  else {
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
    if (puVar10 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar10 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar10 = &DAT_05240280;
      }
    }
    *(uint *)((long)puVar10 + 0x15f4) = *(uint *)((long)puVar10 + 0x15f4) & 0xfffffdff;
  }
  return;
}

