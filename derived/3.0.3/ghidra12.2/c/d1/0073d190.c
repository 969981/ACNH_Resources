
void FUN_0073d190(undefined4 param_1,long param_2,undefined8 param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *local_60;
  char *pcStack_58;
  
  lVar5 = *(long *)(param_2 + 0x1150);
  if (lVar5 == 0) {
    return;
  }
  if (*(int *)(lVar5 + 0x30) == 0) {
    return;
  }
  lVar8 = *(long *)(lVar5 + 0x38);
  lVar6 = 0;
  lVar5 = (long)*(int *)(lVar5 + 0x30) << 3;
  while (plVar4 = (long *)**(undefined8 **)(lVar8 + lVar6 * 8),
        uVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4,param_3), uVar2 == 0xffffffff) {
    lVar6 = lVar6 + 1;
    lVar5 = lVar5 + -8;
    if (lVar5 == 0) {
      return;
    }
  }
  if ((((uint)lVar6 ^ 0xffffffff) & 0xffff) == 0) {
    return;
  }
  if ((uVar2 & 0xffff) == 0xffff) {
    return;
  }
  lVar5 = *(long *)(param_2 + 0x1150);
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "material_force_alpha";
  if (*(int *)(lVar5 + 0x30) == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    lVar9 = *(long *)(lVar5 + 0x38);
    lVar6 = 0;
    lVar8 = (long)*(int *)(lVar5 + 0x30) << 3;
    uVar7 = 0xffffffff;
    do {
      plVar4 = (long *)**(undefined8 **)(lVar9 + lVar6 * 8);
      iVar3 = (**(code **)(*plVar4 + 0xc0))(plVar4,param_3);
      if (iVar3 != -1) {
        uVar7 = (ulong)((uint)lVar6 & 0xffff | iVar3 << 0x10);
        break;
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  uVar2 = (uint)uVar7;
  plVar4 = (long *)**(undefined8 **)
                     (*(long *)(lVar5 + 0x38) +
                     (-(uVar7 >> 0xf & 1) & 0xfffffffffff80000 | (uVar7 & 0xffff) << 3));
  sVar1 = (**(code **)(*plVar4 + 0xd0))(plVar4,(int)uVar2 >> 0x10,&local_60);
  if ((uVar2 < 0xffff0000 && (uVar2 & 0xffff) != 0xffff) && (sVar1 != -1)) {
    plVar4 = (long *)**(undefined8 **)(*(long *)(lVar5 + 0x38) + (long)(short)uVar7 * 8);
    (**(code **)(*plVar4 + 0x118))(param_1,plVar4,(int)uVar2 >> 0x10,(int)sVar1);
  }
  return;
}

