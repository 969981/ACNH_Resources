
void FUN_02f84144(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  long lVar10;
  byte *pbVar11;
  long *plVar12;
  undefined4 local_a0 [2];
  long local_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  byte local_44 [4];
  
  if (7 < param_2) {
    return;
  }
  lVar10 = param_1 + 0x2e0;
  pbVar11 = (byte *)(lVar10 + (ulong)param_2 * 0x1d0);
  local_44[0] = *pbVar11;
  if (7 < local_44[0]) {
    return;
  }
  bVar8 = *(byte *)(param_1 + 0x1f8);
  lVar3 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_44,1);
  if (lVar3 == 0) {
    return;
  }
  plVar12 = (long *)(lVar10 + (ulong)param_2 * 0x1d0 + 0x38);
  (**(code **)(*plVar12 + 0x38))(plVar12);
  if ((*(long **)(lVar3 + 0x184e0) == (long *)0x0) ||
     (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x184e0), puVar4 == (undefined8 *)0x0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)*puVar4)();
    uVar1 = uVar1 ^ 1;
  }
  local_a0[0] = 0x20;
  local_98 = *(long *)(lVar3 + 0x184c8) + *(long *)(lVar3 + 0x184c0) + 0x2306e;
  (**(code **)(*plVar12 + 0x38))(plVar12);
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_68 = 1;
  local_64 = 0;
  local_90 = PTR_DAT_04bc0cd8 + 0x10;
  uStack_88 = 0;
  FUN_02906b00(&local_90,plVar12,local_a0);
  bVar7 = *pbVar11;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  if (bVar7 != bVar8) {
    if (DAT_0537d558 == (long *)0x0) {
      if (*(int *)(param_1 + 0x1fc) == 0x40) goto LAB_02f84324;
    }
    else if (((1 < *(byte *)(*DAT_0537d558 + 0x476)) || (*(int *)(param_1 + 0x1fc) == 0x40)) ||
            ((DAT_0537d558[5] != 0 && ((int)DAT_0537d558[0x10] == 1)))) {
LAB_02f84324:
      iVar2 = FUN_006f4a64(plVar12);
      if ((iVar2 != 0) && (uVar5 = FUN_01df8220(pbVar11), (uVar5 & 1) != 0)) {
        uVar6 = 0;
        uVar9 = 1;
        goto LAB_02f84284;
      }
    }
  }
  uVar9 = 0;
  uVar6 = 1;
LAB_02f84284:
  lVar10 = lVar10 + (ulong)param_2 * 0x1d0;
  *(undefined1 *)(lVar10 + 0x1c9) = uVar9;
  *(undefined1 *)(lVar10 + 0x1c8) = uVar6;
  if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x184e0) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x184e0) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

