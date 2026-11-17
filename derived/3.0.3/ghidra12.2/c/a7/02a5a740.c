
long * FUN_02a5a740(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puVar7;
  char *__dest;
  long local_f8;
  undefined1 *local_f0;
  undefined **local_e8;
  undefined1 *local_e0;
  int local_d8;
  undefined1 local_d4 [127];
  undefined1 local_55;
  
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    plVar5 = malloc(800);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar6 + 8);
      if (lVar4 != 0) {
        param_2 = (long *)(lVar4 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_02a5a7cc;
      }
    }
    plVar5 = (long *)(**(code **)(*param_2 + 0x30))(param_2,800,8);
  }
LAB_02a5a7cc:
  FUN_00705c50(plVar5);
  __dest = (char *)plVar5[0xc];
  *(undefined4 *)(plVar5 + 0x4f) = 1;
  if (__dest != "StructureComponent") {
    iVar1 = 0x12;
    if ((int)plVar5[0xd] < 0x13) {
      iVar1 = (int)plVar5[0xd] + -1;
    }
    memcpy(__dest,"StructureComponent",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  puVar3 = PTR_DAT_04bc4488;
  *(undefined4 *)(plVar5 + 0x52) = 0x80;
  *(undefined1 *)((long)plVar5 + 0x294) = 0;
  plVar5[0x51] = (long)plVar5 + 0x294;
  *(undefined1 *)((long)plVar5 + 0x313) = 0;
  *(uint *)(plVar5 + 0x4c) = *(uint *)(plVar5 + 0x4c) & 0xfffffff0 | 6;
  *plVar5 = (long)(puVar3 + 0x10);
  *(undefined4 *)(plVar5 + 99) = 0;
  plVar5[0x50] = (long)&DAT_048fc708;
  FUN_02b5b5e0(&local_f8,*(undefined4 *)(param_3 + 0xc));
  local_d8 = 0x80;
  local_55 = 0;
  local_e8 = &PTR_LAB_048fcff0;
  local_e0 = local_d4;
  (**(code **)(local_f8 + 0x18))(&local_f8);
  puVar7 = local_f0;
  if (local_d4 != local_f0) {
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar6 = 0;
    do {
      if (local_f0[lVar6] == '\0') goto LAB_02a5a910;
      if (local_f0[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02a5a910;
      }
      if (local_f0[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02a5a910;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02a5a910:
    iVar1 = (int)lVar6;
    if (local_d8 <= (int)lVar6) {
      iVar1 = local_d8 + -1;
    }
    memcpy(local_d4,puVar7,(long)iVar1);
    local_d4[iVar1] = 0;
  }
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  local_e8 = (undefined **)&DAT_048fc708;
  puVar7 = (undefined1 *)plVar5[0x51];
  if (puVar7 != local_e0) {
    lVar6 = 0;
    do {
      if (local_e0[lVar6] == '\0') goto LAB_02a5a990;
      if (local_e0[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02a5a990;
      }
      if (local_e0[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02a5a990;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02a5a990:
    iVar1 = (int)lVar6;
    if ((int)plVar5[0x52] <= (int)lVar6) {
      iVar1 = (int)plVar5[0x52] + -1;
    }
    memcpy(puVar7,local_e0,(long)iVar1);
    puVar7[iVar1] = 0;
  }
  *(undefined4 *)(plVar5 + 99) = uVar2;
  return plVar5;
}

