
void FUN_02552530(byte *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined *local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined2 uStack_114;
  undefined1 uStack_112;
  undefined1 uStack_111;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 local_104;
  undefined *local_f8;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  undefined1 local_e4 [127];
  undefined1 local_65;
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_054f0960);
      puVar12 = &DAT_054f0958;
      if (iVar6 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar12 = &DAT_054f0958;
    }
  }
  else {
    puVar12 = (undefined8 *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar12 = (undefined8 *)(DAT_054f5738 + 0x204) + *param_1;
    }
  }
  local_128 = (undefined *)CONCAT44(local_128._4_4_,0x31);
  *(uint *)((long)puVar12 + 4) = *(uint *)((long)puVar12 + 4) | 0x20000;
  puVar4 = PTR_DAT_04bb27c0;
  if ((ulong)*param_1 < 8) {
    puVar1 = (uint *)PTR_DAT_04bb3238;
    if (DAT_054f5738 != 0) {
      puVar1 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
    uVar8 = *puVar1;
  }
  else {
    uVar8 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar8 == 0) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return;
  }
  plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) + ((ulong)(uVar8 >> 0x11) & 0x7ff8))
  ;
  if (((plVar11 == (long *)0x0) || ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar11 + 0x46) != uVar8)) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar4;
    iVar6 = (**(code **)(*plVar9 + 0x60))();
    if (iVar6 < 0x11) {
      uVar8 = 1;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_025526a8;
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_025526a8:
    uVar8 = 0;
  }
  if (plVar11 == (long *)0x0) {
    return;
  }
  lVar10 = plVar11[0x2a];
  uVar2 = *(uint *)(plVar11 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb3770);
  if ((int)lVar10 != 1) {
    return;
  }
  if ((uVar7 & uVar8) == 0) {
    return;
  }
  if ((uVar2 >> 4 & 1) == 0) {
    return;
  }
  FUN_0252d8f0(&local_48,param_1);
  puVar4 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(&local_48);
  lVar10 = *(long *)puVar4;
  if (lVar10 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      local_118 = 0;
      uStack_114 = 0;
      uStack_112 = 0;
      uStack_111 = 0;
      local_128 = PTR_DAT_04bc0510 + 0x10;
      uVar8 = FUN_0277d6c4(&local_120);
      if (*(long *)puVar4 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(&local_48);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8), lVar10 != 0)) {
            local_118 = (undefined4)lVar10;
            uStack_114 = (undefined2)((ulong)lVar10 >> 0x20);
            uStack_112 = (undefined1)((ulong)lVar10 >> 0x30);
            uStack_111 = (undefined1)((ulong)lVar10 >> 0x38);
          }
        }
      }
      iVar6 = FUN_01ad78cc(&local_128);
      bVar5 = iVar6 == 0x43;
      plVar9 = (long *)plVar11[0xc];
      goto joined_r0x02552818;
    }
  }
  bVar5 = false;
  plVar9 = (long *)plVar11[0xc];
joined_r0x02552818:
  if (plVar9 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar9 = &DAT_05240280;
    }
    else {
      plVar9 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar9 + 600))(&local_48,plVar9,bVar5);
  puVar12 = (undefined8 *)plVar11[0xc];
  if (puVar12 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar12 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar12 = &DAT_05240280;
    }
  }
  local_4c = 0;
  local_128 = (undefined *)0xffffffff00000000;
  local_120 = 0;
  local_118 = 0;
  uStack_114 = 0;
  uStack_112 = 0x80;
  uStack_111 = 0x3f;
  local_110 = 0;
  puStack_f0 = local_e4;
  local_e8 = 0x80;
  local_65 = 0;
  local_e4[0] = 0;
  local_f8 = PTR_DAT_04bb2d88 + 0x10;
  local_58 = 0;
  local_5c = 0;
  local_10c = 0;
  local_104 = 0;
  local_60 = 7;
  FUN_017327f0(puVar12[0x290],&local_48,&local_4c,&local_128,0xffffffff);
  puVar12 = (undefined8 *)plVar11[0xc];
  if (puVar12 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar12 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar12 = &DAT_05240280;
    }
  }
  lVar10 = puVar12[0x290];
  *(undefined4 *)(lVar10 + 0xcc) = local_48;
  *(undefined4 *)(lVar10 + 0xd0) = uStack_44;
  if ((int)plVar11[0x302] != 4) {
    plVar9 = (long *)plVar11[0xc];
    if (plVar9 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        plVar9 = &DAT_05240280;
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar9 = &DAT_05240280;
      }
    }
    local_128._0_4_ = 4;
    *(undefined1 **)((long)plVar9 + 0x160c) = &DAT_3f8000003f800000;
    (**(code **)(*plVar9 + 0x4e0))((int)plVar9[0x2c1],plVar9);
    local_128 = (undefined *)CONCAT44(local_128._4_4_,4);
    if (*(float *)((long)plVar9 + 0x160c) == 0.001) {
      uVar8 = *(uint *)((long)plVar9 + 0x15f4) | 0x10;
    }
    else {
      uVar8 = *(uint *)((long)plVar9 + 0x15f4) & 0xffffffef;
    }
    *(uint *)((long)plVar9 + 0x15f4) = uVar8;
  }
  puVar12 = (undefined8 *)plVar11[0xc];
  if (puVar12 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar12 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar12 = &DAT_05240280;
    }
  }
  local_128 = (undefined *)CONCAT35(local_128._5_3_,0x100000006);
  local_118 = CONCAT31(local_118._1_3_,1);
  uVar3 = (ulong)local_10c >> 0x10;
  uStack_114 = *(undefined2 *)PTR_DAT_04bb37e0;
  uStack_112 = PTR_DAT_04bb37e0[2];
  local_10c = CONCAT62((uint6)uVar3 & 0xffffffffff00,0x101);
  uStack_111 = PTR_DAT_04bb37e0[3];
  local_110 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_120 = *(undefined8 *)PTR_DAT_04bb37e0;
  FUN_0170f380(puVar12,&local_128);
  return;
}

