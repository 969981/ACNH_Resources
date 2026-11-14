
void FUN_01872568(long *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_2c [12];
  
  lVar12 = param_1[0x7a];
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x2d8) + 0x28))(lVar12 + 0x2d8);
    plVar3 = DAT_0537d558;
    uVar9 = FUN_01d3e29c(*DAT_0537d558 + 8);
    if (((uVar9 & 1) != 0) && (uVar9 = FUN_01d692e8(plVar3[2]), (uVar9 & 1) == 0)) {
      return;
    }
  }
  uVar9 = (**(code **)(*param_1 + 0x2b0))(param_1);
  if ((uVar9 & 1) != 0) {
    if ((int)param_1[0x50] == 1) {
      return;
    }
    uVar11 = 1;
LAB_01872614:
    FUN_03ebb160(param_1 + 0x4f,uVar11);
    return;
  }
  iVar7 = *(int *)((long)param_1 + 0x4ac);
  if ((iVar7 == 0) || (iVar7 == 2)) {
    *(undefined4 *)((long)param_1 + 0x4ac) = 1;
  }
  else if (iVar7 == 3) {
    if ((int)param_1[0x50] == 6) {
      return;
    }
    uVar11 = 6;
    goto LAB_01872614;
  }
  iVar5 = (**(code **)(param_1[0x9d] + (ulong)*(byte *)((long)param_1 + 0x4fc) * 8))(param_1 + 0x9d)
  ;
  iVar1 = (int)param_1[0x9f];
  *(int *)(param_1 + 0x9e) = iVar5;
  iVar2 = *(int *)((long)param_1 + 0x4f4);
  iVar7 = iVar2;
  if (iVar2 <= iVar1) {
    iVar7 = iVar1;
    iVar1 = iVar2;
  }
  if ((iVar5 <= iVar1) || (iVar7 <= iVar5)) {
    bVar4 = FUN_01878c90(DAT_052a8608,param_1);
    *(byte *)((long)param_1 + 0x519) = bVar4 & 1;
    *(undefined4 *)(param_1 + 0x9e) = *(undefined4 *)((long)param_1 + 0x4f4);
  }
  uVar6 = (**(code **)(param_1[0xa0] + (ulong)*(byte *)((long)param_1 + 0x514) * 8))(param_1 + 0xa0)
  ;
  *(undefined4 *)(param_1 + 0xa1) = uVar6;
  iVar7 = (**(code **)(param_1[0x9a] + (ulong)*(byte *)((long)param_1 + 0x4e4) * 8))(param_1 + 0x9a)
  ;
  *(int *)(param_1 + 0x9b) = iVar7;
  if ((char)param_1[0x79] == '\0') {
    return;
  }
  if (((char)param_1[0xa3] == '\0') || (*(char *)((long)param_1 + 0x519) == '\0')) {
    iVar2 = (int)param_1[0xa2];
    iVar5 = *(int *)((long)param_1 + 0x50c);
    iVar1 = iVar5;
    if (iVar5 <= iVar2) {
      iVar1 = iVar2;
      iVar2 = iVar5;
    }
    if (((char)param_1[0xa3] != '\0') || (iVar2 < (int)param_1[0xa1] && (int)param_1[0xa1] < iVar1))
    {
      iVar2 = (int)param_1[0x9c];
      iVar5 = *(int *)((long)param_1 + 0x4dc);
      iVar1 = iVar5;
      if (iVar5 <= iVar2) {
        iVar1 = iVar2;
        iVar2 = iVar5;
      }
      if (((iVar2 < iVar7) && (iVar7 < iVar1)) &&
         (fVar13 = *(float *)(param_1[0x60] + 0x278) - *(float *)(param_1 + 0x65),
         fVar14 = *(float *)(param_1[0x60] + 0x280) - *(float *)(param_1 + 0x66),
         *(float *)((long)param_1 + 0x3ac) < fVar14 * fVar14 + fVar13 * fVar13)) {
        return;
      }
    }
  }
  lVar12 = param_1[0x7a];
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x2d8) + 0x28))(lVar12 + 0x2d8);
    plVar3 = DAT_0537d558;
    uVar9 = FUN_01d3e29c(*DAT_0537d558 + 8);
    if (((uVar9 & 1) != 0) && (uVar9 = FUN_01d692e8(plVar3[2]), (uVar9 & 1) == 0))
    goto LAB_01872820;
  }
  uVar8 = FUN_018732d0(param_1,auStack_2c);
  uVar9 = FUN_018775a0(0x41700000,param_1,auStack_2c,uVar8 & 1);
  FUN_01815e0c(param_1,(int)param_1[0x50],param_1 + 0x65);
  if ((uVar9 & 1) != 0) {
    *(undefined1 *)(param_1 + 0xa3) = 0;
    uVar6 = (**(code **)(*param_1 + 0x2c0))(param_1);
    *(undefined4 *)(param_1 + 0x61) = uVar6;
    *(undefined4 *)(param_1 + 99) = 0;
    puVar10 = (undefined4 *)(**(code **)(*(long *)(param_1[0x8c] + 0x30) + 0xf0))();
    uVar6 = *puVar10;
    *(undefined4 *)(param_1 + 0x96) = 0;
    *(undefined4 *)(param_1 + 0x9b) = *(undefined4 *)((long)param_1 + 0x4dc);
    *(undefined4 *)((long)param_1 + 0x40c) = uVar6;
    *(undefined4 *)(param_1 + 0xa1) = *(undefined4 *)((long)param_1 + 0x50c);
    return;
  }
LAB_01872820:
  if ((int)param_1[0x50] != 6) {
    FUN_03ebb160(param_1 + 0x4f,6);
  }
  return;
}

