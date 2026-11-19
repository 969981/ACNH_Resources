
undefined8 * FUN_039a2760(undefined4 param_1,undefined4 param_2,long *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined **ppuVar13;
  
  lVar8 = DAT_05ae7600;
  switch(param_1) {
  case 0:
    break;
  case 1:
    if (DAT_05ae7600 == 0) {
      puVar10 = malloc(0x150);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar8 + 8);
        if (lVar9 != 0) {
          param_3 = (long *)(lVar9 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          puVar10 = (undefined8 *)0x0;
          goto LAB_039a2a84;
        }
      }
      puVar10 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x150,8);
    }
LAB_039a2a84:
    FUN_039a2490(puVar10,1,param_2);
    uVar11 = crc32b(0xffffffff,0x6f,0x4c11db7);
    uVar12 = crc32b(0xffffffff,0x72,0x4c11db7);
    uVar11 = crc32b(uVar11,0x66,0x4c11db7);
    uVar12 = crc32b(uVar12,0x65,0x4c11db7);
    ppuVar13 = &PTR_LAB_04b69dc8;
    goto LAB_039a2ac8;
  case 2:
    if (DAT_05ae7600 == 0) {
      puVar10 = malloc(0x170);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar8 + 8);
        if (lVar9 != 0) {
          param_3 = (long *)(lVar9 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          puVar10 = (undefined8 *)0x0;
          goto LAB_039a2bc0;
        }
      }
      puVar10 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x170,8);
    }
LAB_039a2bc0:
    FUN_039a2490(puVar10,2,param_2);
    uVar11 = crc32b(0xffffffff,0x67,0x4c11db7);
    uVar11 = crc32b(uVar11,0x61,0x4c11db7);
    uVar12 = crc32b(0xffffffff,0x62,0x4c11db7);
    uVar11 = crc32b(uVar11,0x75,0x4c11db7);
    uVar11 = crc32b(uVar11,0x73,0x4c11db7);
    uVar11 = crc32b(uVar11,0x73,0x4c11db7);
    uVar12 = crc32b(uVar12,0x6c,0x4c11db7);
    uVar11 = crc32b(uVar11,0x69,0x4c11db7);
    uVar12 = crc32b(uVar12,0x75,0x4c11db7);
    uVar11 = crc32b(uVar11,0x61,0x4c11db7);
    uVar12 = crc32b(uVar12,0x72,0x4c11db7);
    uVar11 = crc32b(uVar11,0x6e,0x4c11db7);
    uVar12 = crc32b(uVar12,0x5f,0x4c11db7);
    uVar11 = crc32b(uVar11,0x5f,0x4c11db7);
    uVar2 = crc32b(uVar12,0x74,0x4c11db7);
    uVar12 = crc32b(uVar12,0x6e,0x4c11db7);
    uVar11 = crc32b(uVar11,0x6b,0x4c11db7);
    uVar2 = crc32b(uVar2,0x79,0x4c11db7);
    uVar12 = crc32b(uVar12,0x75,0x4c11db7);
    *puVar10 = &PTR_LAB_04b69e58;
    uVar11 = crc32b(uVar11,0x65,0x4c11db7);
    uVar2 = crc32b(uVar2,0x70,0x4c11db7);
    uVar11 = crc32b(uVar11,0x72,0x4c11db7);
    uVar6 = crc32b(uVar2,0x65,0x4c11db7);
    puVar1 = PTR_DAT_04bd1080 + 0x10;
    plVar7 = puVar10 + 0xe;
    if (puVar10[0xf] != 0) {
      plVar7 = (long *)(puVar10[0xf] + 0x10);
    }
    puVar10[0x22] = puVar1;
    *(uint *)(puVar10 + 0x23) = ~uVar6;
    *plVar7 = (long)(puVar10 + 0x22);
    *(undefined4 *)(puVar10 + 0x25) = 4;
    puVar10[0x26] = puVar1;
    puVar10[0x24] = puVar10 + 0x26;
    puVar10[0x2a] = puVar1;
    puVar10[0x2c] = 0;
    uVar6 = crc32b(uVar12,0x6d,0x4c11db7);
    *(uint *)(puVar10 + 0x27) = ~uVar6;
    uVar11 = crc32b(uVar11,0x6e,0x4c11db7);
    *(undefined4 *)(puVar10 + 0x29) = 1;
    puVar10[0x28] = puVar10 + 0x2a;
    puVar10[0xf] = puVar10 + 0x2a;
    uVar11 = crc32b(uVar11,0x65,0x4c11db7);
    uVar6 = crc32b(uVar11,0x6c,0x4c11db7);
    *(uint *)(puVar10 + 0x2b) = ~uVar6;
    *(int *)(puVar10 + 0x10) = *(int *)(puVar10 + 0x10) + 3;
    *(undefined4 *)(puVar10 + 0x2d) = 9;
    return puVar10;
  case 3:
    if (DAT_05ae7600 == 0) {
      puVar10 = malloc(0x118);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar8 + 8);
        if (lVar9 != 0) {
          param_3 = (long *)(lVar9 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          puVar10 = (undefined8 *)0x0;
          goto LAB_039a2d24;
        }
      }
      puVar10 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x118,8);
    }
LAB_039a2d24:
    FUN_039a2490(puVar10,3,param_2);
    puVar10[0x22] = 0;
    *puVar10 = &PTR_LAB_04b69ee8;
    return puVar10;
  case 4:
    if (DAT_05ae7600 == 0) {
      puVar10 = malloc(0x1b0);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar8 + 8);
        if (lVar9 != 0) {
          param_3 = (long *)(lVar9 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          puVar10 = (undefined8 *)0x0;
          goto LAB_039a2d54;
        }
      }
      puVar10 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x1b0,8);
    }
LAB_039a2d54:
    FUN_039a2490(puVar10,4,param_2);
    uVar11 = crc32b(0xffffffff,99,0x4c11db7);
    uVar12 = crc32b(0xffffffff,0x66,0x4c11db7);
    uVar12 = crc32b(uVar12,0x6f,0x4c11db7);
    uVar11 = crc32b(uVar11,0x6f,0x4c11db7);
    uVar12 = crc32b(uVar12,0x72,0x4c11db7);
    uVar11 = crc32b(uVar11,0x6d,0x4c11db7);
    *puVar10 = &PTR_LAB_04b69f78;
    puVar10[0x22] = &PTR_LAB_04b66308;
    uVar12 = crc32b(uVar12,0x6d,0x4c11db7);
    uVar12 = crc32b(uVar12,0x61,0x4c11db7);
    uVar6 = crc32b(uVar12,0x74,0x4c11db7);
    *(uint *)(puVar10 + 0x23) = ~uVar6;
    uVar11 = crc32b(uVar11,0x70,0x4c11db7);
    plVar7 = puVar10 + 0xe;
    if (puVar10[0xf] != 0) {
      plVar7 = (long *)(puVar10[0xf] + 0x10);
    }
    *plVar7 = (long)(puVar10 + 0x22);
    puVar10[0x26] = &PTR_LAB_04b66308;
    puVar10[0x2a] = &PTR_LAB_04b66308;
    puVar10[0x2e] = &PTR_LAB_04b66308;
    puVar10[0x32] = &PTR_LAB_04b66308;
    *(undefined4 *)(puVar10 + 0x2d) = 1;
    *(undefined4 *)(puVar10 + 0x25) = 4;
    *(undefined4 *)(puVar10 + 0x29) = 0;
    puVar10[0x34] = 0;
    uVar11 = crc32b(uVar11,0x5f,0x4c11db7);
    puVar10[0x24] = puVar10 + 0x26;
    puVar10[0x30] = puVar10 + 0x32;
    puVar10[0xf] = puVar10 + 0x32;
    *(undefined4 *)(puVar10 + 0x31) = 2;
    uVar11 = crc32b(uVar11,0x73,0x4c11db7);
    puVar10[0x28] = puVar10 + 0x2a;
    uVar11 = crc32b(uVar11,0x65,0x4c11db7);
    puVar10[0x2c] = puVar10 + 0x2e;
    uVar11 = crc32b(uVar11,0x6c,0x4c11db7);
    uVar11 = crc32b(uVar11,0x5f,0x4c11db7);
    uVar6 = crc32b(uVar11,0x72,0x4c11db7);
    uVar3 = crc32b(uVar11,0x67,0x4c11db7);
    uVar4 = crc32b(uVar11,0x62,0x4c11db7);
    uVar5 = crc32b(uVar11,0x61,0x4c11db7);
    *(uint *)(puVar10 + 0x33) = ~uVar5;
    *(uint *)(puVar10 + 0x27) = ~uVar6;
    *(uint *)(puVar10 + 0x2b) = ~uVar3;
    *(uint *)(puVar10 + 0x2f) = ~uVar4;
    *(int *)(puVar10 + 0x10) = *(int *)(puVar10 + 0x10) + 5;
    *(undefined4 *)(puVar10 + 0x35) = 5;
    return puVar10;
  case 5:
    if (DAT_05ae7600 == 0) {
      puVar10 = malloc(0x170);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar8 + 8);
        if (lVar9 != 0) {
          param_3 = (long *)(lVar9 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          puVar10 = (undefined8 *)0x0;
          goto LAB_039a2ec4;
        }
      }
      puVar10 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x170,8);
    }
LAB_039a2ec4:
    FUN_039a2490(puVar10,5,param_2);
    uVar11 = crc32b(0xffffffff,100,0x4c11db7);
    uVar11 = crc32b(uVar11,0x72,0x4c11db7);
    *puVar10 = &PTR_LAB_04b6a008;
    uVar11 = crc32b(uVar11,0x69,0x4c11db7);
    uVar11 = crc32b(uVar11,0x66,0x4c11db7);
    uVar11 = crc32b(uVar11,0x74,0x4c11db7);
    uVar11 = crc32b(uVar11,0x5f,0x4c11db7);
    uVar6 = crc32b(uVar11,0x72,0x4c11db7);
    puVar10[0x22] = &PTR_LAB_04b677d8;
    *(uint *)(puVar10 + 0x23) = ~uVar6;
    plVar7 = puVar10 + 0xe;
    if (puVar10[0xf] != 0) {
      plVar7 = (long *)(puVar10[0xf] + 0x10);
    }
    *plVar7 = (long)(puVar10 + 0x22);
    puVar10[0x25] = 0;
    puVar10[0x26] = &PTR_LAB_04b677d8;
    puVar10[0x29] = 0;
    puVar10[0x2a] = &PTR_LAB_04b677d8;
    uVar6 = crc32b(uVar11,0x67,0x4c11db7);
    puVar10[0x2c] = 0;
    puVar10[0x2d] = 0;
    *(uint *)(puVar10 + 0x27) = ~uVar6;
    puVar10[0x24] = puVar10 + 0x26;
    uVar6 = crc32b(uVar11,0x62,0x4c11db7);
    *(uint *)(puVar10 + 0x2b) = ~uVar6;
    puVar10[0x28] = puVar10 + 0x2a;
    puVar10[0xf] = puVar10 + 0x2a;
    *(int *)(puVar10 + 0x10) = *(int *)(puVar10 + 0x10) + 3;
    return puVar10;
  case 6:
    if (DAT_05ae7600 == 0) {
      puVar10 = malloc(0x150);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar8 + 8);
        if (lVar9 != 0) {
          param_3 = (long *)(lVar9 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          puVar10 = (undefined8 *)0x0;
          goto LAB_039a2fa8;
        }
      }
      puVar10 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x150,8);
    }
LAB_039a2fa8:
    FUN_039a2490(puVar10,6,param_2);
    uVar11 = crc32b(0xffffffff,0x74,0x4c11db7);
    uVar11 = crc32b(uVar11,0x72,0x4c11db7);
    uVar11 = crc32b(uVar11,0x69,0x4c11db7);
    uVar11 = crc32b(uVar11,0x6d,0x4c11db7);
    uVar11 = crc32b(uVar11,0x5f,0x4c11db7);
    uVar12 = crc32b(uVar11,99,0x4c11db7);
    uVar12 = crc32b(uVar12,0x65,0x4c11db7);
    uVar12 = crc32b(uVar12,0x6e,0x4c11db7);
    uVar11 = crc32b(uVar11,0x73,0x4c11db7);
    uVar12 = crc32b(uVar12,0x74,0x4c11db7);
    uVar11 = crc32b(uVar11,99,0x4c11db7);
    *puVar10 = &PTR_LAB_04b6a098;
    uVar12 = crc32b(uVar12,0x65,0x4c11db7);
    uVar6 = crc32b(uVar12,0x72,0x4c11db7);
    puVar10[0x22] = &PTR_LAB_04b677d8;
    *(uint *)(puVar10 + 0x23) = ~uVar6;
    uVar11 = crc32b(uVar11,0x61,0x4c11db7);
    plVar7 = puVar10 + 0xe;
    if (puVar10[0xf] != 0) {
      plVar7 = (long *)(puVar10[0xf] + 0x10);
    }
    *plVar7 = (long)(puVar10 + 0x22);
    puVar10[0x25] = 0;
    puVar10[0x26] = &PTR_LAB_04b677d8;
    uVar11 = crc32b(uVar11,0x6c,0x4c11db7);
    uVar6 = crc32b(uVar11,0x65,0x4c11db7);
    *(uint *)(puVar10 + 0x27) = ~uVar6;
    puVar10[0x24] = puVar10 + 0x26;
    puVar10[0xf] = puVar10 + 0x26;
    *(int *)(puVar10 + 0x10) = *(int *)(puVar10 + 0x10) + 2;
    puVar10[0x28] = 0;
    puVar10[0x29] = 0x3f0000003f000000;
    return puVar10;
  default:
    return (undefined8 *)0x0;
  }
  if (DAT_05ae7600 == 0) {
    puVar10 = malloc(0x150);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar8 + 8);
      if (lVar9 != 0) {
        param_3 = (long *)(lVar9 + 0xa8);
      }
      param_3 = (long *)*param_3;
      if (param_3 == (long *)0x0) {
        puVar10 = (undefined8 *)0x0;
        goto LAB_039a2a30;
      }
    }
    puVar10 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x150,8);
  }
LAB_039a2a30:
  FUN_039a2490(puVar10,0,param_2);
  uVar11 = crc32b(0xffffffff,0x6f,0x4c11db7);
  uVar12 = crc32b(0xffffffff,0x72,0x4c11db7);
  uVar11 = crc32b(uVar11,0x66,0x4c11db7);
  uVar12 = crc32b(uVar12,0x65,0x4c11db7);
  ppuVar13 = &PTR_LAB_04b69d38;
LAB_039a2ac8:
  puVar1 = PTR_DAT_04bd1078;
  uVar11 = crc32b(uVar11,0x66,0x4c11db7);
  uVar11 = crc32b(uVar11,0x73,0x4c11db7);
  uVar11 = crc32b(uVar11,0x65,0x4c11db7);
  uVar11 = crc32b(uVar11,0x74,0x4c11db7);
  *puVar10 = ppuVar13;
  uVar12 = crc32b(uVar12,100,0x4c11db7);
  uVar11 = crc32b(uVar11,0x5f,0x4c11db7);
  uVar11 = crc32b(uVar11,0x61,0x4c11db7);
  plVar7 = puVar10 + 0xe;
  if (puVar10[0xf] != 0) {
    plVar7 = (long *)(puVar10[0xf] + 0x10);
  }
  puVar10[0x22] = puVar1 + 0x10;
  uVar12 = crc32b(uVar12,0x75,0x4c11db7);
  uVar11 = crc32b(uVar11,100,0x4c11db7);
  uVar11 = crc32b(uVar11,0x6a,0x4c11db7);
  uVar11 = crc32b(uVar11,0x75,0x4c11db7);
  uVar11 = crc32b(uVar11,0x73,0x4c11db7);
  uVar6 = crc32b(uVar11,0x74,0x4c11db7);
  *(uint *)(puVar10 + 0x23) = ~uVar6;
  *plVar7 = (long)(puVar10 + 0x22);
  *(undefined4 *)(puVar10 + 0x25) = 0;
  puVar10[0x26] = &PTR_LAB_04b66308;
  puVar10[0x28] = 0;
  uVar11 = crc32b(uVar12,99,0x4c11db7);
  puVar10[0x24] = puVar10 + 0x26;
  puVar10[0xf] = puVar10 + 0x26;
  uVar11 = crc32b(uVar11,0x65,0x4c11db7);
  *(int *)(puVar10 + 0x10) = *(int *)(puVar10 + 0x10) + 2;
  uVar11 = crc32b(uVar11,0x5f,0x4c11db7);
  *(undefined4 *)(puVar10 + 0x29) = 2;
  uVar11 = crc32b(uVar11,0x73,0x4c11db7);
  uVar11 = crc32b(uVar11,99,0x4c11db7);
  uVar11 = crc32b(uVar11,0x61,0x4c11db7);
  uVar11 = crc32b(uVar11,0x6c,0x4c11db7);
  uVar6 = crc32b(uVar11,0x65,0x4c11db7);
  *(uint *)(puVar10 + 0x27) = ~uVar6;
  return puVar10;
}

