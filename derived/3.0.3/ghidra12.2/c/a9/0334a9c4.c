
void FUN_0334a9c4(long param_1,uint param_2,byte param_3,ulong param_4)

{
  float *pfVar1;
  float *pfVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined *local_60;
  char *pcStack_58;
  undefined1 auStack_28 [8];
  
  *(uint *)(param_1 + 0x20f4) = param_2;
  fVar10 = *(float *)(param_1 + 0x2580);
  *(byte *)(param_1 + 0x2598) = param_3;
  pfVar1 = (float *)&DAT_04c4a3f4;
  if (param_2 != 2) {
    pfVar1 = (float *)&DAT_04c4a3f0;
  }
  pfVar2 = (float *)&DAT_04c4a3ec;
  if (param_2 != 0) {
    pfVar2 = pfVar1;
  }
  fVar9 = *pfVar2;
  if (*(char *)(param_1 + 0x2584) != '\0') {
    fVar9 = DAT_04c4a3e8;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x3b8) + 0x10);
  if (**(char **)(PTR_PTR_04bb2238 + 8) == '\0') {
    lVar7 = *(long *)(*(long *)(lVar7 + 0xf0) + 0x18);
  }
  else {
    local_60 = PTR_DAT_04bc8e68 + 0x10;
    pcStack_58 = *(char **)(PTR_PTR_04bb2238 + 8);
    lVar7 = FUN_032cb8e0(auStack_28,&local_60,*(undefined8 *)(lVar7 + 0xf0));
    param_2 = *(uint *)(param_1 + 0x20f4);
  }
  plVar3 = (long *)(param_1 + 0x300) + param_2;
  if (2 < param_2) {
    plVar3 = (long *)(param_1 + 0x300);
  }
  *(float *)(param_1 + 0x20f0) = (fVar9 - fVar10) - (*(float *)(lVar7 + 0x34) - fVar10);
  *(float *)(param_1 + 0x20b8) = *(float *)(*plVar3 + 0xfc) + *(float *)(*plVar3 + 0x100);
  if ((*(long *)PTR_DAT_04bc1118 != 0) && (lVar7 = *(long *)(param_1 + 0x4e0), lVar7 != 0)) {
    plVar3 = (long *)(param_1 + 0x4e8) + (ulong)param_2 * 0xcb;
    if (2 < param_2) {
      plVar3 = (long *)(param_1 + 0x4e8);
    }
    (**(code **)(*plVar3 + 0x18))(plVar3);
    FUN_03363ed0(lVar7,plVar3[1]);
  }
  FUN_0334abc0(param_1);
  if ((param_4 & 1) == 0) {
    FUN_03368d70(*(undefined8 *)(param_1 + 0x3b8));
    lVar8 = *(long *)PTR_DAT_04bb4fb0;
    uVar6 = FUN_03368ef0(DAT_05734ea0,2);
    lVar7 = *(long *)(lVar8 + 8);
    if (lVar7 != 0) {
      lVar4 = 0xe0;
      if ((param_3 & 1) == 0) {
        lVar4 = 0xd8;
      }
      lVar5 = 0;
      if (*(char *)(lVar7 + 0x38) != '\0') {
        lVar5 = lVar7 + 8;
      }
      FUN_03366350(lVar8,lVar5,*(undefined8 *)((long)&PTR_s_Decide_Erase_04b20ae8 + lVar4),1,uVar6,0
                  );
      return;
    }
  }
  return;
}

