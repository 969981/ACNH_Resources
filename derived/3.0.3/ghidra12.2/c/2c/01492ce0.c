
void FUN_01492ce0(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  long lVar18;
  uint uVar19;
  long *plVar20;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  
  if (0 < *param_2) {
    lVar13 = 0;
    puVar15 = *(undefined8 **)(param_2 + 4);
    do {
      puVar17 = *(undefined8 **)(*(long *)(param_2 + 2) + lVar13 * 8);
      lVar13 = lVar13 + 1;
      *puVar17 = puVar15;
      *(undefined8 **)(param_2 + 4) = puVar17;
      puVar15 = puVar17;
    } while (lVar13 < *param_2);
  }
  *param_2 = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0x3b0));
  puVar9 = PTR_DAT_04bb5920;
  puVar8 = PTR_DAT_04bb3350;
  puVar7 = PTR_DAT_04bb27c0;
  if (*(long *)(param_1 + 0x380) != param_1 + 0x378) {
    lVar18 = (long)*(int *)(param_1 + 0x38c);
    puVar16 = (uint *)(*(long *)(param_1 + 0x380) - lVar18);
    puVar1 = PTR_DAT_04bb3290 + 0x10;
    lVar13 = (long)puVar16 + lVar18;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    do {
      lVar13 = *(long *)(lVar13 + 8);
      lVar14 = *(long *)puVar7;
      if (lVar14 != 0) {
        uVar19 = *puVar16;
        if ((((uVar19 == 0) ||
             (plVar20 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                  ((ulong)(uVar19 >> 0x11) & 0x7ff8)), plVar20 == (long *)0x0)) ||
            ((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar20 + 0x46) != uVar19)) {
          plVar20 = (long *)0x0;
        }
        if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
          plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
          lVar14 = *(long *)puVar7;
          iVar10 = (**(code **)(*plVar11 + 0x60))();
          if (iVar10 < 0x11) {
            uVar19 = 1;
          }
          else {
            uVar19 = *(uint *)(lVar14 + 0x5e8);
            if (4 < uVar19) goto LAB_01492e60;
            uVar19 = 0x1aU >> (ulong)(uVar19 & 0x1f) & 1;
          }
        }
        else {
LAB_01492e60:
          uVar19 = 0;
        }
        if (plVar20 != (long *)0x0) {
          lVar14 = plVar20[0x2a];
          if (((*PTR_DAT_04bb5928 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar10 != 0)) {
            *(undefined **)puVar9 = puVar1;
            __cxa_guard_release(PTR_DAT_04bb5928);
          }
          uVar12 = (**(code **)(*plVar20 + 0x20))(plVar20,puVar9);
          uVar3 = 0;
          if ((int)lVar14 == 1) {
            uVar3 = uVar19;
          }
          if ((((uVar12 & 1) != 0) && (uVar3 != 0)) &&
             (FUN_01476a50(&local_68,plVar20), *param_2 < param_2[1])) {
            lVar14 = plVar20[0x59];
            uVar4 = *(undefined4 *)((long)plVar20 + 0x2cc);
            lVar5 = plVar20[0x5a];
            lVar6 = plVar20[0x46];
            iVar10 = *(int *)(plVar20[0xd] + 0x2b4);
            puVar15 = *(undefined8 **)(param_2 + 4);
            if (puVar15 != (undefined8 *)0x0) {
              *(undefined8 *)(param_2 + 4) = *puVar15;
            }
            *(int *)(puVar15 + 2) = (int)lVar14;
            *(undefined4 *)((long)puVar15 + 0x14) = uVar4;
            *(int *)(puVar15 + 4) = (int)lVar6;
            *(undefined2 *)puVar15 = local_68;
            *(undefined1 *)((long)puVar15 + 2) = local_66;
            *(undefined1 *)((long)puVar15 + 3) = local_65;
            *(undefined4 *)((long)puVar15 + 4) = local_64;
            puVar15[1] = puVar2;
            *(uint *)(puVar15 + 3) = iVar10 + 0x20000000U >> 0x1e;
            *(int *)((long)puVar15 + 0x1c) = (int)lVar5;
            if (*param_2 < param_2[1]) {
              *(undefined8 **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = puVar15;
              *param_2 = *param_2 + 1;
            }
          }
        }
      }
      puVar16 = (uint *)(lVar13 - lVar18);
    } while (puVar16 != (uint *)((param_1 + 0x378) - lVar18));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3b0));
  return;
}

