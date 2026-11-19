
undefined2 FUN_039a9a90(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  float fVar7;
  float local_60;
  float fStack_5c;
  float local_58;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_40;
  float fStack_3c;
  float local_38;
  
  pfVar2 = &local_60;
  pfVar3 = &local_60;
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + (ulong)*(ushort *)((long)param_2 + 0x1c) * 8)
                + 0x1e) >> 4 & 1) != 0) {
    plVar5 = (long *)*param_2;
    if (((long)*(short *)(param_2 + 3) == -1) || (*(short *)((long)param_2 + 0x1a) == -1)) {
      if (((*(byte *)(param_1 + 0x280) & 1) == 0) &&
         (uVar1 = (**(code **)(*plVar5 + 600))(plVar5,0), (uVar1 & 1) == 0)) goto LAB_039a9c60;
      pfVar2 = (float *)(param_1 + 0x238);
      local_60 = *(float *)(param_1 + 0x268) * *(float *)(param_1 + 0x274);
      fStack_5c = *(float *)(param_1 + 0x26c) * *(float *)(param_1 + 0x278);
      local_58 = *(float *)(param_1 + 0x270) * *(float *)(param_1 + 0x27c);
      pcVar4 = *(code **)(*plVar5 + 0x288);
    }
    else {
      plVar6 = (long *)**(undefined8 **)
                         (*(long *)(param_1 + 0x38) + (long)*(short *)(param_2 + 3) * 8);
      uVar1 = (**(code **)(*plVar6 + 600))(plVar6,1);
      if (((uVar1 & 1) == 0) && (uVar1 = (**(code **)(*plVar5 + 600))(plVar5,0), (uVar1 & 1) == 0))
      goto LAB_039a9c60;
      (**(code **)(*plVar6 + 0x70))(plVar6,&local_60,(long)*(short *)((long)param_2 + 0x1a));
      if ((*(byte *)((long)param_2 + 0x1e) & 1) != 0) {
        fVar7 = SQRT(local_50 * local_50 + local_60 * local_60 + local_40 * local_40);
        if (0.0 < fVar7) {
          fVar7 = 1.0 / fVar7;
          local_60 = local_60 * fVar7;
          local_50 = local_50 * fVar7;
          local_40 = local_40 * fVar7;
        }
        fVar7 = SQRT(fStack_4c * fStack_4c + fStack_5c * fStack_5c + fStack_3c * fStack_3c);
        if (0.0 < fVar7) {
          fVar7 = 1.0 / fVar7;
          fStack_5c = fStack_5c * fVar7;
          fStack_4c = fStack_4c * fVar7;
          fStack_3c = fStack_3c * fVar7;
        }
        fVar7 = SQRT(local_48 * local_48 + local_58 * local_58 + local_38 * local_38);
        if (0.0 < fVar7) {
          fVar7 = 1.0 / fVar7;
          local_58 = local_58 * fVar7;
          local_48 = local_48 * fVar7;
          local_38 = local_38 * fVar7;
        }
      }
      pcVar4 = *(code **)(*plVar5 + 0x288);
      pfVar3 = (float *)PTR_DAT_04bb2f78;
    }
    (*pcVar4)(plVar5,pfVar2,pfVar3);
  }
LAB_039a9c60:
  return *(undefined2 *)((long)param_2 + 0x1c);
}

