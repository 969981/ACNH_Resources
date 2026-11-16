
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_025c3880(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  undefined *local_2a0;
  char *pcStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  uint local_170 [72];
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_02602950(param_1,0x54);
  memset(local_170,0xff,0x120);
  uVar9 = 0;
  do {
    uVar2 = FUN_02752040(uVar9 & 0xffffffff);
    if (uVar2 < 0x48) {
      local_170[uVar9] = uVar2;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 != 0x48);
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    lVar10 = 0;
    lVar4 = _DAT_00000028;
  }
  else {
    lVar4 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30))();
    lVar10 = 0;
    if (lVar4 != 0) {
      lVar10 = lVar4 + 0x276cb0;
    }
    lVar4 = *(long *)(lVar10 + 0x28);
  }
  if (lVar4 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
      plVar5 = *(long **)(lVar4 + 0x20);
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
      uVar9 = uVar9 & 0xffffffff;
      if (*(long *)(lVar10 + 0x28) == 0) goto LAB_025c39a0;
      plVar5 = *(long **)(*(long *)(lVar10 + 0x28) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_290 = *(undefined8 *)(lVar10 + 8);
      uStack_288 = *(undefined8 *)(lVar10 + 0x10);
      local_280 = 0x3fd140;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_290);
    }
  }
LAB_025c39a0:
  lVar4 = *(long *)(lVar10 + 8);
  lVar7 = *(long *)(lVar10 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x1c);
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  if (uVar2 < 8) {
    lVar10 = lVar7 + lVar4 + 0x3c52c0;
    piVar8 = (int *)(lVar10 + (ulong)uVar2 * 0xd8);
    if ((piVar8[7] != 0) && (*piVar8 != 0)) {
      memset(&local_290,0xff,0x120);
      uVar9 = 0;
      do {
        uVar1 = local_170[uVar9];
        if (uVar1 < 0x48) {
          uVar3 = FUN_02750bd0(lVar10 + (ulong)uVar2 * 0xd8 + 0x38,uVar9 & 0xffffffff);
          *(undefined4 *)((long)&local_290 + (ulong)uVar1 * 4) = uVar3;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != 0x48);
      lVar10 = 0;
      do {
        lVar7 = *(long *)(param_1 + 0x28);
        lVar4 = nn::prepo::Array::GetBuffer();
        if (lVar4 != 0) {
          nn::prepo::Array::Add(lVar7 + 8);
        }
        lVar10 = lVar10 + 4;
      } while (lVar10 != 0x120);
      local_2a0 = PTR_DAT_04bb2020 + 0x10;
      pcStack_298 = "ActivityFlags";
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605b30(*(long *)(param_1 + 8),&local_2a0,*(undefined8 *)(param_1 + 0x28));
      }
    }
  }
  return;
}

