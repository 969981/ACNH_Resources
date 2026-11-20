
undefined8 FUN_03eb7030(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  undefined *local_70;
  long local_68;
  
  puVar5 = PTR_DAT_04bb2720;
  puVar4 = PTR_DAT_04bb2640;
  if (*(int *)(*(long *)PTR_DAT_04bb2720 + 0x338) < 0) {
LAB_03eb7190:
    uVar8 = 0;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x20);
    if (0 < (int)uVar9) {
      uVar12 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      do {
        uVar2 = uVar12;
        if (uVar9 <= uVar12) {
          uVar2 = 0;
        }
        plVar11 = (long *)(*(long *)(param_1 + 0x28) + (ulong)uVar2 * 0x38);
        plVar7 = (long *)(**(code **)(**(long **)puVar4 + 0x18))
                                   (*(long **)puVar4,*(undefined4 *)(*(long *)puVar5 + 0x338));
        local_68 = *plVar7;
        local_70 = puVar1;
        (**(code **)(*plVar11 + 0x18))(plVar11);
        (**(code **)(*plVar11 + 0x18))(plVar11);
        lVar13 = plVar11[1];
        (**(code **)(local_70 + 0x18))(&local_70);
        if (lVar13 == local_68) goto LAB_03eb7190;
        uVar10 = 0;
        bVar6 = true;
        do {
          lVar13 = plVar11[1] + 2 + uVar10;
          cVar3 = *(char *)(lVar13 + -2);
          if (cVar3 != *(char *)(local_68 + uVar10)) break;
          if (cVar3 == '\0') {
            if (bVar6) goto LAB_03eb7190;
            break;
          }
          cVar3 = *(char *)(lVar13 + -1);
          if (cVar3 != *(char *)(local_68 + uVar10 + 1)) break;
          if (cVar3 == '\0') goto LAB_03eb7190;
          cVar3 = *(char *)(plVar11[1] + 2 + uVar10);
          if (cVar3 != *(char *)(local_68 + uVar10 + 2)) break;
          if (cVar3 == '\0') goto LAB_03eb7190;
          bVar6 = uVar10 < 0x7fffe;
          uVar10 = uVar10 + 3;
        } while (uVar10 != 0x80001);
        uVar9 = *(uint *)(param_1 + 0x20);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar9);
    }
    uVar8 = 1;
  }
  return uVar8;
}

