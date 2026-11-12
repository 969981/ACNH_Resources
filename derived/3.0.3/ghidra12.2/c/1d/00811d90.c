
void FUN_00811d90(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04bb3350;
  if (param_2 == 0) {
    lVar8 = 1;
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)(lVar2 + 0xa8);
    *(long *)(lVar2 + 0xa8) = param_2;
  }
  lVar2 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar5 = malloc(8);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar4 = (long *)(lVar2 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,8,8);
    }
  }
  *puVar5 = 0;
  puVar7 = DAT_04ccc690;
  if (*(char *)(DAT_04ccc690 + 1) == '\0') {
    uVar6 = nn::oe::GetProgramTotalActiveTime();
    *puVar7 = uVar6;
    *(undefined1 *)(puVar7 + 1) = 1;
  }
  else {
    uVar6 = *DAT_04ccc690;
  }
  *puVar5 = uVar6;
  *(undefined8 **)(param_1 + 0x10) = puVar5;
  lVar2 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar5 = malloc(8);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar4 = (long *)(lVar2 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,8,8);
    }
  }
  *puVar5 = 0;
  puVar7 = DAT_04ccc690;
  if (*(char *)(DAT_04ccc690 + 1) == '\0') {
    uVar6 = nn::oe::GetProgramTotalActiveTime();
    *puVar7 = uVar6;
    *(undefined1 *)(puVar7 + 1) = 1;
  }
  else {
    uVar6 = *DAT_04ccc690;
  }
  *puVar5 = uVar6;
  *(undefined8 **)(param_1 + 0x20) = puVar5;
  lVar2 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar5 = malloc(0x80);
    if (puVar5 != (undefined8 *)0x0) goto LAB_00811f48;
LAB_00811f84:
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar2 = 0;
      puVar5 = *(undefined8 **)(param_1 + 0x48);
      do {
        puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x40) + lVar2 * 8);
        lVar2 = lVar2 + 1;
        *puVar7 = puVar5;
        *(undefined8 **)(param_1 + 0x48) = puVar7;
        puVar5 = puVar7;
      } while (lVar2 < *(int *)(param_1 + 0x38));
    }
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar4 = (long *)(lVar2 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if ((plVar4 == (long *)0x0) ||
       (puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x80,8),
       puVar5 == (undefined8 *)0x0)) goto LAB_00811f84;
LAB_00811f48:
    *(undefined8 **)(param_1 + 0x48) = puVar5;
    puVar5[9] = 0;
    puVar5[6] = puVar5 + 9;
    puVar5[3] = puVar5 + 6;
    *puVar5 = puVar5 + 3;
    *(undefined8 **)(param_1 + 0x50) = puVar5;
    if (puVar5 + 0xc == (undefined8 *)0x0) goto LAB_00811f84;
    *(undefined8 **)(param_1 + 0x40) = puVar5 + 0xc;
    *(undefined4 *)(param_1 + 0x3c) = 4;
  }
  lVar2 = DAT_05ae7600;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (lVar2 == 0) {
    puVar5 = malloc(0x30);
    if (puVar5 != (undefined8 *)0x0) goto LAB_00812064;
LAB_00812010:
    if (DAT_05ae7600 == 0) {
LAB_00812174:
      puVar5 = malloc(8);
      goto LAB_00812180;
    }
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar4 = (long *)(lVar2 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if ((plVar4 == (long *)0x0) ||
       (puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x30,8),
       puVar5 == (undefined8 *)0x0)) goto LAB_00812010;
LAB_00812064:
    *puVar5 = 0;
    puVar7 = DAT_04ccc690;
    if (*(char *)(DAT_04ccc690 + 1) == '\0') {
      uVar6 = nn::oe::GetProgramTotalActiveTime();
      *puVar7 = uVar6;
      *(undefined1 *)(puVar7 + 1) = 1;
    }
    else {
      uVar6 = *DAT_04ccc690;
    }
    *puVar5 = uVar6;
    puVar5[1] = 0;
    puVar7 = DAT_04ccc690;
    if (*(char *)(DAT_04ccc690 + 1) == '\0') {
      uVar6 = nn::oe::GetProgramTotalActiveTime();
      *puVar7 = uVar6;
      *(undefined1 *)(puVar7 + 1) = 1;
    }
    else {
      uVar6 = *DAT_04ccc690;
    }
    puVar7 = DAT_04ccc690;
    puVar5[1] = uVar6;
    puVar5[2] = 0;
    if (*(char *)(puVar7 + 1) == '\0') {
      uVar6 = nn::oe::GetProgramTotalActiveTime();
      *puVar7 = uVar6;
      *(undefined1 *)(puVar7 + 1) = 1;
      puVar7 = DAT_04ccc690;
    }
    else {
      uVar6 = *puVar7;
    }
    puVar5[2] = uVar6;
    puVar5[3] = 0;
    if (*(char *)(puVar7 + 1) == '\0') {
      uVar6 = nn::oe::GetProgramTotalActiveTime();
      *puVar7 = uVar6;
      *(undefined1 *)(puVar7 + 1) = 1;
      puVar7 = DAT_04ccc690;
    }
    else {
      uVar6 = *puVar7;
    }
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    if (*(char *)(puVar7 + 1) == '\0') {
      uVar6 = nn::oe::GetProgramTotalActiveTime();
      *puVar7 = uVar6;
      *(undefined1 *)(puVar7 + 1) = 1;
      puVar7 = DAT_04ccc690;
    }
    else {
      uVar6 = *puVar7;
    }
    puVar5[4] = uVar6;
    puVar5[5] = 0;
    if (*(char *)(puVar7 + 1) == '\0') {
      uVar6 = nn::oe::GetProgramTotalActiveTime();
      *puVar7 = uVar6;
      *(undefined1 *)(puVar7 + 1) = 1;
    }
    else {
      uVar6 = *puVar7;
    }
    puVar5[5] = uVar6;
    *(undefined8 **)(param_1 + 0x60) = puVar5;
    *(undefined4 *)(param_1 + 0x58) = 6;
    if (DAT_05ae7600 == 0) goto LAB_00812174;
  }
  lVar2 = DAT_05ae7600;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
  plVar4 = (long *)(lVar2 + 8);
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + 0xa8);
  }
  plVar4 = (long *)*plVar4;
  if (plVar4 == (long *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,8,8);
  }
LAB_00812180:
  *puVar5 = 0;
  puVar7 = DAT_04ccc690;
  if (*(char *)(DAT_04ccc690 + 1) == '\0') {
    uVar6 = nn::oe::GetProgramTotalActiveTime();
    *puVar7 = uVar6;
    *(undefined1 *)(puVar7 + 1) = 1;
  }
  else {
    uVar6 = *DAT_04ccc690;
  }
  *puVar5 = uVar6;
  *(undefined8 **)(param_1 + 0x68) = puVar5;
  lVar2 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar5 = malloc(8);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar4 = (long *)(lVar2 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,8,8);
    }
  }
  *puVar5 = 0;
  puVar7 = DAT_04ccc690;
  if (*(char *)(DAT_04ccc690 + 1) == '\0') {
    uVar6 = nn::oe::GetProgramTotalActiveTime();
    *puVar7 = uVar6;
    *(undefined1 *)(puVar7 + 1) = 1;
  }
  else {
    uVar6 = *DAT_04ccc690;
  }
  *puVar5 = uVar6;
  *(undefined8 **)(param_1 + 0x78) = puVar5;
  lVar2 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar5 = malloc(8);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar4 = (long *)(lVar2 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,8,8);
    }
  }
  *puVar5 = 0;
  puVar7 = DAT_04ccc690;
  if (*(char *)(DAT_04ccc690 + 1) == '\0') {
    uVar6 = nn::oe::GetProgramTotalActiveTime();
    *puVar7 = uVar6;
    *(undefined1 *)(puVar7 + 1) = 1;
  }
  else {
    uVar6 = *DAT_04ccc690;
  }
  *puVar5 = uVar6;
  *(undefined8 **)(param_1 + 0x88) = puVar5;
  if (lVar8 != 1) {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar2 + 0xa8) = lVar8;
  }
  return;
}

