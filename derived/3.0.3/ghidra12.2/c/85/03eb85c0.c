
void FUN_03eb85c0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *local_1a0;
  undefined1 *local_198;
  undefined **local_190;
  undefined1 *local_188;
  int local_180;
  undefined1 local_17c [255];
  undefined1 local_7d;
  
  if ((*(long **)(*(long *)(*(long *)PTR_DAT_04bb2720 + 0x330) + 0xd0) != param_1) &&
     (uVar5 = (**(code **)(*param_1 + 0x70))(param_1), 0x100000 < uVar5)) {
    lVar6 = (**(code **)(*param_1 + 0x70))(param_1);
    lVar7 = (**(code **)(*param_1 + 0x78))(param_1);
    uVar5 = (**(code **)(*param_1 + 0x70))(param_1);
    local_7d = 0;
    local_188 = local_17c;
    local_180 = 0x100;
    local_17c[0] = 0;
    lVar9 = param_1[8];
    local_190 = &PTR_LAB_048f9a70;
    if (lVar9 != *(long *)(*(long *)(DAT_05aed670 + 0x330) + 0xd0)) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      do {
        puVar4 = local_188;
        local_198 = &DAT_040d1eaa;
        local_1a0 = puVar1;
        (*(code *)local_190[3])(&local_190);
        lVar8 = 0;
        do {
          if (local_188[lVar8] == '\0') goto LAB_03eb8764;
          if (local_188[lVar8 + 1] == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_03eb8764;
          }
          if (local_188[lVar8 + 2] == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_03eb8764;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_03eb8764:
        uVar2 = (uint)lVar8 & ((int)(uint)lVar8 >> 0x1f ^ 0xffffffffU);
        (**(code **)(local_1a0 + 0x18))(&local_1a0);
        lVar8 = 0;
        do {
          if (local_198[lVar8] == '\0') goto LAB_03eb87c4;
          if (local_198[lVar8 + 1] == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_03eb87c4;
          }
          if (local_198[lVar8 + 2] == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_03eb87c4;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_03eb87c4:
        uVar3 = (uint)lVar8;
        if ((int)(local_180 - uVar2) <= (int)(uint)lVar8) {
          uVar3 = local_180 + ~uVar2;
        }
        if (0 < (int)uVar3) {
          (**(code **)(local_1a0 + 0x18))(&local_1a0);
          memcpy(puVar4 + uVar2,local_198,(ulong)uVar3);
          puVar4[(int)(uVar3 + uVar2)] = 0;
        }
        lVar9 = *(long *)(lVar9 + 0x40);
      } while (lVar9 != *(long *)(*(long *)(*(long *)PTR_DAT_04bb2720 + 0x330) + 0xd0));
    }
    (*(code *)local_190[3])(&local_190);
    puVar4 = local_188;
    (**(code **)(param_1[4] + 0x18))(param_1 + 4);
    FUN_038d13f0((double)((float)(ulong)(lVar6 - lVar7) * 0.0009765625 * 0.0009765625),
                 (double)((float)uVar5 * 0.0009765625 * 0.0009765625),param_2,
                 "  %s%s:\t%5.1f / %5.1f [use(MB) / all(MB)]\n",puVar4,param_1[5]);
  }
  if ((long *)param_1[10] != param_1 + 9) {
    lVar7 = (long)*(int *)((long)param_1 + 0x5c);
    lVar6 = param_1[10] - lVar7;
    do {
      FUN_03eb85c0(lVar6,param_2);
      lVar6 = *(long *)(lVar6 + lVar7 + 8) - lVar7;
    } while (lVar6 != (long)(param_1 + 9) - (long)*(int *)((long)param_1 + 0x5c));
  }
  return;
}

