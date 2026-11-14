
void FUN_01807e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined **local_70;
  char *pcStack_68;
  undefined8 local_5c;
  float local_54;
  
  puVar1 = PTR_DAT_04bb5ce0;
  if (*(long *)PTR_DAT_04bb5ce0 == 0) {
    fVar4 = 6.0;
  }
  else {
    fVar4 = (float)(*(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xf68) * -2 + 6);
  }
  if ((DAT_05aed670 == 0) || (*(long *)(DAT_05aed670 + 0x330) == 0)) {
LAB_01807efc:
    local_54 = fVar4 * -5.0 + 160.0 + 50.0;
  }
  else {
    puVar3 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar2 = FUN_006bd550(*puVar3,0);
    if ((iVar2 != 0x758f7eaf) || ((DAT_05aed670 == 0 || (*(long *)(DAT_05aed670 + 0x330) == 0))))
    goto LAB_01807efc;
    local_54 = fVar4 * -5.0 + 160.0 + 50.0;
    if (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248) != 0) {
      pcStack_68 = "RoomMdlStairsDown";
      goto LAB_01807f44;
    }
  }
  if ((*(long *)puVar1 == 0) || (*(char *)(*(long *)puVar1 + 0xf5e) == '\0')) {
    pcStack_68 = "RoomMdlStairsNml";
  }
  else {
    pcStack_68 = "RoomMdlStairsNmlUp";
  }
LAB_01807f44:
  local_5c = 0x43200000;
  local_70 = &PTR_LAB_048f9770;
  FUN_017e8780(0,&local_70,&local_5c,1);
  FUN_0180e530(2,param_1,0);
  FUN_0180e530(3,param_2,0);
  FUN_0180e530(0,param_3,0);
  FUN_0180e530(1,param_4,0);
  return;
}

