
void FUN_03ffe4e0(long param_1,undefined2 *param_2,ulong param_3,long param_4,uint param_5)

{
  undefined2 *puVar1;
  MutexType *pMVar2;
  long lVar3;
  void *__dest;
  ulong uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined2 *__dest_00;
  ulong uVar7;
  long lVar8;
  undefined2 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined2 *puVar12;
  ulong uVar13;
  undefined2 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  void *__dest_01;
  float fVar19;
  float fVar20;
  
  plVar18 = *(long **)PTR_DAT_04bdf328;
  if (*(int *)(param_1 + 0x5bc) == 0) {
    __dest_00 = (undefined2 *)0x0;
  }
  else {
    if (param_3 == 0) {
LAB_03ffe574:
      __dest_00 = (undefined2 *)0x0;
    }
    else {
      uVar7 = param_3;
      if (param_3 < 5) {
        uVar7 = 4;
      }
      if (((long)uVar7 < 0) ||
         (__dest_00 = (undefined2 *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar7 << 1,2),
         __dest_00 == (undefined2 *)0x0)) {
        FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
        goto LAB_03ffe574;
      }
    }
    memcpy(__dest_00,param_2,param_3 << 1);
    param_2 = __dest_00;
    if ((param_3 != 0) && (*(int *)(param_1 + 0x5bc) == 1)) {
      uVar7 = 0;
      do {
        *(uint *)(__dest_00 + uVar7) =
             *(uint *)(__dest_00 + uVar7) >> 0x10 | *(uint *)(__dest_00 + uVar7) << 0x10;
        uVar7 = uVar7 + *(uint *)(param_1 + 0x4b8);
      } while (uVar7 < param_3);
    }
  }
  if (((param_5 & 1) == 0) && ((*(int *)(param_1 + 0x5b0) != 0 || (*(int *)(param_1 + 0x5b4) == 0)))
     ) goto LAB_03ffed00;
  pMVar2 = (MutexType *)(param_1 + 0x518);
  nn::os::LockMutex(pMVar2);
  uVar15 = *(ulong *)(param_1 + 0x538);
  uVar10 = *(ulong *)(param_1 + 0x570);
  uVar7 = (uVar15 - *(long *)(param_1 + 0x568)) + uVar10;
  uVar13 = 0;
  if (uVar15 <= uVar7) {
    uVar13 = uVar15;
  }
  uVar7 = uVar7 - uVar13;
  if (uVar7 < 0x100) {
    lVar8 = 0;
    do {
      uVar16 = *(ulong *)(param_1 + 0x568);
      uVar13 = (ulong)*(uint *)(param_1 + 0x4b8);
      puVar14 = (undefined2 *)0x0;
      if (uVar16 != 0) {
        puVar14 = *(undefined2 **)(param_1 + 0x550);
      }
      uVar15 = (uVar15 - uVar10) - (ulong)(uVar16 == 0);
      if (uVar10 < uVar16) {
        puVar14 = (undefined2 *)0x0;
        uVar15 = uVar16 + ~uVar10;
      }
      uVar16 = uVar13;
      if (uVar15 <= uVar13) {
        uVar16 = uVar15;
      }
      if (uVar16 != 0) {
        puVar9 = *(undefined2 **)(param_1 + 0x550) + uVar10;
        puVar12 = param_2;
        for (uVar17 = uVar16 & 7; uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar9 = *puVar12;
          puVar9 = puVar9 + 1;
          puVar12 = puVar12 + 1;
        }
        if (6 < (uVar16 - 1 & 0x7fffffffffffffff)) {
          do {
            *puVar9 = *puVar12;
            puVar9[1] = puVar12[1];
            puVar9[2] = puVar12[2];
            puVar9[3] = puVar12[3];
            puVar9[4] = puVar12[4];
            puVar9[5] = puVar12[5];
            puVar9[6] = puVar12[6];
            puVar1 = puVar12 + 7;
            puVar12 = puVar12 + 8;
            puVar9[7] = *puVar1;
            puVar9 = puVar9 + 8;
          } while (puVar12 != param_2 + uVar16);
        }
      }
      if (uVar15 < uVar13) {
        lVar11 = uVar13 * 2 + uVar16 * -2;
        puVar12 = param_2 + uVar16;
        do {
          lVar11 = lVar11 + -2;
          *puVar14 = *puVar12;
          puVar14 = puVar14 + 1;
          puVar12 = puVar12 + 1;
        } while (lVar11 != 0);
      }
      lVar8 = lVar8 + 1;
      uVar13 = *(long *)(param_1 + 0x570) + uVar13;
      uVar15 = *(ulong *)(param_1 + 0x538);
      uVar10 = 0;
      if (uVar15 <= uVar13) {
        uVar10 = uVar15;
      }
      uVar10 = uVar13 - uVar10;
      *(ulong *)(param_1 + 0x570) = uVar10;
    } while (lVar8 != 0x100 - uVar7);
    uVar13 = (uVar15 - *(long *)(param_1 + 0x568)) + uVar10;
    uVar7 = 0;
    if (uVar15 <= uVar13) {
      uVar7 = uVar15;
    }
    uVar13 = uVar13 - uVar7;
    uVar7 = (ulong)*(uint *)(param_1 + 0x4b8);
    uVar16 = *(ulong *)(param_1 + 0x510) - uVar13;
    if ((uVar13 <= *(ulong *)(param_1 + 0x510) && uVar16 != 0) && (uVar7 <= uVar16)) {
      uVar13 = 0;
      if (uVar7 != 0) {
        uVar13 = uVar16 / uVar7;
      }
      uVar7 = 0;
      if (uVar13 < 2) {
        uVar13 = 1;
      }
      do {
        uVar17 = *(ulong *)(param_1 + 0x568);
        uVar16 = (ulong)*(uint *)(param_1 + 0x4b8);
        puVar14 = (undefined2 *)0x0;
        if (uVar17 != 0) {
          puVar14 = *(undefined2 **)(param_1 + 0x550);
        }
        uVar15 = (uVar15 - uVar10) - (ulong)(uVar17 == 0);
        if (uVar10 < uVar17) {
          puVar14 = (undefined2 *)0x0;
          uVar15 = uVar17 + ~uVar10;
        }
        uVar17 = uVar16;
        if (uVar15 <= uVar16) {
          uVar17 = uVar15;
        }
        if (uVar17 != 0) {
          puVar9 = *(undefined2 **)(param_1 + 0x550) + uVar10;
          puVar12 = param_2;
          for (uVar4 = uVar17 & 7; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar9 = *puVar12;
            puVar9 = puVar9 + 1;
            puVar12 = puVar12 + 1;
          }
          if (6 < (uVar17 - 1 & 0x7fffffffffffffff)) {
            do {
              *puVar9 = *puVar12;
              puVar9[1] = puVar12[1];
              puVar9[2] = puVar12[2];
              puVar9[3] = puVar12[3];
              puVar9[4] = puVar12[4];
              puVar9[5] = puVar12[5];
              puVar9[6] = puVar12[6];
              puVar1 = puVar12 + 7;
              puVar12 = puVar12 + 8;
              puVar9[7] = *puVar1;
              puVar9 = puVar9 + 8;
            } while (puVar12 != param_2 + uVar17);
          }
        }
        if (uVar15 < uVar16) {
          lVar8 = uVar16 * 2 + uVar17 * -2;
          puVar12 = param_2 + uVar17;
          do {
            lVar8 = lVar8 + -2;
            *puVar14 = *puVar12;
            puVar14 = puVar14 + 1;
            puVar12 = puVar12 + 1;
          } while (lVar8 != 0);
        }
        uVar7 = uVar7 + 1;
        uVar16 = *(long *)(param_1 + 0x570) + uVar16;
        uVar15 = *(ulong *)(param_1 + 0x538);
        uVar10 = 0;
        if (uVar15 <= uVar16) {
          uVar10 = uVar15;
        }
        uVar10 = uVar16 - uVar10;
        *(ulong *)(param_1 + 0x570) = uVar10;
      } while (uVar7 != uVar13);
      uVar7 = (ulong)*(uint *)(param_1 + 0x4b8);
    }
    uVar5 = 0;
    if ((uint)uVar7 != 0) {
      uVar5 = 0x100 / (uint)uVar7;
    }
    *(uint *)(param_1 + 0x4c0) = uVar5 << 0xc;
  }
  else {
    uVar7 = (ulong)*(uint *)(param_1 + 0x4b8);
  }
  lVar8 = (ulong)((int)*(ulong *)(param_1 + 0x4e0) - 1U & *(uint *)(param_1 + 0x4d8)) * 4;
  fVar19 = (float)(((ulong)*(uint *)(param_1 + 0x508) * param_4 * uVar7) / 1000000000 & 0xffffffff)
           / (float)(param_3 & 0xffffffff);
  fVar20 = (*(float *)(param_1 + 0x4f0) - *(float *)(*(long *)(param_1 + 0x4e8) + lVar8)) + fVar19;
  *(float *)(param_1 + 0x4f0) = fVar20;
  *(float *)(param_1 + 0x4f4) = fVar20 / (float)*(ulong *)(param_1 + 0x4e0);
  *(float *)(*(long *)(param_1 + 0x4e8) + lVar8) = fVar19;
  uVar16 = *(ulong *)(param_1 + 0x538);
  uVar10 = *(ulong *)(param_1 + 0x568);
  *(int *)(param_1 + 0x4d8) = *(int *)(param_1 + 0x4d8) + 1;
  puVar6 = PTR_DAT_04bcaa30;
  uVar13 = *(ulong *)(param_1 + 0x570);
  uVar7 = (uVar16 - uVar10) + uVar13;
  uVar15 = 0;
  if (uVar16 <= uVar7) {
    uVar15 = uVar16;
  }
  if (uVar16 + ~uVar7 + uVar15 < param_3) {
    uVar7 = (ulong)*(uint *)(param_1 + 0x4b8);
    do {
      uVar17 = *(ulong *)(param_1 + 0x568);
      uVar10 = (uVar16 - uVar17) + uVar13;
      uVar15 = 0;
      if (uVar16 <= uVar10) {
        uVar15 = uVar16;
      }
      for (uVar15 = uVar16 + ~uVar10 + uVar15; uVar15 < uVar7; uVar15 = uVar16 + ~uVar10 + uVar15) {
        nn::os::UnlockMutex(pMVar2);
        if ((*(int *)(param_1 + 0x5b0) != 0) || (*(int *)(param_1 + 0x5ac) != 0)) goto LAB_03ffed00;
        uVar7 = *(ulong *)puVar6;
        lVar8 = nn::os::GetSystemTick();
        while (lVar11 = nn::os::GetSystemTick(), lVar11 <= (long)(lVar8 + uVar7 / 1000)) {
          Yield();
        }
        nn::os::LockMutex(pMVar2);
        uVar16 = *(ulong *)(param_1 + 0x538);
        uVar17 = *(ulong *)(param_1 + 0x568);
        uVar13 = *(ulong *)(param_1 + 0x570);
        uVar10 = (uVar16 - uVar17) + uVar13;
        uVar15 = 0;
        if (uVar16 <= uVar10) {
          uVar15 = uVar16;
        }
        uVar7 = (ulong)*(uint *)(param_1 + 0x4b8);
      }
      uVar10 = 0;
      if (uVar7 != 0) {
        uVar10 = uVar15 / uVar7;
      }
      uVar15 = param_3;
      if (uVar10 * uVar7 <= param_3) {
        uVar15 = uVar10 * uVar7;
      }
      if (uVar13 < uVar17) {
        puVar14 = (undefined2 *)0x0;
        uVar17 = uVar17 + ~uVar13;
      }
      else {
        puVar14 = (undefined2 *)0x0;
        if (uVar17 != 0) {
          puVar14 = *(undefined2 **)(param_1 + 0x550);
        }
        uVar17 = (uVar16 - uVar13) - (ulong)(uVar17 == 0);
      }
      uVar7 = uVar15;
      if (uVar17 <= uVar15) {
        uVar7 = uVar17;
      }
      if (uVar7 != 0) {
        puVar9 = *(undefined2 **)(param_1 + 0x550) + uVar13;
        puVar12 = param_2;
        for (uVar10 = uVar7 & 7; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar9 = *puVar12;
          puVar9 = puVar9 + 1;
          puVar12 = puVar12 + 1;
        }
        if (6 < (uVar7 - 1 & 0x7fffffffffffffff)) {
          do {
            *puVar9 = *puVar12;
            puVar9[1] = puVar12[1];
            puVar9[2] = puVar12[2];
            puVar9[3] = puVar12[3];
            puVar9[4] = puVar12[4];
            puVar9[5] = puVar12[5];
            puVar9[6] = puVar12[6];
            puVar1 = puVar12 + 7;
            puVar12 = puVar12 + 8;
            puVar9[7] = *puVar1;
            puVar9 = puVar9 + 8;
          } while (puVar12 != param_2 + uVar7);
        }
      }
      puVar12 = param_2 + uVar7;
      if (uVar17 < uVar15) {
        do {
          puVar9 = puVar12 + 1;
          *puVar14 = *puVar12;
          puVar12 = puVar9;
          puVar14 = puVar14 + 1;
        } while (puVar9 != param_2 + uVar15);
      }
      uVar13 = *(long *)(param_1 + 0x570) + uVar15;
      uVar16 = *(ulong *)(param_1 + 0x538);
      uVar7 = 0;
      if (uVar16 <= uVar13) {
        uVar7 = uVar16;
      }
      uVar13 = uVar13 - uVar7;
      uVar5 = *(uint *)(param_1 + 0x4b8);
      uVar7 = (ulong)uVar5;
      *(ulong *)(param_1 + 0x570) = uVar13;
      if (uVar5 != 0) {
        lVar8 = uVar15 - uVar7;
        if (uVar7 < 4) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          uVar10 = 0;
          puVar14 = (undefined2 *)(param_1 + 0x5a6);
          do {
            lVar11 = lVar11 + -4;
            puVar14[-3] = param_2[lVar8 + uVar10];
            puVar14[-2] = param_2[lVar8 + (uVar10 | 1)];
            puVar14[-1] = param_2[lVar8 + (uVar10 | 2)];
            uVar17 = uVar10 | 3;
            uVar10 = uVar10 + 4;
            *puVar14 = param_2[lVar8 + uVar17];
            puVar14 = puVar14 + 4;
          } while (-lVar11 != (uVar7 & 0xfffffffc));
          lVar11 = -lVar11;
        }
        if ((uVar5 & 3) != 0) {
          uVar10 = uVar7 & 3;
          puVar14 = (undefined2 *)(param_1 + 0x5a0 + lVar11 * 2);
          do {
            lVar3 = lVar8 + lVar11;
            lVar11 = lVar11 + 1;
            uVar10 = uVar10 - 1;
            *puVar14 = param_2[lVar3];
            puVar14 = puVar14 + 1;
          } while (uVar10 != 0);
        }
      }
      param_3 = param_3 - uVar15;
      param_2 = param_2 + uVar15;
    } while (param_3 != 0);
  }
  else {
    __dest = (void *)((long)*(void **)(param_1 + 0x550) + uVar13 * 2);
    if (uVar13 < uVar10) {
      __dest_01 = (void *)0x0;
      uVar10 = uVar10 + ~uVar13;
      uVar7 = param_3 - uVar10;
      if (uVar10 <= param_3 && uVar7 != 0) goto LAB_03ffec48;
LAB_03ffec20:
      __dest_01 = __dest;
      puVar14 = param_2;
      uVar7 = param_3;
    }
    else {
      __dest_01 = (void *)0x0;
      if (uVar10 != 0) {
        __dest_01 = *(void **)(param_1 + 0x550);
      }
      uVar10 = (uVar16 - uVar13) - (ulong)(uVar10 == 0);
      uVar7 = param_3 - uVar10;
      if (param_3 < uVar10 || uVar7 == 0) goto LAB_03ffec20;
LAB_03ffec48:
      memmove(__dest,param_2,uVar10 * 2);
      puVar14 = param_2 + uVar10;
    }
    memmove(__dest_01,puVar14,uVar7 << 1);
    lVar8 = 0;
    uVar7 = *(long *)(param_1 + 0x570) + param_3;
    uVar10 = (ulong)*(uint *)(param_1 + 0x4b8);
    uVar13 = 0;
    if (*(ulong *)(param_1 + 0x538) <= uVar7) {
      uVar13 = *(ulong *)(param_1 + 0x538);
    }
    *(ulong *)(param_1 + 0x570) = uVar7 - uVar13;
    uVar7 = uVar10;
    if (uVar10 < 2) {
      uVar7 = 1;
    }
    if (1 < *(uint *)(param_1 + 0x4b8)) {
      lVar8 = 0;
      puVar14 = param_2 + ((param_3 + 1) - uVar10);
      puVar12 = (undefined2 *)(param_1 + 0x5a2);
      do {
        lVar8 = lVar8 + -2;
        puVar12[-1] = puVar14[-1];
        *puVar12 = *puVar14;
        puVar14 = puVar14 + 2;
        puVar12 = puVar12 + 2;
      } while (-lVar8 != (uVar7 & 0xfffffffe));
      lVar8 = -lVar8;
    }
    if ((uVar7 & 1) != 0) {
      *(undefined2 *)(param_1 + lVar8 * 2 + 0x5a0) = param_2[(param_3 - uVar10) + lVar8];
    }
  }
  nn::os::UnlockMutex(pMVar2);
LAB_03ffed00:
  if (__dest_00 == (undefined2 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03ffed30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar18 + 0x18))(plVar18,__dest_00);
  return;
}

