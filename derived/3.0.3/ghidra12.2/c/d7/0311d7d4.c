
void FUN_0311d7d4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined *local_50;
  undefined4 local_48;
  
  if (*(long *)(param_1 + 0x1068) == 0) {
    FUN_03ebb268(param_1 + 0x3b8);
    if (*(int *)(param_1 + 0x400) != -1) {
      FUN_03ebb160(param_1 + 0x3b8);
      *(undefined4 *)(param_1 + 0x400) = 0xffffffff;
    }
    FUN_03ebb268(param_1 + 0x5b0);
    if (*(int *)(param_1 + 0x5f8) != -1) {
      FUN_03ebb160(param_1 + 0x5b0);
      *(undefined4 *)(param_1 + 0x5f8) = 0xffffffff;
    }
    FUN_03ebb268(param_1 + 0x7a8);
    if (*(int *)(param_1 + 0x7f0) != -1) {
      FUN_03ebb160(param_1 + 0x7a8);
      *(undefined4 *)(param_1 + 0x7f0) = 0xffffffff;
    }
    FUN_03ebb268(param_1 + 0x9a0);
    if (*(int *)(param_1 + 0x9e8) != -1) {
      FUN_03ebb160(param_1 + 0x9a0);
      *(undefined4 *)(param_1 + 0x9e8) = 0xffffffff;
    }
    FUN_03ebb268(param_1 + 0xb98);
    if (*(int *)(param_1 + 0xbe0) != -1) {
      FUN_03ebb160(param_1 + 0xb98);
      *(undefined4 *)(param_1 + 0xbe0) = 0xffffffff;
    }
    FUN_03ebb268(param_1 + 0xd90);
    if (*(int *)(param_1 + 0xdd8) != -1) {
      FUN_03ebb160(param_1 + 0xd90);
      *(undefined4 *)(param_1 + 0xdd8) = 0xffffffff;
    }
    FUN_03ebb268(param_1 + 0xf88);
    if (*(int *)(param_1 + 0xfd0) != -1) {
      FUN_03ebb160(param_1 + 0xf88);
      *(undefined4 *)(param_1 + 0xfd0) = 0xffffffff;
    }
  }
  if (*(char *)(param_1 + 0x1078) == '\0') {
    uVar4 = FUN_0311daa0(param_1);
    if ((uVar4 & 1) == 0) {
      FUN_03464520(*(undefined8 *)(param_1 + 0x1070),0);
    }
    else {
      uVar4 = FUN_0311dcb8(param_1);
      if ((uVar4 & 1) != 0) {
        iVar2 = *(int *)(param_1 + 0x107c);
        if ((0 < iVar2) && (plVar5 = *(long **)(param_1 + 0x1048), plVar5 != (long *)0x0)) {
          *(int *)(param_1 + 0x1060) = iVar2;
          *(float *)(param_1 + 0x1064) = 255.0 / (float)iVar2;
          local_48 = 0x14;
          puVar1 = PTR_DAT_04bc0cb8 + 0x10;
          local_50 = puVar1;
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
          (**(code **)(plVar5[3] + 0x158))(plVar5[1],1);
          plVar5 = *(long **)(param_1 + 0x1050);
          if (plVar5 != (long *)0x0) {
            local_48 = 0x14;
            local_50 = puVar1;
            (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
            (**(code **)(plVar5[3] + 0x158))(plVar5[1],1);
          }
        }
        *(char *)(param_1 + 0x1078) = '\x01';
        FUN_03464670(*(undefined8 *)(param_1 + 0x1070),0);
      }
    }
  }
  puVar1 = PTR_DAT_04bc0cb8;
  iVar2 = *(int *)(param_1 + 0x1060);
  if (-1 < iVar2) {
    *(int *)(param_1 + 0x1060) = iVar2 + -1;
    local_48 = 0x14;
    plVar5 = *(long **)(param_1 + 0x1048);
    uVar3 = ~(int)(*(float *)(param_1 + 0x1064) * (float)iVar2);
    local_50 = puVar1 + 0x10;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
    (**(code **)(plVar5[3] + 0x158))(plVar5[1],uVar3);
    plVar5 = *(long **)(param_1 + 0x1050);
    if (plVar5 != (long *)0x0) {
      local_48 = 0x14;
      local_50 = puVar1 + 0x10;
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
      (**(code **)(plVar5[3] + 0x158))(plVar5[1],uVar3);
    }
  }
  return;
}

