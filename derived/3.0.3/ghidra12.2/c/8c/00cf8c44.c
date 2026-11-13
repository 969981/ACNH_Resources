
void FUN_00cf8c44(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_74 [4];
  undefined *local_70;
  undefined5 *puStack_68;
  undefined4 local_60;
  undefined5 local_5c;
  undefined2 uStack_57;
  char cStack_55;
  undefined5 uStack_54;
  undefined2 uStack_4f;
  char local_4d [16];
  undefined1 local_3d;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined2 local_24;
  
  lVar5 = *(long *)PTR_DAT_04bb27f8;
  if (lVar5 == 0) {
    return;
  }
  if (*(int *)(lVar5 + 0xc) == 6) {
    local_2c = *(undefined4 *)(PTR_DAT_04bb7ab0 + 0xc);
    uStack_28 = *(undefined4 *)(PTR_DAT_04bb7ab0 + 0x10);
    local_38 = *(undefined8 *)PTR_DAT_04bb7ab0;
    local_30 = *(undefined4 *)(PTR_DAT_04bb7ab0 + 8);
    local_24 = *(undefined2 *)(PTR_DAT_04bb7ab0 + 0x14);
    FUN_00cf6b00(param_1,&local_38);
    local_60 = 0x20;
    local_5c = s_WherearenOffice_040fe888._0_5_;
    uStack_57 = s_WherearenOffice_040fe888._5_2_;
    local_70 = PTR_DAT_04bb2028 + 0x10;
    cStack_55 = s_WherearenOffice_040fe888[7];
    uStack_54 = s_WherearenOffice_040fe888._8_5_;
    uStack_4f = s_WherearenOffice_040fe888._13_2_;
    local_3d = 0;
    local_4d[0] = '\0';
    puStack_68 = &local_5c;
    puVar1 = PTR_DAT_04bb32e0;
    if (*(long *)(param_1 + 8) != 0) {
      puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
    }
    FUN_0291818c(&local_70,0,puVar1,&local_38);
    return;
  }
  local_60 = 0x20;
  puStack_68 = &local_5c;
  local_3d = 0;
  local_70 = PTR_DAT_04bb2028 + 0x10;
  switch(*(undefined4 *)(lVar5 + 0xc)) {
  case 0:
    pcVar3 = "WherearenSchool";
    goto LAB_00cf8e00;
  case 1:
    local_4d[1] = 0x6c;
    local_5c = s_WherearenHospital_0409644e._0_5_;
    uStack_57 = s_WherearenHospital_0409644e._5_2_;
    cStack_55 = s_WherearenHospital_0409644e[7];
    uStack_54 = s_WherearenHospital_0409644e._8_5_;
    uStack_4f = s_WherearenHospital_0409644e._13_2_;
    local_4d[0] = s_WherearenHospital_0409644e[0xf];
    pcVar3 = local_4d + 2;
    break;
  case 2:
    local_4d[1] = 0x61;
    local_4d[2] = 'n';
    local_4d[3] = 't';
    local_5c = s_WherearenRestaurant_040babaf._0_5_;
    uStack_57 = s_WherearenRestaurant_040babaf._5_2_;
    cStack_55 = s_WherearenRestaurant_040babaf[7];
    uStack_54 = s_WherearenRestaurant_040babaf._8_5_;
    uStack_4f = s_WherearenRestaurant_040babaf._13_2_;
    local_4d[0] = s_WherearenRestaurant_040babaf[0xf];
    pcVar3 = local_4d + 4;
    break;
  case 3:
    local_5c = s_WherearenCafe_04061dbf._0_5_;
    uStack_57 = s_WherearenCafe_04061dbf._5_2_;
    cStack_55 = s_WherearenCafe_04061dbf[7];
    uStack_54 = s_WherearenCafe_04061dbf._8_5_;
    pcVar3 = (char *)&uStack_4f;
    break;
  case 4:
    pcVar3 = "WherearenTailor";
LAB_00cf8e00:
    local_5c = (undefined5)*(undefined8 *)pcVar3;
    uStack_57 = (undefined2)((ulong)*(undefined8 *)pcVar3 >> 0x28);
    uVar4 = *(undefined8 *)(pcVar3 + 7);
    cStack_55 = (char)uVar4;
    uStack_54 = (undefined5)((ulong)uVar4 >> 8);
    uStack_4f = (undefined2)((ulong)uVar4 >> 0x30);
    pcVar3 = local_4d;
    break;
  default:
    local_5c = s_WherearenSchool_040ab261._0_5_;
    uStack_57 = s_WherearenSchool_040ab261._5_2_;
    cStack_55 = s_WherearenSchool_040ab261[7];
    uStack_54 = s_WherearenSchool_040ab261._8_5_;
    uStack_4f = s_WherearenSchool_040ab261._13_2_;
    pcVar3 = local_4d;
  }
  *pcVar3 = '\0';
  local_38 = *(undefined8 *)PTR_DAT_04bb7ab0;
  local_2c = *(undefined4 *)(PTR_DAT_04bb7ab0 + 0xc);
  uStack_28 = *(undefined4 *)(PTR_DAT_04bb7ab0 + 0x10);
  local_30 = *(undefined4 *)(PTR_DAT_04bb7ab0 + 8);
  local_24 = *(undefined2 *)(PTR_DAT_04bb7ab0 + 0x14);
  FUN_00cf6b00(param_1,&local_38);
  FUN_03773b40(auStack_74);
  puVar1 = PTR_DAT_04bb32e0;
  if (*(long *)(param_1 + 8) != 0) {
    puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
  }
  bVar2 = FUN_0291818c(&local_70,0,puVar1,&local_38);
  *(byte *)(param_1 + 0xb4) = bVar2 & 1;
  puVar1 = PTR_DAT_04bc39e0;
  if ((*(int *)(lVar5 + 0x14) == 4) &&
     ((**(char **)(PTR_DAT_04bc3a88 + 8) != '\0' || (**(char **)(PTR_DAT_04bc39e0 + 8) != '\0')))) {
    *(undefined8 *)(PTR_DAT_04bc39e0 + 0xbc) = 0xc0a00000;
    *(undefined4 *)(puVar1 + 0xc4) = 0x41a00000;
  }
  puVar1 = PTR_DAT_04bbe4a8;
  *PTR_DAT_04bbe4a0 = 1;
  *(undefined4 *)puVar1 = 0x80000000;
  return;
}

