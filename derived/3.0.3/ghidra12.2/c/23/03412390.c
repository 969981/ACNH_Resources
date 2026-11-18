
void FUN_03412390(long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined *local_50;
  undefined4 local_48;
  
  if (param_2 == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x38) != 1) || (0xf < *(uint *)(param_1 + 0x34))) goto LAB_03412504;
  lVar6 = param_2 + (ulong)*(uint *)(param_1 + 0x34) * 0x30;
  if ((*(ushort *)(lVar6 + 0xc) >> 3 & 1) != 0) goto LAB_03412504;
  uVar4 = FUN_01581b04(lVar6 + 8);
  if ((uVar4 & 1) == 0) {
    if ((*(ushort *)(lVar6 + 0xc) >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = 3;
      lVar6 = *(long *)(param_1 + 0x18);
      *(undefined8 *)(lVar6 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(param_2 + 0x310);
      *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(param_2 + 0x318);
      *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(param_2 + 800);
    }
    goto LAB_03412504;
  }
  if (*(long *)(lVar6 + 0x10) == 0) goto LAB_03412504;
  lVar8 = *(long *)(param_1 + 0x18);
  FUN_03b137d0(lVar8,*(long *)(lVar6 + 0x10) + 0x10,0);
  *(undefined4 *)(lVar8 + 0x18) = 0;
  if ((param_3 < 1) || (plVar9 = *(long **)(param_1 + 8), plVar9 == (long *)0x0)) {
    if ((param_3 < 1) &&
       ((plVar9 = *(long **)(param_1 + 0x28), plVar9 != (long *)0x0 &&
        (plVar7 = plVar9 + 1, *plVar7 != 0)))) {
      local_50 = PTR_DAT_04bc0cb8 + 0x10;
      local_48 = 0x14;
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_50);
      lVar6 = plVar9[3];
      uVar5 = 0xff;
      goto LAB_034124a8;
    }
  }
  else {
    *(int *)(param_1 + 0x20) = param_3;
    *(float *)(param_1 + 0x24) = 255.0 / (float)param_3;
    local_48 = 0x14;
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    local_50 = puVar1;
    (**(code **)(*plVar9 + 0x18))(plVar9,&local_50);
    (**(code **)(plVar9[3] + 0x158))(plVar9[1],1);
    plVar7 = *(long **)(param_1 + 0x10);
    if (plVar7 != (long *)0x0) {
      local_48 = 0x14;
      local_50 = puVar1;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_50);
      lVar6 = plVar7[3];
      plVar7 = plVar7 + 1;
      uVar5 = 1;
LAB_034124a8:
      (**(code **)(lVar6 + 0x158))(*plVar7,uVar5);
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 2;
LAB_03412504:
  puVar1 = PTR_DAT_04bc0cb8;
  iVar2 = *(int *)(param_1 + 0x20);
  if (-1 < iVar2) {
    *(int *)(param_1 + 0x20) = iVar2 + -1;
    local_48 = 0x14;
    plVar9 = *(long **)(param_1 + 8);
    uVar3 = ~(int)(*(float *)(param_1 + 0x24) * (float)iVar2);
    local_50 = puVar1 + 0x10;
    (**(code **)(*plVar9 + 0x18))(plVar9,&local_50);
    (**(code **)(plVar9[3] + 0x158))(plVar9[1],uVar3);
    plVar9 = *(long **)(param_1 + 0x10);
    if (plVar9 != (long *)0x0) {
      local_48 = 0x14;
      local_50 = puVar1 + 0x10;
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_50);
      (**(code **)(plVar9[3] + 0x158))(plVar9[1],uVar3);
    }
  }
  return;
}

