
void FUN_00487e20(undefined4 *param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 auStack_70 [64];
  
  if ((param_3 & 1) != 0) {
    if ((param_2[1] - *param_2 & 7U) != 0) {
      if (DAT_04c70f78 != '\0') {
        FUN_00444bc0(auStack_70,&DAT_04c70f28,1);
        lVar4 = FUN_004446b0(auStack_70,"NATIVE_POINTERS section has the wrong size",&DAT_0413df78);
        *(char **)(lVar4 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar4 + 0x30) = 0x94c;
        *(undefined4 *)(lVar4 + 0xc) = 0x574328eb;
LAB_00487f34:
        FUN_00444c00(auStack_70);
      }
LAB_00487f3c:
      *param_1 = 0x80040200;
      return;
    }
    uVar7 = (ulong)(param_2[1] - *param_2) >> 3;
    uVar5 = (uint)uVar7;
    if (0 < (int)uVar5) {
      lVar4 = 0;
      do {
        if (*(long *)(param_2[2] + lVar4 * 8) != 0) {
          if (DAT_04c70f78 == '\0') goto LAB_00487f3c;
          FUN_00444bc0(auStack_70,&DAT_04c70f28,1);
          lVar4 = FUN_004446b0(auStack_70,"Buffer already inplace loaded",&DAT_0413df78);
          *(char **)(lVar4 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar4 + 0x30) = 0x951;
          goto LAB_00487f34;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)uVar5);
    }
    *(long *)(param_1 + 4) = param_2[2];
    param_1[6] = uVar5;
    param_1[7] = uVar5 | 0x80000000;
    if ((int)(param_1[0x79] & 0x3fffffff) < (int)uVar5) {
      uVar3 = FUN_00426720(PTR_DAT_048607b8,uVar7 & 0xffffffff,1,*(undefined8 *)(param_1 + 0x76),
                           param_1[0x78],param_1 + 0x79);
      *(undefined8 *)(param_1 + 0x76) = uVar3;
    }
    uVar1 = param_1[0x78];
    if ((int)uVar1 < (int)uVar5) {
      param_1[0x78] = uVar5;
      memset((void *)(*(long *)(param_1 + 0x76) + (long)(int)uVar1),0,(ulong)(~uVar1 + uVar5) + 1);
      lVar4 = *(long *)(param_1 + 0x46);
      goto joined_r0x00487ffc;
    }
    if ((int)uVar5 < (int)uVar1) {
      param_1[0x78] = uVar5;
      lVar4 = *(long *)(param_1 + 0x46);
      goto joined_r0x00487ffc;
    }
  }
  lVar4 = *(long *)(param_1 + 0x46);
joined_r0x00487ffc:
  if (lVar4 == 0) {
    puVar2 = (undefined8 *)FUN_00438810(0x20);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined4 *)((long)puVar2 + 0xc) = 0x80000000;
    FUN_0043d3a0();
    plVar6 = *(long **)(param_1 + 0x46);
    *(undefined8 **)(param_1 + 0x46) = puVar2;
    if (plVar6 != (long *)0x0) {
      FUN_0043d280(plVar6 + 2);
      *(undefined4 *)(plVar6 + 1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar6 + 0xc)) && (*plVar6 != 0)) {
        FUN_00421f90(PTR_DAT_048607b8,*plVar6,4,*(uint *)((long)plVar6 + 0xc) & 0x3fffffff);
      }
      *plVar6 = 0;
      *(undefined4 *)((long)plVar6 + 0xc) = 0x80000000;
      FUN_00438870(plVar6,0x20);
      return;
    }
  }
  return;
}

