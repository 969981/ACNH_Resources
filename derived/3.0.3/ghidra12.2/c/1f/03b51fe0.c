
void FUN_03b51fe0(long param_1,int param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined4 uVar16;
  undefined8 local_98;
  
  lVar1 = DAT_05ae7600;
  puVar6 = &DAT_041e0f34;
  puVar7 = &DAT_041e0a70;
  puVar8 = &DAT_041e06a6;
  uVar16 = 0x61;
  puVar9 = &DAT_041e0246;
  if (param_2 == 32000) {
    puVar10 = &DAT_041e3b3a;
    puVar14 = &UNK_041e3798;
    local_98 = 0x5d;
    puVar12 = &UNK_041e32d4;
    puVar15 = &UNK_041e2f0a;
    uVar13 = 0x70;
    puVar5 = &DAT_041e12d6;
    puVar11 = &UNK_041e2aaa;
  }
  else {
    if (param_2 != 48000) {
      return;
    }
    puVar5 = &DAT_041e2708;
    puVar6 = &DAT_041e2366;
    puVar7 = &DAT_041e1ea2;
    puVar8 = &DAT_041e1ad8;
    puVar9 = &DAT_041e1678;
    puVar10 = &DAT_041e5142;
    puVar14 = &DAT_041e4cba;
    puVar12 = &DAT_041e47f6;
    uVar16 = 0x70;
    puVar15 = &DAT_041e4396;
    uVar13 = 0x79;
    local_98 = 0x74;
    puVar11 = &DAT_041e3edc;
  }
  if (DAT_05ae7600 == 0) {
    puVar4 = malloc(0x18);
  }
  else {
    plVar3 = param_3;
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
  }
  *(undefined4 *)(puVar4 + 2) = uVar13;
  *puVar4 = &PTR_LAB_04b766a0;
  puVar4[1] = puVar11;
  lVar1 = DAT_05ae7600;
  *(undefined8 **)(param_1 + 0x10) = puVar4;
  if (lVar1 == 0) {
    puVar4 = malloc(0x18);
  }
  else {
    plVar3 = param_3;
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
  }
  *puVar4 = &PTR_LAB_04b766a0;
  puVar4[1] = puVar15;
  lVar1 = DAT_05ae7600;
  *(undefined4 *)(puVar4 + 2) = uVar16;
  *(undefined8 **)(param_1 + 0x18) = puVar4;
  if (lVar1 == 0) {
    puVar4 = malloc(0x18);
  }
  else {
    plVar3 = param_3;
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
  }
  *puVar4 = &PTR_LAB_04b766e8;
  lVar1 = DAT_05ae7600;
  puVar4[1] = puVar12;
  puVar4[2] = 0x7a;
  *(undefined8 **)(param_1 + 0x20) = puVar4;
  if (lVar1 == 0) {
    puVar4 = malloc(0x18);
  }
  else {
    plVar3 = param_3;
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
  }
  *puVar4 = &PTR_LAB_04b766e8;
  lVar1 = DAT_05ae7600;
  puVar4[1] = puVar14;
  puVar4[2] = local_98;
  *(undefined8 **)(param_1 + 0x28) = puVar4;
  if (lVar1 == 0) {
    puVar4 = malloc(0x18);
  }
  else {
    plVar3 = param_3;
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
  }
  *puVar4 = &PTR_LAB_04b766e8;
  lVar1 = DAT_05ae7600;
  puVar4[1] = puVar10;
  puVar4[2] = local_98;
  *(undefined8 **)(param_1 + 0x30) = puVar4;
  if (lVar1 == 0) {
    puVar4 = malloc(0x18);
  }
  else {
    plVar3 = param_3;
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
  }
  *puVar4 = &PTR_LAB_04b766a0;
  puVar4[1] = &DAT_041e0246;
  lVar1 = DAT_05ae7600;
  *(undefined4 *)(puVar4 + 2) = 0x70;
  *(undefined8 **)(param_1 + 0x38) = puVar4;
  if (lVar1 == 0) {
    puVar4 = malloc(0x18);
  }
  else {
    plVar3 = param_3;
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
  }
  *(undefined4 *)(puVar4 + 2) = 0x61;
  *puVar4 = &PTR_LAB_04b766a0;
  puVar4[1] = &DAT_041e06a6;
  lVar1 = DAT_05ae7600;
  *(undefined8 **)(param_1 + 0x40) = puVar4;
  if (lVar1 == 0) {
    puVar4 = malloc(0x18);
  }
  else {
    plVar3 = param_3;
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
  }
  *puVar4 = &PTR_LAB_04b766e8;
  lVar1 = DAT_05ae7600;
  puVar4[1] = &DAT_041e0a70;
  puVar4[2] = 0x7a;
  *(undefined8 **)(param_1 + 0x48) = puVar4;
  if (lVar1 == 0) {
    puVar4 = malloc(0x18);
  }
  else {
    plVar3 = param_3;
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
  }
  *puVar4 = &PTR_LAB_04b766e8;
  lVar1 = DAT_05ae7600;
  puVar4[1] = &DAT_041e0f34;
  puVar4[2] = 0x5d;
  *(undefined8 **)(param_1 + 0x50) = puVar4;
  if (lVar1 == 0) {
    puVar4 = malloc(0x18);
  }
  else {
    plVar3 = param_3;
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
  }
  *puVar4 = &PTR_LAB_04b766e8;
  lVar1 = DAT_05ae7600;
  puVar4[1] = &DAT_041e12d6;
  puVar4[2] = 0x5d;
  *(undefined8 **)(param_1 + 0x58) = puVar4;
  if (lVar1 == 0) {
    puVar4 = malloc(0x18);
  }
  else {
    plVar3 = param_3;
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
  }
  *puVar4 = &PTR_LAB_04b766a0;
  puVar4[1] = puVar9;
  lVar1 = DAT_05ae7600;
  *(undefined4 *)(puVar4 + 2) = 0x70;
  *(undefined8 **)(param_1 + 0x60) = puVar4;
  if (lVar1 == 0) {
    puVar4 = malloc(0x18);
  }
  else {
    plVar3 = param_3;
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
  }
  *(undefined4 *)(puVar4 + 2) = 0x61;
  *puVar4 = &PTR_LAB_04b766a0;
  puVar4[1] = puVar8;
  *(undefined8 **)(param_1 + 0x68) = puVar4;
  lVar1 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar4 = malloc(0x18);
  }
  else {
    plVar3 = param_3;
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
  }
  *puVar4 = &PTR_LAB_04b766e8;
  lVar1 = DAT_05ae7600;
  puVar4[1] = puVar7;
  puVar4[2] = 0x7a;
  *(undefined8 **)(param_1 + 0x70) = puVar4;
  if (lVar1 == 0) {
    puVar4 = malloc(0x18);
  }
  else {
    plVar3 = param_3;
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
  }
  *puVar4 = &PTR_LAB_04b766e8;
  lVar1 = DAT_05ae7600;
  puVar4[1] = puVar6;
  puVar4[2] = 0x5d;
  *(undefined8 **)(param_1 + 0x78) = puVar4;
  if (lVar1 == 0) {
    puVar4 = malloc(0x18);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        param_3 = (long *)(lVar2 + 0xa8);
      }
      param_3 = (long *)*param_3;
    }
    puVar4 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x18,8);
  }
  *puVar4 = &PTR_LAB_04b766e8;
  puVar4[1] = puVar5;
  puVar4[2] = 0x5d;
  *(undefined8 **)(param_1 + 0x80) = puVar4;
  return;
}

