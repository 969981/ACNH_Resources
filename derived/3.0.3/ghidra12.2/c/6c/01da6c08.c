
undefined1 * FUN_01da6c08(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 *puVar10;
  
  iVar2 = *(int *)(param_1 + 0x210);
  iVar1 = iVar2 + 1;
  lVar5 = *(long *)PTR_DAT_04bb8930;
  *(int *)(param_1 + 0x210) = iVar1;
  uVar3 = *(uint *)(lVar5 + 0x20);
  if (iVar1 < (int)uVar3) {
    uVar3 = iVar2 + 1;
  }
  *(uint *)(param_1 + 0x210) = uVar3;
  if ((int)uVar3 < (int)*(uint *)(lVar5 + 0x20)) {
    lVar6 = *(long *)(lVar5 + 0x28);
    if (*(uint *)(lVar5 + 0x20) <= uVar3) {
      uVar3 = 0;
    }
    if ((*(long *)(lVar6 + (long)(int)uVar3 * 0x50 + 0x40) != 0) &&
       ((*(byte *)(lVar6 + (long)(int)uVar3 * 0x50 + 0x48) >> 2 & 1) == 0)) {
      puVar10 = (undefined1 *)(lVar6 + (long)(int)uVar3 * 0x50);
      *param_1 = *puVar10;
      param_1[1] = puVar10[1];
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(puVar10 + 8);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(puVar10 + 0x14);
      plVar9 = (long *)(param_1 + 0x18);
      (**(code **)(*plVar9 + 0x38))(plVar9);
      puVar4 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9);
      uVar7 = *(undefined8 *)(puVar10 + 0x18);
      uVar8 = *(undefined8 *)(puVar10 + 0x20);
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar10 + 0x28);
      *puVar4 = uVar7;
      puVar4[1] = uVar8;
      *(uint *)(param_1 + 0x14) = (uint)(byte)puVar10[0x12];
      (**(code **)(*(long *)(param_1 + 0x118) + 0x38))(param_1 + 0x118);
      puVar4 = (undefined8 *)(**(code **)(*(long *)(param_1 + 0x118) + 0x10))(param_1 + 0x118);
      uVar7 = *(undefined8 *)(puVar10 + 0x34);
      uVar8 = *(undefined8 *)(puVar10 + 0x2c);
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar10 + 0x3c);
      *puVar4 = uVar8;
      puVar4[1] = uVar7;
      *(uint *)(param_1 + 0x110) = (uint)(byte)puVar10[0x13];
    }
  }
  return param_1;
}

