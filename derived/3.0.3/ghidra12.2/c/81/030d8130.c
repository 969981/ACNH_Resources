
void FUN_030d8130(long param_1,int *param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  undefined **local_50;
  undefined4 local_48;
  
  FUN_030d8320(*(undefined8 *)(param_1 + 0x220),param_2[1],param_2 + 2,param_2 + 0x3e);
  FUN_030d8320(*(undefined8 *)(param_1 + 0x218),*param_2,param_2 + 2,param_2 + 0x28);
  iVar3 = *param_2;
  iVar2 = param_2[1];
  plVar4 = *(long **)(param_1 + 0x208);
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    fVar5 = 1.0;
    if (iVar2 != iVar3) {
      fVar5 = 2.0;
    }
    ppuVar1 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
    local_48 = 9;
    fVar6 = 0.0;
    if (iVar2 <= iVar3) {
      fVar6 = fVar5;
    }
    local_50 = ppuVar1;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_50);
    fVar5 = (float)(**(code **)(plVar4[3] + 0xb0))(plVar4[1]);
    plVar4 = *(long **)(param_1 + 0x208);
    local_48 = 0x14;
    if (fVar6 <= fVar5) {
      fVar5 = fVar6;
    }
    local_50 = ppuVar1;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
    (**(code **)(plVar4[3] + 0x158))(fVar5,plVar4[1]);
    iVar3 = *param_2;
    iVar2 = param_2[1];
  }
  plVar4 = *(long **)(param_1 + 0x210);
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    if ((iVar3 < 0) || (iVar2 < 1)) {
      local_50 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
      local_48 = 0x14;
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
      fVar5 = 0.0;
    }
    else {
      local_50 = &PTR_LAB_04aa7fe0;
      local_48 = 9;
      fVar5 = 1.0;
      if ((float)iVar3 / (float)iVar2 <= 1.0) {
        fVar5 = (float)iVar3 / (float)iVar2;
      }
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_50);
      fVar6 = (float)(**(code **)(plVar4[3] + 0xb0))(plVar4[1]);
      plVar4 = *(long **)(param_1 + 0x210);
      local_50 = &PTR_LAB_04aa7fe0;
      local_48 = 0x14;
      fVar5 = fVar5 * fVar6;
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
    }
    (**(code **)(plVar4[3] + 0x158))(fVar5,plVar4[1]);
  }
  return;
}

