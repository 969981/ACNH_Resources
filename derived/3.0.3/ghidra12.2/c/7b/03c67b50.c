
void FUN_03c67b50(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  
  plVar7 = (long *)*param_1;
  uVar9 = *(uint *)((long)param_1 + 0x14);
  while (uVar9 < *(uint *)((long)plVar7 + 0xc)) {
    lVar8 = (**(code **)(*plVar7 + 0x18))();
    uVar9 = *(uint *)((long)param_1 + 0x14);
    uVar6 = *(uint *)(lVar8 + ((ulong)(uVar9 >> 3) & 0x1ffffffc));
    lVar8 = (**(code **)(*(long *)*param_1 + 0x20))();
    uVar4 = *(uint *)(param_1 + 2);
    puVar2 = (undefined8 *)(lVar8 + (ulong)uVar4);
    if ((uVar6 >> (ulong)(uVar9 & 0x1f) & 1) == 0) {
      uVar9 = *(int *)((long)param_1 + 0x14) + 1;
      *(uint *)(param_1 + 2) = uVar4 + 0x10;
      *(uint *)((long)param_1 + 0x14) = uVar9;
      if (uVar9 < *(uint *)(*param_1 + 0xc)) {
        plVar7 = (long *)param_1[1];
        iVar1 = (int)plVar7[2];
        iVar5 = (int)plVar7[1];
        if (iVar1 < iVar5) {
          *(int *)(plVar7 + 2) = iVar1 + 1;
          iVar1 = *(int *)((long)plVar7 + 0xc) + iVar1;
          iVar3 = 0;
          if (iVar5 <= iVar1) {
            iVar3 = iVar5;
          }
          puVar10 = (undefined8 *)(*plVar7 + (long)(iVar1 - iVar3) * 0x10);
          *puVar10 = *puVar2;
          puVar10[1] = puVar2[1];
        }
      }
      else {
        puVar10 = (undefined8 *)param_1[4];
        if (puVar10 == (undefined8 *)0x0) {
          puVar10 = (undefined8 *)(*(long *)(*(long *)(param_1[3] + 8) + 0xa8) + 0x20);
        }
        (**(code **)(*(long *)*puVar10 + 0x38))((long *)*puVar10,param_1[3],puVar2,1);
      }
    }
    else {
      *(uint *)(param_1 + 2) = uVar4 + 0x30;
      *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
      (**(code **)(puVar2[1] + 0x40))(puVar2 + 1,param_1,*(undefined4 *)puVar2);
    }
    plVar7 = (long *)*param_1;
    uVar9 = *(uint *)((long)param_1 + 0x14);
  }
  return;
}

