
void FUN_00487ba0(int *param_1,ulong *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  undefined1 auStack_68 [68];
  int local_24;
  
  piVar5 = (int *)*param_2;
  piVar1 = (int *)param_2[1];
  piVar4 = piVar5 + 1;
  if (piVar1 < piVar4) {
    *param_2 = (ulong)piVar1;
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
    piVar5 = piVar1 + 1;
    local_24 = 0;
    piVar4 = piVar1;
    if (piVar1 < piVar5) goto LAB_00487c94;
LAB_00487bec:
    iVar2 = *piVar4;
    *param_2 = (ulong)piVar5;
    if ((char)param_2[3] == '\0') {
      if (-1 < *param_1) {
        if (local_24 == param_1[0x48]) {
          param_1[0x48] = iVar2;
          if (param_2[1] == *param_2) {
            return;
          }
          if (DAT_04c70f78 == '\0') goto LAB_00487d68;
          FUN_00444bc0(auStack_68,&DAT_04c70f28,1);
          lVar3 = FUN_004446b0(auStack_68,"Oversized type rolling hash section (TSHA).",
                               &DAT_0413df78);
          *(char **)(lVar3 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar3 + 0x30) = 0x7e2;
          *(undefined4 *)(lVar3 + 0xc) = 0x6e8537db;
        }
        else {
          if (DAT_04c70f78 == '\0') goto LAB_00487d68;
          FUN_00444bc0(auStack_68,&DAT_04c70f28,1);
          lVar3 = FUN_004446b0(auStack_68,
                               "Read format has lost sync: invalid previous type rolling hash (expected 0x{:x8}, got 0x{:x8})."
                               ,&DAT_04866738,param_1 + 0x48,&local_24);
          *(char **)(lVar3 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar3 + 0x30) = 0x7e0;
        }
        FUN_00444c00(auStack_68);
LAB_00487d68:
        *param_1 = -0x7ffbfe00;
        return;
      }
      goto LAB_00487cb0;
    }
  }
  else {
    local_24 = *piVar5;
    *param_2 = (ulong)piVar4;
    piVar5 = piVar5 + 2;
    if (piVar5 <= piVar1) goto LAB_00487bec;
LAB_00487c94:
    *param_2 = (ulong)piVar1;
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
  }
  *param_1 = -0x7ffbfe00;
LAB_00487cb0:
  if (DAT_04c70f78 != '\0') {
    FUN_00444bc0(auStack_68,&DAT_04c70f28,1);
    lVar3 = FUN_004446b0(auStack_68,"Error in input stream.",&DAT_0413df78);
    *(char **)(lVar3 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar3 + 0x30) = 0x7df;
    FUN_00444c00(auStack_68);
  }
  return;
}

