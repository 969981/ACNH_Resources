
void FUN_03d5e7b0(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  void *pvVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  void *__src;
  ulong __n;
  undefined *local_60;
  char *pcStack_58;
  
  FUN_03c5cce8(param_1,param_2,0);
  puVar3 = PTR_DAT_04bd45f0;
  param_1[0x3e] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if (param_3 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(char *)(param_3 + 0x28) != '\0';
  }
  *(bool *)(param_1 + 0x3f) = bVar7;
  puVar6 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    pvVar9 = malloc(0x18);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar11 = (undefined8 *)(lVar12 + 8);
    if (lVar8 != 0) {
      puVar11 = (undefined8 *)(lVar8 + 0xa8);
    }
    pvVar9 = (void *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,0x18,8);
  }
  *(undefined4 *)((long)pvVar9 + 0x10) = 0;
  *(void **)pvVar9 = pvVar9;
  *(void **)((long)pvVar9 + 8) = pvVar9;
  param_1[0x3b] = (long)pvVar9;
  puVar2 = PTR_DAT_04bd4738;
  plVar1 = param_1 + 0x40;
  *(undefined4 *)((long)pvVar9 + 0x14) = 8;
  *param_1 = (long)&PTR_LAB_04b8fd28;
  param_1[0x41] = 0xffffffff;
  param_1[0x40] = (long)(puVar2 + 0x10);
  param_1[0x42] = 0xffffffff;
  param_1[0x43] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x44) = 0;
  param_1[0x4f] = (long)param_1 + 0x284;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x20;
  *(undefined1 *)((long)param_1 + 0x2a3) = 0;
  puVar2 = PTR_DAT_04bb2028;
  *(undefined1 *)((long)param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x57) = 0x20;
  *(undefined1 *)((long)param_1 + 0x2db) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0x40;
  *(undefined1 *)((long)param_1 + 0x333) = 0;
  param_1[0x4e] = (long)(puVar2 + 0x10);
  param_1[0x55] = (long)(puVar2 + 0x10);
  *(undefined1 *)((long)param_1 + 700) = 0;
  *(undefined1 *)((long)param_1 + 0x2f4) = 0;
  param_1[0x56] = (long)param_1 + 700;
  param_1[0x5d] = (long)param_1 + 0x2f4;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined1 *)((long)param_1 + 0x34c) = 0;
  param_1[0x68] = (long)param_1 + 0x34c;
  *(undefined4 *)(param_1 + 0x69) = 0x40;
  *(undefined1 *)((long)param_1 + 0x38b) = 0;
  param_1[0x73] = 0;
  *(undefined2 *)(param_1 + 0x76) = 0;
  *(undefined1 *)((long)param_1 + 0x3b2) = 0;
  param_1[0x5c] = (long)puVar2;
  param_1[0x67] = (long)puVar2;
  param_1[0x72] = 1;
  param_1[0x74] = 0x800000008;
  param_1[0x75] = 0x2000000020;
  *(undefined8 *)((long)param_1 + 0x3b4) = 0x20;
  pvVar9 = (void *)((long)param_1 + 0x3d4);
  param_1[0x78] = (long)&DAT_04b8fe58;
  param_1[0x79] = (long)pvVar9;
  puVar2 = PTR_PTR_04bb8620;
  lVar12 = *(long *)PTR_PTR_04bb8620;
  *(undefined4 *)(param_1 + 0x7a) = 0x40;
  *(undefined2 *)((long)param_1 + 0x452) = 0;
  (**(code **)(lVar12 + 0x18))(puVar2);
  __src = *(void **)(puVar2 + 8);
  if (pvVar9 != __src) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
    lVar12 = 0;
    do {
      if (*(short *)(*(long *)(puVar2 + 8) + lVar12 * 2) == 0) goto LAB_03d5ea30;
      lVar8 = *(long *)(puVar2 + 8) + lVar12 * 2;
      if (*(short *)(lVar8 + 2) == 0) {
        lVar12 = lVar12 + 1;
        goto LAB_03d5ea30;
      }
      if (*(short *)(lVar8 + 4) == 0) {
        lVar12 = lVar12 + 2;
        goto LAB_03d5ea30;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_03d5ea30:
    uVar4 = (uint)lVar12;
    if ((int)param_1[0x7a] <= (int)(uint)lVar12) {
      uVar4 = (int)param_1[0x7a] - 1;
    }
    __n = -(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1;
    memcpy(pvVar9,__src,__n);
    *(undefined2 *)((long)pvVar9 + __n) = 0;
  }
  *(undefined4 *)(param_1 + 0x8d) = 0;
  puVar2 = PTR_DAT_04bc0c10;
  lVar12 = *(long *)puVar3;
  param_1[0x8c] = (long)(param_1 + 0x8b);
  param_1[0x8b] = (long)(param_1 + 0x8b);
  param_1[0x91] = (long)(param_1 + 0x94);
  param_1[0x94] = (long)(param_1 + 0x97);
  param_1[0x8e] = (long)(param_1 + 0x91);
  param_1[0x14e] = 0;
  param_1[0x8f] = (long)(param_1 + 0x91);
  *(undefined4 *)(param_1 + 0x90) = 0x40;
  param_1[0x78] = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x151) = 0;
  param_1[0x97] = (long)(param_1 + 0x9a);
  param_1[0x153] = 0;
  param_1[0x9a] = (long)(param_1 + 0x9d);
  param_1[0x154] = 0;
  param_1[0x9d] = (long)(param_1 + 0xa0);
  param_1[0x155] = 0;
  param_1[0xa0] = (long)(param_1 + 0xa3);
  param_1[0x156] = 0;
  param_1[0xa3] = (long)(param_1 + 0xa6);
  param_1[0x157] = 0;
  param_1[0xa6] = (long)(param_1 + 0xa9);
  param_1[0x158] = 0;
  param_1[0xa9] = (long)(param_1 + 0xac);
  param_1[0x159] = 0;
  param_1[0xac] = (long)(param_1 + 0xaf);
  *(undefined2 *)(param_1 + 0x15a) = 0;
  param_1[0xaf] = (long)(param_1 + 0xb2);
  param_1[0xb2] = (long)(param_1 + 0xb5);
  param_1[0xb5] = (long)(param_1 + 0xb8);
  param_1[0xb8] = (long)(param_1 + 0xbb);
  param_1[0xbb] = (long)(param_1 + 0xbe);
  param_1[0xbe] = (long)(param_1 + 0xc1);
  param_1[0xc1] = (long)(param_1 + 0xc4);
  param_1[0xc4] = (long)(param_1 + 199);
  param_1[199] = (long)(param_1 + 0xca);
  param_1[0xca] = (long)(param_1 + 0xcd);
  param_1[0xcd] = (long)(param_1 + 0xd0);
  param_1[0xd0] = (long)(param_1 + 0xd3);
  param_1[0xd3] = (long)(param_1 + 0xd6);
  param_1[0xd6] = (long)(param_1 + 0xd9);
  param_1[0xd9] = (long)(param_1 + 0xdc);
  param_1[0xdc] = (long)(param_1 + 0xdf);
  param_1[0xdf] = (long)(param_1 + 0xe2);
  param_1[0xe2] = (long)(param_1 + 0xe5);
  param_1[0xe5] = (long)(param_1 + 0xe8);
  param_1[0xe8] = (long)(param_1 + 0xeb);
  param_1[0xeb] = (long)(param_1 + 0xee);
  param_1[0xee] = (long)(param_1 + 0xf1);
  param_1[0xf1] = (long)(param_1 + 0xf4);
  param_1[0xf4] = (long)(param_1 + 0xf7);
  param_1[0xf7] = (long)(param_1 + 0xfa);
  param_1[0xfa] = (long)(param_1 + 0xfd);
  param_1[0xfd] = (long)(param_1 + 0x100);
  param_1[0x100] = (long)(param_1 + 0x103);
  param_1[0x103] = (long)(param_1 + 0x106);
  param_1[0x106] = (long)(param_1 + 0x109);
  param_1[0x109] = (long)(param_1 + 0x10c);
  param_1[0x10c] = (long)(param_1 + 0x10f);
  param_1[0x10f] = (long)(param_1 + 0x112);
  param_1[0x112] = (long)(param_1 + 0x115);
  param_1[0x115] = (long)(param_1 + 0x118);
  param_1[0x118] = (long)(param_1 + 0x11b);
  param_1[0x11b] = (long)(param_1 + 0x11e);
  param_1[0x11e] = (long)(param_1 + 0x121);
  param_1[0x121] = (long)(param_1 + 0x124);
  param_1[0x124] = (long)(param_1 + 0x127);
  param_1[0x127] = (long)(param_1 + 0x12a);
  param_1[0x12a] = (long)(param_1 + 0x12d);
  param_1[0x12d] = (long)(param_1 + 0x130);
  param_1[0x130] = (long)(param_1 + 0x133);
  param_1[0x133] = (long)(param_1 + 0x136);
  param_1[0x136] = (long)(param_1 + 0x139);
  param_1[0x139] = (long)(param_1 + 0x13c);
  param_1[0x13c] = (long)(param_1 + 0x13f);
  param_1[0x13f] = (long)(param_1 + 0x142);
  param_1[0x142] = (long)(param_1 + 0x145);
  param_1[0x145] = (long)(param_1 + 0x148);
  param_1[0x148] = (long)(param_1 + 0x14b);
  param_1[0x14b] = (long)(param_1 + 0x14e);
  if (lVar12 == 0) {
    plVar10 = malloc(0x18);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    puVar11 = (undefined8 *)(lVar12 + 8);
    if (lVar8 != 0) {
      puVar11 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,0x18,8);
  }
  *(undefined4 *)(plVar10 + 2) = 0xc0c0400;
  *plVar10 = (long)(PTR_DAT_04bb4f28 + 0x10);
  plVar10[1] = (long)(param_1 + 0x153);
  param_1[0x152] = (long)plVar10;
  FUN_03ebac90(plVar1,4,0,0,0);
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "State::Sleep";
  local_60 = puVar3;
  FUN_03ebaf40(plVar1,0,&local_60);
  puVar11 = (undefined8 *)param_1[0x46];
  puVar11[4] = &LAB_03d5eec4;
  puVar11[5] = 0;
  *puVar11 = &PTR_LAB_04b8fe88;
  puVar11[1] = param_1;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  pcStack_58 = "State::FadeIn";
  local_60 = puVar3;
  FUN_03ebaf40(plVar1,1,&local_60);
  puVar11 = (undefined8 *)(param_1[0x46] + (ulong)(1 < *(uint *)(param_1 + 0x45)) * 0x40);
  *puVar11 = &PTR_LAB_04b8fe88;
  puVar11[1] = param_1;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = &LAB_03d5eed0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  pcStack_58 = "State::In";
  local_60 = puVar3;
  FUN_03ebaf40(plVar1,2,&local_60);
  puVar11 = (undefined8 *)(param_1[0x46] + (ulong)(2 < *(uint *)(param_1 + 0x45)) * 0x80);
  *puVar11 = &PTR_LAB_04b8fe88;
  puVar11[1] = param_1;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = &LAB_03d5f39c;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  pcStack_58 = "State::FadeOut";
  local_60 = puVar3;
  FUN_03ebaf40(plVar1,3,&local_60);
  lVar12 = 0xc0;
  if (*(uint *)(param_1 + 0x45) < 4) {
    lVar12 = 0;
  }
  puVar11 = (undefined8 *)(param_1[0x46] + lVar12);
  *puVar11 = &PTR_LAB_04b8fe88;
  puVar11[1] = param_1;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = &LAB_03d5f3e0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  uVar4 = *(uint *)(param_1 + 0x43);
  *(undefined1 *)((long)param_1 + 0x221) = 1;
  *(int *)(param_1 + 0x42) = (int)param_1[0x41];
  uVar5 = *(undefined4 *)((long)param_1 + 0x20c);
  *(uint *)(param_1 + 0x41) = uVar4;
  *(undefined4 *)((long)param_1 + 0x20c) = 0;
  *(undefined4 *)((long)param_1 + 0x214) = uVar5;
  if (uVar4 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x45) <= uVar4) {
      uVar4 = 0;
    }
    puVar11 = *(undefined8 **)(param_1[0x46] + (long)(int)uVar4 * 0x40);
    if (puVar11 != (undefined8 *)0x0) {
      (*(code *)*puVar11)();
    }
  }
  return;
}

