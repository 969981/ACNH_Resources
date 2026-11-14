
void FUN_018782e8(float param_1,long *param_2,ulong param_3)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float local_4c;
  float fStack_48;
  float local_44;
  undefined1 local_18 [4];
  undefined4 local_14;
  
  fVar9 = *(float *)(param_2 + 0x67);
  pfVar5 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(param_2 + 100) >> 0x14) & 0xff0 ^ 0x800))
  ;
  fVar8 = (float)(*(uint *)(param_2 + 100) & 0xffffff) * 5.9604645e-08;
  local_4c = (*pfVar5 + fVar8 * pfVar5[1]) * param_1 + *(float *)((long)param_2 + 0x334);
  fStack_48 = fVar9 + 0.0;
  local_44 = (pfVar5[2] + fVar8 * pfVar5[3]) * param_1 + *(float *)((long)param_2 + 0x33c);
  uVar4 = (**(code **)(*param_2 + 0x1e0))();
  lVar6 = *(long *)PTR_DAT_04bb27c8;
  if ((uVar4 & 1) == 0) {
    local_14 = 0;
    fVar8 = (float)FUN_0093a950(lVar6 + 0x28,&local_4c,&local_14);
  }
  else if (((lVar6 == 0) || (*(long *)(lVar6 + 0xa8) == 0)) || (*(char *)(lVar6 + 0x11c8) != '\0'))
  {
    fVar8 = -500.0;
  }
  else {
    local_18[0] = 0;
    sVar2 = *(short *)PTR_DAT_04bb6298;
    if (sVar2 == -1) {
      local_14 = 7;
    }
    else {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      local_14 = 7;
      if ((*puVar1 & 2) != 0) {
        local_14 = 5;
      }
    }
    fVar8 = (float)FUN_00962700(*(long *)(lVar6 + 0xa8),&local_4c,&local_14,1,local_18);
  }
  if ((param_3 & 1) == 0) {
    fVar9 = fVar9 - fVar8;
    fVar8 = -fVar9;
    if (0.0 <= fVar9) {
      fVar8 = fVar9;
    }
    if (fVar8 < 1e-06) {
      *(undefined4 *)((long)param_2 + 0x40c) = 0;
      fVar9 = 0.0;
      goto LAB_01878510;
    }
  }
  lVar6 = *(long *)PTR_DAT_04bb47e0;
  plVar7 = *(long **)(lVar6 + 0x28);
  if (((*PTR_DAT_04bbe618 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbe618), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bbe610 = PTR_DAT_04bb5e78 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbe618);
  }
  if ((plVar7 == (long *)0x0) ||
     (uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bbe610), (uVar4 & 1) == 0)) {
    plVar7 = (long *)FUN_01818550(lVar6);
  }
  else {
    plVar7 = plVar7 + 0x18;
  }
  pfVar5 = (float *)(**(code **)(plVar7[0xc] + 0xf0))();
  fVar9 = *pfVar5;
  fVar8 = *(float *)((long)param_2 + 0x40c);
  pfVar5 = (float *)(**(code **)(*(long *)(param_2[0x8c] + 0x30) + 0xf0))();
  fVar8 = fVar8 + *pfVar5;
  if (fVar9 <= fVar8) {
    fVar9 = fVar8;
  }
  *(float *)((long)param_2 + 0x40c) = fVar9;
LAB_01878510:
  *(float *)(param_2 + 0x67) = fVar9 + *(float *)(param_2 + 0x67);
  return;
}

