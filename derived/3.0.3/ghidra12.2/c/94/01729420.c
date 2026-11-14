
void FUN_01729420(long param_1,uint *param_2)

{
  char *__dest;
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *__src;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined *local_c8;
  char *pcStack_c0;
  undefined *local_b8;
  char *local_b0;
  undefined4 local_a8;
  char local_a4 [6];
  char acStack_9e [2];
  char acStack_9c [6];
  undefined1 local_96;
  undefined1 local_85;
  uint local_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined1 local_71;
  undefined4 local_70;
  undefined4 local_6c;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar4 = PTR_DAT_04bb37d8;
  puVar3 = PTR_DAT_04bb27c0;
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    plVar12 = (long *)0x0;
    uVar13 = 0;
    bVar1 = *PTR_DAT_04bb37d8;
  }
  else {
    uVar7 = *param_2;
    if ((((uVar7 == 0) ||
         (plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                              ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
        ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar7)) {
      plVar12 = (long *)0x0;
    }
    if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
      plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar11 = *(long *)puVar3;
      iVar6 = (**(code **)(*plVar8 + 0x60))();
      if (iVar6 < 0x11) {
        uVar13 = 1;
        uVar7 = 1;
      }
      else {
        if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_01729514;
        uVar13 = 0x101000100 >> (((ulong)*(uint *)(lVar11 + 0x5e8) & 7) << 3);
        uVar7 = (uint)uVar13;
      }
    }
    else {
LAB_01729514:
      uVar13 = 0;
      uVar7 = 0;
    }
    if (plVar12 != (long *)0x0) {
      bVar5 = (int)plVar12[0x2a] == 1;
      uVar2 = *(uint *)(plVar12 + 0x49) >> 4 & 1;
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar13 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
      if ((uVar13 & 1) == 0) {
        uVar7 = 0;
      }
      uVar13 = (ulong)uVar7;
      bVar1 = *puVar4;
      goto joined_r0x0172955c;
    }
    bVar1 = *puVar4;
  }
  bVar5 = false;
  uVar2 = 0;
joined_r0x0172955c:
  if (((bVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  if ((((plVar12 == (long *)0x0) ||
       (uVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0), puVar3 = PTR_DAT_04bb43c0,
       (uVar9 & 1) == 0)) || (!bVar5)) || (((uVar13 & 0xff) == 0 || (uVar2 == 0)))) {
    local_85 = 0;
    local_a8 = 0x20;
    local_a4[0] = s_DeliveryChange_040b5a77[0];
    local_a4[1] = s_DeliveryChange_040b5a77[1];
    local_a4[2] = s_DeliveryChange_040b5a77[2];
    local_a4[3] = s_DeliveryChange_040b5a77[3];
    local_a4[4] = s_DeliveryChange_040b5a77[4];
    local_a4[5] = s_DeliveryChange_040b5a77[5];
    acStack_9e[0] = s_DeliveryChange_040b5a77[6];
    acStack_9e[1] = s_DeliveryChange_040b5a77[7];
    acStack_9c[0] = s_DeliveryChange_040b5a77[8];
    acStack_9c[1] = s_DeliveryChange_040b5a77[9];
    acStack_9c[2] = s_DeliveryChange_040b5a77[10];
    acStack_9c[3] = s_DeliveryChange_040b5a77[0xb];
    acStack_9c[4] = s_DeliveryChange_040b5a77[0xc];
    acStack_9c[5] = s_DeliveryChange_040b5a77[0xd];
    uStack_7c = *param_2;
    local_b0 = local_a4;
    local_96 = 0;
    local_78 = 0;
    local_b8 = PTR_DAT_04bb2028 + 0x10;
    local_80 = 0;
    local_74 = *(undefined2 *)PTR_DAT_04bb37e0;
    local_72 = PTR_DAT_04bb37e0[2];
    local_71 = PTR_DAT_04bb37e0[3];
    local_70 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_6c = 2;
    FUN_01729120(param_1 + 8,&local_b8);
  }
  else {
    uStack_5c = *(undefined4 *)(param_1 + 0x23c);
    local_58 = 0;
    local_68 = PTR_DAT_04bc0510 + 0x10;
    local_60 = *(undefined4 *)(param_1 + 0x238);
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(&local_60);
    if (*(long *)puVar3 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(param_1 + 0x238);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
           (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8), lVar11 != 0)) {
          local_58 = lVar11;
        }
      }
    }
    puVar3 = PTR_DAT_04bb2028;
    local_85 = 0;
    local_96 = 0;
    local_78 = 0;
    local_a8 = 0x20;
    uStack_7c = *param_2;
    local_b0 = local_a4;
    plVar8 = (long *)plVar12[0xc];
    local_80 = 0;
    local_a4[0] = s_DeliveryChange_040b5a77[0];
    local_a4[1] = s_DeliveryChange_040b5a77[1];
    local_a4[2] = s_DeliveryChange_040b5a77[2];
    local_a4[3] = s_DeliveryChange_040b5a77[3];
    local_a4[4] = s_DeliveryChange_040b5a77[4];
    local_a4[5] = s_DeliveryChange_040b5a77[5];
    local_b8 = PTR_DAT_04bb2028 + 0x10;
    acStack_9e[0] = s_DeliveryChange_040b5a77[6];
    acStack_9e[1] = s_DeliveryChange_040b5a77[7];
    acStack_9c[0] = s_DeliveryChange_040b5a77[8];
    acStack_9c[1] = s_DeliveryChange_040b5a77[9];
    acStack_9c[2] = s_DeliveryChange_040b5a77[10];
    acStack_9c[3] = s_DeliveryChange_040b5a77[0xb];
    acStack_9c[4] = s_DeliveryChange_040b5a77[0xc];
    acStack_9c[5] = s_DeliveryChange_040b5a77[0xd];
    local_74 = *(undefined2 *)PTR_DAT_04bb37e0;
    local_72 = PTR_DAT_04bb37e0[2];
    local_71 = PTR_DAT_04bb37e0[3];
    local_70 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_6c = 2;
    if (plVar8 != (long *)0x0) {
      if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37b8);
      }
      uVar13 = (**(code **)(*plVar8 + 0x10))(plVar8,PTR_DAT_04bb37b0);
      if ((uVar13 & 1) != 0) {
        local_c8 = PTR_DAT_04bb2020 + 0x10;
        pcStack_c0 = "DeliveryOption";
        if (local_80 < 2) {
          puVar10 = *(undefined8 **)(PTR_s_Default_04bb66d8 + (ulong)local_80 * 8 + 0x10);
        }
        else {
          puVar10 = &DAT_0407ebb1;
        }
        if (((plVar8[0x227] != 0) && (lVar11 = *(long *)(plVar8[0x227] + 0x78), lVar11 != 0)) &&
           (plVar8 = *(long **)(lVar11 + 0x48), plVar8 != (long *)0x0)) {
          (**(code **)(*plVar8 + 0x20))(plVar8,&local_c8,puVar10);
        }
      }
    }
    iVar6 = FUN_01ae1100(&local_68);
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,iVar6);
    if (iVar6 != 0) {
      FUN_01e5b4b4(plVar12[0x76],param_1 + 0x238);
      local_78 = 3;
    }
    if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
      plVar12 = *(long **)(param_1 + 0x18);
      if (plVar12 != (long *)0x0) {
        *(long *)(param_1 + 0x18) = *plVar12;
      }
      __dest = (char *)((long)plVar12 + 0x14);
      *(undefined4 *)(plVar12 + 2) = 0x20;
      puVar4 = PTR_DAT_04bb2a08;
      *(undefined1 *)((long)plVar12 + 0x33) = 0;
      *plVar12 = (long)(puVar4 + 0x10);
      plVar12[1] = (long)__dest;
      (**(code **)(local_b8 + 0x18))(&local_b8);
      __src = local_b0;
      if (__dest != local_b0) {
        (**(code **)(local_b8 + 0x18))(&local_b8);
        lVar11 = 0;
        do {
          if (local_b0[lVar11] == '\0') goto LAB_017298f0;
          if (local_b0[lVar11 + 1] == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_017298f0;
          }
          if (local_b0[lVar11 + 2] == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_017298f0;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_017298f0:
        iVar6 = (int)lVar11;
        if ((int)plVar12[2] <= (int)lVar11) {
          iVar6 = (int)plVar12[2] + -1;
        }
        memcpy(__dest,__src,(long)iVar6);
        __dest[iVar6] = '\0';
      }
      *plVar12 = (long)(puVar3 + 0x10);
      *(undefined4 *)(plVar12 + 8) = local_78;
      plVar12[7] = CONCAT44(uStack_7c,local_80);
      *(undefined2 *)((long)plVar12 + 0x44) = local_74;
      *(undefined1 *)((long)plVar12 + 0x46) = local_72;
      *(undefined1 *)((long)plVar12 + 0x47) = local_71;
      *(undefined4 *)(plVar12 + 9) = local_70;
      *(undefined4 *)((long)plVar12 + 0x4c) = local_6c;
      if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
        *(long **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = plVar12;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
    }
  }
  return;
}

