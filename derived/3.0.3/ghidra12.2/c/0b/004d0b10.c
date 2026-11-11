
void FUN_004d0b10(ulong *param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [32];
  
  if (param_1 != (ulong *)0x0) {
    FUN_0047a140(auStack_70,DAT_04c70980);
    do {
      iVar1 = FUN_0047b820(DAT_04c70980,param_1[1],auStack_70);
      if ((iVar1 < 0) && (1 < DAT_04c71928)) {
        FUN_00444bc0(auStack_b0,&DAT_04c718d8,2);
        lVar2 = FUN_004446b0(auStack_b0,"Unable to register patch list",&DAT_0413df78);
        *(char **)(lVar2 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Version/hkPatchesRegNode.cpp"
        ;
        *(undefined8 *)(lVar2 + 0x30) = 0x1c;
        FUN_00444c00(auStack_b0);
      }
      param_1 = (ulong *)(*param_1 & 0xfffffffffffffffc);
    } while (param_1 != (ulong *)0x0);
    FUN_0047bb80(auStack_70);
  }
  return;
}

