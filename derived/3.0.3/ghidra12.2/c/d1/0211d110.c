
uint FUN_0211d110(long param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  uint *puVar19;
  undefined *local_2f8;
  uint *local_2f0;
  undefined4 local_2e8;
  uint local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined8 local_2d4;
  undefined7 local_2cc;
  undefined1 uStack_2c5;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined8 local_29c;
  undefined8 local_294;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined8 local_264;
  undefined8 local_25c;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined8 local_22c;
  undefined8 local_224;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined1 auStack_210 [220];
  undefined4 local_134;
  undefined1 local_128;
  undefined4 local_124;
  undefined1 local_120;
  undefined4 local_118 [2];
  undefined *local_110;
  uint *puStack_108;
  int local_100;
  uint local_fc [7];
  undefined1 local_dd;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  long local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined *local_b0;
  uint *local_a8;
  int local_a0;
  uint local_9c [3];
  undefined1 local_8d;
  undefined8 local_88;
  long local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined4 local_6c;
  
  if (*(int *)(param_1 + 0x1ec) <= *(int *)(param_1 + 0x1e8)) goto LAB_0211d30c;
  local_a0 = 0x10;
  local_8d = 0;
  local_b0 = PTR_DAT_04bb35a0 + 0x10;
  local_a8 = local_9c;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar19 = (uint *)param_2[1];
  if (local_9c != puVar19) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar14 = 0;
    do {
      if (*(char *)(param_2[1] + lVar14) == '\0') goto LAB_0211d1ec;
      lVar16 = param_2[1] + lVar14;
      if (*(char *)(lVar16 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_0211d1ec;
      }
      if (*(char *)(lVar16 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_0211d1ec;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_0211d1ec:
    iVar7 = (int)lVar14;
    if (local_a0 <= (int)lVar14) {
      iVar7 = local_a0 + -1;
    }
    memcpy(local_9c,puVar19,(long)iVar7);
    *(undefined1 *)((long)local_9c + (long)iVar7) = 0;
  }
  local_b0 = PTR_DAT_04bb2ab0 + 0x10;
  lVar14 = param_2[5];
  local_80 = param_2[6];
  local_78 = (undefined4)param_2[7];
  local_74 = *(undefined4 *)((long)param_2 + 0x3c);
  local_70 = (undefined1)param_2[8];
  local_6c = *(undefined4 *)((long)param_2 + 0x44);
  local_88._4_4_ = (int)((ulong)lVar14 >> 0x20);
  bVar5 = local_88._4_4_ == 3;
  local_88 = lVar14;
  if (bVar5) {
    lVar14 = *(long *)PTR_DAT_04bb4138;
    if (lVar14 == 0) {
LAB_0211d294:
      lVar14 = *(long *)PTR_DAT_04bb4130;
      if (lVar14 == 0) {
LAB_0211d30c:
        return *(uint *)PTR_DAT_04bb3238;
      }
      (**(code **)(local_b0 + 0x18))(&local_b0);
      uVar6 = FUN_006bd550(local_a8,0);
      local_2f8 = (undefined *)CONCAT44(local_2f8._4_4_,uVar6);
      lVar14 = FUN_0079e4d0(lVar14,&local_2f8);
      if (lVar14 == 0) goto LAB_0211d30c;
      iVar7 = 1;
    }
    else {
      *(undefined1 *)((long)local_a8 + (long)local_a0 + -1) = 0;
      uVar6 = FUN_006bd550(local_a8,0);
      local_2f8 = (undefined *)CONCAT44(local_2f8._4_4_,uVar6);
      lVar14 = FUN_0079e770(lVar14,&local_2f8);
      iVar7 = 0;
      if (lVar14 == 0) goto LAB_0211d294;
    }
    local_88 = CONCAT44(iVar7,0xffffffff);
    if (iVar7 == 0) {
      iVar7 = 0;
      puVar1 = PTR_DAT_04bb2028 + 0x10;
      do {
        lVar14 = FUN_0265c2a0(iVar7);
        if (lVar14 != 0) {
          uStack_2c5 = 0;
          local_2e8 = 0x20;
          local_2e4 = local_2e4 & 0xffffff00;
          local_2f8 = puVar1;
          local_2f0 = &local_2e4;
          if ((*(long **)(lVar14 + 0x28) == (long *)0x0) ||
             (puVar10 = (undefined8 *)**(long **)(lVar14 + 0x28), puVar10 == (undefined8 *)0x0)) {
            uVar11 = 0;
          }
          else {
            uVar11 = (**(code **)*puVar10)();
            uVar11 = uVar11 & 0xffffffff;
          }
          pbVar2 = (byte *)(*(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8));
          FUN_038d1270(&local_2f8,"-----");
          uVar15 = (ulong)*pbVar2;
          if (uVar15 < 0x23) {
            FUN_038d1270(&local_2f8,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar15 * 8 + 0xb0),
                         pbVar2[1]);
          }
          (**(code **)(local_2f8 + 0x18))(&local_2f8);
          (**(code **)(local_2f8 + 0x18))(&local_2f8);
          puVar19 = local_2f0;
          (**(code **)(local_b0 + 0x18))(&local_b0);
          if (puVar19 == local_a8) {
LAB_0211d498:
            local_88 = CONCAT44(local_88._4_4_,iVar7);
            if ((((uVar11 & 1) != 0) && (*(long *)(lVar14 + 0x28) != 0)) &&
               (puVar10 = *(undefined8 **)(*(long *)(lVar14 + 0x28) + 8),
               puVar10 != (undefined8 *)0x0)) {
              (**(code **)*puVar10)();
            }
            break;
          }
          uVar15 = 0;
          bVar5 = true;
          do {
            if (*(char *)((long)local_2f0 + uVar15) != *(char *)((long)local_a8 + uVar15)) break;
            if (*(char *)((long)local_2f0 + uVar15) == '\0') {
              if (bVar5) goto LAB_0211d498;
              break;
            }
            cVar3 = *(char *)((long)local_2f0 + uVar15 + 1);
            if (cVar3 != *(char *)((long)local_a8 + uVar15 + 1)) break;
            if (cVar3 == '\0') goto LAB_0211d498;
            cVar3 = *(char *)((long)local_2f0 + uVar15 + 2);
            if (cVar3 != *(char *)((long)local_a8 + uVar15 + 2)) break;
            if (cVar3 == '\0') goto LAB_0211d498;
            bVar5 = uVar15 < 0x7fffe;
            uVar15 = uVar15 + 3;
          } while (uVar15 != 0x80001);
          if ((((uVar11 & 1) != 0) && (*(long *)(lVar14 + 0x28) != 0)) &&
             (puVar10 = *(undefined8 **)(*(long *)(lVar14 + 0x28) + 8), puVar10 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar10)();
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 10);
    }
  }
  if (*(int *)(param_1 + 0x1530) == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    puVar10 = (undefined8 *)**(undefined8 **)(param_1 + 0x1538);
    uVar6 = *(undefined4 *)puVar10;
    if (0 < *(int *)(param_1 + 0x1530)) {
      *puVar10 = *(undefined8 *)(param_1 + 0x1540);
      *(undefined8 **)(param_1 + 0x1540) = puVar10;
      uVar18 = *(int *)(param_1 + 0x1530) - 1;
      if (0 < *(int *)(param_1 + 0x1530)) {
        if (uVar18 == 0) {
          iVar7 = 1;
        }
        else {
          memmove(*(void **)(param_1 + 0x1538),(void *)((long)*(void **)(param_1 + 0x1538) + 8),
                  (ulong)uVar18 << 3);
          iVar7 = *(int *)(param_1 + 0x1530);
        }
        *(int *)(param_1 + 0x1530) = iVar7 + -1;
      }
    }
  }
  puVar1 = PTR_DAT_04bb3238;
  local_dd = 0;
  local_fc[0]._0_1_ = 0;
  uVar18 = *(uint *)(param_1 + 0x1e8);
  local_100 = 0x20;
  local_d4 = 0;
  local_d0 = 0;
  local_110 = PTR_DAT_04bb2028 + 0x10;
  local_cc = 0;
  local_c4 = 0;
  local_bc = 0;
  local_118[0] = *(undefined4 *)PTR_DAT_04bb3238;
  puStack_108 = local_fc;
  (**(code **)(local_b0 + 0x18))(&local_b0);
  puVar19 = local_a8;
  if (local_fc != local_a8) {
    (**(code **)(local_b0 + 0x18))(&local_b0);
    lVar14 = 0;
    do {
      if (*(char *)((long)local_a8 + lVar14) == '\0') {
LAB_0211d5f0:
        iVar7 = (int)lVar14;
        goto LAB_0211d5f4;
      }
      if (*(char *)((long)local_a8 + lVar14 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_0211d5f0;
      }
      if (*(char *)((long)local_a8 + lVar14 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_0211d5f0;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    iVar7 = 0;
LAB_0211d5f4:
    if (local_100 <= iVar7) {
      iVar7 = local_100 + -1;
    }
    memcpy(local_fc,puVar19,(long)iVar7);
    *(undefined1 *)((long)local_fc + (long)iVar7) = 0;
  }
  puVar4 = PTR_DAT_04bb2720;
  lVar14 = (long)(int)uVar18;
  local_d8 = (undefined4)local_88;
  local_d4 = local_88._4_4_;
  local_cc = local_80;
  local_c4 = CONCAT44(local_74,local_78);
  if (*(int *)(param_1 + 0x1604) == 1) {
    lVar16 = *(long *)PTR_DAT_04bb2720;
    uVar13 = 0;
    if (lVar16 != 0) {
      if (*(long *)(lVar16 + 0x330) == 0) {
        uVar13 = 0;
      }
      else {
        puVar10 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
        iVar7 = FUN_006bd550(*puVar10,0);
        uVar13 = 0;
        if (iVar7 == 0x758f7eaf) {
          uVar13 = 0;
          if (*(long *)puVar4 != 0) {
            lVar16 = *(long *)(*(long *)puVar4 + 0x330);
            uVar13 = 0;
            if (lVar16 != 0) {
              uVar13 = *(undefined4 *)(lVar16 + 0x248);
            }
          }
        }
      }
    }
  }
  else {
    uVar13 = 7;
  }
  local_bc = CONCAT44(uVar13,(undefined4)local_bc);
  FUN_021262ac(&local_2f8);
  FUN_0211db50(&local_2f8,local_118);
  local_124 = *(undefined4 *)((long)param_2 + 0x44);
  local_128 = (undefined1)param_2[8];
  local_134 = uVar6;
  if (*(int *)(param_1 + 0x1e8) < *(int *)(param_1 + 0x1ec)) {
    puVar10 = *(undefined8 **)(param_1 + 0x1f8);
    if (puVar10 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x1f8) = *puVar10;
    }
    *puVar10 = &PTR_LAB_04a74eb0;
    puVar10[1] = local_2f0;
    puVar10[2] = CONCAT44(local_2e4,local_2e8);
    *(undefined4 *)(puVar10 + 3) = local_2e0;
    *(undefined4 *)((long)puVar10 + 0x1c) = local_2dc;
    *(undefined4 *)(puVar10 + 4) = local_2d8;
    *(ulong *)((long)puVar10 + 0x2c) = CONCAT17(uStack_2c5,local_2cc);
    *(undefined8 *)((long)puVar10 + 0x24) = local_2d4;
    *(undefined4 *)((long)puVar10 + 0x34) = local_2c4;
    *(undefined4 *)(puVar10 + 7) = local_2c0;
    *(undefined4 *)((long)puVar10 + 0x3c) = local_2bc;
    puVar10[8] = local_2b8;
    puVar10[9] = uStack_2b0;
    *(undefined4 *)(puVar10 + 10) = local_2a8;
    *(undefined4 *)((long)puVar10 + 0x54) = local_2a4;
    *(undefined4 *)(puVar10 + 0xb) = local_2a0;
    *(undefined8 *)((long)puVar10 + 100) = local_294;
    *(undefined8 *)((long)puVar10 + 0x5c) = local_29c;
    *(undefined4 *)((long)puVar10 + 0x6c) = local_28c;
    *(undefined4 *)(puVar10 + 0xe) = local_288;
    *(undefined4 *)((long)puVar10 + 0x74) = local_284;
    puVar10[0xf] = local_280;
    puVar10[0x10] = uStack_278;
    *(undefined4 *)(puVar10 + 0x11) = local_270;
    *(undefined4 *)((long)puVar10 + 0x8c) = local_26c;
    *(undefined4 *)(puVar10 + 0x12) = local_268;
    *(undefined8 *)((long)puVar10 + 0x9c) = local_25c;
    *(undefined8 *)((long)puVar10 + 0x94) = local_264;
    *(undefined4 *)((long)puVar10 + 0xa4) = local_254;
    *(undefined4 *)(puVar10 + 0x15) = local_250;
    *(undefined4 *)((long)puVar10 + 0xac) = local_24c;
    puVar10[0x16] = local_248;
    puVar10[0x17] = uStack_240;
    *(undefined4 *)(puVar10 + 0x18) = local_238;
    *(undefined4 *)((long)puVar10 + 0xc4) = local_234;
    *(undefined4 *)(puVar10 + 0x19) = local_230;
    *(undefined8 *)((long)puVar10 + 0xd4) = local_224;
    *(undefined8 *)((long)puVar10 + 0xcc) = local_22c;
    *(undefined4 *)((long)puVar10 + 0xdc) = local_21c;
    *(undefined4 *)(puVar10 + 0x1c) = local_218;
    *(undefined4 *)((long)puVar10 + 0xe4) = local_214;
    FUN_02125f20(puVar10 + 0x1d,auStack_210);
    *(undefined1 *)(puVar10 + 0x3b) = local_120;
    if (*(int *)(param_1 + 0x1e8) < *(int *)(param_1 + 0x1ec)) {
      *(undefined8 **)(*(long *)(param_1 + 0x1f0) + (long)*(int *)(param_1 + 0x1e8) * 8) = puVar10;
      *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
    }
  }
  uVar8 = FUN_0211dd00(param_1,&local_b0,uVar18);
  if (uVar8 == 0) {
    if (*(int *)(param_1 + 0x1530) < *(int *)(param_1 + 0x1534)) {
      puVar10 = *(undefined8 **)(param_1 + 0x1540);
      if (puVar10 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x1540) = *puVar10;
      }
      *(undefined4 *)puVar10 = uVar6;
      if (*(int *)(param_1 + 0x1530) < *(int *)(param_1 + 0x1534)) {
        *(undefined8 **)(*(long *)(param_1 + 0x1538) + (long)*(int *)(param_1 + 0x1530) * 8) =
             puVar10;
        *(int *)(param_1 + 0x1530) = *(int *)(param_1 + 0x1530) + 1;
      }
    }
    if ((int)uVar18 < *(int *)(param_1 + 0x1e8)) {
      lVar16 = lVar14 + 1;
      do {
        puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x1f0) + lVar14 * 8);
        (**(code **)*puVar10)(puVar10);
        lVar14 = lVar14 + 1;
        *puVar10 = *(undefined8 *)(param_1 + 0x1f8);
        *(undefined8 **)(param_1 + 0x1f8) = puVar10;
      } while (lVar14 < lVar16);
    }
    if ((-1 < (int)uVar18) && (iVar7 = *(int *)(param_1 + 0x1e8), (int)uVar18 < iVar7)) {
      uVar8 = uVar18 + 1;
      uVar9 = iVar7 - uVar8;
      if (uVar9 != 0 && (int)uVar8 <= iVar7) {
        memmove((void *)(*(long *)(param_1 + 0x1f0) + (ulong)uVar18 * 8),
                (void *)(*(long *)(param_1 + 0x1f0) + (ulong)uVar8 * 8),
                -(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar9 << 3);
        iVar7 = *(int *)(param_1 + 0x1e8);
      }
      *(int *)(param_1 + 0x1e8) = iVar7 + -1;
    }
    return *(uint *)puVar1;
  }
  *(uint *)(*(long *)(*(long *)(param_1 + 0x1f0) + lVar14 * 8) + 0xe8) = uVar8;
  puVar1 = PTR_DAT_04bb27c0;
  if ((param_3 & 1) != 0) {
    return uVar8;
  }
  lVar14 = *(long *)PTR_DAT_04bb27c0;
  if (lVar14 == 0) {
    return uVar8;
  }
  plVar17 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) + (ulong)(uVar8 >> 0x14) * 8);
  if (((plVar17 == (long *)0x0) || ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar17 + 0x46) != uVar8)) {
    plVar17 = (long *)0x0;
  }
  if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
    plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar14 = *(long *)puVar1;
    iVar7 = (**(code **)(*plVar12 + 0x60))();
    if (iVar7 < 0x11) {
      uVar18 = 1;
      goto joined_r0x0211da2c;
    }
    if (*(uint *)(lVar14 + 0x5e8) < 5) {
      uVar18 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0211da2c;
    }
  }
  uVar18 = 0;
joined_r0x0211da2c:
  if (plVar17 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar9 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb37d0);
    if ((uVar18 & uVar9) == 1) {
      puVar10 = (undefined8 *)plVar17[0x77];
      if (((*PTR_DAT_04bc2280 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc2280), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bc2278 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc2280);
      }
      if ((puVar10 != (undefined8 *)0x0) &&
         (uVar11 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc2278), (uVar11 & 1) != 0)) {
        puVar10[0x15ab] = puVar10[0x15ab] & 0xffffffffffffffbf;
        *(ushort *)((long)puVar10 + 0xaf64) = *(ushort *)((long)puVar10 + 0xaf64) | 2;
      }
    }
  }
  return uVar8;
}

