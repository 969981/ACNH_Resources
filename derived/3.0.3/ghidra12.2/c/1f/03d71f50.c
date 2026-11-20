
undefined8 * FUN_03d71f50(long param_1,undefined4 param_2,int param_3,long *param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_d8 [56];
  undefined *local_a0;
  undefined8 *local_98;
  int local_90;
  undefined8 local_8c [3];
  undefined1 local_6d;
  code *local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  
  if (param_3 + 1U < 0x21) {
    local_6d = 0;
    local_98 = local_8c;
    puVar7 = *(undefined8 **)(PTR_s_cInvalid_04bcb478 + (ulong)(param_3 + 1U) * 8 + 0xd0);
    local_90 = 0x20;
    if (local_98 == puVar7) {
      lVar9 = 0x1f;
      goto LAB_03d72068;
    }
  }
  else {
    puVar7 = &DAT_0407ebb1;
  }
  local_6d = 0;
  local_90 = 0x20;
  local_a0 = PTR_DAT_04bb2030 + 0x10;
  local_98 = local_8c;
  lVar9 = 0;
  do {
    if (*(char *)((long)puVar7 + lVar9) == '\0') {
LAB_03d7203c:
      iVar8 = (int)lVar9;
joined_r0x03d72040:
      if (0x1f < iVar8) {
        iVar8 = 0x1f;
      }
      goto LAB_03d72048;
    }
    if (*(char *)((long)puVar7 + lVar9 + 1) == '\0') {
      lVar9 = lVar9 + 1;
      goto LAB_03d7203c;
    }
    if (*(char *)((long)puVar7 + lVar9 + 2) == '\0') {
      iVar8 = (int)lVar9 + 2;
      goto joined_r0x03d72040;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  iVar8 = 0;
LAB_03d72048:
  memcpy(local_98,puVar7,(long)iVar8);
  *(undefined1 *)((long)local_8c + (long)iVar8) = 0;
  lVar9 = (long)local_90 + -1;
  puVar7 = local_98;
LAB_03d72068:
  lVar10 = 0;
  local_a0 = PTR_DAT_04bb2028 + 0x10;
  *(undefined1 *)((long)puVar7 + lVar9) = 0;
  do {
    if (*(char *)((long)local_98 + lVar10) == '\0') {
LAB_03d720b4:
      iVar8 = (int)lVar10;
joined_r0x03d720b8:
      if (0 < iVar8) {
        lVar9 = (long)local_98 + 1;
        goto LAB_03d720dc;
      }
      break;
    }
    if (*(char *)((long)local_98 + lVar10 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_03d720b4;
    }
    if (*(char *)((long)local_98 + lVar10 + 2) == '\0') {
      iVar8 = (int)lVar10 + 2;
      goto joined_r0x03d720b8;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar9 = *(long *)(PTR_PTR_04bb2238 + 8);
LAB_03d720dc:
  FUN_006d8678(auStack_d8,"KEY_%s",lVar9);
  if (*(char *)param_4[1] != '\0') {
    (**(code **)(*param_4 + 0x18))(param_4);
    FUN_038d13f0(auStack_d8,&DAT_040a677f,param_4[1]);
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_03ea4cf4(*(long *)(param_1 + 0x18),auStack_d8);
  }
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    puVar7 = malloc(200);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar9 + 8);
    if (lVar10 != 0) {
      plVar5 = (long *)(lVar10 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,200,8);
    }
  }
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0;
  puVar7[0x11] = 0;
  puVar7[0x12] = 0;
  puVar7[0x13] = 0;
  puVar7[0x14] = 0;
  puVar1 = PTR_DAT_04bc77b8 + 0x10;
  puVar7[0xb] = puVar1;
  puVar7[0xf] = puVar1;
  puVar7[0x13] = puVar1;
  *(undefined1 *)((long)puVar7 + 0xbe) = 0;
  puVar7[0x18] = 0;
  puVar7[2] = 0xffffffff00000000;
  puVar7[3] = puVar1;
  *(undefined4 *)(puVar7 + 0x17) = 0xfffffffe;
  *(undefined2 *)((long)puVar7 + 0xbc) = 0x101;
  puVar7[0x15] = 0;
  puVar7[0x16] = 0;
  puVar7[7] = puVar1;
  puVar7[8] = 0;
  if ((param_5 & 1) != 0) {
    FUN_03d59634(*(undefined8 *)(param_1 + 8),param_2,param_3,puVar7);
  }
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    puVar6 = malloc(0xb8);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar5 = (long *)(lVar9 + 8);
    if (lVar10 != 0) {
      plVar5 = (long *)(lVar10 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0xb8,8);
    }
  }
  *(undefined4 *)(puVar6 + 0x16) = 0;
  *puVar6 = &PTR_LAB_04b911f8;
  puVar6[4] = &PTR_LAB_04b911f8;
  puVar6[8] = &PTR_LAB_04b911f8;
  puVar6[0xc] = &PTR_LAB_04b911f8;
  puVar6[0x10] = &PTR_LAB_04b911f8;
  local_68 = FUN_03d71aa4;
  puVar6[0x14] = puVar7;
  puVar6[0x15] = uVar4;
  local_60 = 0;
  puStack_58 = puVar6;
  FUN_03d71890(puVar7,0,&puStack_58,&local_68);
  local_68 = FUN_03d71aa4;
  local_60 = 0;
  puStack_58 = puVar6;
  FUN_03d71890(puVar7,1,&puStack_58,&local_68);
  local_68 = FUN_03d71aa4;
  local_60 = 0;
  puStack_58 = puVar6;
  FUN_03d71890(puVar7,2,&puStack_58,&local_68);
  local_68 = FUN_03d71aa4;
  local_60 = 0;
  puStack_58 = puVar6;
  FUN_03d71890(puVar7,3,&puStack_58,&local_68);
  local_68 = FUN_03d71aa4;
  local_60 = 0;
  puStack_58 = puVar6;
  FUN_03d71890(puVar7,4,&puStack_58,&local_68);
  return puVar6;
}

