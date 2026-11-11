
long * FUN_003eb3a0(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  uint uVar6;
  long *plVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined1 auVar17 [16];
  undefined4 local_ec;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [8];
  char local_c8;
  undefined8 local_60;
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 != (undefined8 *)param_1[2]) {
    *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(param_2 + 8);
    uVar10 = *(undefined8 *)(param_2 + 0x18);
    puVar11[2] = *(undefined8 *)(param_2 + 0x10);
    puVar11[3] = uVar10;
    *puVar11 = &DAT_048511c0;
    param_1[1] = (long)(puVar11 + 4);
    return param_1;
  }
  puVar16 = (undefined8 *)*param_1;
  uVar13 = (long)puVar11 - (long)puVar16;
  uVar9 = ((long)uVar13 >> 5) + 1;
  if (uVar9 >> 0x3b == 0) {
    uVar2 = (long)uVar13 >> 4;
    if ((ulong)((long)uVar13 >> 4) <= uVar9) {
      uVar2 = uVar9;
    }
    if (0x7fffffffffffffdf < uVar13) {
      uVar2 = 0x7ffffffffffffff;
    }
    if (uVar2 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)FUN_00187df4(uVar2 << 5);
      puVar16 = (undefined8 *)*param_1;
      puVar11 = (undefined8 *)param_1[1];
    }
    plVar1 = plVar7 + ((long)uVar13 >> 5) * 4;
    *(undefined1 *)(plVar1 + 1) = *(undefined1 *)(param_2 + 8);
    lVar14 = *(long *)(param_2 + 0x18);
    plVar1[2] = *(long *)(param_2 + 0x10);
    plVar1[3] = lVar14;
    *plVar1 = (long)&DAT_048511c0;
    if (puVar11 == puVar16) {
      *param_1 = (long)plVar1;
      param_1[1] = (long)(plVar1 + 4);
      param_1[2] = (long)(plVar7 + uVar2 * 4);
    }
    else {
      lVar14 = 0;
      do {
        uVar4 = *(undefined1 *)((long)puVar11 + lVar14 + -0x18);
        uVar10 = *(undefined8 *)((long)puVar11 + lVar14 + -0x10);
        uVar3 = *(undefined8 *)((long)puVar11 + lVar14 + -8);
        lVar15 = lVar14 + -0x20;
        *(undefined **)((long)plVar1 + lVar14 + -0x20) = &DAT_048511c0;
        *(undefined8 *)((long)plVar1 + lVar14 + -0x10) = uVar10;
        *(undefined8 *)((long)plVar1 + lVar14 + -8) = uVar3;
        *(undefined1 *)((long)plVar1 + lVar14 + -0x18) = uVar4;
        lVar14 = lVar15;
      } while ((undefined8 *)((long)puVar11 + lVar15) != puVar16);
      param_1[2] = (long)(plVar7 + uVar2 * 4);
      *param_1 = (long)plVar1 + lVar15;
      param_1[1] = (long)(plVar1 + 4);
      do {
        puVar11 = puVar11 + -4;
        plVar7 = (long *)(**(code **)*puVar11)(puVar11);
      } while (puVar11 != puVar16);
    }
    if (puVar16 == (undefined8 *)0x0) {
      return plVar7;
    }
    plVar7 = (long *)FUN_00187e4c(puVar16);
    return plVar7;
  }
  auVar17 = FUN_004088a0(param_1);
  uVar10 = auVar17._8_8_;
  lVar15 = auVar17._0_8_;
  lVar14 = lVar15 + 0x28;
  local_60 = 0x3eb50c;
  FUN_001abc3c(auStack_d0);
  puVar5 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar6 = *puVar8;
    if (uVar6 != 0) {
      lVar12 = **(long **)(puVar5 + 0xa0);
      if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar12 >> 3) <= (ulong)uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar12 + (ulong)uVar6 * 8) + 0x20);
    }
  }
  if ((*plVar7 == 0) || (lVar12 = *(long *)(*plVar7 + 0x10), lVar12 == 0)) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x10);
  }
  plVar7 = (long *)(lVar12 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  FUN_001fc1b8(auStack_d0,*(undefined2 *)(lVar15 + 0x70),1);
  uVar9 = FUN_001fb63c(auStack_d0,uVar10);
  if ((uVar9 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    FUN_001fb7e0(auStack_d0,0x26);
    FUN_003ff620(auStack_d0,param_3);
    if (local_c8 == '\0') {
      *(undefined **)(PTR_DAT_04bd2470 + 0x128) = PTR_LAB_04bd24f8;
      if ((*(char *)(lVar15 + 0x98) != '\0') &&
         (uVar9 = FUN_001fb590(lVar14,0x10), (uVar9 & 1) != 0)) {
        (**(code **)(*plVar7 + 0x20))(plVar7);
        uVar6 = FUN_001f9220(lVar14,uVar10,auStack_d0);
        goto LAB_003eb6b8;
      }
      uVar6 = FUN_001f9220(lVar14,uVar10,auStack_d0);
    }
    else {
      local_ec = 0x8001000a;
      FUN_0018aa70(auStack_e8,&local_ec);
      FUN_00197bcc(uVar10,auStack_e8);
      uVar6 = 1;
    }
  }
  (**(code **)(*plVar7 + 0x20))(plVar7);
LAB_003eb6b8:
  FUN_001abdec(auStack_d0);
  return (long *)(ulong)(uVar6 & 1);
}

