
uint FUN_01f90000(long param_1,long param_2,long *param_3,uint param_4,byte *param_5,uint param_6)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte bVar11;
  undefined8 *puVar12;
  undefined **local_d8;
  undefined8 *local_d0;
  int local_c8;
  undefined8 local_c4 [7];
  undefined1 local_85;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  
  local_5c = 0xff;
  local_60 = 0;
  local_58 = 0;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_68 = (undefined8 *)PTR_DAT_04bb2120;
  local_c8 = 0x40;
  local_85 = 0;
  local_c4[0]._0_1_ = 0;
  lVar8 = param_1 + 0x20;
  if (**(char **)(param_2 + 8) != '\0') {
    lVar8 = param_2;
  }
  local_78 = *(undefined8 *)(lVar8 + 8);
  local_d8 = &PTR_LAB_048fb9f8;
  local_d0 = local_c4;
  local_70 = local_80;
  if ((param_4 & 1) != 0) {
    if (**(char **)(param_1 + 0x80) != '\0') {
      (**(code **)(*(long *)(param_1 + 0x78) + 0x18))(param_1 + 0x78);
      puVar12 = *(undefined8 **)(param_1 + 0x80);
      if (local_c4 != puVar12) {
        (**(code **)(*(long *)(param_1 + 0x78) + 0x18))(param_1 + 0x78);
        lVar8 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x80) + lVar8) == '\0') goto LAB_01f90260;
          lVar2 = *(long *)(param_1 + 0x80) + lVar8;
          if (*(char *)(lVar2 + 1) == '\0') goto LAB_01f90254;
          if (*(char *)(lVar2 + 2) == '\0') goto LAB_01f9025c;
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        goto LAB_01f90188;
      }
      goto LAB_01f9028c;
    }
    lVar8 = *(long *)(param_1 + 0x10);
    uVar6 = *(uint *)(lVar8 + 8);
    if (*(uint *)(lVar8 + 0x38) <= uVar6) {
      uVar6 = 0;
    }
    plVar1 = (long *)(*(long *)(lVar8 + 0x40) + (long)(int)uVar6 * 0x10);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    FUN_038d13f0(&local_d8,"%s_State",plVar1[1]);
    if (**(char **)(param_1 + 0xe0) != '\0') {
      (**(code **)(*(long *)(param_1 + 0xd8) + 0x18))((long *)(param_1 + 0xd8));
      FUN_038d13f0(&local_d8,&DAT_040a677f,*(undefined8 *)(param_1 + 0xe0));
    }
    uVar7 = FUN_01186738(&local_80,&local_d8);
    puVar12 = local_d0;
    if (((uVar7 & 1) != 0) || (local_d0 == &DAT_0407ebb1)) goto LAB_01f9028c;
    iVar4 = 0;
    if (local_c8 < 1) {
      iVar4 = local_c8 + -1;
    }
    memset(local_d0,0,(long)iVar4);
    puVar9 = (undefined1 *)((long)puVar12 + (long)iVar4);
    goto LAB_01f90288;
  }
  (**(code **)(*param_3 + 0x18))(param_3);
  puVar12 = (undefined8 *)param_3[1];
  if (local_c4 != puVar12) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar8 = 0;
    do {
      if (*(char *)(param_3[1] + lVar8) == '\0') goto LAB_01f90260;
      lVar2 = param_3[1] + lVar8;
      if (*(char *)(lVar2 + 1) == '\0') goto LAB_01f90254;
      if (*(char *)(lVar2 + 2) == '\0') goto LAB_01f9025c;
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
LAB_01f90188:
    lVar8 = 0;
    goto LAB_01f90260;
  }
  goto LAB_01f9028c;
LAB_01f90254:
  lVar8 = lVar8 + 1;
  goto LAB_01f90260;
LAB_01f9025c:
  lVar8 = lVar8 + 2;
LAB_01f90260:
  iVar4 = (int)lVar8;
  if (local_c8 <= (int)lVar8) {
    iVar4 = local_c8 + -1;
  }
  memcpy(local_c4,puVar12,(long)iVar4);
  puVar9 = (undefined1 *)((long)local_c4 + (long)iVar4);
LAB_01f90288:
  *puVar9 = 0;
LAB_01f9028c:
  local_68 = local_d0;
  local_60 = *(undefined4 *)(param_1 + 8);
  bVar11 = *param_5;
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  lVar8 = *DAT_0537d558;
  if (1 < *(byte *)(lVar8 + 0x476)) goto LAB_01f903ac;
  if (DAT_04cd19d8 == 0) {
    bVar11 = DAT_0548e140;
    if (7 < DAT_0548e140) goto LAB_01f90340;
LAB_01f90390:
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar10 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    bVar11 = *pbVar10;
    if ((*pbVar10 < 8) ||
       (((*(int *)(DAT_04cd19d8 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
        (bVar11 = *(byte *)(DAT_054f5738 + 0x11a5), bVar11 < 8)))) goto LAB_01f90390;
LAB_01f90340:
    bVar11 = *(byte *)(lVar8 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar11 != 0xffffffffffffffff) {
      puVar5 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
      if (7 < bVar11) {
        puVar5 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar5 & 8) != 0) {
        pbVar10 = (byte *)(lVar8 + 0x471);
      }
    }
    bVar11 = *pbVar10;
    if (7 < bVar11) {
      bVar11 = *PTR_DAT_04bb5038;
      goto LAB_01f90390;
    }
  }
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
LAB_01f903ac:
  local_5c = CONCAT11(local_5c._1_1_,bVar11);
  bVar11 = *(byte *)(param_1 + 0x18) & 0xf1;
  bVar3 = bVar11 | 8;
  if ((param_6 & 1) == 0) {
    bVar3 = bVar11;
  }
  *(byte *)(param_1 + 0x18) = bVar3;
  uVar6 = FUN_01180700(DAT_050b8028,&local_80);
  return uVar6 & 1;
}

