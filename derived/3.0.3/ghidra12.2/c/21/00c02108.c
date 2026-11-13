
void FUN_00c02108(char *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  undefined4 local_3c;
  undefined4 local_38;
  byte local_34 [4];
  
  lVar7 = *(long *)(param_1 + 0x18);
  uVar3 = FUN_00c02800(lVar7,*param_2);
  if (*(int *)(param_1 + 0x10) == 0xb) {
    FUN_00bffcc0(local_34);
    if ((uVar3 & 1) != 0) goto LAB_00c021a0;
LAB_00c02150:
    FUN_02269394(param_2);
    if (*(int *)(param_1 + 0x10) != 0xb) {
      FUN_020f153c(1,*param_2,PTR_DAT_04bb32e0);
      if (*param_1 != '\0') goto LAB_00c021e0;
      goto LAB_00c02278;
    }
    if (*param_1 != '\0') {
LAB_00c021e0:
      local_3c = 1;
      FUN_02269394(&local_3c);
      if (*(int *)(param_1 + 0x10) != 0xb) {
        puVar4 = &DAT_0548e140;
        goto LAB_00c0226c;
      }
    }
  }
  else {
    pbVar1 = PTR_DAT_04bb32e0;
    if (*(long *)(lVar7 + 8) != 0) {
      pbVar1 = (byte *)(*(long *)(lVar7 + 8) + 0x2a8);
    }
    local_34[0] = *pbVar1;
    if (7 < local_34[0]) {
      local_34[0] = 0xff;
    }
    if ((uVar3 & 1) == 0) goto LAB_00c02150;
LAB_00c021a0:
    FUN_02269c10(local_34,param_2);
    if (*(int *)(param_1 + 0x10) != 0xb) {
      puVar2 = PTR_DAT_04bb32e0;
      if (*(long *)(lVar7 + 8) != 0) {
        puVar2 = (undefined *)(*(long *)(lVar7 + 8) + 0x2a8);
      }
      FUN_020f153c(1,*param_2,puVar2);
      if (*param_1 != '\0') goto LAB_00c02234;
      goto LAB_00c02278;
    }
    if (*param_1 == '\0') goto LAB_00c02284;
LAB_00c02234:
    local_38 = 1;
    FUN_02269c10(local_34,&local_38);
    if (*(int *)(param_1 + 0x10) == 0xb) goto LAB_00c02284;
    puVar4 = PTR_DAT_04bb32e0;
    if (*(long *)(lVar7 + 8) != 0) {
      puVar4 = (undefined1 *)(*(long *)(lVar7 + 8) + 0x2a8);
    }
LAB_00c0226c:
    FUN_020f153c(1,1,puVar4);
LAB_00c02278:
    if (*(int *)(param_1 + 0x10) != 0xb) {
      return;
    }
  }
LAB_00c02284:
  puVar2 = PTR_DAT_04bb4128;
  lVar7 = *(long *)PTR_DAT_04bb4128;
  bVar6 = local_34[0];
  if (7 < local_34[0]) {
    bVar6 = 0xff;
  }
  if (bVar6 == *(byte *)(lVar7 + 0x388)) {
    lVar5 = 0;
  }
  else if (bVar6 == *(byte *)(lVar7 + 0x398)) {
    lVar5 = 1;
  }
  else if (bVar6 == *(byte *)(lVar7 + 0x3a8)) {
    lVar5 = 2;
  }
  else if (bVar6 == *(byte *)(lVar7 + 0x3b8)) {
    lVar5 = 3;
  }
  else if (bVar6 == *(byte *)(lVar7 + 0x3c8)) {
    lVar5 = 4;
  }
  else if (bVar6 == *(byte *)(lVar7 + 0x3d8)) {
    lVar5 = 5;
  }
  else if (bVar6 == *(byte *)(lVar7 + 1000)) {
    lVar5 = 6;
  }
  else {
    if (bVar6 != *(byte *)(lVar7 + 0x3f8)) goto LAB_00c0234c;
    lVar5 = 7;
  }
  *(undefined1 *)(lVar7 + lVar5 * 0x10 + 0x38a) = 0;
LAB_00c0234c:
  if (local_34[0] < 8) {
    lVar7 = *(long *)puVar2 + (ulong)(uint)local_34[0] * 0x14;
    *(undefined8 *)(lVar7 + 0x2a4) = 0;
    *(undefined8 *)(lVar7 + 0x2ac) = 0;
    *(undefined4 *)(lVar7 + 0x2b4) = 7;
  }
  return;
}

