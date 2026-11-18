
void FUN_03639c00(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  
  plVar10 = *(long **)(param_1 + 200);
  uVar1 = *param_2;
  uVar4 = *(undefined2 *)(param_2 + 1);
  uVar5 = *(undefined2 *)((long)param_2 + 6);
  uVar2 = *param_3;
  uVar6 = *(undefined2 *)(param_3 + 1);
  uVar7 = *(undefined2 *)((long)param_3 + 6);
  lVar9 = plVar10[2];
  lVar12 = *(long *)(lVar9 + 0x140);
  bVar3 = *(byte *)(lVar12 + 0xd1);
  do {
    if ((bVar3 >> 1 & 1) != 0) {
      FUN_036039bc(lVar9,0,uVar1);
      FUN_036039bc(lVar9,1,uVar2);
      lVar8 = *(long *)(lVar9 + 0x140);
      *(undefined2 *)(lVar8 + 0x1024) = uVar4;
      *(undefined2 *)(lVar8 + 0x1026) = uVar5;
      lVar8 = *(long *)(lVar9 + 0x148);
      *(undefined2 *)(lVar8 + 0x1024) = uVar6;
      *(undefined2 *)(lVar8 + 0x1026) = uVar7;
      if ((code *)plVar10[0x4e] != (code *)0x0) {
        (*(code *)plVar10[0x4e])(plVar10[0x4f]);
      }
    }
    (**(code **)(*plVar10 + 0x70))(plVar10);
    bVar3 = *(byte *)(lVar12 + 0xd1);
  } while (((bVar3 >> 1 & 1) == 0) && (*(int *)((long)plVar10 + 0xc) != 1));
  if (*(char *)(lVar9 + 0x138) != '\0') {
    uVar11 = 0;
    do {
      lVar12 = *(long *)(lVar9 + 0x140 + uVar11 * 8);
      FUN_0360ddc0(lVar12 + 0x1100,0);
      *(undefined2 *)(lVar12 + 0x216e) = 0;
      uVar11 = uVar11 + 1;
      *(undefined8 *)(lVar12 + 0x1630) = 0;
    } while (uVar11 < *(byte *)(lVar9 + 0x138));
  }
  FUN_03603d40(lVar9);
  if (*(char *)(lVar9 + 0x138) != '\0') {
    uVar11 = 0;
    do {
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(byte *)(lVar9 + 0x138));
  }
  return;
}

