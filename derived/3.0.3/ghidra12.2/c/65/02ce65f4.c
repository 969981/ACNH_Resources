
uint FUN_02ce65f4(long param_1,uint param_2)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int *piVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_38;
  
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  if (*(uint *)(param_1 + 0x762b8) == param_2) {
    puVar6 = (undefined8 *)(param_1 + 0x76270) + param_2;
    if (2 < param_2) {
      puVar6 = (undefined8 *)(param_1 + 0x76270);
    }
    if (*(int *)(param_1 + 0x76288) <= (int)param_2 || 0x7fffffff < param_2) {
      puVar6 = (undefined8 *)&DAT_05586008;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x762bc);
    plVar1 = (long *)(param_1 + 0x3b8a8);
    piVar5 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1);
    if (*piVar5 != 0) {
      param_2 = param_2 - iVar2;
      piVar5 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1);
      if (param_2 <= *piVar5 - 1U) {
        lVar7 = (**(code **)(*plVar1 + 0x18))(plVar1);
        puVar6 = *(undefined8 **)(*(long *)(lVar7 + 8) + (long)(int)param_2 * 8);
        goto LAB_02ce66cc;
      }
    }
    puVar6 = (undefined8 *)&DAT_05586008;
  }
LAB_02ce66cc:
  puVar3 = PTR_DAT_04bb43c0;
  local_38 = *puVar6;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_38);
  if (*(long *)puVar3 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar7 = (**(code **)(*(long *)(param_1 + 0x18) + 0x20))((long *)(param_1 + 0x18));
      uVar4 = FUN_0277d6c4(&local_38);
      if ((uVar4 >> 3 & 0x1fff) < 0x753) {
        return *(uint *)(lVar7 + (ulong)((uVar4 & 0xffff) >> 5) * 4) >> (ulong)(uVar4 & 0x1f) & 1;
      }
    }
  }
  return 0;
}

