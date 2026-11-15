
void FUN_0211b350(long param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  uint *puVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  undefined4 local_174;
  undefined2 local_170;
  undefined1 local_16e;
  undefined1 local_16d;
  undefined4 local_16c;
  undefined2 local_168;
  undefined1 local_166;
  undefined1 local_165;
  undefined4 local_164;
  undefined2 local_160;
  undefined1 local_15e;
  undefined1 local_15d;
  undefined4 local_15c;
  undefined2 local_158;
  undefined1 local_156;
  undefined1 local_155;
  undefined4 local_154;
  undefined2 local_150;
  undefined1 local_14e;
  undefined1 local_14d;
  undefined4 local_14c;
  undefined2 local_148;
  undefined1 local_146;
  undefined1 local_145;
  undefined4 local_144;
  undefined2 local_140;
  undefined1 local_13e;
  undefined1 local_13d;
  undefined4 local_13c;
  undefined2 local_138;
  undefined1 local_136;
  undefined1 local_135;
  undefined4 local_134;
  undefined2 local_130;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined1 local_e4 [127];
  undefined1 local_65;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined8 local_58;
  
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  if (lVar11 == 0) {
    uVar9 = (ulong)(byte)*PTR_DAT_04bb32e0;
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_0211b3e0;
LAB_0211b44c:
    if (*(long *)PTR_DAT_04bb4718 == 0) goto LAB_0211b460;
    puVar8 = (uint *)(*(long *)PTR_DAT_04bb4718 + uVar9 * 4 + 0xde8);
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar11 + 0x158);
    }
    uVar9 = (ulong)*pbVar10;
    if ((*pbVar10 < 8) ||
       (((*(int *)(lVar11 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (bVar1 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), uVar9 = (ulong)bVar1, bVar1 < 8))))
    goto LAB_0211b44c;
LAB_0211b3e0:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar11 = **(long **)PTR_DAT_04bb27d0;
      bVar1 = *(byte *)(lVar11 + 0x473);
      pbVar10 = PTR_DAT_04bb5038;
      if ((long)(char)bVar1 != 0xffffffffffffffff) {
        puVar8 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar1 & 0xffffffffU) * 0x20;
        if (7 < bVar1) {
          puVar8 = (uint *)(lVar11 + 0x48);
        }
        if ((*puVar8 & 8) != 0) {
          pbVar10 = (byte *)(lVar11 + 0x471);
        }
      }
      uVar9 = (ulong)*pbVar10;
      if (*pbVar10 < 8) goto LAB_0211b44c;
    }
    uVar9 = (ulong)(byte)*PTR_DAT_04bb5038;
    if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_0211b44c;
LAB_0211b460:
    puVar8 = (uint *)PTR_DAT_04bb3238;
  }
  if (*param_2 == *puVar8) {
    return;
  }
  iVar3 = FUN_02119c7c(param_1,param_2);
  puVar2 = PTR_DAT_04bb27c0;
  if (iVar3 == -1) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return;
  }
  uVar12 = *param_2;
  if (((uVar12 == 0) ||
      (plVar13 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                           ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
     (((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar13 + 0x46) != uVar12)))) {
    plVar13 = (long *)0x0;
  }
  if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar7 + 0x60))();
    if (iVar4 < 0x11) {
      uVar12 = 1;
      goto joined_r0x0211b548;
    }
    if (*(uint *)(lVar11 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0211b548;
    }
  }
  uVar12 = 0;
joined_r0x0211b548:
  if (plVar13 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb37d0);
    if (((uVar12 & uVar5) == 1) && (plVar7 = (long *)plVar13[0xc], plVar7 != (long *)0x0)) {
      if (((*PTR_DAT_04bb37a0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb3798 = PTR_DAT_04bb37a8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37a0);
      }
      uVar9 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bb3798);
      if ((uVar9 & 1) != 0) {
        if (iVar3 == -2) {
          lVar11 = param_1 + 8;
        }
        else {
          lVar11 = *(long *)(*(long *)(param_1 + 0x1f0) + (long)iVar3 * 8);
        }
        if (*(int *)(lVar11 + 0x130) == 2) {
          local_118 = 0;
          local_114 = 0x3f800000;
          local_128 = 0xffffffff00000000;
          uStack_120 = 0;
          local_f0 = local_e4;
          local_e8 = 0x80;
          local_65 = 0;
          local_f8 = PTR_DAT_04bb2d88 + 0x10;
          local_e4[0] = 0;
          local_58 = 0;
          local_5c = *(undefined1 *)((long)plVar13 + 0x224);
          local_5b = 0;
          local_10c = 0;
          local_104 = 0;
          local_60 = 7;
          local_16e = PTR_DAT_04bb37e0[2];
          local_170 = *(undefined2 *)PTR_DAT_04bb37e0;
          local_16d = PTR_DAT_04bb37e0[3];
          local_16c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
          if (*param_2 != 0) {
            local_168 = local_170;
            local_166 = local_16e;
            local_165 = local_16d;
            local_164 = local_16c;
            local_160 = local_170;
            local_15e = local_16e;
            local_15d = local_16d;
            local_15c = local_16c;
            local_158 = local_170;
            local_156 = local_16e;
            local_155 = local_16d;
            local_154 = local_16c;
            local_150 = local_170;
            local_14e = local_16e;
            local_14d = local_16d;
            local_14c = local_16c;
            local_148 = local_170;
            local_146 = local_16e;
            local_145 = local_16d;
            local_144 = local_16c;
            local_140 = local_170;
            local_13e = local_16e;
            local_13d = local_16d;
            local_13c = local_16c;
            local_138 = local_170;
            local_136 = local_16e;
            local_135 = local_16d;
            local_134 = local_16c;
            local_130 = local_170;
            local_12e = local_16e;
            local_12d = local_16d;
            local_12c = local_16c;
            uVar6 = FUN_02119c7c(param_1,param_2);
            uVar9 = FUN_0211a6bc(param_1,&local_170,uVar6);
            if ((uVar9 & 1) != 0) {
              local_174 = 0;
              FUN_0234cc20(plVar7,&local_168,&local_174);
              local_174 = 0;
              FUN_0234cf54(plVar7,&local_160,&local_174);
              local_174 = 0;
              FUN_0234e06c(plVar7,&local_138,&local_174);
              local_174 = 0;
              FUN_0234c8a4(plVar7,&local_170,&local_174);
              local_174 = 0;
              FUN_0234dfd4(plVar7,&local_140,&local_174);
              local_174 = 0;
              FUN_0234df0c(plVar7,&local_148,&local_174);
              uVar9 = FUN_0277d9a8(&local_130);
              if ((uVar9 & 1) == 0) {
                local_174 = 0;
                FUN_0234de44(plVar7,&local_150,&local_174);
                local_174 = 0;
                FUN_0234d258(plVar7,&local_158,&local_174);
              }
              else {
                local_174 = 0;
                FUN_0234d258(plVar7,&local_130,&local_174);
                *(undefined2 *)((long)plVar7 + 0xc20c) = local_158;
                *(undefined1 *)((long)plVar7 + 0xc20e) = local_156;
                *(undefined1 *)((long)plVar7 + 0xc20f) = local_155;
                *(undefined4 *)(plVar7 + 0x1842) = local_154;
                *(undefined2 *)((long)plVar7 + 0xc214) = local_150;
                *(undefined1 *)((long)plVar7 + 0xc216) = local_14e;
                *(undefined1 *)((long)plVar7 + 0xc217) = local_14d;
                *(undefined4 *)(plVar7 + 0x1843) = local_14c;
              }
            }
          }
        }
      }
    }
  }
  return;
}

