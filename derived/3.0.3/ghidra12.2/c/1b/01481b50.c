
void FUN_01481b50(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04bbce70;
  param_1[0x111] = (long)&PTR_LAB_049a53f8;
  *param_1 = (long)(puVar1 + 0x10);
  if (0 < (int)param_1[0x118]) {
    lVar8 = 0;
    do {
      plVar6 = *(long **)(param_1[0x119] + lVar8 * 8);
      (**(code **)*plVar6)(plVar6);
      lVar8 = lVar8 + 1;
      *plVar6 = param_1[0x11a];
      param_1[0x11a] = (long)plVar6;
    } while (lVar8 < (int)param_1[0x118]);
  }
  puVar2 = PTR_DAT_04bb33a8;
  *(undefined4 *)(param_1 + 0x118) = 0;
  param_1[0x110] = 0;
  param_1[0x10b] = (long)(puVar2 + 0x10);
  puVar3 = PTR_DAT_04bb3058;
  puVar1 = PTR_DAT_04bb3550 + 0x10;
  lVar8 = *(long *)PTR_DAT_04bb3058;
  param_1[0x103] = (long)puVar1;
  uVar5 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x10a])
  ;
  if (((uVar5 & 1) != 0) && (pvVar7 = (void *)param_1[0x10a], pvVar7 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
      }
    }
  }
  lVar8 = *(long *)puVar3;
  param_1[0x10a] = 0;
  param_1[0xfb] = (long)puVar1;
  uVar5 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x102])
  ;
  if (((uVar5 & 1) != 0) && (pvVar7 = (void *)param_1[0x102], pvVar7 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
      }
    }
  }
  param_1[0x102] = 0;
  puVar1 = PTR_DAT_04bb5a88;
  puVar2 = puVar2 + 0x10;
  param_1[0xfa] = 0;
  param_1[0xf4] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0xee] = 0;
  param_1[0xef] = (long)puVar2;
  param_1[0xe9] = (long)puVar2;
  param_1[0xe3] = (long)puVar2;
  param_1[0xe8] = 0;
  param_1[0xe2] = 0;
  param_1[0xd7] = (long)puVar2;
  param_1[0xdc] = 0;
  param_1[0xd6] = 0;
  param_1[0xf5] = (long)puVar1;
  param_1[0xdd] = (long)puVar1;
  param_1[0xd1] = (long)puVar1;
  param_1[0xcb] = (long)puVar1;
  param_1[0xd0] = 0;
  param_1[0xc5] = (long)puVar1;
  param_1[0xca] = 0;
  puVar3 = PTR_DAT_04bb62c0 + 0x10;
  param_1[0xc4] = 0;
  param_1[0xb9] = (long)puVar1;
  param_1[0xbe] = 0;
  param_1[0xb3] = (long)puVar2;
  param_1[0xb8] = 0;
  param_1[0xad] = (long)puVar2;
  param_1[0xb2] = 0;
  param_1[0xbf] = (long)puVar3;
  puVar3 = PTR_DAT_04bb3380 + 0x10;
  param_1[0xa7] = (long)puVar3;
  puVar4 = PTR_DAT_04bb5a60 + 0x10;
  param_1[0xac] = 0;
  param_1[0xa6] = 0;
  param_1[0x9a] = (long)puVar2;
  param_1[0x9f] = 0;
  param_1[0x94] = (long)puVar2;
  param_1[0xa0] = (long)puVar4;
  puVar4 = PTR_DAT_04bb31d0 + 0x10;
  param_1[0x99] = 0;
  param_1[0x93] = 0;
  param_1[0x8d] = 0;
  param_1[0x87] = 0;
  param_1[0x81] = 0;
  param_1[0x76] = (long)puVar1;
  param_1[0x7b] = 0;
  param_1[0x70] = (long)puVar2;
  param_1[0x75] = 0;
  param_1[0x6a] = (long)puVar2;
  param_1[0x6f] = 0;
  param_1[0x69] = 0;
  param_1[0x5e] = (long)puVar1;
  param_1[99] = 0;
  param_1[0x58] = (long)puVar1;
  param_1[0x5d] = 0;
  param_1[0x52] = (long)puVar1;
  param_1[0x57] = 0;
  param_1[0x4c] = (long)puVar1;
  param_1[0x51] = 0;
  param_1[0x46] = (long)puVar2;
  param_1[0x4b] = 0;
  param_1[0x45] = 0;
  param_1[0x8e] = (long)puVar4;
  param_1[0x88] = (long)puVar4;
  param_1[0x82] = (long)puVar4;
  param_1[0x7c] = (long)puVar4;
  param_1[100] = (long)puVar4;
  param_1[0x3f] = 0;
  param_1[0x40] = (long)puVar2;
  puVar1 = PTR_DAT_04bb5890 + 0x10;
  param_1[0x18] = (long)puVar2;
  param_1[0x39] = 0;
  param_1[0x3a] = (long)puVar3;
  param_1[0x32] = 0;
  param_1[0x33] = (long)puVar1;
  param_1[0x2b] = 0;
  param_1[0x2c] = (long)puVar1;
  param_1[0x24] = 0;
  param_1[0x25] = (long)puVar1;
  param_1[0x1d] = 0;
  param_1[0x1e] = (long)puVar1;
  return;
}

