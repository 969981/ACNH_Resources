
void FUN_0300a5b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined *local_70;
  undefined4 local_68;
  uint local_54;
  
  lVar3 = *(long *)(param_1 + 0x210);
  lVar4 = *(long *)(lVar3 + 0x598);
  lVar6 = *(long *)(lVar3 + 0x5a0);
  lVar3 = *(long *)(lVar3 + 0x5a8);
  fVar7 = *(float *)(lVar4 + 0x35c) + 0.0;
  fVar8 = 1.0;
  if (fVar7 <= 1.0) {
    fVar8 = fVar7;
  }
  fVar9 = 0.0;
  if (0.0 <= fVar7) {
    fVar9 = fVar8;
  }
  fVar8 = 0.0;
  if (0.0 <= fVar9) {
    fVar8 = fVar9;
  }
  *(float *)(param_1 + 0x218) = fVar8;
  fVar7 = *(float *)(lVar6 + 0x35c) + 0.0;
  fVar8 = 1.0;
  if (fVar7 <= 1.0) {
    fVar8 = fVar7;
  }
  fVar9 = 0.0;
  if (0.0 <= fVar7) {
    fVar9 = fVar8;
  }
  fVar8 = 0.0;
  if (0.0 <= fVar9) {
    fVar8 = fVar9;
  }
  *(float *)(param_1 + 0x21c) = fVar8;
  fVar9 = *(float *)(lVar3 + 0x35c) * 0.87857145 + 0.08;
  fVar7 = 0.95857143;
  if (fVar9 <= 0.95857143) {
    fVar7 = fVar9;
  }
  fVar10 = 0.08;
  if (0.08 <= fVar9) {
    fVar10 = fVar7;
  }
  fVar7 = 1.0;
  if (fVar10 <= 1.0) {
    fVar7 = fVar10;
  }
  fVar9 = 0.0;
  if (0.0 <= fVar10) {
    fVar9 = fVar7;
  }
  *(float *)(param_1 + 0x220) = fVar9;
  puVar2 = PTR_DAT_04bc0cb8;
  plVar5 = (long *)**(undefined8 **)(lVar4 + 0x2d0);
  if (plVar5 != (long *)0x0) {
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    local_68 = 0x1d;
    fVar7 = 0.0;
    if (0.0 <= fVar9) {
      fVar7 = fVar9 * 255.0;
    }
    local_54 = (int)(fVar8 * 255.0) << 0x10 | (int)fVar7 << 8;
    local_70 = puVar1;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_70);
    (**(code **)(plVar5[3] + 0x1e8))(plVar5[1],0,0,&local_54);
    local_68 = 0x1d;
    local_54 = 0xff1e00;
    local_70 = puVar1;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_70);
    (**(code **)(plVar5[3] + 0x1e8))(plVar5[1],0,1,&local_54);
  }
  plVar5 = (long *)**(undefined8 **)(lVar6 + 0x2d0);
  if (plVar5 != (long *)0x0) {
    fVar7 = *(float *)(param_1 + 0x218);
    puVar1 = puVar2 + 0x10;
    fVar9 = *(float *)(param_1 + 0x220);
    local_68 = 0x1d;
    fVar8 = 255.0;
    if (fVar7 <= 1.0) {
      fVar8 = fVar7 * 255.0;
    }
    fVar10 = 0.0;
    if (0.0 <= fVar7) {
      fVar10 = fVar8;
    }
    fVar8 = 255.0;
    if (fVar9 <= 1.0) {
      fVar8 = fVar9 * 255.0;
    }
    fVar7 = 0.0;
    if (0.0 <= fVar9) {
      fVar7 = fVar8;
    }
    local_54 = (int)fVar10 << 0x18 | (int)fVar7 << 8;
    local_70 = puVar1;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_70);
    (**(code **)(plVar5[3] + 0x1e8))(plVar5[1],0,0,&local_54);
    local_68 = 0x1d;
    local_54 = 0xff0f00;
    local_70 = puVar1;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_70);
    (**(code **)(plVar5[3] + 0x1e8))(plVar5[1],0,1,&local_54);
  }
  plVar5 = (long *)**(undefined8 **)(lVar3 + 0x2d0);
  if (plVar5 != (long *)0x0) {
    fVar7 = *(float *)(param_1 + 0x218);
    local_68 = 0x1d;
    fVar9 = *(float *)(param_1 + 0x21c);
    puVar2 = puVar2 + 0x10;
    fVar8 = 255.0;
    if (fVar7 <= 1.0) {
      fVar8 = fVar7 * 255.0;
    }
    fVar10 = 0.0;
    if (0.0 <= fVar7) {
      fVar10 = fVar8;
    }
    fVar8 = 255.0;
    if (fVar9 <= 1.0) {
      fVar8 = fVar9 * 255.0;
    }
    fVar7 = 0.0;
    if (0.0 <= fVar9) {
      fVar7 = fVar8;
    }
    local_54 = (int)fVar10 << 0x18 | (int)fVar7 << 0x10;
    local_70 = puVar2;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_70);
    (**(code **)(plVar5[3] + 0x1e8))(plVar5[1],0,0,&local_54);
    local_68 = 0x1d;
    local_54 = 0x14e00f00;
    local_70 = puVar2;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_70);
    (**(code **)(plVar5[3] + 0x1e8))(plVar5[1],0,1,&local_54);
  }
  return;
}

