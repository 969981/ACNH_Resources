
uint FUN_0192bc70(long *param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  undefined *local_88;
  undefined8 *local_80;
  undefined *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  uVar6 = FUN_03eaa1d8(param_2,&local_68);
  puVar3 = PTR_DAT_04bbf960;
  puVar2 = PTR_DAT_04bb2020;
  if ((uVar6 & 1) != 0) {
    local_78 = PTR_DAT_04bb2020 + 0x10;
    local_70 = local_68;
    uVar9 = 0;
    do {
      local_80 = &DAT_0407ebb1;
      if (uVar9 < 0x12) {
        local_80 = *(undefined8 **)(puVar3 + (ulong)uVar9 * 8 + 0x198);
      }
      local_88 = puVar2 + 0x10;
      (**(code **)(local_78 + 0x18))(&local_78);
      (**(code **)(local_78 + 0x18))(&local_78);
      puVar4 = local_70;
      (**(code **)(local_88 + 0x18))(&local_88);
      if (puVar4 == local_80) {
LAB_0192bdcc:
        puVar7 = (uint *)(**(code **)(*param_1 + 0xf0))(param_1);
        *puVar7 = uVar9;
        break;
      }
      uVar8 = 0;
      bVar5 = true;
      do {
        if (*(char *)((long)local_70 + uVar8) != *(char *)((long)local_80 + uVar8)) break;
        if (*(char *)((long)local_70 + uVar8) == '\0') {
          if (bVar5) goto LAB_0192bdcc;
          break;
        }
        cVar1 = *(char *)((long)local_70 + uVar8 + 1);
        if (cVar1 != *(char *)((long)local_80 + uVar8 + 1)) break;
        if (cVar1 == '\0') goto LAB_0192bdcc;
        cVar1 = *(char *)((long)local_70 + uVar8 + 2);
        if (cVar1 != *(char *)((long)local_80 + uVar8 + 2)) break;
        if (cVar1 == '\0') goto LAB_0192bdcc;
        bVar5 = uVar8 < 0x7fffe;
        uVar8 = uVar8 + 3;
      } while (uVar8 != 0x80001);
      uVar10 = 0x12;
      if ((int)uVar9 < 0x12) {
        uVar10 = uVar9 + 1;
      }
      uVar9 = uVar10;
    } while (uVar10 != 0x12);
  }
  return uVar6 & 1;
}

