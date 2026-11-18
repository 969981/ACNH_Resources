
void FUN_0328a0b0(undefined **param_1,uint param_2,byte param_3,byte param_4)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined *local_90;
  undefined8 *puStack_88;
  undefined **local_80;
  undefined8 local_78;
  byte local_70;
  byte local_6f;
  undefined *local_50;
  undefined1 *puStack_48;
  
  puVar2 = PTR_DAT_04bc8e68;
  local_80 = (undefined **)CONCAT44(local_80._4_4_,param_2);
  if ((*(ushort *)((long)param_1 + 0x57a) >> (ulong)(param_2 & 0x1f) & 1) != 0) {
    return;
  }
  uVar7 = 0;
  uVar4 = param_2;
  switch(param_2) {
  case 0:
    local_80 = &PTR_LAB_04b177d8;
    local_78 = (long *)0x0;
    puVar5 = param_1[0x95];
    if (puVar5 != (undefined *)0x0) {
      uVar7 = crc32b(0xffffffff,0x57,0x4c11db7);
      uVar7 = crc32b(uVar7,0x61,0x4c11db7);
      uVar7 = crc32b(uVar7,0x69,0x4c11db7);
      uVar1 = crc32b(uVar7,0x74,0x4c11db7);
      do {
        if (*(uint *)(puVar5 + 0x68) == ~uVar1) goto LAB_0328a1a0;
        puVar5 = *(undefined **)(puVar5 + 0x10);
      } while (puVar5 != (undefined *)0x0);
    }
    goto LAB_0328a1f4;
  case 1:
  case 3:
  case 5:
  case 10:
    uVar7 = 2;
    break;
  case 4:
  case 9:
    uVar7 = 1;
    break;
  case 6:
    uVar7 = 3;
    uVar4 = 6;
    break;
  case 7:
  case 8:
  case 0xb:
  case 0xc:
    uVar7 = 4;
  }
switchD_0328a118_caseD_2:
  plVar3 = (long *)param_1[0xa3];
  if (plVar3 != (long *)0x0) {
    local_6f = param_3 & 1;
    local_70 = param_4 & 1;
    local_78 = (long *)CONCAT44(uVar7,uVar4);
    local_80 = param_1;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_80);
    uVar4 = param_2;
  }
  if (uVar4 < 0xd) {
    puVar6 = (undefined8 *)(&PTR_s_FocusKey_04b17960)[uVar4];
  }
  else {
    puVar6 = &DAT_0407ebb1;
  }
  local_90 = puVar2 + 0x10;
  puStack_88 = (undefined8 *)PTR_DAT_04bb2120;
  if (puVar6 != (undefined8 *)0x0) {
    puStack_88 = puVar6;
  }
  FUN_0328adf0(param_1,&local_90,uVar7,param_3 & 1,param_4 & 1);
  return;
LAB_0328a1a0:
  do {
    plVar3 = (long *)(puVar5 + 0x28);
    puVar5 = *(undefined **)(puVar5 + 0x18);
  } while (puVar5 != (undefined *)0x0 && *plVar3 == 0);
  if (*plVar3 != 0) {
    local_50 = PTR_DAT_04bc8e68 + 0x10;
    puStack_48 = &DAT_040ba9de;
    FUN_032c7d70(param_1 + 0x91,&local_50,0,&local_80,0,0);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 8))();
    }
  }
LAB_0328a1f4:
  uVar7 = 0;
  goto switchD_0328a118_caseD_2;
}

