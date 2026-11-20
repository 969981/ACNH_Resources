
void FUN_03ea70a8(long param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  uVar3 = *(uint *)(param_2 + 3);
  uVar4 = (**(code **)(*param_2 + 0x30))(param_2);
  uVar5 = (**(code **)(*param_2 + 0x28))(param_2);
  uVar6 = (**(code **)(*param_2 + 0x20))(param_2,uVar5);
  lVar8 = *(long *)(param_1 + 0x30);
  lVar7 = (**(code **)(**(long **)(*(long *)(lVar8 + 0x30) + 0x18) + 0x20))();
  if (*(char *)(lVar7 + 0x78) != '\0') {
    if (*(char *)(lVar7 + 0x79) == '\0') {
      plVar2 = (long *)(lVar8 + 0x88) + *(uint *)(lVar8 + 0x80);
      if (1 < *(uint *)(lVar8 + 0x80)) {
        plVar2 = (long *)(lVar8 + 0x88);
      }
      lVar7 = *plVar2;
      if ((lVar7 != 0) && (*(long *)(lVar7 + 0x38) != 0)) {
        uVar1 = uVar3;
        if (*(uint *)(lVar7 + 0x30) <= uVar3) {
          uVar1 = 0;
        }
        if (*(long *)(*(long *)(lVar7 + 0x38) + (long)(int)uVar1 * 8) != 0) goto LAB_03ea712c;
      }
    }
    else {
LAB_03ea712c:
      FUN_03bf2214(lVar8 + 0x80,uVar6,uVar4,uVar3);
    }
  }
  lVar8 = *(long *)(param_1 + 0x38);
  lVar7 = (**(code **)(**(long **)(*(long *)(lVar8 + 0x30) + 0x18) + 0x20))();
  if (*(char *)(lVar7 + 0x78) != '\0') {
    if (*(char *)(lVar7 + 0x79) != '\0') {
LAB_03ea7168:
      FUN_03bf2214(lVar8 + 0x80,uVar6,uVar4,uVar3);
      return;
    }
    plVar2 = (long *)(lVar8 + 0x88) + *(uint *)(lVar8 + 0x80);
    if (1 < *(uint *)(lVar8 + 0x80)) {
      plVar2 = (long *)(lVar8 + 0x88);
    }
    lVar7 = *plVar2;
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x38) != 0)) {
      uVar1 = uVar3;
      if (*(uint *)(lVar7 + 0x30) <= uVar3) {
        uVar1 = 0;
      }
      if (*(long *)(*(long *)(lVar7 + 0x38) + (long)(int)uVar1 * 8) != 0) goto LAB_03ea7168;
    }
  }
  return;
}

