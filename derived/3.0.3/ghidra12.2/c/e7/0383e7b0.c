
void FUN_0383e7b0(char *param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *__src;
  long lVar15;
  long *plVar16;
  undefined *local_c8;
  undefined1 *puStack_c0;
  undefined *local_b8;
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (uVar5 = *(uint *)(*(long *)(param_1 + 0x18) + 0x18), 0 < (int)uVar5)) {
    uVar14 = 0;
    puVar1 = PTR_DAT_04bb2bc0 + 0x10;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    puVar3 = PTR_DAT_04bcadc0 + 0x10;
    do {
      if (uVar14 < *(uint *)(*(long *)(param_1 + 0x18) + 0x18)) {
        plVar16 = *(long **)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + uVar14 * 8);
      }
      else {
        plVar16 = (long *)0x0;
      }
      local_a8 = 0x40;
      local_65 = 0;
      local_a4[0] = 0;
      local_b8 = puVar1;
      local_b0 = local_a4;
      uVar8 = (**(code **)(*plVar16 + 0x28))(plVar16,&local_b8);
      uVar9 = (**(code **)(*plVar16 + 0x38))(plVar16);
      puVar7 = local_b0;
      uVar6 = *(uint *)((long)plVar16 + 0xc);
      if ((uVar8 & 1) == 0) {
        if (((param_2 | param_3) & 1) != 0) {
          uVar13 = uVar14;
          if (*(uint *)(*(long *)(param_1 + 0x18) + 0x38) <= uVar14) {
            uVar13 = 0;
          }
          plVar11 = (long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x40) + uVar13 * 0x58);
          (**(code **)(*plVar11 + 0x18))(plVar11);
          __src = (undefined1 *)plVar11[1];
          if (puVar7 != __src) {
            (**(code **)(*plVar11 + 0x18))(plVar11);
            lVar15 = 0;
            do {
              if (*(char *)(plVar11[1] + lVar15) == '\0') goto LAB_0383e9a4;
              lVar12 = plVar11[1] + lVar15;
              if (*(char *)(lVar12 + 1) == '\0') {
                lVar15 = lVar15 + 1;
                goto LAB_0383e9a4;
              }
              if (*(char *)(lVar12 + 2) == '\0') {
                lVar15 = lVar15 + 2;
                goto LAB_0383e9a4;
              }
              lVar15 = lVar15 + 3;
            } while (lVar15 != 0x80001);
            lVar15 = 0;
LAB_0383e9a4:
            iVar10 = (int)lVar15;
            if (local_a8 <= (int)lVar15) {
              iVar10 = local_a8 + -1;
            }
            memcpy(puVar7,__src,(long)iVar10);
            puVar7[iVar10] = 0;
          }
        }
        if ((param_2 & 1) != 0) goto LAB_0383e9d8;
        lVar15 = *(long *)(param_1 + 0x10);
        if (((lVar15 != 0) && (param_1[1] != '\0')) &&
           (lVar12 = (**(code **)(**(long **)(*(long *)(lVar15 + 0x30) + 0x18) + 0x20))(),
           *(char *)(lVar12 + 0x78) != '\0')) {
          if (*(char *)(lVar12 + 0x79) == '\0') {
            plVar11 = (long *)(lVar15 + 0x88) + *(uint *)(lVar15 + 0x80);
            if (1 < *(uint *)(lVar15 + 0x80)) {
              plVar11 = (long *)(lVar15 + 0x88);
            }
            lVar12 = *plVar11;
            if ((lVar12 != 0) && (*(long *)(lVar12 + 0x38) != 0)) {
              uVar4 = uVar6;
              if (*(uint *)(lVar12 + 0x30) <= uVar6) {
                uVar4 = 0;
              }
              if (*(long *)(*(long *)(lVar12 + 0x38) + (long)(int)uVar4 * 8) != 0)
              goto LAB_0383ea74;
            }
          }
          else {
LAB_0383ea74:
            if ((-1 < (int)uVar6) && ((int)uVar6 < (int)*(short *)(*(long *)(lVar15 + 0x30) + 0x46))
               ) {
              plVar11 = (long *)(lVar15 + 0x88) + *(uint *)(lVar15 + 0x80);
              if (1 < *(uint *)(lVar15 + 0x80)) {
                plVar11 = (long *)(lVar15 + 0x88);
              }
              lVar15 = *plVar11;
              if ((lVar15 != 0) && (*(long *)(lVar15 + 0x38) != 0)) {
                uVar4 = uVar6;
                if (*(uint *)(lVar15 + 0x30) <= uVar6) {
                  uVar4 = 0;
                }
                lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + (ulong)uVar4 * 8);
                if (lVar15 != 0) {
                  *(undefined4 *)(lVar15 + 0x24) = uVar9;
                }
              }
            }
          }
        }
      }
      else {
        puStack_c0 = local_b0;
        uVar13 = uVar14;
        if (*(uint *)(*(long *)(param_1 + 0x18) + 0x38) <= uVar14) {
          uVar13 = 0;
        }
        plVar11 = (long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x40) + uVar13 * 0x58);
        local_c8 = puVar2;
        (**(code **)(*plVar11 + 0x10))(plVar11,&local_c8);
LAB_0383e9d8:
        lVar15 = *(long *)(param_1 + 0x10);
        if ((lVar15 != 0) && (param_1[1] != '\0')) {
          (**(code **)(local_b8 + 0x18))(&local_b8);
          puVar7 = local_b0;
          lVar12 = (**(code **)(**(long **)(*(long *)(lVar15 + 0x30) + 0x18) + 0x20))();
          if (*(char *)(lVar12 + 0x78) != '\0') {
            if (*(char *)(lVar12 + 0x79) == '\0') {
              plVar11 = (long *)(lVar15 + 0x88) + *(uint *)(lVar15 + 0x80);
              if (1 < *(uint *)(lVar15 + 0x80)) {
                plVar11 = (long *)(lVar15 + 0x88);
              }
              lVar12 = *plVar11;
              if ((lVar12 != 0) && (*(long *)(lVar12 + 0x38) != 0)) {
                uVar4 = uVar6;
                if (*(uint *)(lVar12 + 0x30) <= uVar6) {
                  uVar4 = 0;
                }
                if (*(long *)(*(long *)(lVar12 + 0x38) + (long)(int)uVar4 * 8) != 0)
                goto LAB_0383ea20;
              }
            }
            else {
LAB_0383ea20:
              FUN_03bf2214(lVar15 + 0x80,puVar7,uVar9,uVar6);
            }
          }
        }
      }
      lVar15 = *(long *)(param_1 + 8);
      if (((uVar8 | param_3) & 1) == 0) {
        if ((lVar15 != 0 && *param_1 != '\0') &&
           (lVar12 = (**(code **)(**(long **)(*(long *)(lVar15 + 0x30) + 0x18) + 0x20))(),
           *(char *)(lVar12 + 0x78) != '\0')) {
          if (*(char *)(lVar12 + 0x79) == '\0') {
            plVar11 = (long *)(lVar15 + 0x88) + *(uint *)(lVar15 + 0x80);
            if (1 < *(uint *)(lVar15 + 0x80)) {
              plVar11 = (long *)(lVar15 + 0x88);
            }
            lVar12 = *plVar11;
            if ((lVar12 != 0) && (*(long *)(lVar12 + 0x38) != 0)) {
              uVar8 = uVar6;
              if (*(uint *)(lVar12 + 0x30) <= uVar6) {
                uVar8 = 0;
              }
              if (*(long *)(*(long *)(lVar12 + 0x38) + (long)(int)uVar8 * 8) != 0)
              goto LAB_0383ebd8;
            }
          }
          else {
LAB_0383ebd8:
            if ((-1 < (int)uVar6) && ((int)uVar6 < (int)*(short *)(*(long *)(lVar15 + 0x30) + 0x46))
               ) {
              plVar11 = (long *)(lVar15 + 0x88) + *(uint *)(lVar15 + 0x80);
              if (1 < *(uint *)(lVar15 + 0x80)) {
                plVar11 = (long *)(lVar15 + 0x88);
              }
              lVar15 = *plVar11;
              if ((lVar15 != 0) && (*(long *)(lVar15 + 0x38) != 0)) {
                if (*(uint *)(lVar15 + 0x30) <= uVar6) {
                  uVar6 = 0;
                }
                lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + (ulong)uVar6 * 8);
                if (lVar15 != 0) {
                  *(undefined4 *)(lVar15 + 0x24) = uVar9;
                }
              }
            }
          }
        }
      }
      else if (lVar15 != 0 && *param_1 != '\0') {
        (**(code **)(local_b8 + 0x18))(&local_b8);
        puVar7 = local_b0;
        lVar12 = (**(code **)(**(long **)(*(long *)(lVar15 + 0x30) + 0x18) + 0x20))();
        if (*(char *)(lVar12 + 0x78) != '\0') {
          if (*(char *)(lVar12 + 0x79) == '\0') {
            plVar11 = (long *)(lVar15 + 0x88) + *(uint *)(lVar15 + 0x80);
            if (1 < *(uint *)(lVar15 + 0x80)) {
              plVar11 = (long *)(lVar15 + 0x88);
            }
            lVar12 = *plVar11;
            if ((lVar12 != 0) && (*(long *)(lVar12 + 0x38) != 0)) {
              uVar8 = uVar6;
              if (*(uint *)(lVar12 + 0x30) <= uVar6) {
                uVar8 = 0;
              }
              if (*(long *)(*(long *)(lVar12 + 0x38) + (long)(int)uVar8 * 8) != 0)
              goto LAB_0383eb98;
            }
          }
          else {
LAB_0383eb98:
            FUN_03bf2214(lVar15 + 0x80,puVar7,uVar9,uVar6);
          }
        }
      }
      if (((*PTR_DAT_04bcadb8 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04bcadb8), iVar10 != 0)) {
        *(undefined **)PTR_DAT_04bcadb0 = puVar3;
        __cxa_guard_release(PTR_DAT_04bcadb8);
      }
      uVar13 = (**(code **)*plVar16)(plVar16,PTR_DAT_04bcadb0);
      if ((uVar13 & 1) != 0) {
        *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar5);
  }
  return;
}

