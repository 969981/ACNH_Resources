
/* WARNING: Removing unreachable block (ram,0x016db5f0) */

void FUN_016dafc8(ulong param_1,long param_2,float *param_3,float *param_4,float *param_5,
                 undefined8 param_6,int *param_7,int *param_8,char *param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_17c;
  char local_178;
  undefined1 uStack_177;
  undefined2 uStack_176;
  int iStack_174;
  undefined8 uStack_170;
  int iStack_168;
  uint local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 local_104;
  undefined1 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  uint local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  uint local_90;
  undefined4 local_8c;
  
  if ((param_1 & 1) == 0) {
    local_178 = '\0';
    uStack_177 = 0;
    local_160 = 0xbf800000;
    local_158 = 0;
    iStack_174 = -1;
    uStack_170._0_4_ = 0xffffffff;
    uStack_170._4_4_ = 0xffffffff;
    iStack_168 = -1;
    local_164 = 0xffffffff;
    local_110 = 0;
    local_10c = 0xffffffffffffffff;
    local_104 = 0xffffffffffffffff;
    local_fc = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0xffffffff;
    local_150 = 0xffffffffffffffff;
    uStack_148 = 0xffffffff00000000;
    local_140 = 0xffffffff00000000;
    uStack_138 = 0xffffffffffffffff;
    local_120 = 0xffffffff00000000;
    uStack_118 = 0xffffffff00000000;
    local_130 = 0;
    uStack_128 = 0xffffffff;
    local_f8 = 0xffffffffffffffff;
    uStack_f0 = 0xffffffffbf800000;
    FUN_029a7b28(*(long *)PTR_DAT_04bb26a8 + 0x6d8,&local_178,param_6);
    if (iStack_174 == 0x60) {
LAB_016db114:
      fVar19 = 0.5;
    }
    else if (iStack_174 == 0x6a) {
      fVar19 = 0.33333334;
    }
    else {
      if (iStack_174 == 0x62) goto LAB_016db114;
      fVar19 = -1.0;
    }
    if (local_178 != '\0') {
      *param_4 = local_160._4_4_;
      *param_5 = (float)iStack_168;
    }
    lVar11 = extraout_x1;
    fVar13 = local_160._4_4_;
    fVar16 = (float)local_160;
    uVar15 = local_164;
    iVar9 = iStack_168;
    iVar5 = iStack_174;
    uVar8 = (undefined4)local_158;
    if (fVar19 <= 0.0) goto LAB_016db198;
    fVar14 = (float)iStack_168;
    bVar4 = iStack_174 != -1;
joined_r0x016db16c:
    if (bVar4) goto LAB_016db1f8;
  }
  else {
    lVar10 = *(long *)PTR_DAT_04bb26a8;
    fVar19 = 0.5;
    iVar5 = *(int *)(lVar10 + 0xa5a08);
    fVar13 = *(float *)(lVar10 + 0xa5a20);
    uVar8 = *(undefined4 *)(lVar10 + 0xa5a28);
    lVar11 = param_2;
    switch(iVar5) {
    case 0xc:
    case 0xd:
    case 0xf:
    case 0x13:
    case 0x15:
    case 0x1e:
    case 0x23:
    case 0x3c:
    case 0x48:
    case 0x57:
    case 0x59:
    case 0x5f:
    case 0x60:
    case 0x62:
      break;
    case 0xe:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x14:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x58:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x61:
    case 99:
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
switchD_016db078_caseD_e:
      fVar16 = *(float *)(lVar10 + 0xa5a1c);
      uVar15 = *(uint *)(lVar10 + 0xa5a18);
      iVar9 = *(int *)(lVar10 + 0xa5a14);
LAB_016db198:
      bVar4 = iVar5 != -1;
      fVar14 = (float)iVar9;
      if (fVar16 * (float)(int)uVar15 * 0.25 < 200.0) {
        fVar19 = 1.0;
        goto joined_r0x016db16c;
      }
      fVar19 = 0.33333334;
      if (0x55555554 < iVar9 * -0x55555555 + 0x2aaaaaaaU) {
        fVar19 = 0.5;
      }
      if (bVar4) goto LAB_016db1f8;
      goto LAB_016db2c8;
    case 0x32:
    case 0x6a:
      fVar19 = 0.33333334;
      break;
    default:
      if (iVar5 != 0x385) goto switchD_016db078_caseD_e;
    }
    fVar14 = (float)*(int *)(lVar10 + 0xa5a14);
LAB_016db1f8:
    fVar16 = *param_4;
    if (fVar16 <= fVar13) {
      fVar16 = *param_3 + fVar19 * fVar14 * 0.25 * (fVar13 - fVar16);
    }
    else {
      fVar16 = *param_3 + fVar19 * (1.0 - fVar16) * *param_5 * 0.25 +
               fVar19 * fVar14 * 0.25 * fVar13;
    }
    if (1.0 <= fVar16) {
      fVar16 = fVar16 - (float)(int)fVar16;
    }
    fVar17 = fVar19 * fVar14 * fVar13;
    fVar18 = (fVar16 * 4.0 - (float)(int)(fVar16 * 4.0)) - (fVar17 - (float)(int)fVar17);
    fVar17 = fVar18 + -1.0;
    if (fVar18 <= 0.5) {
      fVar17 = fVar18;
    }
    fVar18 = fVar17 + 1.0;
    if (-0.5 <= fVar17) {
      fVar18 = fVar17;
    }
    fVar16 = fVar16 + fVar18 * -0.25 * 0.03;
    fVar16 = fVar16 - (float)(int)fVar16;
    fVar17 = fVar16 + 1.0;
    if (0.0 <= fVar16) {
      fVar17 = fVar16;
    }
    *param_3 = fVar17;
  }
LAB_016db2c8:
  *param_4 = fVar13;
  puVar2 = PTR_DAT_04bb2020;
  *param_5 = fVar14;
  if (param_2 != 0) {
    puVar12 = *(undefined8 **)(param_2 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        lVar11 = extraout_x1_01;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          lVar11 = extraout_x1_02;
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    puVar1 = puVar2 + 0x10;
    local_178 = (char)puVar1;
    uStack_177 = (undefined1)((ulong)puVar1 >> 8);
    uStack_176 = (undefined2)((ulong)puVar1 >> 0x10);
    iStack_174 = (int)((ulong)puVar1 >> 0x20);
    uStack_170._0_4_ = 0x40fee31;
    uStack_170._4_4_ = 0;
    if (((puVar12[0x227] != 0) && (lVar10 = *(long *)(puVar12[0x227] + 0x78), lVar10 != 0)) &&
       (plVar6 = *(long **)(lVar10 + 0x48), plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 0x30))(*param_3,plVar6,&local_178,uVar8);
      lVar11 = extraout_x1_00;
    }
    puVar12 = *(undefined8 **)(param_2 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0,lVar11,uVar8);
        puVar12 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    puVar1 = puVar2 + 0x10;
    local_178 = (char)puVar1;
    uStack_177 = (undefined1)((ulong)puVar1 >> 8);
    uStack_176 = (undefined2)((ulong)puVar1 >> 0x10);
    iStack_174 = (int)((ulong)puVar1 >> 0x20);
    uStack_170._0_4_ = 0x40bb27d;
    uStack_170._4_4_ = 0;
    if (((puVar12[0x227] != 0) && (lVar11 = *(long *)(puVar12[0x227] + 0x78), lVar11 != 0)) &&
       (plVar6 = *(long **)(lVar11 + 0x48), plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 0x28))(plVar6,&local_178,uVar8);
    }
  }
  local_17c = 0;
  if ((param_1 & 1) != 0) {
    bVar4 = true;
    fVar19 = 1.0;
    goto joined_r0x016db7b4;
  }
  local_178 = '\0';
  uStack_177 = 0;
  local_160 = 0xbf800000;
  local_158 = 0;
  iStack_174 = -1;
  uStack_170._0_4_ = 0xffffffff;
  uStack_170._4_4_ = 0xffffffff;
  iStack_168 = -1;
  local_164 = 0xffffffff;
  local_110 = 0;
  local_10c = 0xffffffffffffffff;
  local_104 = 0xffffffffffffffff;
  local_fc = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_150 = 0xffffffffffffffff;
  uStack_148 = 0xffffffff00000000;
  local_140 = 0xffffffff00000000;
  uStack_138 = 0xffffffffffffffff;
  local_130 = 0;
  uStack_128 = 0xffffffff;
  local_120 = 0xffffffff00000000;
  uStack_118 = 0xffffffff00000000;
  local_f8 = 0xffffffffffffffff;
  uStack_f0 = 0xffffffffbf800000;
  local_a8 = 0xffffffff;
  FUN_029a7b28(*(long *)PTR_DAT_04bb26a8 + 0x6d8,&local_178,param_6);
  fVar13 = ((120.0 / (float)local_160) * 15.0) / fVar19;
  fVar16 = 0.5;
  if (fVar13 < 0.0) {
    fVar16 = -0.5;
  }
  if (param_2 == 0) {
LAB_016db4bc:
    iVar5 = (int)(fVar13 + fVar16);
    if ((param_7 == (int *)0x0) || (*param_7 <= iVar5 || iVar5 < local_10c._4_4_)) {
      if (((param_8 == (int *)0x0) ||
          (((*param_8 <= iVar5 || (param_2 == 0)) || (param_9 == (char *)0x0)))) ||
         (iVar5 < (int)local_10c)) {
        if (param_9 != (char *)0x0) goto LAB_016db57c;
      }
      else {
        uVar15 = *(uint *)(param_2 + 0x288);
        *(undefined4 *)(param_2 + 0x288) = *(undefined4 *)(param_2 + 0x28c);
        uVar15 = uVar15 ^ uVar15 << 0xb;
        *(undefined4 *)(param_2 + 0x28c) = *(undefined4 *)(param_2 + 0x290);
        uVar3 = *(uint *)(param_2 + 0x294);
        *(uint *)(param_2 + 0x290) = uVar3;
        uVar15 = uVar15 >> 8 ^ uVar3 >> 0x13 ^ uVar15 ^ uVar3;
        *(uint *)(param_2 + 0x294) = uVar15;
        if ((uint)((ulong)uVar15 * 100 >> 0x20) < 0x3c) goto LAB_016db54c;
LAB_016db57c:
        if (*param_9 != '\0') {
          if (param_2 != 0) {
            puVar12 = *(undefined8 **)(param_2 + 0x60);
            if (puVar12 == (undefined8 *)0x0) {
              if ((DAT_052461c0 & 1) != 0) {
                puVar12 = &DAT_05240280;
                goto LAB_016db5a8;
              }
              iVar5 = __cxa_guard_acquire(&DAT_052461c0);
              puVar12 = &DAT_05240280;
              lVar11 = DAT_052413b8;
              if (iVar5 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
                lVar11 = DAT_052413b8;
              }
            }
            else {
LAB_016db5a8:
              lVar11 = puVar12[0x227];
            }
            if (lVar11 == 0) {
              local_90 = 0;
            }
            else {
              local_90 = *(uint *)(puVar12 + 0x2d3) >> 1 & 1;
              local_8c = 0x38;
              uVar7 = FUN_03850a90(lVar11,0x38,0,local_90);
              if ((uVar7 & 1) != 0) {
                bVar4 = false;
                *param_9 = '\0';
                goto LAB_016db77c;
              }
            }
          }
          bVar4 = false;
          local_17c = 2;
          goto LAB_016db77c;
        }
      }
      bVar4 = true;
      goto LAB_016db77c;
    }
    bVar4 = true;
    if (param_9 != (char *)0x0) {
      local_17c = 1;
      *param_9 = '\x01';
    }
LAB_016db784:
    *param_7 = local_10c._4_4_;
  }
  else {
    puVar12 = *(undefined8 **)(param_2 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    local_8c = 9;
    if ((*(uint *)((long)puVar12 + 0x15f4) >> 9 & 1) == 0) goto LAB_016db4bc;
    bVar4 = true;
    if (param_9 != (char *)0x0) {
LAB_016db54c:
      bVar4 = true;
      local_17c = 1;
      *param_9 = '\x01';
    }
LAB_016db77c:
    if (param_7 != (int *)0x0) {
      goto LAB_016db784;
    }
  }
  if (param_8 != (int *)0x0) {
    *param_8 = (int)local_10c;
  }
  fVar19 = (fVar19 * (float)local_160 * (float)(int)local_164 * 0.25) / 120.0;
joined_r0x016db7b4:
  if (param_2 != 0) {
    puVar12 = *(undefined8 **)(param_2 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    puVar1 = puVar2 + 0x10;
    local_178 = (char)puVar1;
    uStack_177 = (undefined1)((ulong)puVar1 >> 8);
    uStack_176 = (undefined2)((ulong)puVar1 >> 0x10);
    iStack_174 = (int)((ulong)puVar1 >> 0x20);
    uStack_170._0_4_ = 0x405bf6b;
    uStack_170._4_4_ = 0;
    if (((puVar12[0x227] != 0) && (lVar11 = *(long *)(puVar12[0x227] + 0x78), lVar11 != 0)) &&
       (plVar6 = *(long **)(lVar11 + 0x48), plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 0x28))(plVar6,&local_178,local_17c);
    }
    puVar12 = *(undefined8 **)(param_2 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    puVar2 = puVar2 + 0x10;
    local_178 = (char)puVar2;
    uStack_177 = (undefined1)((ulong)puVar2 >> 8);
    uStack_176 = (undefined2)((ulong)puVar2 >> 0x10);
    iStack_174 = (int)((ulong)puVar2 >> 0x20);
    uStack_170._0_4_ = 0x40c508f;
    uStack_170._4_4_ = 0;
    if (((puVar12[0x227] != 0) && (lVar11 = *(long *)(puVar12[0x227] + 0x78), lVar11 != 0)) &&
       (plVar6 = *(long **)(lVar11 + 0x48), plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 0x30))(fVar19,plVar6,&local_178);
    }
    if (bVar4) {
      puVar12 = *(undefined8 **)(param_2 + 0x60);
      if (local_17c != 1) {
        if (puVar12 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar5 = __cxa_guard_acquire(&DAT_052461c0);
            puVar12 = &DAT_05240280;
            if (iVar5 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar12 = &DAT_05240280;
          }
        }
        *(undefined1 *)(puVar12 + 0x228) = 1;
        puVar12 = *(undefined8 **)(param_2 + 0x60);
      }
      if (puVar12 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          puVar12 = &DAT_05240280;
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar12 = &DAT_05240280;
        }
      }
      lVar11 = puVar12[0x227];
      if (lVar11 != 0) {
        uStack_170 = &local_164;
        local_e8 = local_e8 & 0xffffff;
        local_164 = local_164 & 0xffffff00;
        iStack_168 = 0x80;
        puVar2 = PTR_DAT_04bb2d88 + 0x10;
        local_178 = (char)puVar2;
        uStack_177 = (undefined1)((ulong)puVar2 >> 8);
        uStack_176 = (undefined2)((ulong)puVar2 >> 0x10);
        iStack_174 = (int)((ulong)puVar2 >> 0x20);
        local_e0 = CONCAT31(local_e0._1_3_,1);
        if (((*(char *)(lVar11 + 0x2c0) != '\0') && (*(char *)(lVar11 + 0xae) != '\0')) &&
           (*(char *)(lVar11 + 0xb4) == '\0')) {
          *(undefined1 *)(lVar11 + 0x2c0) = 0;
          FUN_03855b20(lVar11 + 0xc0,0);
        }
        FUN_0384f3b0(lVar11,&local_178);
      }
    }
  }
  return;
}

