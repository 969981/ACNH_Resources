
void FUN_00188330(long *param_1,long *param_2)

{
  ulong uVar1;
  void *__dest;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  code *pcVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_1[4] != 0 && *PTR_DAT_04bcbd28 == '\0') {
    nn::os::LockMutex((MutexType *)(param_1[4] + 8));
  }
  puVar7 = PTR_DAT_04bcba28;
  puVar6 = PTR_DAT_04bcba20;
  if (param_1[1] != 0) {
    uVar11 = 0;
    uVar18 = 0;
    do {
      lVar10 = *param_1 + uVar11 * 0x68;
      local_a0 = *(undefined8 *)(lVar10 + 0x28);
      uStack_78 = *(undefined8 *)(lVar10 + 0x50);
      local_70 = *(undefined8 *)(lVar10 + 0x58);
      uStack_88 = *(undefined8 *)(lVar10 + 0x40);
      local_80 = *(undefined8 *)(lVar10 + 0x48);
      uStack_68 = *(undefined8 *)(lVar10 + 0x60);
      uStack_98 = *(undefined8 *)(lVar10 + 0x30);
      local_90 = *(undefined8 *)(lVar10 + 0x38);
      __dest = (void *)param_2[1];
      if (__dest == (void *)param_2[2]) {
        uVar12 = (long)__dest - *param_2;
        uVar11 = ((long)uVar12 >> 6) + 1;
        if (uVar11 >> 0x3a != 0) {
          lVar10 = FUN_0018ee58(param_2);
          pcStack_b0 = FUN_00188568;
          plStack_a8 = param_2;
          if (*(long *)(lVar10 + 0x60) != 0) {
            lStack_c8 = 0;
            lStack_c0 = 0;
            uStack_b8 = 0;
            FUN_00188330(*(long *)(lVar10 + 0x60),&lStack_c8);
            if (lStack_c8 != 0) {
              lStack_c0 = lStack_c8;
              pcVar15 = *(code **)(lStack_c8 + -0x10);
              if (pcVar15 == (code *)0x0) {
                free((undefined8 *)(lStack_c8 + -0x10));
                lVar10 = *(long *)(lVar10 + 0x68);
                goto joined_r0x001885a8;
              }
              (*pcVar15)();
            }
          }
          lVar10 = *(long *)(lVar10 + 0x68);
joined_r0x001885a8:
          if (lVar10 != 0) {
            lStack_c8 = 0;
            lStack_c0 = 0;
            uStack_b8 = 0;
            FUN_00188330(lVar10,&lStack_c8);
            if (lStack_c8 != 0) {
              lStack_c0 = lStack_c8;
              pcVar15 = *(code **)(lStack_c8 + -0x10);
              if (pcVar15 == (code *)0x0) {
                free((undefined8 *)(lStack_c8 + -0x10));
                return;
              }
              (*pcVar15)();
            }
          }
          return;
        }
        uVar1 = (long)uVar12 >> 5;
        if ((ulong)((long)uVar12 >> 5) <= uVar11) {
          uVar1 = uVar11;
        }
        if (0x7fffffffffffffbf < uVar12) {
          uVar1 = 0x3ffffffffffffff;
        }
        if (uVar1 == 0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          if (*(code **)puVar6 == (code *)0x0) {
            puVar8 = malloc(uVar1 << 6 | 0x10);
          }
          else {
            puVar8 = (undefined8 *)(**(code **)puVar6)();
          }
          puVar9 = puVar8 + 2;
          *puVar8 = *(undefined8 *)puVar7;
        }
        puVar8 = puVar9 + ((long)uVar12 >> 6) * 8;
        puVar8[2] = local_90;
        puVar8[3] = uStack_88;
        *puVar8 = local_a0;
        puVar8[1] = uStack_98;
        puVar8[6] = local_70;
        puVar8[7] = uStack_68;
        puVar8[4] = local_80;
        puVar8[5] = uStack_78;
        puVar2 = (undefined8 *)*param_2;
        puVar14 = (undefined8 *)param_2[1];
        puVar16 = puVar8;
        puVar17 = puVar8;
        if (puVar14 != puVar2) {
          do {
            puVar13 = puVar14 + -8;
            uVar4 = puVar14[-7];
            uVar3 = puVar14[-6];
            uVar5 = puVar14[-5];
            puVar17 = puVar16 + -8;
            *puVar17 = *puVar13;
            puVar16[-6] = uVar3;
            puVar16[-5] = uVar5;
            puVar16[-7] = uVar4;
            uVar3 = puVar14[-4];
            uVar4 = puVar14[-3];
            uVar5 = puVar14[-1];
            puVar16[-2] = puVar14[-2];
            puVar16[-1] = uVar5;
            puVar16[-4] = uVar3;
            puVar16[-3] = uVar4;
            puVar14 = puVar13;
            puVar16 = puVar17;
          } while (puVar13 != puVar2);
          puVar14 = (undefined8 *)*param_2;
        }
        param_2[2] = (long)(puVar9 + uVar1 * 8);
        *param_2 = (long)puVar17;
        param_2[1] = (long)(puVar8 + 8);
        if (puVar14 != (undefined8 *)0x0) {
          puVar14 = puVar14 + -2;
          if ((code *)*puVar14 == (code *)0x0) {
            free(puVar14);
          }
          else {
            (*(code *)*puVar14)(puVar14);
          }
        }
      }
      else {
        memmove(__dest,(undefined8 *)(lVar10 + 0x28),0x40);
        param_2[1] = (long)__dest + 0x40;
      }
      uVar18 = uVar18 + 1;
      uVar11 = (ulong)uVar18;
    } while (uVar11 < (ulong)param_1[1]);
  }
  if ((param_1[4] == 0) || (*PTR_DAT_04bcbd28 != '\0')) {
    return;
  }
  nn::os::UnlockMutex((MutexType *)(param_1[4] + 8));
  return;
}

