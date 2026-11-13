
void FUN_01338ba8(long param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  undefined *local_340;
  char *pcStack_338;
  long local_280 [6];
  long local_250 [6];
  undefined *local_220;
  undefined1 *puStack_218;
  undefined4 local_210;
  undefined1 local_20c [127];
  undefined1 local_18d;
  undefined *local_188;
  long local_180;
  undefined *local_178;
  long local_170;
  undefined8 local_168;
  undefined1 local_65;
  
  if (param_2 == 0) {
    return;
  }
  local_188 = PTR_DAT_04bbc350 + 0x10;
  lVar9 = *(long *)PTR_DAT_04bb27a8;
  uVar1 = (uint)*(ushort *)(param_1 + 8) - (uint)*(ushort *)(lVar9 + 0x1168);
  if (*(uint *)(lVar9 + 0x1148) <= uVar1) {
    return;
  }
  local_180 = *(long *)(*(long *)(lVar9 + 0x1150) + (long)(int)uVar1 * 8);
  if (local_180 == 0) {
    return;
  }
  local_18d = 0;
  local_210 = 0x80;
  local_20c[0] = 0;
  puStack_218 = local_20c;
  local_220 = PTR_DAT_04bb2d88 + 0x10;
  FUN_0131c5f0(&local_188,&local_220);
  lVar9 = 1;
  local_340 = PTR_DAT_04bb2020 + 0x10;
  pcStack_338 = "FieldPresetParamsEventPlazaHeap";
  plVar4 = (long *)FUN_038c6d48(0x100000,&local_340,param_2,8,1,0);
  puVar3 = PTR_DAT_04bb3350;
  if (plVar4 != (long *)0x0) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)(lVar5 + 0xa8);
    *(long **)(lVar5 + 0xa8) = plVar4;
  }
  FUN_01331fc0(&local_340,&DAT_05194bb0,&local_220,0);
  local_65 = 0;
  local_170 = (long)&local_168 + 4;
  local_168 = CONCAT35(local_168._5_3_,0x100);
  local_178 = PTR_DAT_04bb21f8 + 0x10;
  uVar6 = (**(code **)(local_340 + 0xf0))(&local_340,&local_178,1);
  if ((uVar6 & 1) != 0) {
    FUN_03c27e60(&local_340,&local_178,plVar4);
  }
  lVar5 = *(long *)PTR_DAT_04bb46b0;
  if (lVar5 == 0) goto LAB_01338eb0;
  puVar10 = *(undefined8 **)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
    lVar5 = (**(code **)(*(long *)*puVar10 + 0x38))();
    if (lVar5 == 0) goto LAB_01338eb0;
    lVar5 = lVar5 + 0x70;
  }
  else if (((puVar10 == (undefined8 *)0x0) || ((long *)puVar10[0x26] == (long *)0x0)) ||
          (lVar5 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar5 == 0)) goto LAB_01338eb0;
  piVar7 = (int *)(**(code **)(local_280[0] + 0xf0))(local_280);
  iVar14 = *piVar7;
  piVar7 = (int *)(**(code **)(local_250[0] + 0xf0))(local_250);
  fVar12 = (float)iVar14 * 10.0 + 2.5;
  fVar13 = (float)*piVar7 * 10.0 + 2.5;
  iVar14 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  iVar2 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  lVar11 = *(long *)(lVar5 + 0xe7648);
  if (lVar11 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      lVar11 = *(long *)(lVar5 + 0xe7648);
      uVar6 = uVar6 & 0xffffffff;
      if (lVar11 == 0) goto LAB_01338e68;
    }
    plVar8 = *(long **)(lVar11 + 0x20);
    if (plVar8 != (long *)0x0) {
      local_178 = *(undefined **)(lVar5 + 0xe7628);
      local_170 = *(long *)(lVar5 + 0xe7630);
      local_168 = 0x10d6e0;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_178);
    }
  }
LAB_01338e68:
  lVar11 = *(long *)(lVar5 + 0xe7630) + *(long *)(lVar5 + 0xe7628);
  *(int *)(lVar11 + 0x100640) = iVar14;
  *(int *)(lVar11 + 0x100644) = iVar2;
  if (param_3 != 0) {
    *(int *)(param_3 + 8) = iVar14;
    *(int *)(param_3 + 0xc) = iVar2;
  }
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar5 + 0xe7648) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar5 + 0xe7648) + 0x18), puVar10 != (undefined8 *)0x0))
  {
    (**(code **)*puVar10)();
  }
LAB_01338eb0:
  FUN_011a2b58(*(long *)PTR_DAT_04bb5c90 + 0x10);
  (**(code **)(local_340 + 0x20))(&local_340);
  if (lVar9 != 1) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    *(long *)(lVar5 + 0xa8) = lVar9;
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  return;
}

