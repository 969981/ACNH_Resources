
void FUN_023ba0d0(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float local_4c;
  float fStack_48;
  float local_44;
  
  puVar3 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar8 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar3 + 0x2ec) = uVar8;
  *(undefined1 *)((long)puVar3 + 0x2e5) = 1;
  if (*(int *)(param_1 + 0x178) == 1) {
    iVar7 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar5 = (**(code **)(*plVar2 + 0x148))();
    iVar4 = iVar7 - *(int *)(lVar5 + 4);
    if (0xb60b5e < iVar4 + 0x5b05afU) {
      iVar6 = (int)((float)iVar4 * 0.1666667);
      iVar4 = 0x10000000;
      if (iVar6 < 1) {
        iVar4 = -0x5b05b0;
      }
      iVar7 = -0x10000000;
      if (0 < iVar6) {
        iVar7 = 0x5b05b0;
      }
      iVar1 = iVar6;
      if (iVar4 <= iVar6) {
        iVar1 = iVar4;
      }
      if (iVar7 <= iVar6) {
        iVar7 = iVar1;
      }
      iVar7 = iVar7 + *(int *)(lVar5 + 4);
    }
    *(int *)(lVar5 + 4) = iVar7;
    fStack_48 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar3 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_4c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_44 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar3 + 0x4f,&local_4c);
  }
  FUN_023b8a50(param_1);
  return;
}

