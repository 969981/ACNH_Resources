
void FUN_0048cf60(int *param_1,ulong *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_78;
  undefined1 auStack_70 [64];
  long local_28;
  
  if (param_1[0x4e] == 1) {
    plVar1 = (long *)*param_2;
    plVar2 = (long *)param_2[1];
    if (7 < (long)plVar2 - (long)plVar1) {
      if (plVar2 < plVar1 + 1) {
        *param_2 = (ulong)plVar2;
        *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
        local_28 = 0;
LAB_0048d0a4:
        *param_1 = -0x7ffbfe00;
      }
      else {
        local_28 = *plVar1;
        *param_2 = (ulong)(plVar1 + 1);
        if ((char)param_2[3] != '\0') goto LAB_0048d0a4;
        if (-1 < *param_1) {
          if (0 < param_1[0x4c]) {
            lVar4 = 0;
            do {
              if (*(long *)(*(long *)(param_1 + 0x4a) + lVar4 * 8) == local_28) {
                if ((int)lVar4 != -1) {
                  if ((param_3 & 1) == 0) {
                    return;
                  }
                  plVar1 = (long *)*param_2;
                  plVar2 = (long *)param_2[1];
                  if ((long)plVar2 - (long)plVar1 != 0x10) {
                    if (DAT_04c70f78 == '\0') goto LAB_0048d04c;
                    FUN_00444bc0(auStack_70,&DAT_04c70f28,1);
                    lVar4 = FUN_004446b0(auStack_70,"COMPENDIUM_REFERENCE wrong size",&DAT_0413df78)
                    ;
                    uVar5 = 0x7fe;
                    goto LAB_0048d040;
                  }
                  if (plVar2 < plVar1 + 2) {
                    *param_2 = (ulong)plVar2;
                    *(byte *)(param_2 + 3) = (byte)param_2[3] | 1;
                    lVar4 = *plVar1;
                  }
                  else {
                    *param_2 = (ulong)(plVar1 + 2);
                    lVar4 = *plVar1;
                  }
                  if ((lVar4 == 0) && (plVar1[1] == 0)) {
                    lVar4 = *(long *)(param_1 + 4);
                    iVar3 = param_1[6];
                    *plVar1 = lVar4;
                    plVar1[1] = lVar4 + (long)iVar3 * 8;
                    return;
                  }
                  if (DAT_04c70f78 == '\0') goto LAB_0048d04c;
                  FUN_00444bc0(auStack_70,&DAT_04c70f28,1);
                  lVar4 = FUN_004446b0(auStack_70,"Buffer already inplace loaded",&DAT_0413df78);
                  uVar5 = 0x803;
                  goto LAB_0048d040;
                }
                break;
              }
              lVar4 = lVar4 + 1;
            } while (lVar4 < param_1[0x4c]);
          }
          if (DAT_04c70f78 == '\0') {
            return;
          }
          FUN_00444bc0(auStack_70,&DAT_04c70f28,1);
          lVar4 = FUN_004446b0(auStack_70,
                               "Compendium with signature {} needed to load ({} are loaded)",
                               &DAT_04866768,&local_28,param_1 + 0x4a);
          uVar5 = 0x7f8;
          goto LAB_0048d0f4;
        }
      }
      if (DAT_04c70f78 == '\0') {
        return;
      }
      FUN_00444bc0(auStack_70,&DAT_04c70f28,1);
      lVar4 = FUN_004446b0(auStack_70,"Error in input stream.",&DAT_0413df78);
      uVar5 = 0x7f5;
LAB_0048d0f4:
      *(char **)(lVar4 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar4 + 0x30) = uVar5;
      FUN_00444c00(auStack_70);
      return;
    }
    if (DAT_04c70f78 == '\0') goto LAB_0048d04c;
    FUN_00444bc0(auStack_70,&DAT_04c70f28,1);
    local_28 = param_2[1] - *param_2;
    local_78 = 8;
    lVar4 = FUN_004446b0(auStack_70,"TCRF chunk is the wrong size ({}, expected at least {})",
                         &DAT_04866750,&local_28,&local_78);
    uVar5 = 0x7f3;
  }
  else {
    if (DAT_04c70f78 == '\0') goto LAB_0048d04c;
    FUN_00444bc0(auStack_70,&DAT_04c70f28,1);
    lVar4 = FUN_004446b0(auStack_70,"Encountered compendium reference, but no compendium loaded",
                         &DAT_0413df78);
    uVar5 = 0x7f2;
  }
LAB_0048d040:
  *(char **)(lVar4 + 0x28) =
       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar4 + 0x30) = uVar5;
  FUN_00444c00(auStack_70);
LAB_0048d04c:
  *param_1 = -0x7ffbfe00;
  return;
}

