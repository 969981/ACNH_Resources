
void FUN_01e5c3e8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined *local_30;
  char *pcStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x444);
  *(undefined4 *)(param_1 + 0x31c) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x314) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  *(undefined1 *)(param_1 + 0x328) = 0;
  *(uint *)(param_1 + 800) = uVar1;
  *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_1 + 0x448);
  if (**(uint **)(param_1 + 0x348) == uVar1) {
    *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_1 + 0x448);
    *(undefined8 *)(param_1 + 0x314) = *(undefined8 *)(param_1 + 0x420);
    *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x430);
    lVar2 = *(long *)(param_1 + 0x340);
    *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x438);
    *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x428);
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "NpcMoveAccelRate";
    if (((*(long *)(lVar2 + 0x1138) != 0) &&
        (lVar3 = *(long *)(*(long *)(lVar2 + 0x1138) + 0x78), lVar3 != 0)) &&
       (plVar4 = *(long **)(lVar3 + 0x48), plVar4 != (long *)0x0)) {
      (**(code **)(*plVar4 + 0x30))(*(undefined4 *)(param_1 + 0x318),plVar4,&local_30);
      lVar2 = *(long *)(param_1 + 0x340);
    }
    uVar5 = 1;
    FUN_017081d0(lVar2,&DAT_05390430 + (long)*(int *)(param_1 + 0x568) * 2,6,1,0);
    goto LAB_01e5c62c;
  }
  fVar6 = (float)**(uint **)(param_1 + 0x348) * 8.381903e-08;
  fVar7 = (float)uVar1 * 8.381903e-08;
  if (fVar6 <= 360.0) {
    if (fVar6 < 0.0) {
      fVar8 = fVar6 / 360.0 + -1.0;
      goto LAB_01e5c520;
    }
  }
  else {
    fVar8 = fVar6 / 360.0;
LAB_01e5c520:
    fVar6 = fVar6 - (float)(int)fVar8 * 360.0;
  }
  if (fVar7 <= 360.0) {
    if (fVar7 < 0.0) {
      fVar8 = fVar7 / 360.0 + -1.0;
      goto LAB_01e5c55c;
    }
  }
  else {
    fVar8 = fVar7 / 360.0;
LAB_01e5c55c:
    fVar7 = fVar7 - (float)(int)fVar8 * 360.0;
  }
  fVar8 = 0.0;
  if (fVar6 != fVar7) {
    fVar9 = fVar6 - fVar7;
    fVar8 = fVar9;
    if (fVar6 <= fVar7) {
      fVar8 = fVar7 - fVar6;
    }
    if (fVar8 <= 180.0) {
      fVar8 = fVar7 - fVar6;
      if (fVar7 < fVar6) goto LAB_01e5c5b8;
    }
    else {
      fVar9 = 360.0 - fVar8;
      fVar8 = fVar9;
      if (fVar6 <= fVar7) {
LAB_01e5c5b8:
        fVar8 = -fVar9;
      }
    }
  }
  lVar2 = *(long *)(param_1 + 0x340);
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "NpcDirectionAngle";
  if (((*(long *)(lVar2 + 0x1138) != 0) &&
      (lVar3 = *(long *)(*(long *)(lVar2 + 0x1138) + 0x78), lVar3 != 0)) &&
     (plVar4 = *(long **)(lVar3 + 0x48), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x30))(fVar8,plVar4,&local_30);
    lVar2 = *(long *)(param_1 + 0x340);
  }
  FUN_017081d0(lVar2,&DAT_05390480 + (long)*(int *)(param_1 + 0x570) * 2,
               *(undefined4 *)(param_1 + 0x43c),1,0);
  uVar5 = 0;
LAB_01e5c62c:
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  *(undefined4 *)(param_1 + 0x598) = uVar5;
  return;
}

