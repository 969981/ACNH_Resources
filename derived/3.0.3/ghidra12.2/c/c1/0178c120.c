
void FUN_0178c120(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar11;
  undefined8 uVar10;
  undefined1 *puVar12;
  undefined *local_108;
  undefined1 *local_100;
  int local_f8;
  undefined1 local_f4 [127];
  undefined1 local_75;
  undefined *local_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)(param_1 + 0x360);
  local_70 = PTR_DAT_04bb2020 + 0x10;
  FUN_017779b0(param_2,&local_70,param_1 + 0x530);
  if (*(char *)(param_1 + 0x298) == '\0') {
    if (*(char *)(param_1 + 0x488) == '\0') {
      return;
    }
    local_75 = 0;
    local_f8 = 0x80;
    local_100 = local_f4;
    local_f4[0] = 0;
    local_108 = PTR_DAT_04bb2d88 + 0x10;
    if (param_5 != 0) {
      uVar10 = 0;
      if (*(long *)(param_5 + 8) != 0) {
        if ((*(long *)(*(long *)(param_5 + 8) + 0x20) == 0) || (lVar9 = FUN_038fde10(), lVar9 == 0))
        {
          uVar10 = 0;
        }
        else {
          uVar10 = **(undefined8 **)(lVar9 + 0x28);
        }
      }
      *(undefined8 *)(param_1 + 0x598) = uVar10;
    }
    puVar7 = local_100;
    puVar5 = PTR_DAT_04bbe330;
    if (param_3 == 0) {
      return;
    }
    (**(code **)(*(long *)PTR_DAT_04bbe330 + 0x18))(PTR_DAT_04bbe330);
    puVar12 = *(undefined1 **)(puVar5 + 8);
    if (puVar7 != puVar12) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
      lVar9 = 0;
      do {
        if (*(char *)(*(long *)(puVar5 + 8) + lVar9) == '\0') goto LAB_0178c67c;
        lVar1 = *(long *)(puVar5 + 8) + lVar9;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_0178c67c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_0178c67c;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_0178c67c:
      iVar3 = (int)lVar9;
      if (local_f8 <= (int)lVar9) {
        iVar3 = local_f8 + -1;
      }
      memcpy(puVar7,puVar12,(long)iVar3);
      puVar7[iVar3] = 0;
    }
    puVar7 = local_100;
    (**(code **)(local_108 + 0x18))(&local_108);
    puVar6 = PTR_DAT_04bbe3b0;
    lVar9 = 0;
    do {
      if (local_100[lVar9] == '\0') goto LAB_0178c6fc;
      if (local_100[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0178c6fc;
      }
      if (local_100[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_0178c6fc;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0178c6fc:
    uVar2 = (uint)lVar9 & ((int)(uint)lVar9 >> 0x1f ^ 0xffffffffU);
    (**(code **)(*(long *)PTR_DAT_04bbe3b0 + 0x18))(PTR_DAT_04bbe3b0);
    lVar9 = 0;
    do {
      if (*(char *)(*(long *)(puVar6 + 8) + lVar9) == '\0') goto LAB_0178c75c;
      lVar1 = *(long *)(puVar6 + 8) + lVar9;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0178c75c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_0178c75c;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0178c75c:
    uVar4 = (uint)lVar9;
    if ((int)(local_f8 - uVar2) <= (int)(uint)lVar9) {
      uVar4 = local_f8 + ~uVar2;
    }
    if (0 < (int)uVar4) {
      (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
      memcpy(puVar7 + uVar2,*(void **)(puVar6 + 8),(ulong)uVar4);
      puVar7[(int)(uVar4 + uVar2)] = 0;
    }
    if ((*(long *)(param_3 + 8) == 0) ||
       (lVar9 = *(long *)(*(long *)(param_3 + 8) + 0x20), lVar9 == 0)) {
      uVar10 = 0;
    }
    else {
      (**(code **)(local_108 + 0x18))(&local_108);
      uVar10 = FUN_038fe510(lVar9,local_100);
    }
    puVar7 = local_100;
    lVar9 = *(long *)puVar5;
    *(undefined8 *)(param_1 + 0x5a0) = uVar10;
    (**(code **)(lVar9 + 0x18))(puVar5);
    puVar12 = *(undefined1 **)(puVar5 + 8);
    if (puVar7 != puVar12) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
      lVar9 = 0;
      do {
        if (*(char *)(*(long *)(puVar5 + 8) + lVar9) == '\0') goto LAB_0178c85c;
        lVar1 = *(long *)(puVar5 + 8) + lVar9;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_0178c85c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_0178c85c;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_0178c85c:
      iVar3 = (int)lVar9;
      if (local_f8 <= (int)lVar9) {
        iVar3 = local_f8 + -1;
      }
      memcpy(puVar7,puVar12,(long)iVar3);
      puVar7[iVar3] = 0;
    }
    puVar7 = local_100;
    (**(code **)(local_108 + 0x18))(&local_108);
    puVar5 = PTR_DAT_04bbe3b8;
    lVar9 = 0;
    do {
      if (local_100[lVar9] == '\0') goto LAB_0178c8dc;
      if (local_100[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0178c8dc;
      }
      if (local_100[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_0178c8dc;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0178c8dc:
    uVar2 = (uint)lVar9 & ((int)(uint)lVar9 >> 0x1f ^ 0xffffffffU);
    (**(code **)(*(long *)PTR_DAT_04bbe3b8 + 0x18))(PTR_DAT_04bbe3b8);
    lVar9 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar9) == '\0') goto LAB_0178c93c;
      lVar1 = *(long *)(puVar5 + 8) + lVar9;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0178c93c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_0178c93c;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0178c93c:
    uVar4 = (uint)lVar9;
    if ((int)(local_f8 - uVar2) <= (int)(uint)lVar9) {
      uVar4 = local_f8 + ~uVar2;
    }
    if (0 < (int)uVar4) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
      memcpy(puVar7 + uVar2,*(void **)(puVar5 + 8),(ulong)uVar4);
      puVar7[(int)(uVar4 + uVar2)] = 0;
    }
    if (*(long *)(param_3 + 8) != 0) {
      lVar9 = *(long *)(*(long *)(param_3 + 8) + 0x20);
      goto joined_r0x0178c994;
    }
  }
  else {
    local_75 = 0;
    local_f8 = 0x80;
    local_100 = local_f4;
    local_f4[0] = 0;
    local_108 = PTR_DAT_04bb2d88 + 0x10;
    uVar8 = FUN_01596728(*(long *)(param_1 + 0x2d8) + 8);
    puVar7 = local_100;
    if ((uVar8 & 1) == 0) {
      uVar10 = 0;
      if (*(long *)(DAT_05231900 + 0x100) != 0) {
        puVar11 = (undefined8 *)(*(long *)(DAT_05231900 + 0x100) + 0xd41d0);
        goto LAB_0178c238;
      }
    }
    else {
      lVar9 = *(long *)(*(long *)(param_1 + 0x2d8) + 0x20);
      uVar10 = 0;
      if (lVar9 != 0) {
        puVar11 = (undefined8 *)(lVar9 + 0x380);
LAB_0178c238:
        uVar10 = *puVar11;
      }
    }
    *(undefined8 *)(param_1 + 0x598) = uVar10;
    puVar5 = PTR_DAT_04bbe330;
    if (param_3 == 0) {
      return;
    }
    (**(code **)(*(long *)PTR_DAT_04bbe330 + 0x18))(PTR_DAT_04bbe330);
    puVar12 = *(undefined1 **)(puVar5 + 8);
    if (puVar7 != puVar12) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
      lVar9 = 0;
      do {
        if (*(char *)(*(long *)(puVar5 + 8) + lVar9) == '\0') goto LAB_0178c2cc;
        lVar1 = *(long *)(puVar5 + 8) + lVar9;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_0178c2cc;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_0178c2cc;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_0178c2cc:
      iVar3 = (int)lVar9;
      if (local_f8 <= (int)lVar9) {
        iVar3 = local_f8 + -1;
      }
      memcpy(puVar7,puVar12,(long)iVar3);
      puVar7[iVar3] = 0;
    }
    puVar7 = local_100;
    (**(code **)(local_108 + 0x18))(&local_108);
    puVar6 = PTR_DAT_04bbe3b0;
    lVar9 = 0;
    do {
      if (local_100[lVar9] == '\0') goto LAB_0178c34c;
      if (local_100[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0178c34c;
      }
      if (local_100[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_0178c34c;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0178c34c:
    uVar2 = (uint)lVar9 & ((int)(uint)lVar9 >> 0x1f ^ 0xffffffffU);
    (**(code **)(*(long *)PTR_DAT_04bbe3b0 + 0x18))(PTR_DAT_04bbe3b0);
    lVar9 = 0;
    do {
      if (*(char *)(*(long *)(puVar6 + 8) + lVar9) == '\0') goto LAB_0178c3ac;
      lVar1 = *(long *)(puVar6 + 8) + lVar9;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0178c3ac;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_0178c3ac;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0178c3ac:
    uVar4 = (uint)lVar9;
    if ((int)(local_f8 - uVar2) <= (int)(uint)lVar9) {
      uVar4 = local_f8 + ~uVar2;
    }
    if (0 < (int)uVar4) {
      (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
      memcpy(puVar7 + uVar2,*(void **)(puVar6 + 8),(ulong)uVar4);
      puVar7[(int)(uVar4 + uVar2)] = 0;
    }
    if ((*(long *)(param_3 + 8) == 0) ||
       (lVar9 = *(long *)(*(long *)(param_3 + 8) + 0x20), lVar9 == 0)) {
      uVar10 = 0;
    }
    else {
      (**(code **)(local_108 + 0x18))(&local_108);
      uVar10 = FUN_038fe510(lVar9,local_100);
    }
    puVar7 = local_100;
    lVar9 = *(long *)puVar5;
    *(undefined8 *)(param_1 + 0x5a0) = uVar10;
    (**(code **)(lVar9 + 0x18))(puVar5);
    puVar12 = *(undefined1 **)(puVar5 + 8);
    if (puVar7 != puVar12) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
      lVar9 = 0;
      do {
        if (*(char *)(*(long *)(puVar5 + 8) + lVar9) == '\0') goto LAB_0178c4ac;
        lVar1 = *(long *)(puVar5 + 8) + lVar9;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_0178c4ac;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_0178c4ac;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_0178c4ac:
      iVar3 = (int)lVar9;
      if (local_f8 <= (int)lVar9) {
        iVar3 = local_f8 + -1;
      }
      memcpy(puVar7,puVar12,(long)iVar3);
      puVar7[iVar3] = 0;
    }
    puVar7 = local_100;
    (**(code **)(local_108 + 0x18))(&local_108);
    puVar5 = PTR_DAT_04bbe3b8;
    lVar9 = 0;
    do {
      if (local_100[lVar9] == '\0') goto LAB_0178c52c;
      if (local_100[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0178c52c;
      }
      if (local_100[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_0178c52c;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0178c52c:
    uVar2 = (uint)lVar9 & ((int)(uint)lVar9 >> 0x1f ^ 0xffffffffU);
    (**(code **)(*(long *)PTR_DAT_04bbe3b8 + 0x18))(PTR_DAT_04bbe3b8);
    lVar9 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar9) == '\0') goto LAB_0178c58c;
      lVar1 = *(long *)(puVar5 + 8) + lVar9;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0178c58c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_0178c58c;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0178c58c:
    uVar4 = (uint)lVar9;
    if ((int)(local_f8 - uVar2) <= (int)(uint)lVar9) {
      uVar4 = local_f8 + ~uVar2;
    }
    if (0 < (int)uVar4) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
      memcpy(puVar7 + uVar2,*(void **)(puVar5 + 8),(ulong)uVar4);
      puVar7[(int)(uVar4 + uVar2)] = 0;
    }
    if (*(long *)(param_3 + 8) != 0) {
      lVar9 = *(long *)(*(long *)(param_3 + 8) + 0x20);
joined_r0x0178c994:
      if (lVar9 != 0) {
        (**(code **)(local_108 + 0x18))(&local_108);
        uVar10 = FUN_038fe510(lVar9,local_100);
        goto LAB_0178c9bc;
      }
    }
  }
  uVar10 = 0;
LAB_0178c9bc:
  *(undefined8 *)(param_1 + 0x5a8) = uVar10;
  return;
}

