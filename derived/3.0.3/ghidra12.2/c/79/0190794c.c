
void FUN_0190794c(long param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x40);
  if (*(uint *)(lVar6 + 0x78) <= param_3) {
    return;
  }
  if (((int)param_3 < 0) || ((int)*(uint *)(lVar6 + 0x78) <= (int)param_3)) {
    if (*(uint *)(lVar6 + 0x58) != 0) {
      plVar7 = *(long **)(lVar6 + 0x60);
      goto LAB_019079a4;
    }
  }
  else if (param_3 < *(uint *)(lVar6 + 0x58)) {
    plVar7 = (long *)(*(long *)(lVar6 + 0x60) + (ulong)param_3 * 8);
LAB_019079a4:
    lVar6 = *plVar7;
    goto LAB_019079b0;
  }
  lVar6 = 0;
LAB_019079b0:
  pcVar3 = (char *)(**(code **)(*(long *)(lVar6 + 0x30) + 0xf0))();
  if (*pcVar3 != '\0') {
    plVar7 = (long *)(lVar6 + 0x60);
    puVar4 = (uint *)(**(code **)(*plVar7 + 0xf0))(plVar7);
    if (((*puVar4 < 0x40) && (DAT_05292338 != 0)) &&
       (*(char *)(DAT_05292338 + (ulong)*puVar4 * 0x14 + 0xc) != '\0')) {
      puVar4 = (uint *)(**(code **)(*plVar7 + 0xf0))(plVar7);
      uVar1 = *puVar4;
      if (0x3f < uVar1) {
        return;
      }
      if (DAT_05292338 == 0) {
        return;
      }
      if (*(char *)(DAT_05292338 + 0xc + (ulong)uVar1 * 0x14) == '\0') {
        return;
      }
      lVar6 = DAT_05292338 + 0xc + (ulong)uVar1 * 0x14;
      *(undefined4 *)param_2 = *(undefined4 *)(lVar6 + 4);
      *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)(lVar6 + 8);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar6 + 0xc);
      return;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(*(long *)(lVar6 + 0x90) + 0xf0))((long *)(lVar6 + 0x90));
  uVar2 = *(undefined4 *)(puVar5 + 1);
  *param_2 = *puVar5;
  *(undefined4 *)(param_2 + 1) = uVar2;
  return;
}

