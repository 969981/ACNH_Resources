
void FUN_035a1d70(long param_1,long param_2,code *param_3,long param_4)

{
  bool bVar1;
  void *pvVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined **local_70;
  undefined8 local_68;
  
  puVar3 = PTR_DAT_04bb3350;
  if (param_4 == 0) {
    lVar15 = 1;
    uVar10 = *(uint *)(param_2 + 0x138);
    lVar5 = DAT_05ae7600;
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar15 = *(long *)(lVar5 + 0xa8);
    *(long *)(lVar5 + 0xa8) = param_4;
    uVar10 = *(uint *)(param_2 + 0x138);
    lVar5 = DAT_05ae7600;
  }
  DAT_05ae7600 = lVar5;
  if (uVar10 == 0) goto LAB_035a1f30;
  uVar16 = (ulong)uVar10;
  if ((int)uVar10 < 1) {
    uVar10 = *(uint *)(param_1 + 8);
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  else {
    if (lVar5 == 0) {
      pvVar8 = malloc(uVar16 * 0x28);
joined_r0x035a2018:
      if (pvVar8 != (void *)0x0) {
        uVar13 = uVar10 - 1;
        *(void **)(param_1 + 0x18) = pvVar8;
        if (1 < uVar10) {
          if (uVar13 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = 0;
            plVar7 = (long *)((long)pvVar8 + 0x20);
            do {
              uVar17 = uVar17 + 2;
              plVar7[-4] = (long)plVar7;
              *plVar7 = (long)(plVar7 + 4);
              plVar7 = plVar7 + 8;
            } while (((ulong)uVar13 & 0xfffffffe) != uVar17);
          }
          if ((uVar13 & 1) != 0) {
            plVar7 = (long *)((long)pvVar8 + uVar17 * 0x20);
            *plVar7 = (long)(plVar7 + 4);
          }
        }
        *(undefined8 *)((long)pvVar8 + (long)(int)(uVar13 * 4) * 8) = 0;
        pvVar2 = (void *)((long)pvVar8 + uVar16 * 0x20);
        *(void **)(param_1 + 0x20) = pvVar8;
        if (pvVar2 != (void *)0x0) {
          *(void **)(param_1 + 0x10) = pvVar2;
          *(undefined4 *)(param_1 + 8) = 0;
          *(uint *)(param_1 + 0xc) = uVar10;
        }
      }
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      plVar7 = (long *)(lVar5 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 != (long *)0x0) {
        pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,uVar16 * 0x28,8);
        goto joined_r0x035a2018;
      }
    }
    uVar17 = 0;
    *(undefined1 *)(param_1 + 0x28) = 1;
    do {
      if (uVar17 < *(uint *)(param_2 + 0x118)) {
        uVar14 = *(undefined8 *)(*(long *)(param_2 + 0x120) + uVar17 * 8);
      }
      else {
        uVar14 = 0;
      }
      uVar9 = (*param_3)(uVar14);
      uVar10 = *(uint *)(param_1 + 8);
      if ((int)uVar10 < *(int *)(param_1 + 0xc)) {
        puVar18 = *(undefined8 **)(param_1 + 0x18);
        if (puVar18 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x18) = *puVar18;
        }
        local_70 = &PTR_LAB_048f9770;
        *puVar18 = uVar14;
        puVar18[1] = &PTR_LAB_048f9770;
        puVar18[2] = uVar9;
        local_68 = uVar9;
        (*(code *)PTR_FUN_048f9788)(&local_70);
        uVar4 = FUN_006bd550(local_68,0);
        *(undefined4 *)(puVar18 + 3) = uVar4;
        uVar10 = *(uint *)(param_1 + 8);
        if ((int)uVar10 < *(int *)(param_1 + 0xc)) {
          *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)(int)uVar10 * 8) = puVar18;
          uVar10 = *(int *)(param_1 + 8) + 1;
          *(uint *)(param_1 + 8) = uVar10;
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar16 != uVar17);
  }
  if (1 < (int)uVar10) {
    plVar7 = *(long **)(param_1 + 0x10);
    uVar16 = (ulong)(uVar10 >> 1);
    do {
      uVar13 = (uint)uVar16 * 2;
      lVar5 = plVar7[uVar16 - 1 & 0xffffffff];
      if ((int)uVar10 < (int)uVar13) {
        uVar11 = (uint)uVar16;
      }
      else {
        uVar17 = uVar16 & 0xffffffff;
        do {
          if ((int)uVar13 < (int)uVar10) {
            uVar12 = uVar13 | *(uint *)((plVar7 + (int)uVar13)[-1] + 0x18) <
                              *(uint *)(plVar7[(int)uVar13] + 0x18);
          }
          else {
            uVar12 = uVar13;
          }
          uVar11 = (uint)uVar17;
          if (*(uint *)(plVar7[(int)(uVar12 - 1)] + 0x18) <= *(uint *)(lVar5 + 0x18)) break;
          plVar7[(int)((uint)uVar17 - 1)] = plVar7[(int)(uVar12 - 1)];
          uVar13 = uVar12 * 2;
          uVar17 = (ulong)uVar12;
          uVar11 = uVar12;
        } while ((int)uVar13 <= (int)uVar10);
      }
      plVar7[(int)(uVar11 - 1)] = lVar5;
      bVar1 = 1 < (long)uVar16;
      uVar16 = uVar16 - 1;
    } while (bVar1);
    uVar17 = (ulong)uVar10 - 1;
    uVar16 = uVar17 & 0xffffffff;
    lVar5 = plVar7[uVar16];
    plVar7[uVar16] = *plVar7;
    uVar16 = (ulong)uVar10;
    if (2 < uVar10) {
      do {
        uVar10 = 2;
        uVar13 = 1;
        do {
          if ((int)uVar10 < (int)uVar17) {
            uVar11 = uVar10 | *(uint *)((plVar7 + (int)uVar10)[-1] + 0x18) <
                              *(uint *)(plVar7[(int)uVar10] + 0x18);
          }
          else {
            uVar11 = uVar10;
          }
          lVar6 = (long)(int)(uVar13 - 1);
          if (*(uint *)(plVar7[(int)(uVar11 - 1)] + 0x18) <= *(uint *)(lVar5 + 0x18))
          goto LAB_035a1f70;
          plVar7[lVar6] = plVar7[(int)(uVar11 - 1)];
          uVar10 = uVar11 << 1;
          uVar13 = uVar11;
        } while ((long)(int)uVar10 < (long)uVar16);
        lVar6 = (long)(int)(uVar11 - 1);
LAB_035a1f70:
        plVar7[lVar6] = lVar5;
        uVar16 = uVar17 - 1 & 0xffffffff;
        lVar5 = plVar7[uVar16];
        plVar7[uVar16] = *plVar7;
        bVar1 = 2 < uVar17;
        uVar16 = uVar17;
        uVar17 = uVar17 - 1;
      } while (bVar1);
    }
    *plVar7 = lVar5;
  }
LAB_035a1f30:
  if (lVar15 != 1) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    *(long *)(lVar5 + 0xa8) = lVar15;
  }
  return;
}

