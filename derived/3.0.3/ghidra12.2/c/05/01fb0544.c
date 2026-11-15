
uint FUN_01fb0544(long *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  short *psVar14;
  uint uVar15;
  undefined8 local_a8;
  undefined8 **ppuStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 auStack_80 [8];
  undefined8 *local_78 [2];
  char local_68;
  undefined1 auStack_60 [4];
  char local_5c;
  undefined1 auStack_58 [4];
  char local_54;
  undefined1 auStack_50 [16];
  
  puVar5 = PTR_DAT_04bb27c0;
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 != 0) {
    uVar15 = *(uint *)PTR_DAT_04bb32f8;
    if ((((uVar15 == 0) ||
         (plVar13 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                              ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
        ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar15)) {
      plVar13 = (long *)0x0;
    }
    if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
      plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar12 = *(long *)puVar5;
      iVar6 = (**(code **)(*plVar8 + 0x60))();
      if (iVar6 < 0x11) {
        uVar15 = 1;
      }
      else {
        if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_01fb060c;
        uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_01fb060c:
      uVar15 = 0;
    }
    if (plVar13 != (long *)0x0) {
      lVar12 = plVar13[0x2a];
      if (((*PTR_DAT_04bb3280 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3280);
      }
      uVar9 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb3278);
      uVar7 = 0;
      uVar4 = 0;
      if ((int)lVar12 == 1) {
        uVar4 = uVar15;
      }
      if (((uVar9 & 1) == 0) || (uVar4 == 0)) goto LAB_01fb0784;
      FUN_008fbfa0(auStack_80,plVar13);
      local_a8._0_4_ = 8;
      *(ushort *)(param_1 + 0x15a5) = *(ushort *)(param_1 + 0x15a5) & 0xfeff;
      puVar5 = PTR_DAT_04bb2720;
      if ((*(long *)PTR_DAT_04bb5ce0 == 0) ||
         ((lVar12 = *(long *)PTR_DAT_04bb2720, lVar12 == 0 || (*(long *)(lVar12 + 0x330) == 0)))) {
LAB_01fb0704:
        psVar14 = (short *)((long)param_1 + 0xae84);
        if (*psVar14 == -2) {
          FUN_021e67f0(&local_a8,param_1[1] + 0x3e0);
          *(undefined4 *)psVar14 = (undefined4)local_a8;
          *(undefined4 *)(param_1 + 0x15d1) = local_a8._4_4_;
        }
        bVar3 = *(byte *)((long)param_1 + 0xad54) >> 1 & 1;
        bVar1 = 0;
        if (*(int *)((long)param_1 + 0xad44) == 1) {
          bVar1 = bVar3;
        }
        bVar2 = 0;
        if (*(int *)((long)param_1 + 0xad44) == 0) {
          bVar2 = bVar3;
        }
        if ((bVar1 == 0) && (bVar2 == 0)) {
          iVar6 = (**(code **)(*param_1 + 0x610))(param_1);
          if (iVar6 == 1) {
LAB_01fb0844:
            uVar11 = 1;
            goto LAB_01fb0858;
          }
          goto LAB_01fb076c;
        }
        iVar6 = *(int *)((long)param_1 + 0xad44);
        bVar3 = *(byte *)((long)param_1 + 0xad54) & 0xf9;
        bVar2 = bVar3 | 4;
        if (iVar6 < 1) {
          bVar2 = bVar3;
        }
        bVar3 = bVar2 | 8;
        if (iVar6 != 2) {
          bVar3 = bVar2 & 0xf7;
        }
        if ((bVar2 & 1) != 0) {
          bVar2 = bVar3;
        }
        bVar3 = bVar2 | 0x10;
        if (iVar6 != 0) {
          bVar3 = bVar2;
        }
        *(byte *)((long)param_1 + 0xad54) = bVar3;
        iVar6 = (**(code **)(*param_1 + 0x610))(param_1);
        bVar1 = bVar1 ^ 1;
        if (iVar6 != 1) {
          bVar1 = 1;
        }
        if (bVar1 != 0) {
          uVar11 = 0;
          psVar14 = (short *)PTR_DAT_04bb37e0;
LAB_01fb0858:
          FUN_01ea3608(param_1,uVar11);
          goto LAB_01fb0860;
        }
        plVar13 = *(long **)(param_1[1] + 0x60);
        if (plVar13 == (long *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(&DAT_052461c0);
            plVar13 = &DAT_05240280;
            if (iVar6 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            plVar13 = &DAT_05240280;
          }
        }
        (**(code **)(*plVar13 + 0x370))(&local_a8,plVar13);
        uVar9 = FUN_0277d7b4(&local_a8,psVar14);
        if ((uVar9 & 1) == 0) goto LAB_01fb0844;
      }
      else {
        puVar10 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
        iVar6 = FUN_006bd550(*puVar10,0);
        if ((iVar6 != 0x758f7eaf) ||
           (((*(long *)puVar5 == 0 || (lVar12 = *(long *)(*(long *)puVar5 + 0x330), lVar12 == 0)) ||
            (*(int *)(lVar12 + 0x244) == 0)))) goto LAB_01fb0704;
LAB_01fb076c:
        psVar14 = (short *)PTR_DAT_04bb37e0;
LAB_01fb0860:
        FUN_01e57c78(param_1[2],psVar14,0,1);
      }
      local_a8 = auStack_80;
      local_98 = auStack_60;
      puStack_90 = auStack_58;
      local_88 = auStack_50;
      ppuStack_a0 = local_78;
      uVar7 = (**(code **)(*param_1 + 0x588))(param_1,&local_a8);
      if (local_54 != '\0') {
        local_54 = '\0';
      }
      if (local_5c != '\0') {
        local_5c = '\0';
      }
      if (local_68 != '\0') {
        (*(code *)*local_78[0])(local_78);
      }
      goto LAB_01fb0784;
    }
  }
  uVar7 = 0;
LAB_01fb0784:
  return uVar7 & 1;
}

