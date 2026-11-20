
void FUN_03ef8c00(long param_1,float *param_2,uint param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_7c [12];
  float local_70;
  float fStack_6c;
  float local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float local_54;
  float local_50 [4];
  
  if (((param_4 & 1) == 0) || ((param_5 & 1) == 0)) {
    uVar1 = param_3;
    if (*(uint *)(param_1 + 8) <= param_3) {
      uVar1 = 0;
    }
    plVar2 = (long *)**(undefined8 **)
                       (*(long *)(*(long *)(param_1 + 0x28) + 0x38) +
                       (long)*(short *)(param_1 + 0x30) * 8);
    (**(code **)(*plVar2 + 0x60))
              (plVar2,&local_70,auStack_7c,
               (long)*(short *)(*(long *)(param_1 + 0x10) + (long)(int)uVar1 * 2));
    if ((param_4 & 1) == 0) {
      if ((param_5 & 1) == 0) goto LAB_03ef8db0;
      local_64 = param_2[4];
      local_54 = param_2[5];
      lVar3 = 3;
      fVar4 = param_2[6];
    }
    else {
      fVar6 = *param_2;
      fVar5 = param_2[1];
      fVar7 = param_2[2];
      lVar3 = 2;
      fVar8 = param_2[3] + param_2[3];
      fVar9 = fVar6 + fVar6;
      fVar10 = fVar5 * (fVar5 + fVar5);
      local_50[1] = (fVar5 + fVar5) * fVar7;
      local_70 = fVar7 * (fVar7 + fVar7);
      local_68 = fVar7 * fVar9 + fVar5 * fVar8;
      fVar4 = 1.0 - fVar6 * fVar9;
      local_60 = fVar5 * fVar9 + fVar7 * fVar8;
      fStack_6c = fVar5 * fVar9 - fVar7 * fVar8;
      local_50[0] = fVar7 * fVar9 - fVar5 * fVar8;
      local_58 = local_50[1] - fVar6 * fVar8;
      local_50[1] = local_50[1] + fVar6 * fVar8;
      fStack_5c = fVar4 - local_70;
      local_70 = (1.0 - fVar10) - local_70;
      fVar4 = fVar4 - fVar10;
    }
    local_50[lVar3] = fVar4;
  }
  else {
    fVar5 = *param_2;
    fVar4 = param_2[1];
    fVar6 = param_2[2];
    fVar7 = param_2[3] + param_2[3];
    fVar8 = fVar5 + fVar5;
    fVar9 = fVar4 * (fVar4 + fVar4);
    local_50[1] = (fVar4 + fVar4) * fVar6;
    fStack_5c = fVar6 * (fVar6 + fVar6);
    local_68 = fVar6 * fVar8 + fVar4 * fVar7;
    local_58 = local_50[1] - fVar5 * fVar7;
    local_50[0] = fVar6 * fVar8 - fVar4 * fVar7;
    local_50[1] = local_50[1] + fVar5 * fVar7;
    local_64 = param_2[4];
    local_54 = param_2[5];
    local_50[2] = 1.0 - fVar5 * fVar8;
    fStack_6c = fVar4 * fVar8 - fVar6 * fVar7;
    local_60 = fVar4 * fVar8 + fVar6 * fVar7;
    local_70 = (1.0 - fVar9) - fStack_5c;
    fStack_5c = local_50[2] - fStack_5c;
    local_50[2] = local_50[2] - fVar9;
    local_50[3] = param_2[6];
  }
LAB_03ef8db0:
  if (*(uint *)(param_1 + 8) <= param_3) {
    param_3 = 0;
  }
  plVar2 = (long *)**(undefined8 **)
                     (*(long *)(*(long *)(param_1 + 0x28) + 0x38) +
                     (long)*(short *)(param_1 + 0x30) * 8);
  (**(code **)(*plVar2 + 0x48))
            (plVar2,&local_70,PTR_DAT_04bb2f78,
             (long)*(short *)(*(long *)(param_1 + 0x10) + (long)(int)param_3 * 2));
  return;
}

