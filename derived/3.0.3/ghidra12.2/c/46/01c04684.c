
void FUN_01c04684(float param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **local_50;
  undefined4 local_48;
  
  lVar5 = *(long *)(param_2 + 0x20);
  if (lVar5 != 0) {
    iVar1 = *(int *)(param_2 + 0x2c);
    if (iVar1 == 2) {
      plVar3 = *(long **)(lVar5 + 0x228);
    }
    else if (iVar1 == 1) {
      plVar3 = *(long **)(lVar5 + 0x220);
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      plVar3 = *(long **)(lVar5 + 0x218);
    }
    if ((plVar3 != (long *)0x0) && (lVar5 = (**(code **)(*plVar3 + 0x228))(), lVar5 != 0)) {
      plVar3 = *(long **)(lVar5 + 0x48);
      if (plVar3 != (long *)0x0) {
        local_50 = &PTR_LAB_04a3ee98;
        local_48 = 0x43;
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
        (**(code **)(plVar3[3] + 0x448))(param_1 * 60.0,plVar3[1],1);
      }
      uVar4 = (**(code **)(*param_3 + 0x18))(param_3);
      uVar2 = FUN_006f4a64(param_3);
      (**(code **)(*param_3 + 0x60))(param_3);
      (**(code **)(*param_3 + 0x68))(param_3);
      plVar3 = *(long **)(lVar5 + 0x48);
      if (plVar3[1] != 0) {
        local_50 = (undefined **)(PTR_DAT_04bc0878 + 0x10);
        local_48 = 9;
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
        (**(code **)(plVar3[3] + 0x5e0))(plVar3[1],uVar4,uVar2);
        FUN_03d7dd80(lVar5);
      }
    }
  }
  return;
}

