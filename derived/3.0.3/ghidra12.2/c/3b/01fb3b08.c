
void FUN_01fb3b08(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  undefined7 *__src;
  char cVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  char *pcVar12;
  long *plVar13;
  undefined7 *__dest;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined *local_a0;
  undefined7 *local_98;
  undefined4 local_90;
  undefined7 local_8c;
  char cStack_85;
  undefined7 uStack_84;
  char local_7d;
  char acStack_7c [15];
  undefined1 local_6d;
  undefined4 local_64;
  
  FUN_01ec7d58();
  uVar8 = FUN_01fa5be4(param_1);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if ((param_1[0x15ab] & 0x400002000000U) == 0x400000000000) {
    return;
  }
  iVar7 = *(int *)((long)param_1 + 0x77f4);
  iVar3 = (int)param_1[0xef6];
  if (iVar7 == 0x10) {
    bVar4 = false;
  }
  else {
    bVar4 = iVar3 != 0x10 && (iVar7 != 0x4c && iVar3 != 0x4c);
    if (iVar7 == 0x4b) {
      return;
    }
  }
  if ((*(ushort *)((long)param_1 + 0xaf64) & 0x40) == 0) {
    bVar4 = true;
  }
  if (iVar3 == 0x4b) {
    return;
  }
  if (!bVar4) {
    return;
  }
  uVar8 = (**(code **)(*param_1 + 0x5b8))(param_1);
  if (((uVar8 & 1) != 0) && (*(int *)((long)param_1 + 0xaf84) != 2)) {
    return;
  }
  if (*(int *)((long)param_1 + 0x77f4) == 0xc) {
    return;
  }
  iVar7 = (int)param_1[0xef6];
  if (iVar7 == 0xc) {
    return;
  }
  if (*(int *)((long)param_1 + 0x77f4) == 0x47) {
    return;
  }
  if (iVar7 == 0x47) {
    return;
  }
  FUN_01fb33b4(param_1);
  if ((int)param_1[0x15f1] == 1) {
    plVar9 = param_1 + 0x1ce7;
    if ((long *)param_1[0x1ce8] != plVar9) {
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      plVar16 = (long *)param_1[0x1ce8];
      do {
        plVar2 = (long *)plVar16[1];
        plVar13 = plVar2;
        if (*plVar16 != 0) {
          *(long **)(*plVar16 + 8) = plVar2;
          plVar13 = (long *)plVar16[1];
        }
        if (plVar13 != (long *)0x0) {
          *plVar13 = *plVar16;
        }
        *plVar16 = 0;
        plVar16[1] = 0;
        *(int *)(param_1 + 0x1ce9) = (int)param_1[0x1ce9] + -1;
        plVar16[-10] = (long)puVar1;
        plVar16[-0xb] = param_1[0x1cea];
        param_1[0x1cea] = (long)(plVar16 + -0xb);
        plVar16 = plVar2;
      } while (plVar2 != plVar9);
    }
    (**(code **)(param_1[0x1ce5] + 0x28))(param_1 + 0x1ce5);
    if (((*(int *)((long)param_1 + 0x1204c) < 0) && (*PTR_DAT_04bb59e0 != '\0')) &&
       (*(int *)(param_1[1] + 0x750) != 3)) {
      uVar8 = FUN_0212ef10(param_1 + 0x154a);
      if ((uVar8 & 1) == 0) {
        uVar8 = (**(code **)(*param_1 + 0x560))(param_1,0);
        puVar5 = PTR_DAT_04bb3350;
        puVar1 = PTR_DAT_04bb27c0;
        if (((uVar8 & 1) != 0) && (plVar16 = (long *)param_1[0x1ce8], plVar16 != plVar9)) {
          plVar9 = plVar16 + -0xb;
          do {
            uVar10 = *(uint *)((long)plVar9 + 0x3c);
            if (((uVar10 != 0) && ((*(byte *)((long)plVar9 + 0x4d) >> 5 & 1) == 0)) &&
               (lVar11 = *(long *)puVar1, lVar11 != 0)) {
              lVar14 = *(long *)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                                ((ulong)(uVar10 >> 0x11) & 0x7ff8));
              if (((lVar14 == 0) || ((*(uint *)(lVar14 + 0x248) >> 1 & 1) != 0)) ||
                 (*(uint *)(lVar14 + 0x230) != uVar10)) {
                lVar14 = 0;
              }
              if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
                plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
                lVar11 = *(long *)puVar1;
                iVar7 = (**(code **)(*plVar9 + 0x60))();
                if (iVar7 < 0x11) {
                  uVar10 = 1;
                }
                else {
                  uVar10 = *(uint *)(lVar11 + 0x5e8);
                  if (4 < uVar10) goto LAB_01fb3de4;
                  uVar10 = 0x1aU >> (ulong)(uVar10 & 0x1f) & 1;
                }
              }
              else {
LAB_01fb3de4:
                uVar10 = 0;
              }
              if (lVar14 != 0) {
                uVar10 = uVar10 ^ 1;
                if (*(int *)(lVar14 + 0x150) != 1) {
                  uVar10 = 1;
                }
                if (((uVar10 == 0) && (*(int *)(lVar14 + 0x15c) == 1)) &&
                   ((lVar11 = *(long *)PTR_DAT_04bb4e28, lVar11 != 0 &&
                    ((*(uint *)(&DAT_00001230 + lVar11) >> 2 & 1) == 0)))) {
                  if ((*(uint *)(&DAT_00001230 + lVar11) >> 3 & 1) == 0) {
                    lVar11 = FUN_0252d9bc(0);
                    if (lVar11 == 0) goto LAB_01fb3d40;
                  }
                  else {
                    lVar11 = lVar11 + 0x1170;
                  }
                  *(undefined4 *)((long)param_1 + 0x1204c) = 0x708;
                  FUN_02194660(param_1 + 0x1617);
                  *(undefined1 *)((long)param_1 + 0xe724) = 0;
                  FUN_01fc20e4(param_1,lVar11);
                  FUN_02192850(param_1 + 0x1617,0,0);
                  break;
                }
              }
            }
LAB_01fb3d40:
            plVar16 = (long *)plVar16[1];
            plVar9 = plVar16 + -0xb;
          } while (plVar9 != param_1 + 0x1cdc);
        }
      }
    }
    if (0 < (int)param_1[0x1619]) {
      FUN_02193780(param_1 + 0x1617);
    }
  }
  puVar15 = *(undefined8 **)(param_1[1] + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  local_64 = 0;
  local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x4c);
  if (puVar15[0x227] == 0) {
    return;
  }
  uVar8 = FUN_03850890(puVar15[0x227],0x4c,0,0);
  cVar6 = local_7d;
  if ((uVar8 & 1) == 0) {
    return;
  }
  local_90 = 0x20;
  local_98 = &local_8c;
  local_6d = 0;
  local_a0 = PTR_DAT_04bb2028 + 0x10;
  iVar7 = (int)param_1[0x2477];
  cStack_85 = s_Trowel_Dig_Other_040da96b[7];
  local_8c = s_Trowel_Dig_Other_040da96b._0_7_;
  local_7d = s_Trowel_Dig_Other_040da96b[0xf];
  uStack_84 = s_Trowel_Dig_Other_040da96b._8_7_;
  if (iVar7 == 2) {
    pcVar12 = acStack_7c;
  }
  else {
    if (iVar7 == 1) {
      pcVar12 = "Trowel_Dig_Moss";
    }
    else {
      if (iVar7 != 0) {
        pcVar12 = acStack_7c;
        goto LAB_01fb3f94;
      }
      pcVar12 = "Trowel_Dig_Sand";
    }
    local_8c = (undefined7)*(undefined8 *)pcVar12;
    cStack_85 = (char)*(undefined8 *)(pcVar12 + 7);
    uStack_84 = (undefined7)((ulong)*(undefined8 *)(pcVar12 + 7) >> 8);
    pcVar12 = &local_7d;
    local_7d = cVar6;
  }
LAB_01fb3f94:
  *pcVar12 = '\0';
  puVar15 = *(undefined8 **)(param_1[1] + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  pcVar12 = (char *)(puVar15 + 0xb9e);
  if (*pcVar12 == '\0') {
    lVar11 = 0;
  }
  else {
    pcVar12 = (char *)(puVar15 + 0xbae);
    if (*pcVar12 == '\0') {
      lVar11 = 1;
    }
    else if (*(char *)(puVar15 + 0xbbe) == '\0') {
      pcVar12 = (char *)(puVar15 + 0xbbe);
      lVar11 = 2;
    }
    else {
      if (*(char *)(puVar15 + 0xbce) != '\0') {
        return;
      }
      pcVar12 = (char *)(puVar15 + 0xbce);
      lVar11 = 3;
    }
  }
  *pcVar12 = '\x01';
  __dest = (undefined7 *)puVar15[lVar11 * 0x10 + 0xb90];
  *(int *)((long)puVar15 + lVar11 * 0x80 + 0x5cf4) =
       (int)*(undefined8 *)(*(long *)PTR_DAT_04bb2118 + 0x508);
  (**(code **)(local_a0 + 0x18))(&local_a0);
  __src = local_98;
  if (__dest != local_98) {
    (**(code **)(local_a0 + 0x18))(&local_a0);
    lVar14 = 0;
    do {
      if (*(char *)((long)local_98 + lVar14) == '\0') goto LAB_01fb40b4;
      if (*(char *)((long)local_98 + lVar14 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_01fb40b4;
      }
      if (*(char *)((long)local_98 + lVar14 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_01fb40b4;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_01fb40b4:
    iVar7 = (int)lVar14;
    if (*(int *)(puVar15 + lVar11 * 0x10 + 0xb91) <= (int)lVar14) {
      iVar7 = *(int *)(puVar15 + lVar11 * 0x10 + 0xb91) + -1;
    }
    memcpy(__dest,__src,(long)iVar7);
    *(undefined1 *)((long)__dest + (long)iVar7) = 0;
  }
  *(undefined4 *)(puVar15 + lVar11 * 0x10 + 0xb9d) = 0;
  return;
}

