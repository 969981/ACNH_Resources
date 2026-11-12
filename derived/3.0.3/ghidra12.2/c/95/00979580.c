
undefined8 FUN_00979580(long *param_1,long param_2,int *param_3,int *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  byte *pbVar14;
  uint uVar15;
  undefined *local_178;
  char *local_170;
  int local_168;
  char local_164 [255];
  undefined1 local_65;
  
  local_164[0] = '\0';
  local_168 = 0x100;
  lVar9 = 0;
  local_65 = 0;
  local_178 = PTR_DAT_04bb21f8 + 0x10;
  do {
    if (local_164[lVar9] == '\0') goto LAB_00979620;
    if (local_164[lVar9 + 1] == '\0') {
      lVar9 = lVar9 + 1;
      goto LAB_00979620;
    }
    if (local_164[lVar9 + 2] == '\0') {
      lVar9 = lVar9 + 2;
      goto LAB_00979620;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_00979620:
  uVar2 = (uint)lVar9 & ((int)(uint)lVar9 >> 0x1f ^ 0xffffffffU);
  local_170 = local_164;
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar9 = 0;
  do {
    if (*(char *)(param_1[1] + lVar9) == '\0') goto LAB_0097967c;
    lVar1 = param_1[1] + lVar9;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar9 = lVar9 + 1;
      goto LAB_0097967c;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar9 = lVar9 + 2;
      goto LAB_0097967c;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_0097967c:
  uVar15 = (uint)lVar9;
  if ((int)(local_168 - uVar2) <= (int)(uint)lVar9) {
    uVar15 = local_168 + ~uVar2;
  }
  if (0 < (int)uVar15) {
    (**(code **)(*param_1 + 0x18))(param_1);
    memcpy(local_164 + uVar2,(void *)param_1[1],(ulong)uVar15);
    local_164[(int)(uVar15 + uVar2)] = '\0';
  }
  pcVar5 = local_170;
  (**(code **)(local_178 + 0x18))(&local_178);
  lVar9 = 0;
  do {
    if (local_170[lVar9] == '\0') goto LAB_0097971c;
    if (local_170[lVar9 + 1] == '\0') {
      lVar9 = lVar9 + 1;
      goto LAB_0097971c;
    }
    if (local_170[lVar9 + 2] == '\0') {
      lVar9 = lVar9 + 2;
      goto LAB_0097971c;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_0097971c:
  uVar2 = (uint)lVar9 & ((int)(uint)lVar9 >> 0x1f ^ 0xffffffffU);
  uVar15 = 4;
  if ((int)(local_168 - uVar2) < 5) {
    uVar15 = local_168 + ~uVar2;
  }
  if (0 < (int)uVar15) {
    memcpy(pcVar5 + uVar2,&DAT_0405c04e,(ulong)uVar15);
    pcVar5[(ulong)uVar15 + (ulong)uVar2] = '\0';
  }
  uVar6 = 0;
  if (DAT_04cf8698 != 0) {
    lVar9 = FUN_009591f0(DAT_04cf8698,&local_178);
    uVar6 = 0;
    if (lVar9 != 0) {
      bVar13 = false;
      uVar10 = 0;
      uVar12 = 0;
      uVar8 = 0;
      uVar11 = 0;
      pbVar14 = (byte *)(lVar9 + 0x47);
      uVar3 = *(int *)(lVar9 + 4) - 1;
      uVar4 = *(int *)(lVar9 + 8) - 1;
      uVar2 = uVar3 & (int)uVar3 >> 0x1f;
      uVar15 = uVar4 & (int)uVar4 >> 0x1f;
      uVar7 = uVar2;
      do {
        if (((((0xf < pbVar14[-3] || (1 << (ulong)(pbVar14[-3] & 0x1f) & 0x8880U) == 0) ||
              (0xf < pbVar14[-2])) || ((1 << (ulong)(pbVar14[-2] & 0x1f) & 0x8880U) == 0)) ||
            ((0xf < pbVar14[-1] || ((1 << (ulong)(pbVar14[-1] & 0x1f) & 0x8880U) == 0)))) ||
           ((0xf < *pbVar14 || ((1 << (ulong)(*pbVar14 & 0x1f) & 0x8880U) == 0)))) {
          if (bVar13) {
            bVar13 = true;
            if ((int)uVar7 <= (int)uVar12) {
              uVar12 = uVar7;
            }
            if ((int)uVar11 <= (int)uVar7) {
              uVar11 = uVar7;
            }
            if ((int)uVar15 <= (int)uVar10) {
              uVar10 = uVar15;
            }
            if ((int)uVar8 <= (int)uVar15) {
              uVar8 = uVar15;
            }
          }
          else {
            bVar13 = true;
            uVar12 = uVar7;
            uVar11 = uVar7;
            uVar10 = uVar15;
            uVar8 = uVar15;
          }
        }
        pbVar14 = pbVar14 + 0x34;
        if ((int)uVar7 < (int)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU))) {
          uVar7 = uVar7 + 1;
        }
        else {
          uVar15 = uVar15 + 1;
          uVar7 = uVar2;
        }
      } while ((uVar2 != uVar7) || ((uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) + 1 != uVar15));
      if (param_2 != 0) {
        *(uint *)(param_2 + 8) = *(int *)(lVar9 + 0xc) + uVar12;
        *(uint *)(param_2 + 0xc) = *(int *)(lVar9 + 0x10) + uVar10;
      }
      if (param_3 != (int *)0x0) {
        *param_3 = (uVar11 - uVar12) + 1;
      }
      if (param_4 != (int *)0x0) {
        *param_4 = (uVar8 - uVar10) + 1;
      }
      uVar6 = 1;
    }
  }
  return uVar6;
}

