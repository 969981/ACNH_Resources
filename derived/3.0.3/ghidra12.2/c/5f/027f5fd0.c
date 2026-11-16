
void FUN_027f5fd0(uint *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined *local_48;
  char *pcStack_40;
  int local_34;
  
  puVar3 = PTR_DAT_04bb2020;
  uVar10 = *param_1;
  if (8 < uVar10) {
    uVar10 = 0;
  }
  local_48 = (undefined *)CONCAT44(local_48._4_4_,uVar10);
  switch(uVar10) {
  case 3:
    uVar10 = 0x78;
    break;
  case 4:
    uVar10 = 0xf0;
    break;
  case 5:
    uVar10 = 0x140;
    break;
  case 6:
    uVar10 = 400;
    break;
  case 7:
    uVar10 = 800;
    break;
  case 8:
    puVar1 = param_1 + 0xa27e;
    if ((char)*puVar1 != -1) {
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      pcStack_40 = "RcoStorageExpansionLevel";
      local_48 = puVar2;
      local_34 = (int)(char)*puVar1;
      iVar4 = FUN_0274ce10(&local_34,&local_48);
      if (iVar4 != 0) {
        local_34 = (int)(char)*puVar1;
        pcStack_40 = "RcoStorageExpansion_v200_AddLevel";
        local_48 = puVar2;
        iVar4 = FUN_0274ce10(&local_34,&local_48);
        if (iVar4 - 1U < 3) {
          uVar10 = *(uint *)(&DAT_0417ba9c + (long)(int)(iVar4 - 1U) * 4);
        }
        else {
          uVar10 = 0x960;
        }
        local_48 = puVar3 + 0x10;
        local_34 = (int)(char)*puVar1;
        pcStack_40 = "RcoStorageExpansion_v300";
        iVar4 = FUN_0274ce10(&local_34,&local_48);
        if (iVar4 == 2) {
          uVar10 = 9000;
        }
        else if (iVar4 == 1) {
          uVar10 = 7000;
        }
        break;
      }
    }
    uVar10 = 0x640;
    break;
  default:
    uVar10 = 0x50;
  }
  if ((char)param_1[0xa27e] == -1) {
    return;
  }
  if ((DAT_05574040 == 0) || (lVar6 = FUN_026eec4c(), lVar6 == 0)) goto LAB_027f6190;
  lVar11 = lVar6 + 0x194b0;
  if (*(long *)(lVar6 + 0x194b8) == 0) {
    lVar11 = *(long *)(DAT_05574040 + 0x20);
    plVar8 = *(long **)(lVar11 + 0x178);
    if (plVar8 != (long *)0x0) goto LAB_027f6128;
LAB_027f6144:
    uVar5 = 1;
  }
  else {
    plVar8 = *(long **)(lVar6 + 0x19628);
    if (plVar8 == (long *)0x0) goto LAB_027f6144;
LAB_027f6128:
    if ((undefined8 *)*plVar8 == (undefined8 *)0x0) goto LAB_027f6144;
    uVar5 = (*(code *)**(undefined8 **)*plVar8)();
    uVar5 = uVar5 ^ 1;
  }
  uVar9 = *(uint *)(*(long *)(lVar11 + 0x160) + *(long *)(lVar11 + 0x158) + 72000);
  if (8999 < uVar9) {
    uVar9 = 9000;
  }
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar11 + 0x178) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar11 + 0x178) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  if (uVar10 <= uVar9) {
    return;
  }
LAB_027f6190:
  local_48 = (undefined *)CONCAT44(local_48._4_4_,(int)(char)param_1[0xa27e]);
  FUN_0267bfc0(&local_48,uVar10);
  return;
}

