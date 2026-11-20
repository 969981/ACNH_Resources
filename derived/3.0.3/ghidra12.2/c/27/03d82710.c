
void FUN_03d82710(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined *local_40;
  undefined4 local_38;
  
  puVar2 = PTR_DAT_04bc4f00;
  uVar3 = *(uint *)(param_1 + 0x25c);
  fVar8 = 0.0;
  if ((((0 < (int)uVar3) &&
       (fVar7 = *(float *)(param_1 + 0x240), fVar7 <= *(float *)(param_1 + 0x260))) &&
      (fVar8 = 1.0, uVar3 != 1)) &&
     (((fVar7 <= *(float *)(param_1 + 0x264) && (fVar8 = 2.0, uVar3 != 2)) &&
      (fVar7 <= *(float *)(param_1 + 0x268))))) {
    if (uVar3 == 3) {
      fVar8 = 3.0;
    }
    else {
      uVar5 = (ulong)uVar3 - 3;
      uVar4 = uVar5 & 3;
      if ((ulong)uVar3 - 4 < 3) {
        fVar8 = 3.0;
      }
      else {
        fVar8 = 3.0;
        uVar5 = uVar5 & 0xfffffffffffffffc;
        do {
          uVar5 = uVar5 - 4;
          fVar8 = fVar8 + 1.0 + 1.0 + 1.0 + 1.0;
        } while (uVar5 != 0);
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        fVar8 = fVar8 + 1.0;
      }
    }
  }
  if (*(float *)(param_1 + 0x26c) != fVar8) {
    uVar3 = (uint)*(float *)(param_1 + 0x26c);
    if (-1 < (int)uVar3) {
      puVar1 = (undefined8 *)(param_1 + 0x220) + uVar3;
      if (3 < uVar3) {
        puVar1 = (undefined8 *)(param_1 + 0x220);
      }
      plVar6 = (long *)*puVar1;
      if (plVar6 != (long *)0x0) {
        local_40 = PTR_DAT_04bc4f00 + 0x10;
        local_38 = 2;
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
        (**(code **)(plVar6[3] + 0x38))(plVar6[1],0);
      }
    }
    uVar3 = (uint)fVar8;
    if (-1 < (int)uVar3) {
      puVar1 = (undefined8 *)(param_1 + 0x220) + uVar3;
      if (3 < uVar3) {
        puVar1 = (undefined8 *)(param_1 + 0x220);
      }
      plVar6 = (long *)*puVar1;
      if (plVar6 != (long *)0x0) {
        local_40 = PTR_DAT_04bc4e68 + 0x10;
        local_38 = 1;
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
        (**(code **)(plVar6[3] + 400))(0x3f800000,plVar6[1]);
      }
    }
  }
  *(float *)(param_1 + 0x26c) = fVar8;
  plVar6 = *(long **)(param_1 + 0x218);
  local_40 = puVar2 + 0x10;
  local_38 = 0x14;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
  (**(code **)(plVar6[3] + 0x158))(fVar8,plVar6[1]);
  return;
}

