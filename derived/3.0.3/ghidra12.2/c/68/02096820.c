
void FUN_02096820(short *param_1,short *param_2,int param_3,uint *param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  void *__s;
  ushort *puVar8;
  uint *puVar9;
  ulong uVar10;
  long *plVar11;
  ushort uVar12;
  short sVar13;
  undefined8 *puVar14;
  long lVar15;
  short *psVar16;
  undefined1 uVar17;
  undefined *puVar18;
  long lVar19;
  undefined *local_828;
  undefined1 auStack_820 [1876];
  uint local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined4 local_70 [4];
  
  local_828 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_820,0,0x754);
  uVar3 = nn::os::GetSystemTick();
  local_cc = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  local_c8 = (local_cc ^ local_cc >> 0x1e) * 0x6c078965 + 2;
  local_c4 = (local_c8 ^ local_c8 >> 0x1e) * 0x6c078965 + 3;
  local_c0 = (local_c4 ^ local_c4 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_828);
  memset(__s,0,0x754);
  puVar2 = PTR_DAT_04bb43c0;
  local_b0 = &PTR_FUN_04a71b80;
  switch(param_3) {
  case 0:
    local_90 = (undefined **)0xe09;
    FUN_0277d4ac(&local_90);
    FUN_0277dedc(&local_90);
    lVar19 = (**(code **)(local_828 + 0x18))(&local_828);
    uVar3 = FUN_0277d6c4(&local_90);
    if ((uVar3 >> 3 & 0x1fff) < 0x753) {
      lVar15 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
      *(uint *)(lVar19 + lVar15) = *(uint *)(lVar19 + lVar15) | 1 << (ulong)(uVar3 & 0x1f);
    }
    param_1[0] = -2;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_0277d4ac(param_1);
    goto switchD_020970d4_caseD_0;
  case 1:
    local_90 = (undefined **)0xe0a;
    FUN_0277d4ac(&local_90);
    FUN_0277dedc(&local_90);
    lVar19 = (**(code **)(local_828 + 0x18))(&local_828);
    uVar3 = FUN_0277d6c4(&local_90);
    if ((uVar3 >> 3 & 0x1fff) < 0x753) {
      lVar15 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
      *(uint *)(lVar19 + lVar15) = *(uint *)(lVar19 + lVar15) | 1 << (ulong)(uVar3 & 0x1f);
    }
    param_1[0] = -2;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_0277d4ac(param_1);
    goto switchD_020970d4_caseD_1;
  case 2:
    local_90 = (undefined **)0x9fa;
    FUN_0277d4ac(&local_90);
    FUN_0277dedc(&local_90);
    lVar19 = (**(code **)(local_828 + 0x18))(&local_828);
    uVar3 = FUN_0277d6c4(&local_90);
    if ((uVar3 >> 3 & 0x1fff) < 0x753) {
      lVar15 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
      *(uint *)(lVar19 + lVar15) = *(uint *)(lVar19 + lVar15) | 1 << (ulong)(uVar3 & 0x1f);
    }
    param_1[0] = -2;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_0277d4ac(param_1);
    goto switchD_020970d4_caseD_2;
  case 3:
    local_70[0] = 0;
    local_90 = &PTR_FUN_049ff538;
    local_88 = local_70;
    FUN_008a1ba0(&local_828,&local_90);
    local_70[0] = 7;
    local_90 = &PTR_FUN_049ff538;
    local_88 = local_70;
    FUN_008a1ba0(&local_828,&local_90);
    uVar3 = 0;
    do {
      (**(code **)(local_828 + 0x10))(&local_90,&local_828,uVar3);
      lVar19 = (**(code **)(local_828 + 0x20))(&local_828);
      uVar7 = 1 << (ulong)(uVar3 & 0x1f);
      if ((*(uint *)(lVar19 + (ulong)(uVar3 >> 5) * 4) & uVar7) != 0) {
        lVar19 = *(long *)puVar2;
        uVar6 = FUN_0277d6c4(&local_90);
        if (*(long *)puVar2 != 0) {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if (((uVar6 < *(uint *)(lVar19 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
             (uVar10 = (*(code *)*local_b0)(&local_b0,&local_90), (uVar10 & 1) != 0))
          goto LAB_02096d04;
        }
        lVar19 = (**(code **)(local_828 + 0x18))(&local_828);
        lVar15 = (ulong)(uVar3 >> 5) * 4;
        *(uint *)(lVar19 + lVar15) = *(uint *)(lVar19 + lVar15) & (uVar7 ^ 0xffffffff);
      }
LAB_02096d04:
      uVar3 = uVar3 + 1;
    } while (uVar3 != 15000);
    uVar3 = 0;
    local_88 = &local_b4;
    local_b4 = 0;
    local_90 = &PTR_FUN_049ff3f8;
    do {
      (**(code **)(local_828 + 0x10))(local_70,&local_828,uVar3);
      lVar19 = (**(code **)(local_828 + 0x20))(&local_828);
      uVar7 = 1 << (ulong)(uVar3 & 0x1f);
      if ((*(uint *)(lVar19 + (ulong)(uVar3 >> 5) * 4) & uVar7) != 0) {
        lVar19 = *(long *)puVar2;
        uVar6 = FUN_0277d6c4(local_70);
        if (*(long *)puVar2 != 0) {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if (((uVar6 < *(uint *)(lVar19 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
             (uVar10 = (*(code *)*local_90)(&local_90,local_70), (uVar10 & 1) != 0))
          goto LAB_02096f10;
        }
        lVar19 = (**(code **)(local_828 + 0x18))(&local_828);
        lVar15 = (ulong)(uVar3 >> 5) * 4;
        *(uint *)(lVar19 + lVar15) = *(uint *)(lVar19 + lVar15) & (uVar7 ^ 0xffffffff);
      }
LAB_02096f10:
      uVar3 = uVar3 + 1;
    } while (uVar3 != 15000);
    break;
  case 4:
    local_88 = local_70;
    local_70[0] = 7;
    local_90 = &PTR_LAB_049ff650;
    FUN_008a1ba0(&local_828,&local_90);
    uVar3 = 0;
    local_88 = &local_b4;
    local_b4 = 0;
    local_90 = &PTR_FUN_049ff3f8;
    do {
      (**(code **)(local_828 + 0x10))(local_70,&local_828,uVar3);
      lVar19 = (**(code **)(local_828 + 0x20))(&local_828);
      uVar7 = 1 << (ulong)(uVar3 & 0x1f);
      if ((*(uint *)(lVar19 + (ulong)(uVar3 >> 5) * 4) & uVar7) != 0) {
        lVar19 = *(long *)puVar2;
        uVar6 = FUN_0277d6c4(local_70);
        if (*(long *)puVar2 != 0) {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if (((uVar6 < *(uint *)(lVar19 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
             (uVar10 = (*(code *)*local_90)(&local_90,local_70), (uVar10 & 1) != 0))
          goto LAB_02096e20;
        }
        lVar19 = (**(code **)(local_828 + 0x18))(&local_828);
        lVar15 = (ulong)(uVar3 >> 5) * 4;
        *(uint *)(lVar19 + lVar15) = *(uint *)(lVar19 + lVar15) & (uVar7 ^ 0xffffffff);
      }
LAB_02096e20:
      uVar3 = uVar3 + 1;
    } while (uVar3 != 15000);
    uVar3 = 0;
    local_88 = &local_b4;
    local_b4 = 0;
    local_90 = &PTR_FUN_049ff538;
    do {
      (**(code **)(local_828 + 0x10))(local_70,&local_828,uVar3);
      lVar19 = (**(code **)(local_828 + 0x20))(&local_828);
      uVar7 = 1 << (ulong)(uVar3 & 0x1f);
      if ((*(uint *)(lVar19 + (ulong)(uVar3 >> 5) * 4) & uVar7) != 0) {
        lVar19 = *(long *)puVar2;
        uVar6 = FUN_0277d6c4(local_70);
        if (*(long *)puVar2 != 0) {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if (((uVar6 < *(uint *)(lVar19 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
             (uVar10 = (*(code *)*local_90)(&local_90,local_70), (uVar10 & 1) != 0))
          goto LAB_02097000;
        }
        lVar19 = (**(code **)(local_828 + 0x18))(&local_828);
        lVar15 = (ulong)(uVar3 >> 5) * 4;
        *(uint *)(lVar19 + lVar15) = *(uint *)(lVar19 + lVar15) & (uVar7 ^ 0xffffffff);
      }
LAB_02097000:
      uVar3 = uVar3 + 1;
    } while (uVar3 != 15000);
    break;
  case 5:
  case 6:
    local_88 = local_70;
    local_70[0] = 4;
    local_90 = &PTR_LAB_049ff650;
    FUN_008a1ba0(&local_828,&local_90);
    uVar3 = 0;
    local_88 = &local_b4;
    local_b4 = 0;
    local_90 = &PTR_FUN_049ff3f8;
    do {
      (**(code **)(local_828 + 0x10))(local_70,&local_828,uVar3);
      lVar19 = (**(code **)(local_828 + 0x20))(&local_828);
      uVar7 = 1 << (ulong)(uVar3 & 0x1f);
      if ((*(uint *)(lVar19 + (ulong)(uVar3 >> 5) * 4) & uVar7) != 0) {
        lVar19 = *(long *)puVar2;
        uVar6 = FUN_0277d6c4(local_70);
        if (*(long *)puVar2 != 0) {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if (((uVar6 < *(uint *)(lVar19 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
             (uVar10 = (*(code *)*local_90)(&local_90,local_70), (uVar10 & 1) != 0))
          goto LAB_020969a0;
        }
        lVar19 = (**(code **)(local_828 + 0x18))(&local_828);
        lVar15 = (ulong)(uVar3 >> 5) * 4;
        *(uint *)(lVar19 + lVar15) = *(uint *)(lVar19 + lVar15) & (uVar7 ^ 0xffffffff);
      }
LAB_020969a0:
      uVar3 = uVar3 + 1;
    } while (uVar3 != 15000);
    uVar3 = 0;
    local_88 = &local_b4;
    local_b4 = 0;
    local_90 = &PTR_FUN_049ff538;
    do {
      (**(code **)(local_828 + 0x10))(local_70,&local_828,uVar3);
      lVar19 = (**(code **)(local_828 + 0x20))(&local_828);
      uVar7 = 1 << (ulong)(uVar3 & 0x1f);
      if ((*(uint *)(lVar19 + (ulong)(uVar3 >> 5) * 4) & uVar7) != 0) {
        lVar19 = *(long *)puVar2;
        uVar6 = FUN_0277d6c4(local_70);
        if (*(long *)puVar2 != 0) {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if (((uVar6 < *(uint *)(lVar19 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
             (uVar10 = (*(code *)*local_90)(&local_90,local_70), (uVar10 & 1) != 0))
          goto LAB_02096a90;
        }
        lVar19 = (**(code **)(local_828 + 0x18))(&local_828);
        lVar15 = (ulong)(uVar3 >> 5) * 4;
        *(uint *)(lVar19 + lVar15) = *(uint *)(lVar19 + lVar15) & (uVar7 ^ 0xffffffff);
      }
LAB_02096a90:
      uVar3 = uVar3 + 1;
    } while (uVar3 != 15000);
  }
  param_1[0] = -2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_0277d4ac(param_1);
  switch(param_3) {
  case 0:
switchD_020970d4_caseD_0:
    local_90 = (undefined **)0xe09;
    goto LAB_0209711c;
  case 1:
switchD_020970d4_caseD_1:
    local_90 = (undefined **)0xe0a;
LAB_0209711c:
    FUN_0277d4ac(&local_90);
    *param_1 = (short)local_90;
    *(undefined1 *)(param_1 + 1) = local_90._2_1_;
    *(undefined1 *)((long)param_1 + 3) = local_90._3_1_;
    *(undefined4 *)(param_1 + 2) = local_90._4_4_;
    lVar19 = *(long *)puVar2;
    local_88 = (undefined4 *)local_90;
    local_80 = 0;
    local_90 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    uVar3 = FUN_0277d6c4(&local_88);
    if (*(long *)puVar2 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar19 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_1);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar19 + 0x1d8)) &&
           (lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar3 * 8), lVar19 != 0)) {
          local_80 = lVar19;
        }
      }
    }
    iVar5 = FUN_01ad7260(&local_90);
    if ((iVar5 != 0) && (puVar8 = (ushort *)FUN_01afd600(&local_90), puVar8 != (ushort *)0x0)) {
      uVar12 = *puVar8 & 0xfff8;
LAB_02097828:
      *puVar8 = uVar12;
    }
LAB_0209782c:
    *(undefined4 *)param_1 = (undefined4)local_88;
    *(uint *)(param_1 + 2) = local_88._4_4_;
    break;
  case 2:
switchD_020970d4_caseD_2:
    local_90 = (undefined **)0x9fa;
    FUN_0277d4ac(&local_90);
    *param_1 = (short)local_90;
    *(undefined1 *)(param_1 + 1) = local_90._2_1_;
    *(undefined1 *)((long)param_1 + 3) = local_90._3_1_;
    *(undefined4 *)(param_1 + 2) = local_90._4_4_;
    lVar19 = *(long *)puVar2;
    local_88 = (undefined4 *)local_90;
    local_80 = 0;
    local_90 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    uVar3 = FUN_0277d6c4(&local_88);
    if (*(long *)puVar2 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar19 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_1);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar19 + 0x1d8)) &&
           (lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar3 * 8), lVar19 != 0)) {
          local_80 = lVar19;
        }
      }
    }
    lVar19 = (long)(int)*param_4;
    if (6 < *param_4) goto LAB_02097800;
    puVar18 = &DAT_041796e8;
LAB_02097304:
    iVar5 = *(int *)(puVar18 + lVar19 * 4);
    iVar4 = FUN_01ad7260(&local_90);
    if ((iVar4 == 0) || (iVar4 = FUN_01ad7260(&local_90), iVar4 <= iVar5)) goto LAB_0209782c;
LAB_02097810:
    puVar8 = (ushort *)FUN_01afd600(&local_90);
    if (puVar8 == (ushort *)0x0) goto LAB_0209782c;
    uVar12 = *puVar8 & 0xfff8 | (ushort)iVar5;
    goto LAB_02097828;
  case 3:
  case 4:
    if (DAT_05574040 != 0) {
      puVar14 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar19 = (**(code **)(*(long *)*puVar14 + 0x38))();
        if (lVar19 != 0) {
          lVar19 = lVar19 + 0x70;
LAB_020973b8:
          if (*(long **)(lVar19 + 0xd0) == (long *)0x0) {
            uVar10 = 0;
          }
          else {
            puVar14 = (undefined8 *)**(long **)(lVar19 + 0xd0);
            uVar10 = 0;
            if (puVar14 != (undefined8 *)0x0) {
              uVar10 = (**(code **)*puVar14)();
            }
          }
          lVar15 = *(long *)(lVar19 + 0xb8) + *(long *)(lVar19 + 0xb0);
          psVar16 = (short *)(lVar15 + 0x1e3378);
          if (param_3 != 3) {
            psVar16 = (short *)(lVar15 + 0x1e3380);
          }
          *param_1 = *psVar16;
          *(char *)(param_1 + 1) = (char)psVar16[1];
          *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)psVar16 + 3);
          *(undefined4 *)(param_1 + 2) = *(undefined4 *)(psVar16 + 2);
          if ((((uVar10 & 1) != 0) && (*(long *)(lVar19 + 0xd0) != 0)) &&
             (puVar14 = *(undefined8 **)(*(long *)(lVar19 + 0xd0) + 8), puVar14 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar14)();
          }
        }
      }
      else if (((puVar14 != (undefined8 *)0x0) && ((long *)puVar14[0x26] != (long *)0x0)) &&
              (lVar19 = (**(code **)(*(long *)puVar14[0x26] + 0x38))(), lVar19 != 0))
      goto LAB_020973b8;
    }
    lVar19 = *(long *)puVar2;
    uVar3 = FUN_0277d6c4(param_1);
    if (*(long *)puVar2 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) break;
    }
    local_90 = (undefined **)0xfffe;
    FUN_0277d4ac(&local_90);
    puVar18 = PTR_DAT_04bb39d8;
    uVar3 = 0;
    iVar5 = 0;
    do {
      plVar11 = (long *)(param_5 + (long)iVar5 * 0x2c);
      lVar19 = (**(code **)(local_828 + 0x20))(&local_828);
      uVar7 = FUN_0277d6c4(plVar11);
      if (((uVar7 >> 3 & 0x1fff) < 0x753) &&
         ((*(uint *)(lVar19 + (ulong)((uVar7 & 0xffff) >> 5) * 4) >> (ulong)(uVar7 & 0x1f) & 1) != 0
         )) {
        uVar3 = uVar3 + 1;
        puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar18);
        uVar7 = *puVar9 ^ *puVar9 << 0xb;
        uVar6 = puVar9[3];
        *puVar9 = puVar9[1];
        puVar9[1] = puVar9[2];
        uVar7 = uVar7 >> 8 ^ uVar6 >> 0x13 ^ uVar7 ^ uVar6;
        puVar9[2] = uVar6;
        puVar9[3] = uVar7;
        if (((ulong)uVar7 * (ulong)uVar3 & 0xffffffff00000000) == 0) {
          local_90 = (undefined **)*plVar11;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0x20);
    lVar19 = *(long *)puVar2;
    *(uint *)param_1 = (uint)local_90;
    *(undefined4 *)(param_1 + 2) = local_90._4_4_;
    uVar3 = FUN_0277d6c4(param_1);
    if (*(long *)puVar2 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) break;
    }
    if (param_3 != 3) {
      local_90 = (undefined **)0x11dc;
      FUN_0277d4ac(&local_90);
      *param_1 = (short)local_90;
      *(undefined1 *)(param_1 + 1) = local_90._2_1_;
      *(undefined1 *)((long)param_1 + 3) = local_90._3_1_;
      *(undefined4 *)(param_1 + 2) = local_90._4_4_;
      lVar19 = *(long *)puVar2;
      local_88 = (undefined4 *)local_90;
      local_80 = 0;
      local_90 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      uVar3 = FUN_0277d6c4(&local_88);
      if (*(long *)puVar2 != 0) {
        lVar19 = *(long *)(lVar19 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar19 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar19 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(param_1);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar19 + 0x1d8)) &&
             (lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar3 * 8), lVar19 != 0)) {
            local_80 = lVar19;
          }
        }
      }
      uVar3 = *param_4;
      lVar19 = (long)(int)uVar3;
      if ((7 < uVar3) || ((0xfdU >> (ulong)(uVar3 & 0x1f) & 1) == 0)) goto LAB_02097800;
      puVar18 = &DAT_04057ee0;
      goto LAB_02097304;
    }
    local_90 = (undefined **)0x6ac;
    FUN_0277d4ac(&local_90);
    *param_1 = (short)local_90;
    *(undefined1 *)(param_1 + 1) = local_90._2_1_;
    *(undefined1 *)((long)param_1 + 3) = local_90._3_1_;
    *(undefined4 *)(param_1 + 2) = local_90._4_4_;
    lVar19 = *(long *)puVar2;
    local_88 = (undefined4 *)local_90;
    local_80 = 0;
    local_90 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    uVar3 = FUN_0277d6c4(&local_88);
    if (*(long *)puVar2 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar19 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_1);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar19 + 0x1d8)) &&
           (lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar3 * 8), lVar19 != 0)) {
          local_80 = lVar19;
        }
      }
    }
    lVar19 = (long)(int)*param_4;
    if (*param_4 < 7) {
      puVar18 = &DAT_04179704;
      goto LAB_02097304;
    }
LAB_02097800:
    iVar5 = FUN_01ad7260(&local_90);
    if (iVar5 != 0) {
      iVar5 = 0;
      goto LAB_02097810;
    }
    goto LAB_0209782c;
  case 5:
    if (DAT_05574040 != 0) {
      puVar14 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar19 = (**(code **)(*(long *)*puVar14 + 0x38))();
        if (lVar19 != 0) {
          lVar19 = lVar19 + 0x70;
LAB_020973f8:
          if (*(long **)(lVar19 + 0xd0) == (long *)0x0) {
            uVar10 = 0;
          }
          else {
            puVar14 = (undefined8 *)**(long **)(lVar19 + 0xd0);
            uVar10 = 0;
            if (puVar14 != (undefined8 *)0x0) {
              uVar10 = (**(code **)*puVar14)();
            }
          }
          lVar15 = *(long *)(lVar19 + 0xb8) + *(long *)(lVar19 + 0xb0);
          if (*(short *)(lVar15 + 0x1e3368) == -2) {
            local_90 = (undefined **)0xfffe;
            FUN_0277d4ac(&local_90);
            uVar3 = 0;
            iVar5 = 0;
            do {
              plVar11 = (long *)(param_5 + (long)iVar5 * 0x2c);
              lVar15 = (**(code **)(local_828 + 0x20))(&local_828);
              uVar7 = FUN_0277d6c4(plVar11);
              if (((uVar7 >> 3 & 0x1fff) < 0x753) &&
                 ((*(uint *)(lVar15 + (ulong)((uVar7 & 0xffff) >> 5) * 4) >> (ulong)(uVar7 & 0x1f) &
                  1) != 0)) {
                uVar3 = uVar3 + 1;
                puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                uVar7 = *puVar9 ^ *puVar9 << 0xb;
                uVar6 = puVar9[3];
                *puVar9 = puVar9[1];
                puVar9[1] = puVar9[2];
                uVar7 = uVar7 >> 8 ^ uVar6 >> 0x13 ^ uVar7 ^ uVar6;
                puVar9[2] = uVar6;
                puVar9[3] = uVar7;
                if (((ulong)uVar7 * (ulong)uVar3 & 0xffffffff00000000) == 0) {
                  local_90 = (undefined **)*plVar11;
                }
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 != 0x20);
            *param_1 = (short)local_90;
            *(undefined1 *)(param_1 + 1) = local_90._2_1_;
            *(undefined1 *)((long)param_1 + 3) = local_90._3_1_;
            *(undefined4 *)(param_1 + 2) = local_90._4_4_;
            *param_2 = (short)local_90;
            *(undefined1 *)(param_2 + 1) = local_90._2_1_;
            *(undefined1 *)((long)param_2 + 3) = local_90._3_1_;
            *(undefined4 *)(param_2 + 2) = local_90._4_4_;
          }
          else {
            *param_1 = *(short *)(lVar15 + 0x1e3368);
            *(undefined1 *)(param_1 + 1) = *(undefined1 *)(lVar15 + 0x1e336a);
            *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)(lVar15 + 0x1e336b);
            *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar15 + 0x1e336c);
          }
joined_r0x02098194:
          if ((((uVar10 & 1) != 0) && (*(long *)(lVar19 + 0xd0) != 0)) &&
             (puVar14 = *(undefined8 **)(*(long *)(lVar19 + 0xd0) + 8), puVar14 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar14)();
          }
        }
      }
      else if (((puVar14 != (undefined8 *)0x0) && ((long *)puVar14[0x26] != (long *)0x0)) &&
              (lVar19 = (**(code **)(*(long *)puVar14[0x26] + 0x38))(), lVar19 != 0))
      goto LAB_020973f8;
    }
    break;
  case 6:
    if (DAT_05574040 != 0) {
      puVar14 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar19 = (**(code **)(*(long *)*puVar14 + 0x38))();
        if (lVar19 != 0) {
          lVar19 = lVar19 + 0x70;
LAB_02097438:
          if (*(long **)(lVar19 + 0xd0) == (long *)0x0) {
            uVar10 = 0;
          }
          else {
            puVar14 = (undefined8 *)**(long **)(lVar19 + 0xd0);
            uVar10 = 0;
            if (puVar14 != (undefined8 *)0x0) {
              uVar10 = (**(code **)*puVar14)();
            }
          }
          lVar15 = *(long *)(lVar19 + 0xb8) + *(long *)(lVar19 + 0xb0);
          if (*(short *)(lVar15 + 0x1e3370) == -2) {
            lVar15 = *(long *)puVar2;
            uVar3 = FUN_0277d6c4(param_2);
            if (*(long *)puVar2 != 0) {
              lVar15 = *(long *)(lVar15 + 0x57e58);
              uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              if ((uVar3 < *(uint *)(lVar15 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
                lVar15 = (**(code **)(local_828 + 0x18))(&local_828);
                uVar3 = FUN_0277d6c4(param_2);
                if ((uVar3 >> 3 & 0x1fff) < 0x753) {
                  lVar1 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
                  *(uint *)(lVar15 + lVar1) =
                       *(uint *)(lVar15 + lVar1) & (1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU);
                }
              }
            }
            local_90 = (undefined **)0xfffe;
            FUN_0277d4ac(&local_90);
            uVar3 = 0;
            iVar5 = 0;
            do {
              plVar11 = (long *)(param_5 + (long)iVar5 * 0x2c);
              lVar15 = (**(code **)(local_828 + 0x20))(&local_828);
              uVar7 = FUN_0277d6c4(plVar11);
              if (((uVar7 >> 3 & 0x1fff) < 0x753) &&
                 ((*(uint *)(lVar15 + (ulong)((uVar7 & 0xffff) >> 5) * 4) >> (ulong)(uVar7 & 0x1f) &
                  1) != 0)) {
                uVar3 = uVar3 + 1;
                puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                uVar7 = *puVar9 ^ *puVar9 << 0xb;
                uVar6 = puVar9[3];
                *puVar9 = puVar9[1];
                puVar9[1] = puVar9[2];
                uVar7 = uVar7 >> 8 ^ uVar6 >> 0x13 ^ uVar7 ^ uVar6;
                puVar9[2] = uVar6;
                puVar9[3] = uVar7;
                if (((ulong)uVar7 * (ulong)uVar3 & 0xffffffff00000000) == 0) {
                  local_90 = (undefined **)*plVar11;
                }
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 != 0x20);
            *(uint *)param_1 = (uint)local_90;
            *(undefined4 *)(param_1 + 2) = local_90._4_4_;
            uVar10 = uVar10 & 0xffffffff;
          }
          else {
            *param_1 = *(short *)(lVar15 + 0x1e3370);
            *(undefined1 *)(param_1 + 1) = *(undefined1 *)(lVar15 + 0x1e3372);
            *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)(lVar15 + 0x1e3373);
            *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar15 + 0x1e3374);
          }
          goto joined_r0x02098194;
        }
      }
      else if (((puVar14 != (undefined8 *)0x0) && ((long *)puVar14[0x26] != (long *)0x0)) &&
              (lVar19 = (**(code **)(*(long *)puVar14[0x26] + 0x38))(), lVar19 != 0))
      goto LAB_02097438;
    }
  }
  lVar19 = *(long *)puVar2;
  uVar3 = FUN_0277d6c4(param_1);
  if (*(long *)puVar2 == 0) {
LAB_02097880:
    if (param_3 - 5U < 2) {
      uVar3 = 0;
      local_70[0] = 5;
      local_88 = local_70;
      local_90 = &PTR_FUN_049ff4e8;
      do {
        (**(code **)(local_828 + 0x10))(&local_b0,&local_828,uVar3);
        lVar19 = (**(code **)(local_828 + 0x20))(&local_828);
        uVar7 = 1 << (ulong)(uVar3 & 0x1f);
        if ((*(uint *)(lVar19 + (ulong)(uVar3 >> 5) * 4) & uVar7) != 0) {
          lVar19 = *(long *)puVar2;
          uVar6 = FUN_0277d6c4(&local_b0);
          if (*(long *)puVar2 != 0) {
            lVar19 = *(long *)(lVar19 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
            if (((uVar6 < *(uint *)(lVar19 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
               (uVar10 = (*(code *)*local_90)(&local_90,&local_b0), (uVar10 & 1) != 0))
            goto LAB_020978e4;
          }
          lVar19 = (**(code **)(local_828 + 0x18))(&local_828);
          lVar15 = (ulong)(uVar3 >> 5) * 4;
          *(uint *)(lVar19 + lVar15) = *(uint *)(lVar19 + lVar15) & (uVar7 ^ 0xffffffff);
        }
LAB_020978e4:
        uVar3 = uVar3 + 1;
      } while (uVar3 != 15000);
    }
    puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar3 = *puVar9 ^ *puVar9 << 0xb;
    uVar6 = puVar9[3];
    *puVar9 = puVar9[1];
    puVar9[1] = puVar9[2];
    uVar7 = uVar3 ^ uVar6;
    uVar3 = uVar3 >> 8 ^ uVar6 >> 0x13 ^ uVar7;
    puVar9[2] = uVar6;
    puVar9[3] = uVar3;
    uVar3 = (uVar3 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
    uVar7 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
    local_90 = (undefined **)CONCAT44(uVar7,uVar3);
    uVar3 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
    local_88 = (undefined4 *)CONCAT44((uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4,uVar3);
    lVar15 = (**(code **)(local_828 + 0x20))(&local_828);
    lVar19 = 0;
    iVar5 = 0;
    do {
      puVar9 = (uint *)(lVar15 + lVar19);
      lVar19 = lVar19 + 4;
      uVar3 = *puVar9 - (*puVar9 >> 1 & 0x55555555);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
      uVar3 = uVar3 + (uVar3 >> 8);
      iVar5 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + iVar5;
    } while (lVar19 != 0x754);
    if (iVar5 == 0) {
      local_b0 = (undefined **)
                 CONCAT44(DAT_0558600c,CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008)));
      sVar13 = DAT_05586008;
      uVar17 = DAT_0558600a;
    }
    else {
      lVar15 = (**(code **)(local_828 + 0x20))(&local_828);
      lVar19 = 0;
      uVar3 = 0;
      do {
        puVar9 = (uint *)(lVar15 + lVar19);
        lVar19 = lVar19 + 4;
        uVar7 = *puVar9 - (*puVar9 >> 1 & 0x55555555);
        uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
        uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
        uVar7 = uVar7 + (uVar7 >> 8);
        uVar3 = (uVar7 + (uVar7 >> 0x10) & 0x3f) + uVar3;
      } while (lVar19 != 0x754);
      uVar7 = (uint)local_90 ^ (uint)local_90 << 0xb;
      local_90 = (undefined **)CONCAT44((undefined4)local_88,local_90._4_4_);
      uVar7 = uVar7 >> 8 ^ local_88._4_4_ >> 0x13 ^ uVar7 ^ local_88._4_4_;
      local_88 = (undefined4 *)CONCAT44(uVar7,local_88._4_4_);
      FUN_00889f80(&local_b0,&local_828,(int)((ulong)uVar7 * (ulong)uVar3 >> 0x20) + 1);
      FUN_01a4c66c(&local_90,&local_b0);
      sVar13 = (short)local_b0;
      uVar17 = local_b0._2_1_;
    }
    *param_1 = sVar13;
    *(undefined1 *)(param_1 + 1) = uVar17;
    *(undefined1 *)((long)param_1 + 3) = local_b0._3_1_;
    *(undefined4 *)(param_1 + 2) = local_b0._4_4_;
    if (param_3 == 5) {
      *param_2 = sVar13;
      *(undefined1 *)(param_2 + 1) = uVar17;
      *(undefined1 *)((long)param_2 + 3) = local_b0._3_1_;
      *(undefined4 *)(param_2 + 2) = local_b0._4_4_;
    }
  }
  else {
    lVar19 = *(long *)(lVar19 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
    if ((*(uint *)(lVar19 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_02097880;
  }
  if (1 < param_3 - 5U) {
    if (param_3 == 4) {
      if (DAT_05574040 == 0) {
        return;
      }
      puVar14 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar19 = (**(code **)(*(long *)*puVar14 + 0x38))();
        if (lVar19 == 0) {
          return;
        }
        lVar19 = lVar19 + 0x70;
      }
      else {
        if (puVar14 == (undefined8 *)0x0) {
          return;
        }
        if ((long *)puVar14[0x26] == (long *)0x0) {
          return;
        }
        lVar19 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
        if (lVar19 == 0) {
          return;
        }
      }
      lVar15 = *(long *)(lVar19 + 0xd0);
      if (lVar15 == 0) {
        uVar10 = 0;
      }
      else {
        if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
          lVar15 = *(long *)(lVar19 + 0xd0);
          uVar10 = uVar10 & 0xffffffff;
          if (lVar15 == 0) goto LAB_02097e24;
        }
        plVar11 = *(long **)(lVar15 + 0x20);
        if (plVar11 != (long *)0x0) {
          local_90 = *(undefined ***)(lVar19 + 0xb0);
          local_88 = *(undefined4 **)(lVar19 + 0xb8);
          local_80 = 0x1e3388;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_90);
        }
      }
LAB_02097e24:
      psVar16 = (short *)(*(long *)(lVar19 + 0xb8) + *(long *)(lVar19 + 0xb0) + 0x1e3380);
    }
    else {
      if (param_3 != 3) {
        return;
      }
      if (DAT_05574040 == 0) {
        return;
      }
      puVar14 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar19 = (**(code **)(*(long *)*puVar14 + 0x38))();
        if (lVar19 == 0) {
          return;
        }
        lVar19 = lVar19 + 0x70;
      }
      else {
        if (puVar14 == (undefined8 *)0x0) {
          return;
        }
        if ((long *)puVar14[0x26] == (long *)0x0) {
          return;
        }
        lVar19 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
        if (lVar19 == 0) {
          return;
        }
      }
      lVar15 = *(long *)(lVar19 + 0xd0);
      if (lVar15 == 0) {
        uVar10 = 0;
      }
      else {
        if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
          lVar15 = *(long *)(lVar19 + 0xd0);
          uVar10 = uVar10 & 0xffffffff;
          if (lVar15 == 0) goto LAB_02097de0;
        }
        plVar11 = *(long **)(lVar15 + 0x20);
        if (plVar11 != (long *)0x0) {
          local_90 = *(undefined ***)(lVar19 + 0xb0);
          local_88 = *(undefined4 **)(lVar19 + 0xb8);
          local_80 = 0x1e3388;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_90);
        }
      }
LAB_02097de0:
      psVar16 = (short *)(*(long *)(lVar19 + 0xb8) + *(long *)(lVar19 + 0xb0) + 0x1e3378);
    }
    *psVar16 = *param_1;
    *(char *)(psVar16 + 1) = (char)param_1[1];
    *(undefined1 *)((long)psVar16 + 3) = *(undefined1 *)((long)param_1 + 3);
    *(undefined4 *)(psVar16 + 2) = *(undefined4 *)(param_1 + 2);
    if ((uVar10 & 1) == 0) {
      return;
    }
    lVar19 = *(long *)(lVar19 + 0xd0);
    goto joined_r0x02097e5c;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  puVar14 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar19 = (**(code **)(*(long *)*puVar14 + 0x38))();
    if (lVar19 == 0) {
      return;
    }
    lVar19 = lVar19 + 0x70;
  }
  else {
    if (puVar14 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar14[0x26] == (long *)0x0) {
      return;
    }
    lVar19 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
    if (lVar19 == 0) {
      return;
    }
  }
  lVar15 = *(long *)(lVar19 + 0xd0);
  if (lVar15 == 0) {
    uVar10 = 0;
  }
  else {
    if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      lVar15 = *(long *)(lVar19 + 0xd0);
      uVar10 = uVar10 & 0xffffffff;
      if (lVar15 == 0) goto LAB_02097d48;
    }
    plVar11 = *(long **)(lVar15 + 0x20);
    if (plVar11 != (long *)0x0) {
      local_90 = *(undefined ***)(lVar19 + 0xb0);
      local_88 = *(undefined4 **)(lVar19 + 0xb8);
      local_80 = 0x1e3388;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_90);
    }
  }
LAB_02097d48:
  lVar15 = *(long *)(lVar19 + 0xb8) + *(long *)(lVar19 + 0xb0) + (ulong)(param_3 != 5) * 8;
  *(short *)(lVar15 + 0x1e3368) = *param_1;
  *(char *)(lVar15 + 0x1e336a) = (char)param_1[1];
  *(undefined1 *)(lVar15 + 0x1e336b) = *(undefined1 *)((long)param_1 + 3);
  *(undefined4 *)(lVar15 + 0x1e336c) = *(undefined4 *)(param_1 + 2);
  if ((uVar10 & 1) == 0) {
    return;
  }
  lVar19 = *(long *)(lVar19 + 0xd0);
joined_r0x02097e5c:
  if ((lVar19 != 0) && (*(undefined8 **)(lVar19 + 0x18) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar19 + 0x18))();
  }
  return;
}

