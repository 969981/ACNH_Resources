
void FUN_02438754(long param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined *local_60;
  char *pcStack_58;
  
  puVar7 = PTR_DAT_04bb47c0;
  lVar9 = *(long *)PTR_DAT_04bb47c0;
  uVar4 = *(undefined4 *)(lVar9 + 0xc);
  uVar5 = *(undefined4 *)(lVar9 + 0x14);
  uVar6 = *(undefined4 *)(lVar9 + 0x1c);
  lVar9 = *(long *)(*(long *)(param_1 + 0x60) + 0x1138);
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "GymnasticsActionNum";
  if (((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x78), lVar9 != 0)) &&
     (plVar8 = *(long **)(lVar9 + 0x48), plVar8 != (long *)0x0)) {
    (**(code **)(*plVar8 + 0x28))(plVar8,&local_60,uVar5);
  }
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(char *)(param_1 + 0x1980) = (char)*param_2;
  if ((1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) &&
     ((ulong)*(byte *)(param_1 + 0x1ee8) < 8)) {
    lVar9 = *(long *)puVar7 + (ulong)*(byte *)(param_1 + 0x1ee8) * 0x10;
    *(undefined1 *)(lVar9 + 0x58) = 1;
    *(undefined4 *)(lVar9 + 0x5c) = uVar6;
    *(ulong *)(lVar9 + 0x60) = CONCAT44(uVar4,uVar5);
    uVar10 = (ulong)*(byte *)(param_1 + 0x1ee8);
    if (uVar10 < 8) {
      lVar9 = *(long *)puVar7;
      lVar1 = lVar9 + uVar10 * 0x10;
      lVar9 = lVar9 + 0xd8;
      lVar11 = lVar9 + uVar10 * 0x28;
      if (*(long *)(lVar11 + 8) != *(long *)(lVar1 + 0x58) ||
          *(long *)(lVar11 + 0x10) != *(long *)(lVar1 + 0x60)) {
        lVar2 = *(long *)(lVar1 + 0x58);
        uVar3 = *(undefined8 *)(lVar1 + 0x60);
        *(undefined1 *)(lVar9 + uVar10 * 0x28 + 0x18) = 1;
        *(long *)(lVar11 + 8) = lVar2;
        *(undefined8 *)(lVar11 + 0x10) = uVar3;
      }
    }
  }
  local_60 = (undefined *)CONCAT44(local_60._4_4_,0x11f);
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  lVar9 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar9 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar9,0x11f);
  return;
}

