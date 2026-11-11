
void FUN_00489960(int *param_1,ulong *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_60 [64];
  
  piVar1 = (int *)*param_2 + 1;
  if ((int *)param_2[1] < piVar1) {
    *param_2 = param_2[1];
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
  }
  else {
    iVar2 = *(int *)*param_2;
    *param_2 = (ulong)piVar1;
    if ((char)param_2[3] == '\0') {
      if (-1 < *param_1) {
        if (iVar2 == param_1[0x42]) {
          if (param_2[1] == *param_2) {
            return;
          }
          if (DAT_04c70f78 == '\0') goto LAB_00489adc;
          FUN_00444bc0(auStack_60,&DAT_04c70f28,1);
          lVar3 = FUN_004446b0(auStack_60,"Oversized type sequence section (TSEQ).",&DAT_0413df78);
          *(char **)(lVar3 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar3 + 0x30) = 0x7d8;
          *(undefined4 *)(lVar3 + 0xc) = 0x6e8537db;
        }
        else {
          if (DAT_04c70f78 == '\0') goto LAB_00489adc;
          FUN_00444bc0(auStack_60,&DAT_04c70f28,1);
          lVar3 = FUN_004446b0(auStack_60,
                               "Sequence number incorrect. This reader didn\'t read the stream as it was written"
                               ,&DAT_0413df78);
          *(char **)(lVar3 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar3 + 0x30) = 0x7d7;
        }
        FUN_00444c00(auStack_60);
LAB_00489adc:
        *param_1 = -0x7ffbfe00;
        return;
      }
      goto LAB_004899b4;
    }
  }
  *param_1 = -0x7ffbfe00;
LAB_004899b4:
  if (DAT_04c70f78 != '\0') {
    FUN_00444bc0(auStack_60,&DAT_04c70f28,1);
    lVar3 = FUN_004446b0(auStack_60,"Error in input stream.",&DAT_0413df78);
    *(char **)(lVar3 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar3 + 0x30) = 0x7d6;
    FUN_00444c00(auStack_60);
  }
  return;
}

