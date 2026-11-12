
int FUN_008d84b0(long param_1,byte *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  char *pcVar6;
  byte bVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  undefined *local_70;
  char *local_68;
  
  iVar3 = FUN_008d8280();
  if (iVar3 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x31800) = 0;
  iVar3 = FUN_008d8280();
  *(int *)(param_1 + 0x31804) = iVar3;
  puVar2 = PTR_DAT_04bb2640;
  if (iVar3 != 4) goto LAB_008d86a4;
  if ((DAT_05aed670 == 0) || (*(long *)(DAT_05aed670 + 0x330) == 0)) {
LAB_008d85ac:
    plVar9 = &DAT_055c04a0;
  }
  else {
    puVar5 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar4 = FUN_006bd550(*puVar5,0);
    if ((iVar4 != 0x758f7eaf) || (DAT_05aed670 == 0)) goto LAB_008d85ac;
    plVar9 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(**(long **)puVar2 + 0x18))
                         (*(long **)puVar2,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar4 = FUN_006bd550(*puVar5,0);
      plVar9 = (long *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        plVar9 = &DAT_055c04a0;
      }
    }
  }
  (**(code **)(*plVar9 + 0x18))(plVar9);
  local_68 = (char *)plVar9[1];
  local_70 = PTR_DAT_04bb2020 + 0x10;
  uVar10 = 0;
  do {
    pcVar12 = "";
    if (uVar10 < 0x10) {
      pcVar12 = (&PTR_s_IdrMuseumEnt00_04923920)[uVar10];
    }
    (**(code **)(local_70 + 0x18))(&local_70);
    if (pcVar12 == local_68) {
LAB_008d86a0:
      *(uint *)(param_1 + 0x31808) = uVar10;
      break;
    }
    if (*pcVar12 == *local_68) {
      if (*pcVar12 == '\0') goto LAB_008d86a0;
      lVar8 = 0x7fffe;
      pcVar6 = local_68;
      while( true ) {
        if (pcVar12[1] != pcVar6[1]) break;
        if (pcVar12[1] == '\0') goto LAB_008d86a0;
        if (pcVar12[2] != pcVar6[2]) break;
        if (pcVar12[2] == '\0') goto LAB_008d86a0;
        if ((lVar8 == 0) || (cVar1 = pcVar12[3], cVar1 != pcVar6[3])) break;
        lVar8 = lVar8 + -3;
        pcVar6 = pcVar6 + 3;
        pcVar12 = pcVar12 + 3;
        if (cVar1 == '\0') goto LAB_008d86a0;
      }
    }
    uVar11 = 0x10;
    if ((int)uVar10 < 0x10) {
      uVar11 = uVar10 + 1;
    }
    uVar10 = uVar11;
  } while (uVar11 != 0x10);
LAB_008d86a4:
  *(undefined1 *)(param_1 + 0x37fc0) = 1;
  FUN_008c3440(param_1,*(undefined4 *)(param_1 + 0x410));
  *(undefined1 *)(param_1 + 0x37fc0) = 0;
  bVar7 = *param_2;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  *(byte *)(param_1 + 0x309b8) = bVar7;
  *(undefined ***)(param_1 + 0x37f58) = &PTR_LAB_04925ae0;
  FUN_03ebb160(param_1 + 0x408,0x1d);
  return iVar3;
}

