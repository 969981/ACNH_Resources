
/* WARNING: Removing unreachable block (ram,0x023ba634) */

void FUN_023ba4b8(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  float fVar9;
  float local_4c;
  float fStack_48;
  float local_44;
  
  if (*(int *)(param_1 + 0x178) == 1) {
    iVar7 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar8 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar8 = *(long **)(param_1 + 0x4c8);
    }
    lVar4 = (**(code **)(*plVar8 + 0x148))();
    iVar3 = iVar7 - *(int *)(lVar4 + 4);
    if (0xb60b5e < iVar3 + 0x5b05afU) {
      iVar6 = (int)((float)iVar3 * 0.1666667);
      iVar3 = 0x10000000;
      if (iVar6 < 1) {
        iVar3 = -0x5b05b0;
      }
      iVar7 = -0x10000000;
      if (0 < iVar6) {
        iVar7 = 0x5b05b0;
      }
      iVar1 = iVar6;
      if (iVar3 <= iVar6) {
        iVar1 = iVar3;
      }
      if (iVar7 <= iVar6) {
        iVar7 = iVar1;
      }
      iVar7 = iVar7 + *(int *)(lVar4 + 4);
    }
    *(int *)(lVar4 + 4) = iVar7;
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
  fVar9 = -20.0;
  plVar8 = *(long **)(param_1 + 0x68);
  if ((*(long *)PTR_DAT_04bb2200 != 0) &&
     (lVar4 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar4 != 0)) {
    local_4c = 0.0;
    lVar4 = *(long *)(lVar4 + 0x118);
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0x280);
      fVar9 = 0.0;
      if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 8), lVar4 != 0)) {
        pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x488) + 0xf0))(0xc1a00000,lVar4 + 0x488);
        fVar9 = *pfVar5;
      }
      lVar4 = FUN_0251e98c(1);
      pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x1560) + 0xf0))(lVar4 + 0x1560);
      fVar9 = fVar9 + *pfVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x023ba6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x110))(fVar9,plVar8);
  return;
}

