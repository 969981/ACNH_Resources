
void FUN_0279eb50(byte *param_1,undefined8 param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *local_68;
  char *local_60;
  undefined8 uStack_58;
  byte local_38 [4];
  undefined4 local_34;
  
  iVar5 = FUN_0277d6c4(param_2);
  uVar11 = 0;
  switch(iVar5) {
  case 0x8ed:
    uVar11 = 2;
    break;
  case 0x8ee:
    uVar11 = 3;
    break;
  case 0x8ef:
    break;
  case 0x8f0:
    uVar11 = 5;
    break;
  default:
    if (iVar5 == 0x8a5) {
      uVar11 = 4;
    }
    else {
      if (iVar5 != 0x8a6) {
        return;
      }
      uVar11 = 1;
    }
  }
  local_38[0] = *param_1;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  lVar6 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_38,1);
  puVar4 = PTR_DAT_04bb2020;
  if (lVar6 == 0) {
    return;
  }
  lVar10 = **(long **)PTR_DAT_04bb27d0;
  bVar3 = *(byte *)(lVar10 + 0x473);
  if ((long)(char)bVar3 == 0xffffffffffffffff) {
LAB_0279ec64:
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_60 = "PlantFruit";
    local_68 = puVar1;
    uVar7 = FUN_0279d6d0(param_1,&local_68,uVar11);
    if ((uVar7 & 1) == 0) {
      local_60 = "PE_PlantFruit_First";
      uVar12 = *(undefined8 *)PTR_DAT_04bb49a0;
      local_68 = puVar1;
      local_34 = FUN_006bd550("PE_PlantFruit_First",0);
      uVar12 = FUN_01b5b4b0(uVar12,&local_34);
      FUN_01b5e0b0(&local_68,param_2,uVar12,param_1,0);
    }
  }
  else {
    pbVar2 = (byte *)(lVar10 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
    if (7 < bVar3) {
      pbVar2 = (byte *)(lVar10 + 0x48);
    }
    if (((*pbVar2 >> 3 & 1) == 0) || (*(byte *)(lVar10 + 0x472) == bVar3)) goto LAB_0279ec64;
  }
  lVar10 = *(long *)(lVar6 + 0x18358);
  if (lVar10 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
      plVar8 = *(long **)(lVar10 + 0x20);
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      uVar7 = uVar7 & 0xffffffff;
      if (*(long *)(lVar6 + 0x18358) == 0) goto LAB_0279ed34;
      plVar8 = *(long **)(*(long *)(lVar6 + 0x18358) + 0x20);
    }
    if (plVar8 != (long *)0x0) {
      local_68 = *(undefined **)(lVar6 + 0x18338);
      local_60 = *(char **)(lVar6 + 0x18340);
      uStack_58 = 0x62ac;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_68);
    }
  }
LAB_0279ed34:
  local_68 = puVar4 + 0x10;
  local_60 = "PlantFruit";
  FUN_0279e300(*(long *)(lVar6 + 0x18340) + *(long *)(lVar6 + 0x18338),param_1,&local_68,uVar11);
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar6 + 0x18358) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar6 + 0x18358) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return;
}

