
void FUN_01907390(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char *pcVar4;
  uint *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  if (*(int *)(**(long **)(param_1 + 0x38) + 0x58) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = **(long **)(**(long **)(param_1 + 0x38) + 0x60);
  }
  pcVar4 = (char *)(**(code **)(*(long *)(lVar7 + 0x30) + 0xf0))();
  if (*pcVar4 != '\0') {
    plVar8 = (long *)(lVar7 + 0x60);
    puVar5 = (uint *)(**(code **)(*plVar8 + 0xf0))(plVar8);
    puVar3 = PTR_DAT_04bb5ce0;
    if ((*puVar5 < 0x40 && *(long *)PTR_DAT_04bb5ce0 != 0) &&
       (*(char *)(*(long *)PTR_DAT_04bb5ce0 + (ulong)*puVar5 * 0x14 + 0xc) != '\0')) {
      puVar5 = (uint *)(**(code **)(*plVar8 + 0xf0))(plVar8);
      uVar1 = *puVar5;
      if (((uVar1 < 0x40) && (*(long *)puVar3 != 0)) &&
         (lVar7 = *(long *)puVar3 + 0xc, *(char *)(lVar7 + (ulong)uVar1 * 0x14) != '\0')) {
        lVar7 = lVar7 + (ulong)uVar1 * 0x14;
        *(undefined4 *)param_2 = *(undefined4 *)(lVar7 + 4);
        *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)(lVar7 + 8);
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar7 + 0xc);
      }
      goto LAB_019074a4;
    }
  }
  puVar6 = (undefined8 *)(**(code **)(*(long *)(lVar7 + 0x90) + 0xf0))((long *)(lVar7 + 0x90));
  uVar2 = *(undefined4 *)(puVar6 + 1);
  *param_2 = *puVar6;
  *(undefined4 *)(param_2 + 1) = uVar2;
LAB_019074a4:
  fVar9 = (float)FUN_01907820(param_1);
  *(float *)((long)param_2 + 4) = *(float *)((long)param_2 + 4) + fVar9 * 0.5;
  return;
}

