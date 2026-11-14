
void FUN_01b98a70(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  char *pcVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  undefined *local_2b0 [11];
  long *local_258;
  long *local_250;
  long *local_248;
  undefined *local_238;
  char *local_230;
  undefined4 local_228;
  undefined1 local_224;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined *local_208;
  undefined1 *puStack_200;
  undefined4 local_1f8;
  undefined1 local_1f4 [63];
  undefined1 local_1b5;
  undefined *local_1b0;
  undefined1 *puStack_1a8;
  undefined4 local_1a0;
  undefined1 local_19c [63];
  undefined1 local_15d;
  undefined1 local_158 [8];
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulong local_d0;
  uint local_c8;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  
  plVar9 = param_1 + 1;
  (**(code **)(*plVar9 + 0x38))(plVar9);
  local_c8 = 0;
  local_d8 = 0xffffffff00000000;
  local_d0 = 0xffffffff;
  local_b8 = local_ac;
  local_b0 = 0x40;
  local_6d = 0;
  local_ac[0] = 0;
  local_c0 = PTR_DAT_04bb2bc0 + 0x10;
  FUN_01bd9850(&local_d8,param_3);
  local_238 = PTR_DAT_04bb2020 + 0x10;
  local_230 = "_BO";
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar8 = 0;
  do {
    if (*(char *)(param_3[1] + lVar8) == '\0') {
LAB_01b98b64:
      iVar7 = (int)lVar8;
joined_r0x01b98b68:
      if (2 < iVar7) {
        uVar13 = 0;
        goto LAB_01b98b9c;
      }
      break;
    }
    lVar10 = param_3[1] + lVar8;
    if (*(char *)(lVar10 + 1) == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_01b98b64;
    }
    if (*(char *)(lVar10 + 2) == '\0') {
      iVar7 = (int)lVar8 + 2;
      goto joined_r0x01b98b68;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  goto LAB_01b98ddc;
  while (uVar13 = uVar13 + 1, iVar7 - 2 != uVar13) {
LAB_01b98b9c:
    pcVar1 = (char *)(param_3[1] + uVar13);
    (**(code **)(local_238 + 0x18))(&local_238);
    puVar2 = PTR_DAT_04bb27c0;
    if ((pcVar1 == local_230) ||
       ((*pcVar1 == *local_230 &&
        ((*pcVar1 == '\0' ||
         ((pcVar1[1] == local_230[1] && ((pcVar1[1] == '\0' || (pcVar1[2] == local_230[2]))))))))))
    {
      if (((int)uVar13 != -1) && (lVar8 = *(long *)PTR_DAT_04bb27c0, lVar8 != 0)) {
        uVar12 = *(uint *)(*param_1 + 8);
        if ((((uVar12 == 0) ||
             (plVar11 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                                  ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
            ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar12)) {
          plVar11 = (long *)0x0;
        }
        if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
          plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar8 = *(long *)puVar2;
          iVar7 = (**(code **)(*plVar4 + 0x60))();
          if (iVar7 < 0x11) {
            uVar12 = 1;
          }
          else {
            if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_01b98ca8;
            uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_01b98ca8:
          uVar12 = 0;
        }
        if (plVar11 != (long *)0x0) {
          if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar7 != 0)) {
            *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb37d8);
          }
          uVar3 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb37d0);
          if ((uVar12 & uVar3) == 1) {
            (**(code **)(plVar11[0x7c] + 0x18))(plVar11 + 0x7c);
            local_230 = (char *)plVar11[0x7d];
            local_238 = PTR_DAT_04bb2020 + 0x10;
            local_c8 = FUN_021d6010(&local_238);
            iVar7 = (int)local_d0;
            uVar13 = local_d0 & 0xffffffff;
            *local_b8 = 0;
            local_d0 = local_d0 & 0xffffffff;
            local_238 = (undefined *)CONCAT44(local_238._4_4_,local_c8);
            local_d8 = CONCAT44(local_d8._4_4_,6);
            if (local_d8._4_4_ == -1) {
              *local_b8 = 0;
            }
            else {
              uVar12 = local_c8;
              if (7 < (int)local_c8) {
                uVar12 = 0;
              }
              if (iVar7 + 1U < 2) {
                if (uVar12 < 8) {
                  puVar6 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)uVar12 * 8 + 0x20);
                }
                else {
                  puVar6 = &DAT_0407ebb1;
                }
                FUN_038d1270(&local_c0,"%02d_%s",local_d8._4_4_,puVar6);
              }
              else {
                if (uVar12 < 8) {
                  puVar6 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)uVar12 * 8 + 0x20);
                }
                else {
                  puVar6 = &DAT_0407ebb1;
                }
                FUN_038d1270(&local_c0,"%02d_%02d_%s",local_d8._4_4_,uVar13,puVar6);
              }
            }
          }
        }
      }
      break;
    }
  }
LAB_01b98ddc:
  local_224 = 0;
  local_228 = 0x40;
  local_220 = 0xffffffff;
  uStack_218 = 0xffffffff00000000;
  puStack_200 = local_1f4;
  local_230 = local_158;
  local_210 = 0xffffffff;
  local_1f8 = 0x40;
  local_1b5 = 0;
  local_1f4[0] = 0;
  local_208 = PTR_DAT_04bb2bc0 + 0x10;
  local_1a0 = 0x40;
  local_15d = 0;
  local_19c[0] = 0;
  puStack_1a8 = local_19c;
  local_238 = PTR_DAT_04bb6b18 + 0x10;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  puVar6 = &local_d8;
  if (&local_d8 <= local_158 + 2) {
    puVar6 = (undefined8 *)(local_158 + 2);
  }
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = (undefined1  [8])0x0;
  uStack_150 = 0;
  local_1b0 = local_208;
  memset(local_230,0,(size_t)((long)puVar6 + (-0xe0 - (long)&local_238)));
  FUN_006f50a0(&local_238,param_2,&local_c0,0);
  puVar2 = PTR_DAT_04bb3350;
  lVar8 = *(long *)PTR_DAT_04bc08b0;
  if (lVar8 == 0) {
    lVar10 = 1;
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)(lVar5 + 0xa8);
    *(long *)(lVar5 + 0xa8) = lVar8;
  }
  FUN_01bee4c0(local_2b0,*param_1 + 0x10);
  local_250[0x4e] = param_4;
  *(undefined1 *)(local_250 + 0x4f) = 1;
  FUN_006f3d64(local_2b0,plVar9,&local_238);
  local_2b0[0] = PTR_DAT_04bc0c00 + 0x10;
  if (local_248 != (long *)0x0) {
    (**(code **)(*local_248 + 8))();
  }
  if (local_250 != (long *)0x0) {
    (**(code **)(*local_250 + 8))();
  }
  if (local_258 != (long *)0x0) {
    (**(code **)(*local_258 + 8))();
  }
  FUN_003532f4(local_2b0);
  if (lVar10 != 1) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar8 + 0xa8) = lVar10;
  }
  if (*(char *)(*param_1 + 0x1c) != '\0') {
    FUN_01bc1880(*(long *)PTR_DAT_04bb28f8 + 0x2990,*param_1 + 0x18);
  }
  return;
}

