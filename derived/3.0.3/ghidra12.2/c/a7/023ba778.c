
void FUN_023ba778(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  float local_4c;
  float fStack_48;
  float local_44;
  
  if (*(int *)(param_1 + 0x178) == 1) {
    iVar6 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar7 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar7 = *(long **)(param_1 + 0x4c8);
    }
    lVar4 = (**(code **)(*plVar7 + 0x148))();
    iVar3 = iVar6 - *(int *)(lVar4 + 4);
    if (0xb60b5e < iVar3 + 0x5b05afU) {
      iVar5 = (int)((float)iVar3 * 0.1666667);
      iVar3 = 0x10000000;
      if (iVar5 < 1) {
        iVar3 = -0x5b05b0;
      }
      iVar6 = -0x10000000;
      if (0 < iVar5) {
        iVar6 = 0x5b05b0;
      }
      iVar1 = iVar5;
      if (iVar3 <= iVar5) {
        iVar1 = iVar3;
      }
      if (iVar6 <= iVar5) {
        iVar6 = iVar1;
      }
      iVar6 = iVar6 + *(int *)(lVar4 + 4);
    }
    *(int *)(lVar4 + 4) = iVar6;
    fStack_48 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar2 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_4c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_44 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar2 + 0x4f,&local_4c);
  }
  FUN_023b8a50(param_1);
  plVar7 = *(long **)(param_1 + 0x68);
  FUN_016e026c(0,plVar7 + 0x4f,0,0);
                    /* WARNING: Could not recover jumptable at 0x023ba8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x110))(plVar7);
  return;
}

