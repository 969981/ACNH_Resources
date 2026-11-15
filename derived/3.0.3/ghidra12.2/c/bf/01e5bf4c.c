
void FUN_01e5bf4c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined *local_30;
  char *pcStack_28;
  
  *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x4d8);
  *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_1 + 0x4e8);
  *(undefined8 *)(param_1 + 0x314) = *(undefined8 *)(param_1 + 0x4c0);
  *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x4c8);
  lVar1 = *(long *)(param_1 + 0x340);
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "NpcMoveAccelRate";
  if (((*(long *)(lVar1 + 0x1138) != 0) &&
      (lVar2 = *(long *)(*(long *)(lVar1 + 0x1138) + 0x78), lVar2 != 0)) &&
     (plVar3 = *(long **)(lVar2 + 0x48), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x30))(*(undefined4 *)(param_1 + 0x318),plVar3,&local_30);
    lVar1 = *(long *)(param_1 + 0x340);
  }
  FUN_017081d0(lVar1,&DAT_05390430 + (long)*(int *)(param_1 + 0x568) * 2,6,1,0);
  if ((*(int *)(param_1 + 0x4b8) != 0) && (*(int *)(param_1 + 0x378) == 0x23)) {
    *(undefined4 *)(param_1 + 0x330) = 0;
  }
  fVar4 = *(float *)(*(long *)(param_1 + 0x338) + 0x278) - *(float *)(param_1 + 0x308);
  fVar5 = *(float *)(*(long *)(param_1 + 0x338) + 0x280) - *(float *)(param_1 + 0x310);
  fVar6 = *(float *)(param_1 + 0x330) + 2.0;
  if (*(float *)(param_1 + 0x330) <= 0.0) {
    fVar6 = 2.0;
  }
  if (SQRT(fVar5 * fVar5 + fVar4 * fVar4) < fVar6) {
    *(undefined4 *)(param_1 + 0x4b8) = 1;
  }
  return;
}

