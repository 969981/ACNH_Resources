
void FUN_03c43770(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  
  if (*(int *)(param_1 + 0x350) != 0) {
    return;
  }
  FUN_03c4bc00(*(undefined8 *)PTR_DAT_04bb28d0);
  for (lVar8 = *(long *)(param_1 + 0x7b0); lVar8 != param_1 + 0x7a8; lVar8 = *(long *)(lVar8 + 8)) {
    plVar6 = *(long **)(lVar8 + 0x10);
    if ((char)plVar6[0x12] != '\0') {
      (**(code **)(*plVar6 + 0x20))(plVar6);
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
  }
  bVar1 = *(byte *)(param_1 + 0x7ec);
  bVar3 = (**(code **)(*DAT_05aed880 + 0x48))();
  *(byte *)(param_1 + 0x7ec) = bVar3 & 1;
  if (bVar1 != (bVar3 & 1)) {
    uVar7 = *(undefined8 *)(param_1 + 0x7d8);
    if ((bVar3 & 1) == 0) {
      uVar11 = 0x3f800000;
      plVar6 = (long *)(param_1 + 0x4a8);
    }
    else {
      puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x448) + 0xf0))(param_1 + 0x448);
      uVar11 = *puVar5;
      plVar6 = (long *)(param_1 + 0x478);
    }
    puVar5 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))();
    FUN_03b773d4(uVar11,*puVar5,uVar7);
  }
  FUN_03b77298(*(undefined8 *)(param_1 + 2000));
  FUN_03b77298(*(undefined8 *)(param_1 + 0x7d8));
  puVar2 = PTR_DAT_04bc3ee8;
  lVar8 = *(long *)(param_1 + 0x7e0);
  fVar9 = *(float *)(lVar8 + 0x10);
  if (*(float *)(lVar8 + 8) == fVar9) goto LAB_03c438bc;
  *(float *)(lVar8 + 8) = *(float *)(lVar8 + 0xc);
  fVar10 = *(float *)(lVar8 + 0xc) +
           *(float *)(*(long *)(*(long *)puVar2 + 0x10) + 0x1c) * *(float *)(lVar8 + 0x14);
  if (0.0 <= *(float *)(lVar8 + 0x14)) {
    if (fVar9 < fVar10) goto LAB_03c438b4;
  }
  else if (fVar10 < fVar9) {
LAB_03c438b4:
    fVar10 = fVar9;
  }
  *(float *)(lVar8 + 0xc) = fVar10;
LAB_03c438bc:
  if (*(long *)(param_1 + 0x7c8) != 0) {
    FUN_03c4a360();
  }
  if ((DAT_05aedb78 != (long *)0x0) && (iVar4 = (**(code **)(*DAT_05aedb78 + 0x18))(), iVar4 == 1))
  {
    FUN_03beb8c0(DAT_05aec220);
  }
  FUN_03b4c504(*(undefined8 *)puVar2);
  *(undefined4 *)(param_1 + 0x350) = 1;
  return;
}

