
void FUN_02feb1f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *__s;
  ulong __size;
  size_t __n;
  long lVar13;
  uint uVar14;
  undefined *local_70;
  char *pcStack_68;
  
  *(undefined4 *)(param_1 + 1) = 0;
  puVar2 = PTR_DAT_04bd4738;
  param_1[2] = 0;
  param_1[6] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  plVar11 = param_1 + 3;
  *plVar11 = (long)(puVar2 + 0x10);
  *param_1 = &PTR_FUN_04aefac8;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xd] = param_2;
  *(undefined2 *)(param_1 + 0xc) = 0;
  if ((int)param_4 < 1) {
LAB_02feb3d8:
    if (param_4 == 0) goto LAB_02feb514;
  }
  else {
    uVar12 = param_4 & 0xffffffff;
    __size = uVar12 * 0x150 | 8;
    lVar13 = *(long *)PTR_DAT_04bb2698;
    if (lVar13 == 0) {
      puVar8 = malloc(__size);
joined_r0x02feb2f8:
      if (puVar8 != (ulong *)0x0) {
        *puVar8 = uVar12;
        puVar2 = PTR_DAT_04bb2bc0 + 0x10;
        puVar1 = PTR_DAT_04bc8e10 + 0x10;
        lVar13 = 0;
        do {
          puVar10 = (undefined8 *)((long)puVar8 + lVar13 + 0x24);
          *(undefined ***)((long)puVar8 + lVar13 + 8) = &PTR_LAB_04aefb20;
          *(undefined4 *)((long)puVar8 + lVar13 + 0x20) = 0x40;
          *(undefined8 **)((long)puVar8 + lVar13 + 0x18) = puVar10;
          *(undefined1 *)((long)puVar8 + lVar13 + 99) = 0;
          if (puVar10 != &DAT_0407ebb1) {
            *(undefined1 *)puVar10 = 0;
          }
          lVar6 = lVar13 + 0x150;
          *(undefined **)((long)puVar8 + lVar13 + 0x10) = puVar2;
          *(undefined8 *)((long)puVar8 + lVar13 + 0x68) = 0x1ffffffff;
          *(undefined8 *)((long)puVar8 + lVar13 + 0x70) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0xb8) = 0;
          *(undefined4 *)((long)puVar8 + lVar13 + 0xc0) = 0xffffffff;
          *(undefined4 *)((long)puVar8 + lVar13 + 0x108) = 0x10000;
          *(undefined4 *)((long)puVar8 + lVar13 + 0x120) = 0;
          *(undefined4 *)((long)puVar8 + lVar13 + 0x128) = 0;
          *(undefined4 *)((long)puVar8 + lVar13 + 0x140) = 0;
          *(undefined4 *)((long)puVar8 + lVar13 + 0x148) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0x78) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0x80) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0x88) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0x90) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0x98) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0xa0) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0xa8) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0xb0) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 200) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0xd0) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0xd8) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0xe0) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0xe8) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0xf0) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0xf8) = 0;
          *(char **)((long)puVar8 + lVar13 + 0x100) = "agl::TextureData";
          *(undefined **)((long)puVar8 + lVar13 + 0x110) = puVar1;
          *(undefined8 *)((long)puVar8 + lVar13 + 0x118) = 0xffffffffffffffff;
          *(undefined **)((long)puVar8 + lVar13 + 0x130) = puVar1;
          *(undefined8 *)((long)puVar8 + lVar13 + 0x138) = 0xffffffffffffffff;
          lVar13 = lVar6;
        } while (uVar12 * 0x150 != lVar6);
        *(int *)(param_1 + 1) = (int)param_4;
        param_1[2] = puVar8 + 1;
        goto LAB_02feb3d8;
      }
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar13 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 != (long *)0x0) {
        puVar8 = (ulong *)(**(code **)(*plVar7 + 0x30))(plVar7,__size,8);
        goto joined_r0x02feb2f8;
      }
    }
  }
  uVar14 = 0;
  puVar10 = param_3 + param_4 * 7;
  do {
    lVar13 = param_1[2];
    puVar9 = (undefined8 *)*param_3;
    uVar4 = uVar14;
    if (*(uint *)(param_1 + 1) <= uVar14) {
      uVar4 = 0;
    }
    uVar12 = (ulong)uVar4;
    __s = *(undefined8 **)(lVar13 + uVar12 * 0x150 + 0x10);
    if (puVar9 == (undefined8 *)0x0) {
      if (__s != &DAT_0407ebb1) {
        iVar5 = *(int *)(lVar13 + uVar12 * 0x150 + 0x18);
        iVar3 = 0;
        if (iVar5 < 1) {
          iVar3 = iVar5 + -1;
        }
        __n = (size_t)iVar3;
        memset(__s,0,__n);
        goto LAB_02feb420;
      }
    }
    else if (__s != puVar9) {
      lVar6 = 0;
      do {
        if (*(char *)((long)puVar9 + lVar6) == '\0') goto LAB_02feb3fc;
        if (*(char *)((long)puVar9 + lVar6 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_02feb3fc;
        }
        if (*(char *)((long)puVar9 + lVar6 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_02feb3fc;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_02feb3fc:
      iVar5 = *(int *)(lVar13 + uVar12 * 0x150 + 0x18);
      iVar3 = (int)lVar6;
      if (iVar5 <= (int)lVar6) {
        iVar3 = iVar5 + -1;
      }
      __n = (size_t)iVar3;
      memcpy(__s,puVar9,__n);
LAB_02feb420:
      *(undefined1 *)((long)__s + __n) = 0;
    }
    lVar13 = lVar13 + uVar12 * 0x150;
    uVar14 = uVar14 + 1;
    *(undefined8 *)(lVar13 + 0x130) = 0xffffffffffffffff;
    *(undefined8 *)(lVar13 + 0x130) = param_3[4];
    *(undefined4 *)(lVar13 + 0x138) = *(undefined4 *)(param_3 + 5);
    *(undefined4 *)(lVar13 + 0x140) = *(undefined4 *)(param_3 + 6);
    *(undefined4 *)(lVar13 + 0x148) = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)(lVar13 + 100) = *(undefined4 *)((long)param_3 + 0xc);
    puVar9 = param_3 + 2;
    param_3 = param_3 + 7;
    *(undefined4 *)(lVar13 + 0x14c) = *(undefined4 *)puVar9;
  } while (param_3 != puVar10);
LAB_02feb514:
  FUN_03ebac90(plVar11,3,0,0,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "State::cInit";
  local_70 = puVar2;
  FUN_03ebaf40(plVar11,0,&local_70);
  puVar10 = (undefined8 *)param_1[9];
  puVar10[2] = &LAB_02feb6a4;
  puVar10[3] = 0;
  puVar10[4] = &LAB_02feb754;
  puVar10[5] = 0;
  *puVar10 = &PTR_LAB_04aefb48;
  puVar10[1] = param_1;
  puVar10[6] = &LAB_02feb770;
  puVar10[7] = 0;
  pcStack_68 = "State::cLoadTexture";
  local_70 = puVar2;
  FUN_03ebaf40(plVar11,1,&local_70);
  puVar10 = (undefined8 *)(param_1[9] + (ulong)(1 < *(uint *)(param_1 + 8)) * 0x40);
  puVar10[4] = &LAB_02feb880;
  puVar10[5] = 0;
  *puVar10 = &PTR_LAB_04aefb48;
  puVar10[1] = param_1;
  puVar10[2] = &LAB_02feb780;
  puVar10[3] = 0;
  puVar10[6] = &LAB_02feb96c;
  puVar10[7] = 0;
  pcStack_68 = "State::cPlay";
  local_70 = puVar2;
  FUN_03ebaf40(plVar11,2,&local_70);
  puVar10 = (undefined8 *)(param_1[9] + (ulong)(2 < *(uint *)(param_1 + 8)) * 0x80);
  puVar10[2] = &LAB_02feb978;
  puVar10[3] = 0;
  *puVar10 = &PTR_LAB_04aefb48;
  puVar10[1] = param_1;
  puVar10[6] = &LAB_02feb994;
  puVar10[7] = 0;
  puVar10[4] = &LAB_02feb97c;
  puVar10[5] = 0;
  *(undefined1 *)((long)param_1 + 0x39) = 1;
  uVar14 = *(uint *)(param_1 + 6);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_1 + 0x24);
  *(uint *)(param_1 + 4) = uVar14;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  if (uVar14 != 0xffffffff) {
    if (*(uint *)(param_1 + 8) <= uVar14) {
      uVar14 = 0;
    }
    puVar10 = *(undefined8 **)(param_1[9] + (long)(int)uVar14 * 0x40);
    if (puVar10 != (undefined8 *)0x0) {
      (*(code *)*puVar10)();
    }
  }
  return;
}

