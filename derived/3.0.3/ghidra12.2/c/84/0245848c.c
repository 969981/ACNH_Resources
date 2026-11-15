
void FUN_0245848c(long param_1)

{
  int *piVar1;
  ushort *puVar2;
  bool bVar3;
  uint uVar4;
  undefined2 *puVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  float fVar10;
  int local_6c;
  float local_68;
  float fStack_64;
  float local_60 [2];
  undefined8 local_58;
  float local_4c;
  float local_48;
  float local_44;
  undefined2 local_18;
  undefined1 local_16;
  undefined1 local_15;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    if (((float)*(int *)(param_1 + 0x1902) * 0.001 == 0.0) &&
       ((float)*(int *)(param_1 + 0x1908) * 0.001 == 0.0)) {
      lVar6 = *(long *)(param_1 + 0x68);
      *(undefined2 *)(param_1 + 0x1900) = *(undefined2 *)(lVar6 + 0x2b6);
      *(int *)(param_1 + 0x1902) = (int)(*(float *)(lVar6 + 0x278) * 999.99994);
      iVar7 = (int)(*(float *)(lVar6 + 0x27c) * 4.0);
      if (0x7ffe < iVar7) {
        iVar7 = 0x7fff;
      }
      if (iVar7 < -0x7fff) {
        iVar7 = -0x8000;
      }
      *(short *)(param_1 + 0x1906) = (short)iVar7;
      *(int *)(param_1 + 0x1908) = (int)(*(float *)(lVar6 + 0x280) * 999.99994);
    }
    lVar6 = *(long *)PTR_DAT_04bb2720;
    if (lVar6 == 0) {
      puVar9 = &DAT_055c04a0;
    }
    else {
      puVar9 = &DAT_055c04a0;
      if (*(long *)(lVar6 + 0x330) != 0) {
        puVar9 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar6 + 0x338));
        iVar7 = FUN_006bd550(*puVar9,0);
        puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar7 != 0x758f7eaf) {
          puVar9 = &DAT_055c04a0;
        }
      }
    }
    if (*(int *)(puVar9 + 7) == -0x17df00c3) {
      local_48 = (float)(int)*(short *)(param_1 + 0x1906) * 0.25;
      local_4c = (float)*(int *)(param_1 + 0x1902) * 0.001;
      local_44 = (float)*(int *)(param_1 + 0x1908) * 0.001;
      puVar5 = (undefined2 *)FUN_016e1014(&local_4c,0,0);
      local_18 = *puVar5;
      local_16 = *(undefined1 *)(puVar5 + 1);
      local_15 = *(undefined1 *)((long)puVar5 + 3);
      local_14 = *(undefined4 *)(puVar5 + 2);
      lVar6 = *(long *)PTR_DAT_04bbbc68;
      if (((((lVar6 != 0) && (*(long *)(lVar6 + 0xb0) != 0)) &&
           (*(long *)(*(long *)(lVar6 + 0xb0) + 8) != 0)) &&
          ((*(long *)(lVar6 + 0x488) != 0 && (*(long *)(*(long *)(lVar6 + 0x488) + 8) != 0)))) &&
         ((*(long *)(lVar6 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar6 + 0x2b0) + 8) != 0)))) {
        uVar4 = FUN_0277d6c4(&local_18);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          FUN_0124c030(&local_68,&local_18);
          iVar7 = FUN_0123db50(local_60,local_58);
          if ((iVar7 - 2U & 0xfffffff9) == 0) {
            fVar10 = (float)FUN_0124e3b0(&local_68);
            local_48 = (float)FUN_016e026c(0,&local_4c,0,0);
            local_48 = fVar10 + local_48;
            iVar7 = (int)(local_48 * 4.0);
            if (0x7ffe < iVar7) {
              iVar7 = 0x7fff;
            }
            if (iVar7 < -0x7fff) {
              iVar7 = -0x8000;
            }
            *(short *)(param_1 + 0x1906) = (short)iVar7;
            *(int *)(param_1 + 0x1902) = (int)(local_4c * 999.99994);
            *(int *)(param_1 + 0x1908) = (int)(local_44 * 999.99994);
          }
        }
      }
    }
  }
  bVar3 = *(int *)(param_1 + 0x178) != 0;
  piVar1 = (int *)(param_1 + 0x1902);
  if (bVar3) {
    piVar1 = (int *)(param_1 + 0x18e5);
  }
  puVar2 = (ushort *)(param_1 + 0x1900);
  if (bVar3) {
    puVar2 = (ushort *)(param_1 + 0x18ef);
  }
  fStack_64 = (float)(int)(short)piVar1[1] * 0.25;
  local_68 = (float)*piVar1 * 0.001;
  local_60[0] = (float)*(int *)((long)piVar1 + 6) * 0.001;
  local_6c = (uint)*puVar2 << 0x10;
  FUN_016d88bc(param_1,&local_68,&local_6c);
  plVar8 = *(long **)(param_1 + 0x60);
  if (plVar8 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      plVar8 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar8 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar8 + 0x4b8))(0x3f800000,plVar8);
  return;
}

