
float FUN_024e5c00(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float local_8c [3];
  short local_78 [2];
  undefined1 local_74;
  
  iVar1 = *(int *)(param_1 + 0x24) + 1;
  iVar9 = *(int *)(param_1 + 0x14);
  if (iVar1 == iVar9) {
    fVar12 = -500.0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x10);
    fVar12 = -500.0;
    iVar10 = iVar2;
    do {
      local_8c[1] = 0.0;
      local_8c[0] = (float)iVar10 * 5.0 + 2.5;
      local_8c[2] = (float)iVar9 * 5.0 + 2.5;
      lVar5 = *(long *)PTR_DAT_04bb2720;
      if ((lVar5 == 0) || (*(long *)(lVar5 + 0x330) == 0)) {
        puVar4 = &DAT_055c04a0;
      }
      else {
        puVar4 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
        iVar3 = FUN_006bd550(*puVar4,0);
        puVar4 = &DAT_055cdaf8;
        if (iVar3 != 0x758f7eaf) {
          puVar4 = &DAT_055c04a0;
        }
      }
      if (DAT_055c1b60 != &DAT_055c1b58) {
        puVar6 = DAT_055c1b60 + -8;
        puVar7 = DAT_055c1b60;
        puVar8 = puVar6;
        do {
          if (*(int *)(puVar8 + 7) == *(int *)(puVar4 + 7)) break;
          puVar7 = (undefined8 *)puVar7[1];
          puVar8 = puVar7 + -8;
        } while (puVar7 != &DAT_055c1b58);
        if (puVar6 != &DAT_055c1b18) {
          local_78[0] = 0;
          puVar4 = DAT_055c1b60;
          do {
            if (*(int *)(puVar6 + 7) == param_2) goto LAB_024e5d7c;
            puVar4 = (undefined8 *)puVar4[1];
            local_78[0] = local_78[0] + 1;
            puVar6 = puVar4 + -8;
          } while (puVar4 != &DAT_055c1b58);
        }
      }
      local_78[0] = -1;
LAB_024e5d7c:
      local_74 = 1;
      local_78[1] = 1;
      fVar11 = (float)FUN_016e80f0(local_8c,0,local_78);
      if (fVar11 <= fVar12) {
        fVar11 = fVar12;
      }
      fVar12 = fVar11;
      if (iVar10 < *(int *)(param_1 + 0x20)) {
        iVar10 = iVar10 + 1;
      }
      else {
        iVar9 = iVar9 + 1;
        iVar10 = *(int *)(param_1 + 0x10);
      }
    } while ((iVar2 != iVar10) || (iVar1 != iVar9));
  }
  return fVar12;
}

