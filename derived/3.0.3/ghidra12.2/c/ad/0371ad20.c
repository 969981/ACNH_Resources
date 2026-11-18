
void FUN_0371ad20(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ushort *puVar7;
  long *plVar8;
  long lVar9;
  undefined2 uVar10;
  long lVar11;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  char *pcStack_48;
  
  puVar2 = PTR_DAT_04bc3a48;
  puVar1 = PTR_DAT_04bb27f8;
  if (*(long *)PTR_DAT_04bb27f8 != 0) {
    if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
         ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
       (lVar11 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar11 == 0)) {
      uVar10 = *(undefined2 *)(*(long *)PTR_DAT_04bb27f8 + 0x2a);
    }
    else if ((*(long **)(lVar11 + 0x60) == (long *)0x0) ||
            (puVar5 = (undefined8 *)**(long **)(lVar11 + 0x60), puVar5 == (undefined8 *)0x0)) {
      uVar10 = *(undefined2 *)(*(long *)(lVar11 + 0x48) + *(long *)(lVar11 + 0x40) + 2);
    }
    else {
      uVar6 = (**(code **)*puVar5)();
      uVar10 = *(undefined2 *)(*(long *)(lVar11 + 0x48) + *(long *)(lVar11 + 0x40) + 2);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar11 + 0x60) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar11 + 0x60) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
    *(undefined2 *)(param_1 + 0x1168) = uVar10;
  }
  puVar3 = PTR_DAT_04bc3a80;
  if (((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b) &&
      (lVar11 = *(long *)PTR_DAT_04bb2720, lVar11 != 0)) && (*(long *)(lVar11 + 0x330) != 0)) {
    puVar5 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
    FUN_006bd550(*puVar5,0);
  }
  puVar7 = *(ushort **)puVar2;
  if ((((puVar7 == (ushort *)0x0) || ((*puVar7 & 1) == 0)) &&
      (((*(long *)puVar1 == 0 || (*(int *)(*(long *)puVar1 + 0x14) == 0)) ||
       ((puVar7 != (ushort *)0x0 && ((*puVar7 & 1) != 0)))))) &&
     (*(int *)(puVar3 + 0x38) == -0x74938232)) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "DoctorEventStart";
    local_50 = puVar1;
    iVar4 = FUN_02758850(&local_50);
    if (iVar4 != 0) {
      pcStack_58 = "GetMedicalEquipToday";
      local_60 = puVar1;
      iVar4 = FUN_02758850(&local_60);
      if ((iVar4 == 0) && (*(int *)(param_1 + 0xe0) != 0)) {
        plVar8 = *(long **)(param_1 + 0xe8);
        lVar11 = (long)*(int *)(param_1 + 0xe0) << 3;
        do {
          lVar9 = *plVar8;
          if (*(int *)(lVar9 + 0xd8) == 6) {
            *(ushort *)(lVar9 + 0x114) = *(ushort *)(lVar9 + 0x114) & 0xffef;
          }
          plVar8 = plVar8 + 1;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
      }
    }
  }
  *(uint *)(&DAT_00001230 + param_1) = *(uint *)(&DAT_00001230 + param_1) & 0xffffdd7f | 0x200;
  return;
}

