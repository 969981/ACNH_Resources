
/* WARNING: Removing unreachable block (ram,0x023b8164) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_023b7bb8(long param_1,uint *param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  
  puVar3 = PTR_DAT_04bb4718;
  uVar11 = param_2[4];
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  fVar22 = (float)param_2[2];
  fVar21 = (float)param_2[1];
  if ((char)uVar11 != '\0') {
    fVar21 = 0.085;
  }
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_054f0960);
      puVar18 = &DAT_054f0958;
      if (iVar7 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar18 = &DAT_054f0958;
    }
  }
  else {
    puVar18 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if ((ulong)*pbVar1 < 8) {
      puVar18 = puVar18 + *pbVar1;
    }
  }
  local_88._0_4_ = 0x38;
  if ((*(uint *)((long)puVar18 + 4) >> 0x18 & 1) != 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x17ce) >> 1 & 1) == 0) {
    uVar11 = *param_2;
    uVar14 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
    uVar19 = uVar14 - uVar11;
    if (uVar19 == 0) {
LAB_023b7cc4:
      FUN_023164ec(param_1,6);
      FUN_023164ec(param_1,6);
      *(undefined1 *)(param_1 + 0x1f75) = 0;
      *(undefined4 *)(param_1 + 0x1f68) = *(undefined4 *)(param_1 + 0x1f6c);
      lVar13 = *(long *)puVar3;
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffdffff;
      if (lVar13 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(&DAT_054f0960);
          puVar17 = (uint *)&DAT_054f0958;
          if (iVar7 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar17 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar17 = (uint *)(lVar13 + 0x204);
        if ((ulong)*pbVar1 < 8) {
          puVar17 = puVar17 + (ulong)*pbVar1 * 2;
        }
      }
      *puVar17 = *puVar17 | 1;
      return 1;
    }
    uVar20 = uVar11 - uVar14;
    uVar10 = uVar19;
    if (uVar14 <= uVar11) {
      uVar10 = uVar20;
    }
    uVar12 = -uVar10;
    if (uVar10 < 0x80000001) {
      uVar12 = uVar10;
    }
    fVar21 = (float)uVar12 * 8.381903e-08;
    if (fVar21 == 0.0) goto LAB_023b7cc4;
    if (fVar21 <= 5.0) {
      FUN_023164ec(param_1,6);
    }
    else {
      if (uVar10 < 0x80000001) {
        if (uVar11 < uVar14) goto LAB_023b81b8;
        fVar22 = 8.381903e-08;
      }
      else {
        uVar19 = -uVar10;
        if (uVar11 < uVar14) {
          fVar22 = 8.381903e-08;
          uVar20 = uVar19;
        }
        else {
LAB_023b81b8:
          fVar22 = -8.381903e-08;
          uVar20 = uVar19;
        }
      }
      puVar18 = *(undefined8 **)(param_1 + 0x60);
      if (puVar18 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(&DAT_052461c0);
          puVar18 = &DAT_05240280;
          if (iVar7 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar18 = &DAT_05240280;
        }
      }
      if (((puVar18[0x227] != 0) && (lVar13 = *(long *)(puVar18[0x227] + 0x78), lVar13 != 0)) &&
         (plVar9 = *(long **)(lVar13 + 0x48), plVar9 != (long *)0x0)) {
        (**(code **)(*plVar9 + 0x30))(fVar22 * (float)uVar20,plVar9,&DAT_054a8710);
      }
      puVar18 = *(undefined8 **)(param_1 + 0x60);
      if (puVar18 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(&DAT_052461c0);
          puVar18 = &DAT_05240280;
          if (iVar7 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar18 = &DAT_05240280;
        }
      }
      FUN_01707d90(puVar18,&DAT_054a8720,6,0,0);
    }
    *(float *)(param_1 + 0x1f5c) = fVar21;
    lVar13 = *(long *)puVar3;
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x20000;
    goto joined_r0x023b82c0;
  }
  if ((char)param_2[4] != '\0') {
    if (*(char *)(param_1 + 0x1f75) == '\0') {
      puVar18 = *(undefined8 **)(param_1 + 0x60);
      local_78 = 0;
      local_70 = (long *)0x0;
      local_88._0_4_ = 0;
      local_88._4_4_ = 0;
      uStack_80 = 0;
      if (puVar18 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(&DAT_052461c0);
          puVar18 = &DAT_05240280;
          if (iVar7 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar18 = &DAT_05240280;
        }
      }
      local_68 = 0;
      if ((puVar18[0x227] == 0) ||
         (uVar8 = FUN_03850a90(puVar18[0x227],0,&local_88,0), (uVar8 & 1) == 0)) goto LAB_023b8268;
      if ((local_70 == (long *)0x0) || (lVar13 = *local_70, lVar13 == 0)) {
        uVar11 = 1;
      }
      else {
        fVar21 = *(float *)(lVar13 + 0x18);
        if (fVar21 < 0.0) {
          fVar21 = *(float *)(local_70[1] + 0xc);
        }
        uVar11 = (uint)(fVar21 - *(float *)(lVar13 + 0x14));
        if (uVar11 < 2) {
          uVar11 = 1;
        }
      }
      *(undefined4 *)(param_1 + 0x1f68) = 0;
      *(byte *)(param_1 + 0x1f74) = (byte)(uVar11 >> 0x1f);
      uVar14 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
      *(uint *)(param_1 + 0x1f70) = uVar14;
      *(uint *)(param_1 + 0x1f6c) = uVar11 & (int)uVar11 >> 0x1f;
      *(undefined1 *)(param_1 + 0x1f75) = 1;
    }
    else {
      uVar14 = *(int *)(param_1 + 0x1f70) - *(int *)(param_1 + 0x1f68);
    }
    if (uVar14 != 0) {
      plVar9 = *(long **)(param_1 + 0x68);
      uVar11 = *param_2;
      uVar19 = *(uint *)((long)plVar9 + 0x2b4);
      uVar10 = uVar19 - uVar11;
      if (uVar10 == 0) {
LAB_023b7d6c:
        fVar21 = 8.381903e-08;
        uVar12 = uVar10;
      }
      else {
        uVar12 = uVar11 - uVar19;
        uVar20 = uVar10;
        if (uVar19 <= uVar11) {
          uVar20 = uVar12;
        }
        if (uVar20 < 0x80000001) {
          if (uVar19 <= uVar11) {
            fVar21 = 8.381903e-08;
            goto LAB_023b8204;
          }
        }
        else {
          uVar10 = -uVar20;
          if (uVar11 < uVar19) goto LAB_023b7d6c;
        }
        fVar21 = -8.381903e-08;
        uVar12 = uVar10;
      }
LAB_023b8204:
      local_88._0_4_ =
           (undefined4)
           (long)(((float)uVar19 * 8.381903e-08 + (fVar21 * (float)uVar12) / (float)uVar14) *
                 11930465.0);
      (**(code **)(*plVar9 + 0x160))(plVar9,&local_88);
      if (uVar14 != 1) {
        if (*(char *)(param_1 + 0x1f75) != '\0') {
          uVar6 = (**(code **)(*(long *)(param_1 + 0x1f60) + (ulong)*(byte *)(param_1 + 0x1f74) * 8)
                  )(param_1 + 0x1f60);
          *(undefined4 *)(param_1 + 0x1f68) = uVar6;
        }
        lVar13 = *(long *)puVar3;
joined_r0x023b82c0:
        if (lVar13 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar7 = __cxa_guard_acquire(&DAT_054f0960);
            puVar17 = (uint *)&DAT_054f0958;
            if (iVar7 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
            }
          }
          else {
            puVar17 = (uint *)&DAT_054f0958;
          }
        }
        else {
          puVar17 = (uint *)(lVar13 + 0x204);
          if ((ulong)*pbVar1 < 8) {
            puVar17 = puVar17 + (ulong)*pbVar1 * 2;
          }
        }
        *puVar17 = *puVar17 & 0xfffffffe;
        return 0;
      }
    }
    (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),param_2);
LAB_023b8268:
    FUN_023b7ac8(param_1);
    return 1;
  }
  puVar18 = *(undefined8 **)(param_1 + 0x60);
  if (puVar18 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar18 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar18 = &DAT_05240280;
    }
  }
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((puVar18[0x227] == 0) || (uVar8 = FUN_03850368(puVar18[0x227],0), (uVar8 & 1) == 0)) {
    puVar18 = *(undefined8 **)(param_1 + 0x60);
    if (puVar18 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar18 = &DAT_05240280;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar18 = &DAT_05240280;
      }
    }
    local_68 = (ulong)(uint)local_68;
    local_88 = local_88 & 0xffffffff00000000;
    if ((puVar18[0x227] == 0) || (uVar8 = FUN_03850368(puVar18[0x227],0), (uVar8 & 1) != 0))
    goto LAB_023b7f38;
    uVar6 = local_68._4_4_;
    if ((puVar18[0x227] == 0) ||
       (uVar8 = FUN_03850368(puVar18[0x227],local_68._4_4_), (uVar8 & 1) != 0)) goto LAB_023b7f38;
    bVar5 = FUN_0384fca4(puVar18[0x227],uVar6);
  }
  else {
LAB_023b7f38:
    bVar5 = 1;
  }
  fVar23 = (float)param_2[3];
  iVar7 = (int)(long)(fVar22 * 11930465.0);
  if ((char)uVar11 != '\0') {
    iVar7 = 0xb60b61;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    local_68 = CONCAT44(10,(uint)local_68);
    local_88 = CONCAT44(local_88._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_023b7fb8;
    bVar4 = true;
  }
  else {
LAB_023b7fb8:
    plVar9 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar9 = *(long **)(param_1 + 0x4c8);
    }
    lVar13 = (**(code **)(*plVar9 + 0x148))();
    uVar11 = *param_2;
    iVar2 = -iVar7;
    iVar16 = uVar11 - *(int *)(lVar13 + 4);
    if ((iVar16 < iVar7) && (iVar2 < iVar16)) {
      bVar4 = true;
      uVar14 = uVar11;
    }
    else {
      iVar15 = (int)(fVar21 * (float)iVar16);
      iVar16 = (int)(long)(fVar23 * 11930465.0);
      if (iVar15 < 1) {
        iVar7 = -iVar16;
        iVar16 = iVar2;
      }
      iVar2 = iVar15;
      if (iVar16 <= iVar15) {
        iVar2 = iVar16;
      }
      if (iVar7 <= iVar15) {
        iVar7 = iVar2;
      }
      uVar14 = iVar7 + *(int *)(lVar13 + 4);
      bVar4 = uVar14 == uVar11;
    }
    *(uint *)(lVar13 + 4) = uVar14;
  }
  uVar11 = 0;
  if ((bVar5 & bVar4) == 0) {
    uVar11 = 0x20000;
  }
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffdffff | uVar11;
  uVar11 = *param_2;
  uVar14 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
  if (uVar14 - uVar11 == 0) {
LAB_023b80bc:
    FUN_023164ec(param_1,6);
    lVar13 = *(long *)puVar3;
  }
  else {
    uVar19 = uVar14 - uVar11;
    if (uVar14 <= uVar11) {
      uVar19 = uVar11 - uVar14;
    }
    uVar11 = -uVar19;
    if (uVar19 < 0x80000001) {
      uVar11 = uVar19;
    }
    if (*(float *)(param_1 + 0x1f5c) <= 10.0) {
      if ((float)uVar11 * 8.381903e-08 < 3.0) goto LAB_023b80bc;
    }
    else if ((float)uVar11 * 8.381903e-08 < 10.0) goto LAB_023b80bc;
    lVar13 = *(long *)puVar3;
  }
  if (lVar13 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_054f0960);
      puVar17 = (uint *)&DAT_054f0958;
      if (iVar7 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar17 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar17 = (uint *)(lVar13 + 0x204);
    if ((ulong)*pbVar1 < 8) {
      puVar17 = puVar17 + (ulong)*pbVar1 * 2;
    }
  }
  local_88 = local_88 & 0xffffffff00000000;
  if ((bVar5 & bVar4) == 0) {
    *puVar17 = *puVar17 & 0xfffffffe;
    return 0;
  }
  *puVar17 = *puVar17 | 1;
  FUN_023164ec(param_1,6);
  return 1;
}

