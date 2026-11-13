
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_013bbef4(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  
  iVar3 = *(int *)(param_4 + 0x27c);
  *(int *)(param_4 + 0x284) = iVar3;
  puVar2 = PTR_DAT_04bb27c0;
  if (iVar3 != -1) {
    lVar9 = *(long *)PTR_DAT_04bb27c0;
    if (lVar9 != 0) {
      uVar4 = *(uint *)PTR_DAT_04bbc940;
      if ((((uVar4 == 0) ||
           (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                                ((ulong)(uVar4 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
          ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar4)) {
        plVar10 = (long *)0x0;
      }
      if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
        plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar9 = *(long *)puVar2;
        iVar3 = (**(code **)(*plVar5 + 0x60))();
        if (iVar3 < 0x11) {
          uVar4 = 1;
        }
        else {
          if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_013bbfc8;
          uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_013bbfc8:
        uVar4 = 0;
      }
      if (plVar10 != (long *)0x0) {
        lVar9 = plVar10[0x2a];
        if (((*PTR_DAT_04bbc928 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbc928), iVar3 != 0)) {
          *(undefined **)PTR_DAT_04bbc920 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbc928);
        }
        uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bbc920);
        uVar1 = 0;
        if ((int)lVar9 == 1) {
          uVar1 = uVar4;
        }
        if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
          uVar4 = *(uint *)(param_4 + 0x278);
          uVar6 = (ulong)uVar4;
          plVar5 = plVar10 + 699;
          puVar7 = (undefined8 *)PTR_DAT_04bb2150;
          if (((int)plVar10[0x2d0] != 0) &&
             ((-1 < (int)uVar4 && ((int)uVar4 < (int)plVar10[0x2d0])))) {
            if (uVar4 < *(uint *)(plVar10 + 0x2cc)) {
              lVar9 = *(long *)(plVar10[0x2cd] + uVar6 * 8);
              if (*(int *)(lVar9 + 0x1f8) != 0) goto LAB_013bc0a4;
            }
            else if (_DAT_000001f8 != 0) {
              lVar9 = 0;
LAB_013bc0a4:
              puVar7 = (undefined8 *)(**(code **)(*(long *)(lVar9 + 0x118) + 0xf0))(lVar9 + 0x118);
              uVar6 = (ulong)*(uint *)(param_4 + 0x278);
            }
          }
          uVar12 = *(undefined4 *)(puVar7 + 1);
          *(undefined8 *)(param_4 + 0x2e0) = *puVar7;
          *(undefined4 *)(param_4 + 0x2e8) = uVar12;
          if (*(int *)(param_4 + 0x284) != -1) {
            fVar13 = 0.0;
            if (((((int)plVar10[0x2d0] == 0) || (uVar4 = (uint)uVar6, (int)uVar4 < 0)) ||
                ((int)plVar10[0x2d0] <= (int)uVar4)) || (*(uint *)(plVar10 + 0x2cc) <= uVar4)) {
              param_2 = 0.0;
              param_3 = 0.0;
            }
            else {
              param_2 = 0.0;
              param_3 = 0.0;
              if (*(int *)(*(long *)(plVar10[0x2cd] + uVar6 * 8) + 0x1f8) != 0) {
                param_2 = 0.0;
                param_3 = 0.0;
                fVar13 = (float)FUN_013dd230();
                uVar6 = (ulong)*(uint *)(param_4 + 0x278);
              }
            }
            param_2 = param_2 + *(float *)(param_4 + 0x2a4);
            *(float *)(param_4 + 0x288) = fVar13 + *(float *)(param_4 + 0x2a0);
            *(float *)(param_4 + 0x28c) = param_2;
            *(float *)(param_4 + 0x290) = param_3 + *(float *)(param_4 + 0x2a8);
          }
          lVar9 = param_4 + 700;
          uVar6 = FUN_013dcfe8(plVar5,lVar9,uVar6,*(undefined4 *)(param_4 + 0x27c));
          uVar11 = uVar6 & 0xffffffff;
          iVar3 = *(int *)(param_4 + 0x280);
          if ((*(int *)(param_4 + 0x27c) != iVar3) && (iVar3 != -1)) {
            uVar4 = *(uint *)(param_4 + 0x278);
            uVar6 = (ulong)uVar4;
            fVar13 = 0.0;
            if (((((int)plVar10[0x2d0] == 0) ||
                 (((int)uVar4 < 0 || ((int)plVar10[0x2d0] <= (int)uVar4)))) ||
                (*(uint *)(plVar10 + 0x2cc) <= uVar4)) ||
               (lVar8 = *(long *)(plVar10[0x2cd] + uVar6 * 8), *(int *)(lVar8 + 0x1f8) == 0)) {
              param_2 = 0.0;
              param_3 = 0.0;
            }
            else {
              fVar13 = (float)FUN_013dd230(lVar8,iVar3);
              iVar3 = *(int *)(param_4 + 0x280);
              uVar6 = (ulong)*(uint *)(param_4 + 0x278);
            }
            *(int *)(param_4 + 0x27c) = iVar3;
            param_2 = param_2 + *(float *)(param_4 + 0x2b0);
            *(float *)(param_4 + 0x2a0) = *(float *)(param_4 + 0x2ac);
            *(float *)(param_4 + 0x2a4) = *(float *)(param_4 + 0x2b0);
            *(float *)(param_4 + 0x2a8) = *(float *)(param_4 + 0x2b4);
            *(float *)(param_4 + 0x294) = fVar13 + *(float *)(param_4 + 0x2ac);
            *(float *)(param_4 + 0x298) = param_2;
            *(float *)(param_4 + 0x29c) = param_3 + *(float *)(param_4 + 0x2b4);
            uVar6 = FUN_013dcfe8(plVar5,lVar9,uVar6);
            uVar11 = 0;
LAB_013bc43c:
            *(undefined4 *)(param_4 + 0x2b8) = *(undefined4 *)(param_4 + 0x2d4);
            if ((uVar6 & 0xff) == 0) {
              return 0;
            }
            uVar4 = nn::os::GetSystemTick();
            uVar1 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
            uVar4 = uVar1 ^ uVar1 * 0x800;
            uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
            uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
            uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
            iVar3 = (int)((uVar6 & 0xff) * (ulong)(uVar4 >> 8 ^ uVar1 >> 0x13 ^ uVar4 ^ uVar1) >>
                         0x20);
            if (iVar3 == 2) {
              uVar12 = *(undefined4 *)(param_4 + 0x2d0);
              if ((int)plVar10[0x2d0] != 0) {
                uVar4 = *(uint *)(param_4 + 0x278);
                if (((-1 < (int)uVar4) && ((int)uVar4 < (int)plVar10[0x2d0])) &&
                   ((uVar4 < *(uint *)(plVar10 + 0x2cc) &&
                    (lVar9 = *(long *)(plVar10[0x2cd] + (ulong)uVar4 * 8),
                    *(int *)(lVar9 + 0x1f8) != 0)))) {
                  uVar14 = FUN_013dd230(lVar9,uVar12);
                  uVar12 = *(undefined4 *)(param_4 + 0x2d0);
                  goto LAB_013bc5bc;
                }
              }
            }
            else if (iVar3 == 1) {
              uVar12 = *(undefined4 *)(param_4 + 0x2cc);
              if ((int)plVar10[0x2d0] != 0) {
                uVar4 = *(uint *)(param_4 + 0x278);
                if ((((-1 < (int)uVar4) && ((int)uVar4 < (int)plVar10[0x2d0])) &&
                    (uVar4 < *(uint *)(plVar10 + 0x2cc))) &&
                   (lVar9 = *(long *)(plVar10[0x2cd] + (ulong)uVar4 * 8),
                   *(int *)(lVar9 + 0x1f8) != 0)) {
                  uVar14 = FUN_013dd230(lVar9,uVar12);
                  uVar12 = *(undefined4 *)(param_4 + 0x2cc);
                  goto LAB_013bc5bc;
                }
              }
            }
            else {
              if (iVar3 != 0) goto LAB_013bc510;
              uVar12 = *(undefined4 *)(param_4 + 0x2c8);
              if ((int)plVar10[0x2d0] != 0) {
                uVar4 = *(uint *)(param_4 + 0x278);
                if (((-1 < (int)uVar4) && ((int)uVar4 < (int)plVar10[0x2d0])) &&
                   ((uVar4 < *(uint *)(plVar10 + 0x2cc) &&
                    (lVar9 = *(long *)(plVar10[0x2cd] + (ulong)uVar4 * 8),
                    *(int *)(lVar9 + 0x1f8) != 0)))) {
                  uVar14 = FUN_013dd230(lVar9,uVar12);
                  uVar12 = *(undefined4 *)(param_4 + 0x2c8);
                  goto LAB_013bc5bc;
                }
              }
            }
            uVar14 = 0;
            param_2 = 0.0;
            param_3 = 0.0;
LAB_013bc5bc:
            *(undefined4 *)(param_4 + 700) = uVar14;
            *(float *)(param_4 + 0x2c0) = param_2;
            *(float *)(param_4 + 0x2c4) = param_3;
            *(undefined4 *)(param_4 + 0x280) = uVar12;
            fVar13 = (float)FUN_013dd3a4(plVar5,*(undefined4 *)(param_4 + 0x278));
            *(float *)(param_4 + 0x2ac) = fVar13;
            *(float *)(param_4 + 0x2b0) = param_2;
            *(float *)(param_4 + 0x2b4) = param_3;
            *(float *)(param_4 + 700) = fVar13 + *(float *)(param_4 + 700);
            *(float *)(param_4 + 0x2c0) = param_2 + *(float *)(param_4 + 0x2c0);
            *(float *)(param_4 + 0x2c4) = param_3 + *(float *)(param_4 + 0x2c4);
            return uVar6 & 0xffffffff;
          }
          if ((uVar6 & 0xff) == 0) {
            *(undefined4 *)(param_4 + 0x2b8) = *(undefined4 *)(param_4 + 0x2d4);
            return 0;
          }
          uVar4 = nn::os::GetSystemTick();
          uVar1 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
          uVar4 = uVar1 ^ uVar1 * 0x800;
          uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
          uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
          uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
          iVar3 = (int)((uVar6 & 0xff) * (ulong)(uVar4 >> 8 ^ uVar1 >> 0x13 ^ uVar4 ^ uVar1) >> 0x20
                       );
          if (iVar3 == 2) {
            uVar4 = *(uint *)(param_4 + 0x278);
            uVar6 = (ulong)uVar4;
            uVar14 = 0;
            uVar12 = *(undefined4 *)(param_4 + 0x2d0);
            if (((((int)plVar10[0x2d0] == 0) || ((int)uVar4 < 0)) ||
                ((int)plVar10[0x2d0] <= (int)uVar4)) ||
               ((*(uint *)(plVar10 + 0x2cc) <= uVar4 ||
                (lVar8 = *(long *)(plVar10[0x2cd] + uVar6 * 8), *(int *)(lVar8 + 0x1f8) == 0)))) {
              param_2 = 0.0;
              param_3 = 0.0;
            }
            else {
              uVar14 = FUN_013dd230(lVar8,uVar12);
              uVar12 = *(undefined4 *)(param_4 + 0x2d0);
              uVar6 = (ulong)*(uint *)(param_4 + 0x278);
            }
            *(undefined4 *)(param_4 + 0x294) = uVar14;
            *(float *)(param_4 + 0x298) = param_2;
            *(float *)(param_4 + 0x29c) = param_3;
            *(undefined4 *)(param_4 + 0x27c) = uVar12;
            uVar14 = FUN_013dd3a4(plVar5,uVar6);
            uVar12 = *(undefined4 *)(param_4 + 0x278);
            *(undefined4 *)(param_4 + 0x2a0) = uVar14;
            *(float *)(param_4 + 0x2a4) = param_2;
            uVar14 = *(undefined4 *)(param_4 + 0x2d0);
LAB_013bc428:
            *(float *)(param_4 + 0x2a8) = param_3;
            uVar6 = FUN_013dcfe8(plVar5,lVar9,uVar12,uVar14);
            goto LAB_013bc43c;
          }
          if (iVar3 == 1) {
            uVar4 = *(uint *)(param_4 + 0x278);
            uVar6 = (ulong)uVar4;
            uVar14 = 0;
            uVar12 = *(undefined4 *)(param_4 + 0x2cc);
            if ((((int)plVar10[0x2d0] == 0) || ((int)uVar4 < 0)) ||
               (((int)plVar10[0x2d0] <= (int)uVar4 ||
                ((*(uint *)(plVar10 + 0x2cc) <= uVar4 ||
                 (lVar8 = *(long *)(plVar10[0x2cd] + uVar6 * 8), *(int *)(lVar8 + 0x1f8) == 0))))))
            {
              param_2 = 0.0;
              param_3 = 0.0;
            }
            else {
              uVar14 = FUN_013dd230(lVar8,uVar12);
              uVar12 = *(undefined4 *)(param_4 + 0x2cc);
              uVar6 = (ulong)*(uint *)(param_4 + 0x278);
            }
            *(undefined4 *)(param_4 + 0x294) = uVar14;
            *(float *)(param_4 + 0x298) = param_2;
            *(float *)(param_4 + 0x29c) = param_3;
            *(undefined4 *)(param_4 + 0x27c) = uVar12;
            uVar14 = FUN_013dd3a4(plVar5,uVar6);
            uVar12 = *(undefined4 *)(param_4 + 0x278);
            *(undefined4 *)(param_4 + 0x2a0) = uVar14;
            *(float *)(param_4 + 0x2a4) = param_2;
            uVar14 = *(undefined4 *)(param_4 + 0x2cc);
            goto LAB_013bc428;
          }
          if (iVar3 == 0) {
            uVar4 = *(uint *)(param_4 + 0x278);
            uVar6 = (ulong)uVar4;
            uVar14 = 0;
            uVar12 = *(undefined4 *)(param_4 + 0x2c8);
            if (((((int)plVar10[0x2d0] == 0) || ((int)uVar4 < 0)) ||
                ((int)plVar10[0x2d0] <= (int)uVar4)) ||
               ((*(uint *)(plVar10 + 0x2cc) <= uVar4 ||
                (lVar8 = *(long *)(plVar10[0x2cd] + uVar6 * 8), *(int *)(lVar8 + 0x1f8) == 0)))) {
              param_2 = 0.0;
              param_3 = 0.0;
            }
            else {
              uVar14 = FUN_013dd230(lVar8,uVar12);
              uVar12 = *(undefined4 *)(param_4 + 0x2c8);
              uVar6 = (ulong)*(uint *)(param_4 + 0x278);
            }
            *(undefined4 *)(param_4 + 0x294) = uVar14;
            *(float *)(param_4 + 0x298) = param_2;
            *(float *)(param_4 + 0x29c) = param_3;
            *(undefined4 *)(param_4 + 0x27c) = uVar12;
            uVar14 = FUN_013dd3a4(plVar5,uVar6);
            uVar12 = *(undefined4 *)(param_4 + 0x278);
            *(undefined4 *)(param_4 + 0x2a0) = uVar14;
            *(float *)(param_4 + 0x2a4) = param_2;
            uVar14 = *(undefined4 *)(param_4 + 0x2c8);
            goto LAB_013bc428;
          }
LAB_013bc510:
          iVar3 = -1;
          goto LAB_013bc06c;
        }
      }
    }
    iVar3 = -1;
  }
  uVar11 = 0;
LAB_013bc06c:
  *(int *)(param_4 + 0x280) = iVar3;
  return uVar11;
}

