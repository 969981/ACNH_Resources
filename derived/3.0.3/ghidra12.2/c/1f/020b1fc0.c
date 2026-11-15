
void FUN_020b1fc0(long param_1)

{
  uint *puVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  
  FUN_020ea9b0(DAT_053e5c10);
  FUN_01e2a584(param_1 + 0xda0);
  *(undefined4 *)(param_1 + 0xcf0) = 0;
  plVar6 = *(long **)(param_1 + 0x2f50);
  while (plVar6 != (long *)(param_1 + 0x2f48)) {
    plVar2 = (long *)plVar6[1];
    plVar5 = plVar2;
    if (*plVar6 != 0) {
      *(long **)(*plVar6 + 8) = plVar2;
      plVar5 = (long *)plVar6[1];
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar6;
    }
    plVar5 = plVar6 + -0x1c;
    *plVar6 = 0;
    plVar6[1] = 0;
    *(int *)(param_1 + 0x2f58) = *(int *)(param_1 + 0x2f58) + -1;
    plVar6 = plVar5;
    do {
      plVar6 = (long *)plVar6[1];
    } while (plVar6 != plVar5);
    *plVar5 = *(long *)(param_1 + 0x2f60);
    *(long **)(param_1 + 0x2f60) = plVar5;
    plVar6 = plVar2;
  }
  uVar4 = *(uint *)(param_1 + 0xd60);
  if (*(int *)(param_1 + 0x4e60) == 0) {
    *(uint *)(param_1 + 0xd60) = uVar4 & 0xfffffffd;
    **(undefined1 **)(param_1 + 0xd30) = 0;
    uVar4 = *(uint *)(param_1 + 0xd60) & 0xfffffffb;
  }
  *(uint *)(param_1 + 0xd60) = uVar4 & 0xfffffffe;
  if (*(long *)(param_1 + 0x175a0) == 0) goto LAB_020b217c;
  FUN_0211873c();
  if (DAT_04c487cc != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487cc * 8);
    if (0xff < (uint)(int)DAT_04c487cc) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x15 & 1) != 0) goto LAB_020b217c;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487cc * 8);
    if (0xff < (uint)(int)DAT_04c487cc) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x17 & 1) != 0) goto LAB_020b217c;
  }
  uVar3 = FUN_0290d828();
  if (((uVar3 & 1) == 0) && ((DAT_05ab8198 == (ushort *)0x0 || ((*DAT_05ab8198 & 1) == 0)))) {
    (**(code **)(**(long **)(param_1 + 0x17598) + 0x38))
              (*(long **)(param_1 + 0x17598),*(undefined8 *)(param_1 + 0x175a0));
    *(undefined8 *)(param_1 + 0x175a0) = 0;
  }
LAB_020b217c:
  *(undefined8 *)(param_1 + 0x175a8) = 0;
  *(undefined4 *)(param_1 + 0x175b0) = 0;
  *(undefined4 *)(param_1 + 0x17608) = 0;
  *(undefined2 *)(param_1 + 0x175b4) = 0xffff;
  **(undefined1 **)(param_1 + 0x19688) = 0;
  *(undefined1 *)(param_1 + 0x19678) = 0;
  *(undefined4 *)(param_1 + 0x1967c) = 0;
  *(undefined1 *)(param_1 + 0x3429) = 0;
  return;
}

