
void FUN_0074ed40(long param_1,long *param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  long *plVar13;
  undefined *puVar14;
  uint uVar15;
  char *pcVar16;
  long lVar17;
  long lVar18;
  undefined **local_108;
  char *local_100;
  int local_f8;
  char local_f4 [127];
  undefined1 local_75;
  int local_70;
  
  local_f8 = 0x80;
  local_75 = 0;
  local_108 = &PTR_LAB_048fcff0;
  local_100 = local_f4;
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar16 = (char *)param_2[1];
  if (local_f4 != pcVar16) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar10 = 0;
    do {
      if (*(char *)(param_2[1] + lVar10) == '\0') goto LAB_0074ee0c;
      lVar18 = param_2[1] + lVar10;
      if (*(char *)(lVar18 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_0074ee0c;
      }
      if (*(char *)(lVar18 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_0074ee0c;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_0074ee0c:
    iVar3 = (int)lVar10;
    if (local_f8 <= (int)lVar10) {
      iVar3 = local_f8 + -1;
    }
    memcpy(local_f4,pcVar16,(long)iVar3);
    local_f4[iVar3] = '\0';
  }
  puVar14 = PTR_DAT_04bb2d88;
  local_108 = (undefined **)(PTR_DAT_04bb2d88 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  local_70 = FUN_006bd550(param_2[1],0);
  lVar10 = param_1 + 0x278;
  if (*(long *)(param_1 + 0x280) != lVar10) {
    lVar17 = (long)*(int *)(param_1 + 0x28c);
    uVar15 = 0;
    lVar18 = *(long *)(param_1 + 0x280) - lVar17;
    do {
      if (*(int *)(lVar18 + 0x100) == local_70) {
        plVar13 = (long *)(lVar18 + 0x68);
        (**(code **)(*plVar13 + 0x18))(plVar13);
        (**(code **)(*plVar13 + 0x18))(plVar13);
        pcVar16 = *(char **)(lVar18 + 0x70);
        (*(code *)local_108[3])(&local_108);
        if (pcVar16 == local_100) {
LAB_0074ef90:
          uVar9 = 1;
        }
        else {
          pcVar16 = *(char **)(lVar18 + 0x70);
          if (*pcVar16 != *local_100) goto LAB_0074ee94;
          if (*pcVar16 == '\0') goto LAB_0074ef90;
          uVar11 = 0;
          pcVar12 = local_100 + 1;
          do {
            if (pcVar16[uVar11 + 1] != pcVar12[uVar11]) {
              pcVar12 = (char *)0x0;
              goto LAB_0074efd0;
            }
            if (pcVar16[uVar11 + 1] == '\0') {
              pcVar12 = (char *)0x1;
              goto LAB_0074efd0;
            }
            if (pcVar16[uVar11 + 2] != pcVar12[uVar11 + 1]) {
              pcVar12 = (char *)0x0;
              uVar11 = uVar11 + 1;
              goto LAB_0074efd0;
            }
            if (pcVar16[uVar11 + 2] == '\0') {
              uVar11 = uVar11 + 1;
              pcVar12 = (char *)0x1;
              goto LAB_0074efd0;
            }
            if (uVar11 == 0x7fffe) {
              uVar11 = 0x80000;
              goto LAB_0074efd0;
            }
            lVar5 = uVar11 + 3;
            uVar1 = uVar11 + 2;
            if (pcVar16[lVar5] != pcVar12[uVar11 + 2]) {
              pcVar12 = (char *)0x0;
              goto LAB_0074efcc;
            }
            uVar11 = uVar11 + 3;
          } while (pcVar16[lVar5] != '\0');
          pcVar12 = (char *)0x1;
LAB_0074efcc:
          uVar11 = uVar1;
LAB_0074efd0:
          uVar9 = (uint)(uVar11 < 0x80000) & (uint)pcVar12;
        }
      }
      else {
LAB_0074ee94:
        uVar9 = 0;
      }
      uVar15 = uVar9 | uVar15;
      lVar18 = *(long *)(lVar18 + lVar17 + 8) - lVar17;
    } while (lVar18 != lVar10 - lVar17);
    puVar14 = PTR_DAT_04bb2d88;
    if (uVar15 != 0) {
      return;
    }
  }
  lVar18 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar8 = malloc(0x110);
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar4 = (undefined8 *)(lVar18 + 8);
    if (lVar17 != 0) {
      puVar4 = (undefined8 *)(lVar17 + 0xa8);
    }
    puVar8 = (undefined1 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x110,8);
  }
  *puVar8 = 0;
  *(undefined8 *)(puVar8 + 8) = 0;
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  puVar2 = PTR_DAT_04bdf0c8 + 0x10;
  puVar8[0x20] = 0;
  puVar8[0x30] = 1;
  *(undefined4 *)(puVar8 + 0x34) = 0;
  *(undefined **)(puVar8 + 0x28) = puVar2;
  *(undefined4 *)(puVar8 + 0x78) = 0x80;
  *(undefined8 *)(puVar8 + 0x58) = 0;
  *(undefined8 *)(puVar8 + 0x48) = 0;
  *(undefined8 *)(puVar8 + 0x50) = 0;
  puVar8[0xfb] = 0;
  *(undefined8 *)(puVar8 + 0x38) = 0;
  *(undefined ***)(puVar8 + 0x40) = &PTR_FUN_04ba93e0;
  *(undefined4 *)(puVar8 + 0x60) = 0xffffffff;
  pcVar16 = puVar8 + 0x7c;
  *(char **)(puVar8 + 0x70) = pcVar16;
  uVar6 = s_invalid_name_040e8f53._0_8_;
  if (pcVar16 != "invalid_name") {
    *(undefined4 *)(puVar8 + 0x84) = 0x656d616e;
    puVar8[0x88] = 0;
    *(undefined8 *)pcVar16 = uVar6;
  }
  *(undefined **)(puVar8 + 0x68) = puVar14 + 0x10;
  uVar7 = FUN_006bd550("invalid_name",0);
  *(undefined4 *)(puVar8 + 0x100) = uVar7;
  *(undefined4 *)(puVar8 + 0x108) = 0;
  pcVar12 = *(char **)(puVar8 + 0x70);
  (*(code *)local_108[3])(&local_108);
  pcVar16 = local_100;
  if (pcVar12 != local_100) {
    (*(code *)local_108[3])(&local_108);
    lVar18 = 0;
    do {
      if (local_100[lVar18] == '\0') goto LAB_0074f16c;
      if (local_100[lVar18 + 1] == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_0074f16c;
      }
      if (local_100[lVar18 + 2] == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_0074f16c;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_0074f16c:
    iVar3 = (int)lVar18;
    if (*(int *)(puVar8 + 0x78) <= (int)lVar18) {
      iVar3 = *(int *)(puVar8 + 0x78) + -1;
    }
    memcpy(pcVar12,pcVar16,(long)iVar3);
    pcVar12[iVar3] = '\0';
  }
  *(undefined4 *)(puVar8 + 0x108) = param_3;
  *(int *)(puVar8 + 0x100) = local_70;
  lVar18 = *(long *)(param_1 + 0x278);
  plVar13 = (long *)(puVar8 + *(int *)(param_1 + 0x28c));
  *(long **)(param_1 + 0x278) = plVar13;
  *plVar13 = lVar18;
  plVar13[1] = lVar10;
  if (lVar18 != 0) {
    *(long **)(lVar18 + 8) = plVar13;
  }
  *(int *)(param_1 + 0x288) = *(int *)(param_1 + 0x288) + 1;
  return;
}

