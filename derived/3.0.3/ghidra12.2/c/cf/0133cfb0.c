
void FUN_0133cfb0(undefined8 param_1,long *param_2)

{
  int *piVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  short sVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined *local_298;
  char *pcStack_290;
  undefined *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  undefined1 local_144 [255];
  undefined1 local_45;
  
  if (*param_2 != 0) {
    puVar11 = DAT_055c1b60 + -8;
    if (DAT_055c1b60 == &DAT_055c1b58) {
      puVar8 = &DAT_055c04a0;
    }
    else {
      sVar5 = 0;
      puVar8 = DAT_055c1b60;
      puVar9 = puVar11;
      do {
        if (*(int *)(puVar9 + 7) == (int)param_2[1]) {
          if (sVar5 != 0) goto LAB_0133d03c;
          puVar8 = puVar11;
          goto LAB_0133d070;
        }
        puVar8 = (undefined8 *)puVar8[1];
        sVar5 = sVar5 + 1;
        puVar9 = puVar8 + -8;
      } while (puVar8 != &DAT_055c1b58);
      sVar5 = -1;
LAB_0133d03c:
      puVar9 = DAT_055c1b60;
      do {
        puVar9 = (undefined8 *)puVar9[1];
        sVar5 = sVar5 + -1;
      } while (puVar9 != &DAT_055c1b58 && sVar5 != 0);
      puVar8 = &DAT_055c04a0;
      if (puVar9 + -8 != &DAT_055c1b18) {
        puVar8 = puVar9 + -8;
      }
    }
LAB_0133d070:
    uVar7 = 0;
    do {
      uVar6 = (uint)uVar7;
      piVar1 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar7 * 4);
      if (0x38 < uVar6) {
        piVar1 = (int *)(PTR_DAT_04bbbf90 + 8);
      }
      if (*piVar1 == *(int *)(puVar8 + 7)) goto LAB_0133d0bc;
      uVar10 = 0x39;
      if ((int)uVar6 < 0x39) {
        uVar10 = uVar6 + 1;
      }
      uVar7 = (ulong)uVar10;
    } while (uVar10 != 0x39);
    uVar6 = 0;
LAB_0133d0bc:
    if (uVar6 == 0) {
      puVar8 = DAT_055c1b60;
      if (puVar11 == &DAT_055c1b18) {
        puVar11 = &DAT_055c1098;
      }
      else {
        do {
          if (*(int *)(puVar11 + 7) == (int)param_2[1]) goto LAB_0133d10c;
          puVar8 = (undefined8 *)puVar8[1];
          puVar11 = puVar8 + -8;
        } while (puVar8 != &DAT_055c1b58);
        puVar11 = &DAT_055c1098;
      }
LAB_0133d10c:
      lVar12 = 1;
      local_298 = PTR_DAT_04bb2020 + 0x10;
      pcStack_290 = "FieldPresetParamsStageHeap";
      plVar3 = (long *)FUN_038c6d48(0x7d000,&local_298,*param_2,8,1,0);
      puVar2 = PTR_DAT_04bb3350;
      if (plVar3 != (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar12 = *(long *)(lVar4 + 0xa8);
        *(long **)(lVar4 + 0xa8) = plVar3;
      }
      FUN_013352c8(&local_298,&DAT_05196ef0,puVar11,0);
      local_45 = 0;
      local_148 = 0x100;
      puStack_150 = local_144;
      local_144[0] = 0;
      local_158 = PTR_DAT_04bb21f8 + 0x10;
      uVar7 = (**(code **)(local_298 + 0xf0))(&local_298,&local_158,1);
      if ((uVar7 & 1) != 0) {
        uVar7 = FUN_03c27e60(&local_298,&local_158,plVar3);
      }
      FUN_0133d250(uVar7,param_2,&local_298);
      (**(code **)(local_298 + 0x20))(&local_298);
      FUN_01335460(&local_298);
      if (lVar12 != 1) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
        *(long *)(lVar4 + 0xa8) = lVar12;
      }
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3);
      }
    }
  }
  return;
}

