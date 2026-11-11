
void FUN_0048d480(undefined4 *param_1,ulong *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_80 [64];
  
  puVar1 = PTR_DAT_048607b8;
  if (param_1[0x4e] == 2) {
    puVar4 = (undefined8 *)*param_2;
    puVar6 = (undefined8 *)param_2[1];
    if (((int)puVar6 - (int)puVar4 & 7U) == 0) {
      if (puVar6 == puVar4) {
        return;
      }
      do {
        if (puVar6 < puVar4 + 1) {
          uVar5 = 0;
          *param_2 = (ulong)puVar6;
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
        }
        else {
          uVar5 = *puVar4;
          *param_2 = (ulong)(puVar4 + 1);
        }
        uVar3 = param_1[0x4c];
        if (uVar3 == (param_1[0x4d] & 0x3fffffff)) {
          FUN_00426990(puVar1,param_1 + 0x4a,8);
          uVar3 = param_1[0x4c];
        }
        *(undefined8 *)(*(long *)(param_1 + 0x4a) + (long)(int)uVar3 * 8) = uVar5;
        param_1[0x4c] = uVar3 + 1;
        puVar4 = (undefined8 *)*param_2;
        puVar6 = (undefined8 *)param_2[1];
      } while (puVar6 != puVar4);
      return;
    }
    if (DAT_04c70f78 == '\0') goto LAB_0048d554;
    FUN_00444bc0(auStack_80,&DAT_04c70f28,1);
    lVar2 = FUN_004446b0(auStack_80,"Type compendium ID has the wrong size.",&DAT_0413df78);
    uVar5 = 0x7e8;
  }
  else {
    if (DAT_04c70f78 == '\0') goto LAB_0048d554;
    FUN_00444bc0(auStack_80,&DAT_04c70f28,1);
    lVar2 = FUN_004446b0(auStack_80,"Unexpected compendium ID section (TCID).",&DAT_0413df78);
    uVar5 = 0x7e7;
  }
  *(char **)(lVar2 + 0x28) =
       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar2 + 0x30) = uVar5;
  FUN_00444c00(auStack_80);
LAB_0048d554:
  *param_1 = 0x80040200;
  return;
}

