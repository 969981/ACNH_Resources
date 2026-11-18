
void FUN_032a4dc0(float param_1,float param_2,long param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined *local_88;
  char *pcStack_80;
  long local_78;
  undefined *local_70;
  char *pcStack_68;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_04bc8e68;
  local_78 = *(long *)(param_3 + 0xe0);
  local_38 = *(undefined8 *)(local_78 + 0x18);
  local_70 = PTR_DAT_04bc8e68 + 0x10;
  pcStack_68 = "N_Right";
  plVar6 = (long *)FUN_032d3050(&local_38,local_38,&local_70);
  puVar4 = PTR_DAT_04bc8f38;
  puVar3 = PTR_DAT_04bc8f30;
  if (((*PTR_DAT_04bc8f38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0))
  {
    *(undefined8 *)puVar3 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar6 != (long *)0x0) {
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6);
    if (puVar7 != (undefined8 *)puVar3) {
      do {
        puVar7 = (undefined8 *)*puVar7;
      } while (puVar7 != (undefined8 *)puVar3 && puVar7 != (undefined8 *)0x0);
      if (puVar7 == (undefined8 *)0x0) goto LAB_032a4e90;
    }
    *(byte *)(plVar6 + 0xb) = *(byte *)(plVar6 + 0xb) | 0x10;
    *(float *)(plVar6 + 6) = param_1 * 0.5 + param_2;
  }
LAB_032a4e90:
  local_70 = puVar1 + 0x10;
  local_38 = *(undefined8 *)(local_78 + 0x18);
  pcStack_68 = "N_Left";
  plVar6 = (long *)FUN_032d3050(&local_38,local_38,&local_70);
  if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
    *(undefined8 *)puVar3 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar6 != (long *)0x0) {
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6);
    if (puVar7 != (undefined8 *)puVar3) {
      do {
        puVar7 = (undefined8 *)*puVar7;
      } while (puVar7 != (undefined8 *)puVar3 && puVar7 != (undefined8 *)0x0);
      if (puVar7 == (undefined8 *)0x0) goto LAB_032a4f10;
    }
    *(byte *)(plVar6 + 0xb) = *(byte *)(plVar6 + 0xb) | 0x10;
    *(float *)(plVar6 + 6) = param_2 + param_1 * -0.5;
  }
LAB_032a4f10:
  pcStack_80 = "L_Line_00/P_Line";
  local_88 = puVar1 + 0x10;
  lVar8 = FUN_032cb990(&local_78,&local_88);
  puVar2 = PTR_DAT_04bc8ed0;
  if (lVar8 != 0) {
    fVar10 = *(float *)(*(long *)PTR_DAT_04bc8ed0 + 0xf4);
    *(float *)(lVar8 + 0x30) = param_2;
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
    *(float *)(lVar8 + 0x50) = (param_1 / 1920.0) * fVar10;
  }
  local_38 = *(undefined8 *)(local_78 + 0x18);
  pcStack_68 = "N_BtnWrp";
  local_70 = puVar1 + 0x10;
  plVar6 = (long *)FUN_032d3050(&local_38,local_38,&local_70);
  if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
    *(undefined8 *)puVar3 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar6 != (long *)0x0) {
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6);
    if (puVar7 != (undefined8 *)puVar3) {
      do {
        puVar7 = (undefined8 *)*puVar7;
      } while (puVar7 != (undefined8 *)puVar3 && puVar7 != (undefined8 *)0x0);
      if (puVar7 == (undefined8 *)0x0) goto LAB_032a4fec;
    }
    fVar10 = *(float *)(*(long *)puVar2 + 0xec);
    *(byte *)(plVar6 + 0xb) = *(byte *)(plVar6 + 0xb) | 0x10;
    *(float *)(plVar6 + 6) = (param_1 / 1280.0) * fVar10;
  }
LAB_032a4fec:
  local_70 = puVar1 + 0x10;
  local_38 = *(undefined8 *)(local_78 + 0x18);
  pcStack_68 = "L_Ctrl";
  plVar6 = (long *)FUN_032d3050(&local_38,local_38,&local_70);
  if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
    *(undefined8 *)puVar3 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar6 != (long *)0x0) {
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6);
    if (puVar7 != (undefined8 *)puVar3) {
      do {
        puVar7 = (undefined8 *)*puVar7;
      } while (puVar7 != (undefined8 *)puVar3 && puVar7 != (undefined8 *)0x0);
      if (puVar7 == (undefined8 *)0x0) goto LAB_032a509c;
    }
    fVar9 = *(float *)(plVar6 + 10) * 0.5 +
            (*(float *)(*(long *)puVar2 + 0xf0) - *(float *)(plVar6 + 10) * 0.5) *
            (param_1 / 1280.0);
    *(byte *)(plVar6 + 0xb) = *(byte *)(plVar6 + 0xb) | 0x10;
    fVar10 = 70.0;
    if (70.0 <= fVar9) {
      fVar10 = fVar9;
    }
    *(float *)(plVar6 + 6) = fVar10;
  }
LAB_032a509c:
  *(undefined1 *)(*(long *)(*(long *)(param_3 + 0xe0) + 0x18) + 0x59) = param_4;
  return;
}

