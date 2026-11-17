
void FUN_03007020(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined **local_40;
  undefined4 local_38;
  
  uVar4 = *(uint *)(param_1 + 0x30);
  if (((-1 < (int)uVar4) && ((int)uVar4 < (int)*(uint *)(param_1 + 0x18))) &&
     (uVar4 < *(uint *)(param_1 + 0x18))) {
    lVar3 = param_1 + 8;
    uVar1 = uVar4 + 1 & 3;
    if (2 < uVar4) {
      uVar4 = uVar4 + 1 & 0xfffffffc;
      do {
        uVar4 = uVar4 - 4;
        lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) + 8);
      } while (uVar4 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      lVar3 = *(long *)(lVar3 + 8);
    }
    if ((lVar3 != 0) && (lVar3 = lVar3 - *(int *)(param_1 + 0x1c), lVar3 != 0)) {
      FUN_0344d350(**(undefined8 **)(lVar3 + 0x210),param_2);
      plVar5 = *(long **)(*(long *)(lVar3 + 0x230) + (ulong)(1 < *(uint *)(lVar3 + 0x228)) * 8);
      if (plVar5 != (long *)0x0) {
        uVar2 = FUN_02ff7cc0(0x3a83126f,param_3,param_2);
        if ((uVar2 & 1) == 0) {
          local_40 = &PTR_LAB_04aa7fe0;
          local_38 = 0x14;
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_40);
          uVar6 = 0x3f800000;
        }
        else {
          local_40 = &PTR_LAB_04aa7fe0;
          local_38 = 0x14;
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_40);
          uVar6 = 0;
        }
        (**(code **)(plVar5[3] + 0x158))(uVar6,plVar5[1]);
      }
    }
  }
  return;
}

