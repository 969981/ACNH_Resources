
void FUN_00452380(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [512];
  
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    lVar5 = *param_2;
    uVar2 = FUN_00427110(lVar4,PTR_DAT_04bd7410);
    if ((((uVar2 & 1) != 0) && (uVar1 = FUN_004274f0(lVar4), lVar5 != 0)) && ((uVar1 >> 3 & 1) == 0)
       ) {
      lVar4 = *param_2;
      *(ulong *)(param_1 + 0x70) = *(ulong *)(param_1 + 0x70) | 0x1000;
      *(long *)(param_1 + 0xd8) = lVar4;
      return;
    }
  }
  if (*param_2 == 0) {
    FUN_004426d0(auStack_250,auStack_240,0x200);
    FUN_0043ac90(auStack_250,"Adding null attr; this will be ignored");
    FUN_004221e0(0x22442111,auStack_240,
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Builder/hkTypeBuilder.cpp"
                 ,0x23f);
    FUN_00442760(auStack_250);
  }
  else {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(ulong *)(param_1 + 0x70) = *(ulong *)(param_1 + 0x70) | 0x20;
    uVar1 = *(uint *)(param_1 + 0x188);
    if (uVar1 == (*(uint *)(param_1 + 0x18c) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607c0,(long *)(param_1 + 0x180),0x18);
      uVar1 = *(uint *)(param_1 + 0x188);
    }
    plVar3 = (long *)(*(long *)(param_1 + 0x180) + (long)(int)uVar1 * 0x18);
    lVar4 = param_2[1];
    *plVar3 = *param_2;
    plVar3[1] = lVar4;
    uVar2 = param_2[2];
    plVar3[2] = uVar2;
    if ((uVar2 & 1) != 0) {
      FUN_0043dd30(uVar2 & 0xfffffffffffffffe);
    }
    *(uint *)(param_1 + 0x188) = uVar1 + 1;
  }
  return;
}

