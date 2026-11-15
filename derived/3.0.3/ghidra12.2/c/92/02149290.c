
void FUN_02149290(ushort *param_1,float *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  float *pfVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  byte local_78 [4];
  undefined4 local_74;
  undefined2 local_70;
  byte local_6c [4];
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_34 [4];
  
  uVar16 = (int)((float)(int)(*param_2 + -2.5) / 5.0) - (uint)(*param_2 + -2.5 < 0.0) & 0xffff;
  uVar1 = (int)((float)(int)(param_2[2] + -2.5) / 5.0) - (uint)(param_2[2] + -2.5 < 0.0) & 0xffff;
  if (param_3 == 0) {
    FUN_035a4bec(param_1,uVar16,uVar1);
  }
  else {
    FUN_035a4dd4(param_1,uVar16,uVar1,param_3);
  }
  if (-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
    FUN_035a9090(param_1,uVar16,uVar1,param_3);
  }
  FUN_02507c6c(local_6c,1,1,1,0);
  puVar6 = PTR_DAT_04bb5038;
  uVar16 = (uint)local_6c[0];
  local_74 = local_68;
  local_78[0] = 0xff;
  if (local_6c[0] < 8) {
    local_78[0] = local_6c[0];
  }
  local_70 = local_64;
  if (param_3 == 0) {
    if (local_6c[0] < 8) {
      while( true ) {
        local_34[0] = (undefined1)uVar16;
        pfVar8 = (float *)FUN_0251b3b0(local_34,0);
        if (pfVar8 != (float *)0x0) {
          uVar1 = (int)((float)(int)(*pfVar8 + -2.5) / 5.0) - (uint)(*pfVar8 + -2.5 < 0.0) & 0xffff;
          uVar2 = (int)((float)(int)(pfVar8[2] + -2.5) / 5.0) - (uint)(pfVar8[2] + -2.5 < 0.0) &
                  0xffff;
          FUN_035a4bec(param_1,uVar1,uVar2);
          if (-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
            FUN_035a9090(param_1,uVar1,uVar2,0);
          }
        }
        uVar15 = (ulong)uVar16;
        do {
          if (uVar15 == 7) goto LAB_02149474;
          uVar15 = uVar15 + 1;
          uVar9 = FUN_02507924(local_78,puVar6 + uVar15);
        } while ((uVar9 & 1) == 0);
        uVar16 = (uint)(byte)puVar6[uVar15];
        if (7 < uVar16) break;
        local_78[0] = puVar6[uVar15];
      }
    }
  }
  else if (local_6c[0] < 8) {
    while( true ) {
      local_34[0] = (undefined1)uVar16;
      pfVar8 = (float *)FUN_0251b3b0(local_34,0);
      if (pfVar8 != (float *)0x0) {
        uVar1 = (int)((float)(int)(*pfVar8 + -2.5) / 5.0) - (uint)(*pfVar8 + -2.5 < 0.0) & 0xffff;
        uVar2 = (int)((float)(int)(pfVar8[2] + -2.5) / 5.0) - (uint)(pfVar8[2] + -2.5 < 0.0) &
                0xffff;
        FUN_035a4dd4(param_1,uVar1,uVar2,param_3);
        if (-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
          FUN_035a9090(param_1,uVar1,uVar2,param_3);
        }
      }
      uVar15 = (ulong)uVar16;
      do {
        if (uVar15 == 7) goto LAB_02149474;
        uVar15 = uVar15 + 1;
        uVar9 = FUN_02507924(local_78,puVar6 + uVar15);
      } while ((uVar9 & 1) == 0);
      uVar16 = (uint)(byte)puVar6[uVar15];
      if (7 < uVar16) break;
      local_78[0] = puVar6[uVar15];
    }
  }
LAB_02149474:
  puVar6 = PTR_DAT_04bb27c0;
  if ((uint)DAT_05407638 == 0) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return;
  }
  plVar13 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                      ((ulong)((uint)DAT_05407638 >> 0x11) & 0x7ff8));
  if (((plVar13 == (long *)0x0) || ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar13 + 0x46) != (uint)DAT_05407638)) {
    plVar13 = (long *)0x0;
  }
  if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
    plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar6;
    iVar7 = (**(code **)(*plVar10 + 0x60))();
    if (iVar7 < 0x11) {
      uVar16 = 1;
      goto joined_r0x02149520;
    }
    if (*(uint *)(lVar11 + 0x5e8) < 5) {
      uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02149520;
    }
  }
  uVar16 = 0;
joined_r0x02149520:
  if (plVar13 != (long *)0x0) {
    lVar11 = plVar13[0x2a];
    if (((*PTR_DAT_04bc2240 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc2240), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bc2238 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc2240);
    }
    uVar15 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bc2238);
    uVar1 = 0;
    if ((int)lVar11 == 1) {
      uVar1 = uVar16;
    }
    if (((uVar15 & 1) != 0) && (uVar1 != 0)) {
      fVar18 = *(float *)(plVar13[0xd] + 0x278);
      fVar19 = *(float *)(plVar13[0xd] + 0x280);
      iVar7 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
      iVar3 = iVar7 + -2;
      iVar7 = iVar7 + 1;
      iVar4 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
      iVar17 = iVar4 + -2;
      iVar4 = iVar4 + 2;
      iVar14 = iVar3;
      iVar12 = iVar17;
      do {
        FUN_035a4360(param_1,iVar14,iVar12,0);
        if (iVar14 < iVar7) {
          iVar14 = iVar14 + 1;
        }
        else {
          iVar12 = iVar12 + 1;
          iVar14 = iVar3;
        }
      } while ((iVar3 != iVar14) || (iVar4 != iVar12));
      if (-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
        iVar12 = iVar3;
        do {
          iVar14 = iVar12 - (uint)*param_1;
          if ((((-1 < iVar14) && (iVar14 < *(int *)(param_1 + 6))) &&
              (iVar5 = iVar17 - (uint)param_1[1], -1 < iVar5)) && (iVar5 < *(int *)(param_1 + 8))) {
            lVar11 = *(long *)(param_1 + 0x20);
            uVar2 = iVar14 + *(int *)(lVar11 + 0x1c) * iVar5;
            uVar1 = 1 << (ulong)(uVar2 & 0x1f);
            uVar16 = *(uint *)(*(long *)(lVar11 + 0x10) + (long)((int)uVar2 >> 5) * 4);
            if ((uVar1 & uVar16) != 0) {
              *(uint *)(*(long *)(lVar11 + 0x10) + ((long)((ulong)uVar2 << 0x20) >> 0x25) * 4) =
                   uVar16 & (uVar1 ^ 0xffffffff);
              *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + -1;
            }
          }
          if (iVar12 < iVar7) {
            iVar12 = iVar12 + 1;
          }
          else {
            iVar17 = iVar17 + 1;
            iVar12 = iVar3;
          }
        } while ((iVar3 != iVar12) || (iVar4 != iVar17));
      }
    }
  }
  return;
}

