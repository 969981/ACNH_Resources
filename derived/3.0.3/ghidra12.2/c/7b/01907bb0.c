
uint FUN_01907bb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  uint *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined8 local_60;
  undefined4 local_58;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    return 0;
  }
  local_58 = 0;
  local_60 = 0;
  if (*(int *)(**(long **)(param_1 + 0x38) + 0x58) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = **(long **)(**(long **)(param_1 + 0x38) + 0x60);
  }
  pcVar3 = (char *)(**(code **)(*(long *)(lVar6 + 0x30) + 0xf0))();
  if (*pcVar3 != '\0') {
    plVar7 = (long *)(lVar6 + 0x60);
    puVar4 = (uint *)(**(code **)(*plVar7 + 0xf0))(plVar7);
    puVar1 = PTR_DAT_04bb5ce0;
    if ((*puVar4 < 0x40 && *(long *)PTR_DAT_04bb5ce0 != 0) &&
       (*(char *)(*(long *)PTR_DAT_04bb5ce0 + (ulong)*puVar4 * 0x14 + 0xc) != '\0')) {
      puVar4 = (uint *)(**(code **)(*plVar7 + 0xf0))(plVar7);
      uVar2 = *puVar4;
      fVar9 = 0.0;
      if ((uVar2 < 0x40) &&
         ((*(long *)puVar1 != 0 &&
          (lVar6 = *(long *)puVar1 + 0xc, *(char *)(lVar6 + (ulong)uVar2 * 0x14) != '\0')))) {
        lVar6 = lVar6 + (ulong)uVar2 * 0x14;
        local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(lVar6 + 4));
        local_58 = *(undefined4 *)(lVar6 + 0xc);
        fVar9 = *(float *)(lVar6 + 8);
      }
      goto LAB_01907ce4;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(*(long *)(lVar6 + 0x90) + 0xf0))((long *)(lVar6 + 0x90));
  local_58 = *(undefined4 *)(puVar5 + 1);
  local_60._4_4_ = (float)((ulong)*puVar5 >> 0x20);
  fVar9 = local_60._4_4_;
  local_60 = *puVar5;
LAB_01907ce4:
  fVar8 = (float)FUN_01907820(param_1);
  local_60 = CONCAT44(fVar9 + fVar8 * 0.5,(undefined4)local_60);
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 8))
                    (*(long **)(param_1 + 0x30),&local_60,param_2,param_3);
  return uVar2 & 1;
}

