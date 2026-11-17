
void FUN_02f4d670(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  undefined4 uVar11;
  undefined *local_90;
  undefined4 local_88;
  short local_78 [4];
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x382bc);
  if (2 < *(uint *)(param_1 + 0x382bc)) {
    uVar5 = 0;
  }
  if (*(int *)(param_1 + 0x38150 + uVar5 * 4) != 0) {
    uVar7 = 0;
    puVar1 = PTR_DAT_04bc4f00 + 0x10;
    do {
      FUN_02f46668(local_78,param_1,uVar7);
      uVar4 = *(uint *)(param_1 + 0x382bc);
      uVar5 = (ulong)uVar4;
      uVar11 = 0x3f800000;
      if (local_78[0] != -2) {
        uVar11 = 0;
      }
      iVar9 = 0x50;
      if (uVar4 != 1) {
        iVar9 = 0;
      }
      iVar2 = 0xa0;
      if (uVar4 != 2) {
        iVar2 = iVar9;
      }
      if ((iVar2 + uVar7 < 200) &&
         (lVar10 = *(long *)(*(long *)(param_1 + 0x220) + (ulong)(iVar2 + uVar7) * 8 + 0x580),
         lVar10 != 0)) {
        puVar6 = *(undefined8 **)(lVar10 + 0x230);
        plVar8 = (long *)*puVar6;
        if (plVar8 != (long *)0x0) {
          local_88 = 0x14;
          local_90 = PTR_DAT_04bc4f00 + 0x10;
          (**(code **)(*plVar8 + 0x18))(plVar8,&local_90);
          (**(code **)(plVar8[3] + 0x158))(uVar11,plVar8[1]);
          puVar6 = *(undefined8 **)(lVar10 + 0x230);
          uVar5 = (ulong)*(uint *)(param_1 + 0x382bc);
        }
        lVar3 = 0x18;
        if (*(uint *)(lVar10 + 0x228) < 4) {
          lVar3 = 0;
        }
        plVar8 = *(long **)((long)puVar6 + lVar3);
        if (plVar8 != (long *)0x0) {
          local_88 = 0x14;
          local_90 = puVar1;
          (**(code **)(*plVar8 + 0x18))(plVar8,&local_90);
          (**(code **)(plVar8[3] + 0x158))((float)uVar5,plVar8[1]);
          uVar5 = (ulong)*(uint *)(param_1 + 0x382bc);
        }
      }
      uVar7 = uVar7 + 1;
      if (2 < (uint)uVar5) {
        uVar5 = 0;
      }
    } while (uVar7 < *(uint *)(param_1 + 0x38150 + uVar5 * 4));
  }
  return;
}

