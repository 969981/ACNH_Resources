
/* WARNING: Removing unreachable block (ram,0x0270263c) */

undefined8 FUN_02701c80(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined2 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  void *pvVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  size_t __n;
  undefined4 local_64;
  
  lVar5 = DAT_04cce818;
  if ((*(long *)(param_1 + 0x4c0) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 0x180) == 0)) {
    if (DAT_04cce818 != 0) {
      local_64 = 1;
      plVar7 = (long *)FUN_00818af8(DAT_04cce818,&local_64,0x100000,0);
      plVar11 = (long *)PTR_DAT_04bb2698;
      if (plVar7 == (long *)0x0) {
        return 0;
      }
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        puVar8 = malloc(0x300);
      }
      else {
        puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x300,8);
      }
      *(undefined8 *)((long)puVar8 + 6) = 0;
      *puVar8 = 0;
      *(undefined2 *)((long)puVar8 + 0xe) = 0xffff;
      puVar8[8] = 0;
      *(undefined8 *)((long)puVar8 + 0x46) = 0;
      *(undefined2 *)((long)puVar8 + 0x4e) = 0xffff;
      memset(puVar8 + 0x20,0,0x200);
      uVar14 = 0;
      do {
        uVar2 = uVar14 << 2;
        uVar3 = uVar14 >> 0x1f;
        uVar17 = (int)uVar14 + 1;
        uVar14 = (ulong)uVar17;
        *(undefined4 *)((long)(puVar8 + 0x20) + (-uVar3 & 0xfffffffc00000000 | uVar2)) = 0;
      } while (uVar17 != 0x80);
      lVar15 = *plVar11;
      *(undefined8 **)(param_1 + 0x4c0) = puVar8;
      if (lVar15 == 0) {
        plVar7 = malloc(0x40);
      }
      else {
        plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x40,8);
      }
      plVar13 = plVar7 + 1;
      *plVar13 = 0;
      *plVar7 = (long)&PTR_LAB_04a8b788;
      plVar7[2] = 0;
      plVar7[3] = 0;
      plVar7[4] = 0;
      plVar7[5] = 0;
      plVar7[6] = 0;
      plVar7[7] = 0;
      plVar9 = *(long **)(param_1 + 8);
      if (plVar9 == (long *)0x0) {
LAB_02702434:
        puVar8 = *(undefined8 **)(param_1 + 0x4c0);
      }
      else {
        lVar15 = *plVar11;
        *plVar13 = (long)plVar9;
        if (lVar15 == 0) {
          puVar8 = malloc(0x74080);
        }
        else {
          puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,0x74080,0x10);
        }
        *(undefined8 *)((long)puVar8 + 6) = 0;
        *puVar8 = 0;
        *(undefined2 *)((long)puVar8 + 0xe) = 0xffff;
        puVar8[8] = 0;
        *(undefined8 *)((long)puVar8 + 0x46) = 0;
        *(undefined2 *)((long)puVar8 + 0x4e) = 0xffff;
        *(undefined4 *)(puVar8 + 0x20) = 0;
        FUN_027f3760(puVar8 + 0x22);
        FUN_02785660(puVar8 + 0x5167);
        puVar8[0xe7f3] = 0xffffffffffffffff;
        puVar8[0xe7f4] = 0xffffffffffffffff;
        puVar8[0xe7f1] = 0xffffffffffffffff;
        puVar8[0xe7f2] = 0xffffffffffffffff;
        puVar8[0xe7dc] = 0xffffffffffffffff;
        puVar8[0xe7ef] = 0xffffffffffffffff;
        puVar8[0xe7f0] = 0xffffffffffffffff;
        puVar8[0xe7ed] = 0xffffffffffffffff;
        puVar8[0xe7ee] = 0xffffffffffffffff;
        puVar8[0xe7eb] = 0xffffffffffffffff;
        puVar8[0xe7ec] = 0xffffffffffffffff;
        puVar8[0xe7e9] = 0xffffffffffffffff;
        puVar8[0xe7ea] = 0xffffffffffffffff;
        puVar8[0xe7e7] = 0xffffffffffffffff;
        puVar8[0xe7e8] = 0xffffffffffffffff;
        puVar8[0xe7e5] = 0xffffffffffffffff;
        puVar8[0xe7e6] = 0xffffffffffffffff;
        puVar8[0xe7e3] = 0xffffffffffffffff;
        puVar8[0xe7e4] = 0xffffffffffffffff;
        puVar8[0xe7e1] = 0xffffffffffffffff;
        puVar8[0xe7e2] = 0xffffffffffffffff;
        puVar8[0xe7df] = 0xffffffffffffffff;
        puVar8[0xe7e0] = 0xffffffffffffffff;
        puVar8[0xe7dd] = 0xffffffffffffffff;
        puVar8[0xe7de] = 0xffffffffffffffff;
        FUN_027c1184(puVar8 + 0xe7f5);
        *(undefined4 *)((long)puVar8 + 0x74072) = 0;
        *(undefined4 *)(puVar8 + 0xe80f) = 0;
        *(undefined1 *)(puVar8 + 0xe80e) = 0xff;
        lVar15 = *plVar11;
        plVar7[2] = (long)puVar8;
        if (lVar15 == 0) {
          puVar8 = malloc(0x74080);
        }
        else {
          plVar9 = (long *)*plVar13;
          if (plVar9 == (long *)0x0) {
            lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar9 = (long *)(lVar15 + 8);
            if (lVar10 != 0) {
              plVar9 = (long *)(lVar10 + 0xa8);
            }
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) {
              puVar8 = (undefined8 *)0x0;
              goto LAB_02701f04;
            }
          }
          puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,0x74080,0x10);
        }
LAB_02701f04:
        *(undefined8 *)((long)puVar8 + 6) = 0;
        *puVar8 = 0;
        *(undefined2 *)((long)puVar8 + 0xe) = 0xffff;
        puVar8[8] = 0;
        *(undefined8 *)((long)puVar8 + 0x46) = 0;
        *(undefined2 *)((long)puVar8 + 0x4e) = 0xffff;
        *(undefined4 *)(puVar8 + 0x20) = 0;
        FUN_027f3760(puVar8 + 0x22);
        FUN_02785660(puVar8 + 0x5167);
        puVar8[0xe7f3] = 0xffffffffffffffff;
        puVar8[0xe7f4] = 0xffffffffffffffff;
        puVar8[0xe7f1] = 0xffffffffffffffff;
        puVar8[0xe7f2] = 0xffffffffffffffff;
        puVar8[0xe7dc] = 0xffffffffffffffff;
        puVar8[0xe7ef] = 0xffffffffffffffff;
        puVar8[0xe7f0] = 0xffffffffffffffff;
        puVar8[0xe7ed] = 0xffffffffffffffff;
        puVar8[0xe7ee] = 0xffffffffffffffff;
        puVar8[0xe7eb] = 0xffffffffffffffff;
        puVar8[0xe7ec] = 0xffffffffffffffff;
        puVar8[0xe7e9] = 0xffffffffffffffff;
        puVar8[0xe7ea] = 0xffffffffffffffff;
        puVar8[0xe7e7] = 0xffffffffffffffff;
        puVar8[0xe7e8] = 0xffffffffffffffff;
        puVar8[0xe7e5] = 0xffffffffffffffff;
        puVar8[0xe7e6] = 0xffffffffffffffff;
        puVar8[0xe7e3] = 0xffffffffffffffff;
        puVar8[0xe7e4] = 0xffffffffffffffff;
        puVar8[0xe7e1] = 0xffffffffffffffff;
        puVar8[0xe7e2] = 0xffffffffffffffff;
        puVar8[0xe7df] = 0xffffffffffffffff;
        puVar8[0xe7e0] = 0xffffffffffffffff;
        puVar8[0xe7dd] = 0xffffffffffffffff;
        puVar8[0xe7de] = 0xffffffffffffffff;
        FUN_027c1184(puVar8 + 0xe7f5);
        *(undefined4 *)((long)puVar8 + 0x74072) = 0;
        *(undefined4 *)(puVar8 + 0xe80f) = 0;
        *(undefined1 *)(puVar8 + 0xe80e) = 0xff;
        lVar15 = *plVar11;
        plVar7[3] = (long)puVar8;
        if (lVar15 == 0) {
          puVar8 = malloc(0xab800);
        }
        else {
          plVar11 = (long *)*plVar13;
          if (plVar11 == (long *)0x0) {
            lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar11 = (long *)(lVar15 + 8);
            if (lVar10 != 0) {
              plVar11 = (long *)(lVar10 + 0xa8);
            }
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) {
              puVar8 = (undefined8 *)0x0;
              goto LAB_02702004;
            }
          }
          puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,0xab800,8);
        }
LAB_02702004:
        *(undefined1 *)(puVar8 + 6) = 0;
        puVar8[5] = 0;
        puVar8[0xc] = 0;
        *puVar8 = &PTR_LAB_04a8b818;
        puVar8[1] = 0;
        *(undefined1 *)(puVar8 + 0xd) = 0;
        *(undefined1 *)(puVar8 + 0x14) = 0;
        puVar8[7] = &DAT_04a897e8;
        puVar8[0xf] = 0;
        puVar8[0x10] = 0x100;
        puVar8[0xe] = &DAT_04a8ed90;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        puVar8[0x11] = 0;
        puVar8[0x12] = 0;
        puVar8[3] = puVar8 + 0xe;
        puVar8[4] = 0;
        puVar8[0x12] = puVar8 + 7;
        puVar8[0x13] = 0;
        FUN_02711ee0(puVar8 + 0x15,puVar8,0x110);
        puVar8[0x15] = &PTR_LAB_04a8cee0;
        FUN_02723430(puVar8 + 0x1f56,puVar8,puVar8[2] + 0x28b38);
        puVar8[0x1f56] = &PTR_LAB_04a8a070;
        FUN_02721ef0(puVar8 + 0x14659,puVar8,puVar8[2] + 0x73ee0);
        puVar8[0x14659] = &PTR_LAB_04a89ac0;
        FUN_027223b0(puVar8 + 0x1515e,puVar8,puVar8[2] + 0x73fa8);
        puVar8[0x156f0] = 0;
        puVar8[0x1515e] = &PTR_LAB_04a89bb0;
        lVar15 = puVar8[2];
        puVar8[0x156ee] = 0;
        puVar8[0x156ef] = 0;
        *(undefined1 *)(puVar8 + 0x156f1) = 0;
        puVar8[0x156ec] = 0;
        puVar8[0x156ed] = lVar15 + 0x74070;
        if (puVar8[3] != 0) {
          puVar8[0x156ef] = puVar8[3];
        }
        puVar1 = PTR_DAT_04bc30c8;
        puVar8[0x156f3] = 0;
        puVar8[0x156f4] = lVar15 + 0x74072;
        puVar8[0x156fb] = lVar15 + 0x74078;
        puVar8[0x156f6] = 0;
        puVar8[0x156f7] = 0;
        *(undefined1 *)(puVar8 + 0x156f8) = 0;
        puVar8[0x156f5] = 0;
        puVar8[0x156f6] = puVar8 + 0x156eb;
        puVar8[0x156eb] = puVar1 + 0x10;
        puVar8[0x156f2] = &DAT_04a8f0c0;
        *(undefined1 *)(puVar8 + 0x156ff) = 0;
        puVar8[0x156fc] = 0;
        puVar8[3] = puVar8 + 0x156f9;
        puVar8[0x156fd] = 0;
        puVar8[0x156fe] = 0;
        puVar8[0x156fd] = puVar8 + 0x156f2;
        puVar8[0x156f9] = &PTR_LAB_04916ec0;
        puVar8[0x156fa] = 0;
        *puVar8 = &PTR_LAB_04a8b7e8;
        plVar11 = (long *)PTR_DAT_04bb2698;
        lVar15 = *(long *)PTR_DAT_04bb2698;
        plVar7[4] = (long)puVar8;
        if (lVar15 == 0) {
          pvVar12 = malloc(0x28);
          plVar7[5] = (long)pvVar12;
joined_r0x02702228:
          if (pvVar12 != (void *)0x0) {
            lVar15 = *plVar11;
            if (lVar15 == 0) {
              plVar9 = malloc(0x28);
            }
            else {
              plVar9 = (long *)*plVar13;
              if (plVar9 == (long *)0x0) {
                lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                plVar9 = (long *)(lVar15 + 8);
                if (lVar10 != 0) {
                  plVar9 = (long *)(lVar10 + 0xa8);
                }
                plVar9 = (long *)*plVar9;
              }
              plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x28,8);
            }
            puVar1 = PTR_DAT_04bc3820 + 0x10;
            plVar9[1] = 0x200000000;
            plVar9[2] = (long)(plVar9 + 3);
            *plVar9 = (long)puVar1;
            plVar7[6] = (long)plVar9;
            lVar15 = *plVar11;
            if (lVar15 == 0) {
              puVar8 = malloc(0x1050);
            }
            else {
              plVar13 = (long *)*plVar13;
              if (plVar13 == (long *)0x0) {
                lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                plVar13 = (long *)(lVar15 + 8);
                if (lVar10 != 0) {
                  plVar13 = (long *)(lVar10 + 0xa8);
                }
                plVar13 = (long *)*plVar13;
                puVar8 = (undefined8 *)0x0;
                if (plVar13 == (long *)0x0) goto LAB_02702310;
              }
              puVar8 = (undefined8 *)(**(code **)(*plVar13 + 0x30))(plVar13,0x1050,8);
            }
LAB_02702310:
            *(undefined1 *)(puVar8 + 3) = 0;
            *puVar8 = &PTR_LAB_04a8b848;
            puVar8[4] = puVar8 + 4;
            puVar8[5] = puVar8 + 4;
            *(undefined4 *)(puVar8 + 6) = 0;
            puVar8[7] = puVar8 + 10;
            puVar8[1] = 0;
            puVar8[2] = 0;
            for (lVar15 = 0; *(long *)((long)puVar8 + lVar15 + 0x50) = (long)puVar8 + lVar15 + 0x70,
                lVar15 != 0xfc0; lVar15 = lVar15 + 0x40) {
              *(long *)((long)puVar8 + lVar15 + 0x70) = (long)puVar8 + lVar15 + 0x90;
            }
            puVar8[0x206] = 0;
            puVar8[8] = puVar8 + 10;
            *(undefined4 *)(puVar8 + 9) = 0x80;
            lVar15 = plVar7[3];
            plVar7[7] = (long)puVar8;
            puVar8[1] = plVar7[2];
            puVar8[2] = lVar15;
            if (plVar7[7] != 0) {
              lVar15 = plVar7[6];
              if (*(int *)(lVar15 + 8) < *(int *)(lVar15 + 0xc)) {
                *(long *)(*(long *)(lVar15 + 0x10) + (long)*(int *)(lVar15 + 8) * 8) = plVar7[7];
                *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
              }
            }
            *(long *)plVar7[5] = param_1 + 0x3d0;
            *(long *)(plVar7[5] + 8) = param_1 + 0x3f0;
            *(long *)(plVar7[5] + 0x10) = param_1 + 0x410;
            *(long *)(plVar7[5] + 0x18) = param_1 + 0x430;
            *(long *)(plVar7[5] + 0x20) = plVar7[6];
            FUN_02640070(plVar7[4],0,plVar7[2],0,1);
            FUN_02640130(plVar7[4],plVar7[5]);
            *(long **)(*(long *)(param_1 + 0x10) + 0x180) = plVar7;
            uVar6 = (**(code **)(*plVar7 + 0x40))(plVar7);
            if (*(int *)(param_1 + 0x128) < *(int *)(param_1 + 300)) {
              *(undefined8 *)(*(long *)(param_1 + 0x130) + (long)*(int *)(param_1 + 0x128) * 8) =
                   uVar6;
              *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
            }
            goto LAB_02702434;
          }
        }
        else {
          plVar9 = (long *)*plVar13;
          if (plVar9 != (long *)0x0) {
LAB_027021fc:
            pvVar12 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x28,8);
            plVar7[5] = (long)pvVar12;
            goto joined_r0x02702228;
          }
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar9 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar9 = (long *)(lVar10 + 0xa8);
          }
          plVar9 = (long *)*plVar9;
          if (plVar9 != (long *)0x0) goto LAB_027021fc;
          plVar7[5] = 0;
        }
        FUN_0272927c(plVar7);
        puVar8 = *(undefined8 **)(param_1 + 0x4c0);
      }
      if (puVar8 != (undefined8 *)0x0) {
        if (*(long *)(*(long *)(param_1 + 0x10) + 0x180) != 0) {
          puVar8[0x1e] = 0;
          puVar8[0x1f] = 0;
          puVar8[0x1c] = 0;
          puVar8[0x1d] = 0;
          puVar8[0x1a] = 0;
          puVar8[0x1b] = 0;
          puVar8[0x18] = 0;
          puVar8[0x19] = 0;
          puVar8[0x16] = 0;
          puVar8[0x17] = 0;
          puVar8[0x14] = 0;
          puVar8[0x15] = 0;
          puVar8[0x12] = 0;
          puVar8[0x13] = 0;
          puVar8[0x10] = 0;
          puVar8[0x11] = 0;
          puVar8[0xe] = 0;
          puVar8[0xf] = 0;
          puVar8[0xc] = 0;
          puVar8[0xd] = 0;
          puVar8[10] = 0;
          puVar8[0xb] = 0;
          puVar8[8] = 0;
          puVar8[9] = 0;
          puVar8[8] = 0;
          *(undefined2 *)((long)puVar8 + 0x4e) = 0xffff;
          *(undefined8 *)((long)puVar8 + 0x46) = 0;
          puVar8[6] = 0;
          puVar8[7] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          *puVar8 = 0;
          puVar8[1] = 0;
          *(undefined2 *)((long)puVar8 + 0xe) = 0xffff;
          memset(puVar8 + 0x20,0,0x200);
          uVar14 = 0;
          do {
            uVar2 = uVar14 << 2;
            uVar3 = uVar14 >> 0x1f;
            uVar17 = (int)uVar14 + 1;
            uVar14 = (ulong)uVar17;
            *(undefined4 *)((long)(puVar8 + 0x20) + (-uVar3 & 0xfffffffc00000000 | uVar2)) = 0;
          } while (uVar17 != 0x80);
          puVar16 = *(undefined4 **)(param_1 + 0x4c0);
          *puVar16 = 0xa0002;
          puVar16[1] = 0xa0028;
          puVar16[2] = 2;
          *(undefined2 *)(puVar16 + 3) = 2;
          puVar16[0x10] = 0xa0002;
          puVar16[0x11] = 0xa0028;
          puVar16[0x12] = 2;
          *(undefined2 *)(puVar16 + 0x13) = 2;
          uVar4 = DAT_04c47c68;
          *(undefined2 *)((long)puVar16 + 0xe) = DAT_04c47c68;
          *(undefined2 *)((long)puVar16 + 0x4e) = uVar4;
          goto LAB_02701cb8;
        }
        if (*plVar11 == 0) {
          free(puVar8);
        }
        else {
          plVar11 = (long *)FUN_038cb610(*plVar11,puVar8);
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x38))(plVar11,puVar8);
          }
        }
        *(undefined8 *)(param_1 + 0x4c0) = 0;
      }
      plVar11 = *(long **)(*(long *)(param_1 + 0x10) + 0x180);
      if (plVar11 != (long *)0x0) {
        lVar15 = (**(code **)(*plVar11 + 0x40))();
        uVar17 = *(uint *)(param_1 + 0x128);
        if (0 < (int)uVar17) {
          plVar11 = *(long **)(param_1 + 0x130);
          __n = (long)(int)uVar17 * 8;
          uVar14 = 0;
          do {
            __n = __n - 8;
            if (*plVar11 == lVar15) {
              iVar18 = (int)uVar14;
              if ((-1 < iVar18) && (iVar18 < (int)uVar17)) {
                if (iVar18 + 1 < (int)uVar17) {
                  memmove(plVar11,plVar11 + 1,__n);
                  uVar17 = *(uint *)(param_1 + 0x128);
                }
                *(uint *)(param_1 + 0x128) = uVar17 - 1;
              }
              break;
            }
            uVar14 = uVar14 + 1;
            plVar11 = plVar11 + 1;
          } while (uVar17 != uVar14);
        }
        lVar15 = *(long *)(param_1 + 0x10);
        if (*(long **)(lVar15 + 0x180) != (long *)0x0) {
          (**(code **)(**(long **)(lVar15 + 0x180) + 8))();
          lVar15 = *(long *)(param_1 + 0x10);
        }
        *(undefined8 *)(lVar15 + 0x180) = 0;
      }
      plVar11 = (long *)**(undefined8 **)(lVar5 + 0x10);
      nn::os::LockMutex((MutexType *)(plVar11 + 0x4d));
      (**(code **)(*plVar11 + 0x38))(plVar11,lVar5 + 0x850);
      nn::os::UnlockMutex((MutexType *)(plVar11 + 0x4d));
    }
    uVar6 = 0;
  }
  else {
LAB_02701cb8:
    uVar6 = 1;
  }
  return uVar6;
}

