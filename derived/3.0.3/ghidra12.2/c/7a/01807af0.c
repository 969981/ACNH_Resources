
void FUN_01807af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  float fVar8;
  undefined *local_80;
  char *pcStack_78;
  undefined8 local_6c;
  float local_64;
  
  puVar3 = PTR_DAT_04bb5ce0;
  puVar2 = PTR_DAT_04bb2720;
  puVar1 = PTR_DAT_04bb2640;
  if (*(long *)PTR_DAT_04bb5ce0 == 0) {
    fVar8 = 6.0;
  }
  else {
    fVar8 = (float)(*(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xf68) * -2 + 6);
  }
  lVar7 = *(long *)PTR_DAT_04bb2720;
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x330) == 0)) {
LAB_01807c28:
    puVar1 = PTR_DAT_04bb2020;
    local_6c = 0x43200000;
    local_64 = fVar8 * 5.0 + 110.0;
    local_80 = PTR_DAT_04bb2020 + 0x10;
    pcStack_78 = "RoomMdlStairsNml";
    FUN_017e8780(0x43340000,&local_80,&local_6c,1);
    if (*(long *)puVar3 == 0) {
      local_64 = fVar8 * -5.0 + 160.0 + 50.0;
    }
    else {
      local_64 = fVar8 * -5.0 + 160.0 + 50.0;
      if (*(char *)(*(long *)puVar3 + 0xf5e) != '\0') {
        local_80 = puVar1 + 0x10;
        pcStack_78 = "RoomMdlStairsNmlUp";
        goto LAB_01807cf0;
      }
    }
    local_80 = puVar1 + 0x10;
    pcStack_78 = "RoomMdlStairsNml";
  }
  else {
    puVar6 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
    iVar5 = FUN_006bd550(*puVar6,0);
    if ((iVar5 != 0x758f7eaf) ||
       (((lVar7 = *(long *)puVar2, lVar7 == 0 || (*(long *)(lVar7 + 0x330) == 0)) ||
        (*(int *)(*(long *)(lVar7 + 0x330) + 0x248) == 0)))) goto LAB_01807c28;
    puVar6 = (undefined8 *)
             (**(code **)(**(long **)puVar1 + 0x18))
                       (*(long **)puVar1,*(undefined4 *)(lVar7 + 0x338));
    iVar5 = FUN_006bd550(*puVar6,0);
    if (((iVar5 == 0x758f7eaf) && (*(long *)puVar2 != 0)) &&
       ((lVar7 = *(long *)(*(long *)puVar2 + 0x330), lVar7 != 0 && (*(int *)(lVar7 + 0x248) == 1))))
    {
      pcStack_78 = "RoomMdlStairsNml";
      local_64 = -fVar8 * 5.0 + 210.0;
    }
    else {
      pcStack_78 = "RoomMdlStairsDown";
      local_64 = -fVar8 * 5.0 + 160.0 + 50.0;
    }
    local_80 = PTR_DAT_04bb2020 + 0x10;
  }
LAB_01807cf0:
  local_6c = 0x43200000;
  FUN_017e8780(0,&local_80,&local_6c,1);
  lVar7 = *(long *)puVar2;
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x330) != 0)) {
    puVar6 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
    iVar5 = FUN_006bd550(*puVar6,0);
    if ((iVar5 == 0x758f7eaf) &&
       ((*(long *)puVar2 != 0 && (lVar7 = *(long *)(*(long *)puVar2 + 0x330), lVar7 != 0)))) {
      bVar4 = *(int *)(lVar7 + 0x248) == 0;
      goto LAB_01807d70;
    }
  }
  bVar4 = true;
LAB_01807d70:
  FUN_0180e530(2,param_1,bVar4);
  FUN_0180e530(3,param_2,0);
  FUN_0180e530(0,param_3,0);
  FUN_0180e530(1,param_4,0);
  return;
}

