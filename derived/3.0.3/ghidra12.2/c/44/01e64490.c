
void FUN_01e64490(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x180))();
  puVar8 = PTR_DAT_04bb3968;
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 8);
    if ((*(ulong *)(param_1 + 0xad58) & 0x10000000000020) != 0) {
      lVar6 = *(long *)PTR_DAT_04bb3968;
      lVar9 = *(long *)(lVar6 + 0x2f50);
      if (lVar9 != lVar6 + 0x2f48) {
        puVar7 = (undefined8 *)0x0;
        puVar10 = (undefined8 *)(lVar9 + -0xe0);
        do {
          puVar11 = puVar10;
          do {
            puVar11 = (undefined8 *)puVar11[1];
            if ((int *)(puVar11 + -2) == (int *)(lVar9 + -0xf0)) goto LAB_01e64520;
          } while (*(int *)(puVar11 + -2) != *(int *)(lVar4 + 0x230));
          puVar7 = puVar10;
LAB_01e64520:
          lVar9 = *(long *)(lVar9 + 8);
          puVar10 = (undefined8 *)(lVar9 + -0xe0);
        } while (puVar10 != (undefined8 *)(lVar6 + 0x2e68));
        if (puVar7 != (undefined8 *)0x0) {
          plVar5 = puVar7 + 0x1c;
          if (*plVar5 != 0) {
            *(undefined8 *)(*plVar5 + 8) = puVar7[0x1d];
          }
          if ((long *)puVar7[0x1d] != (long *)0x0) {
            *(long *)puVar7[0x1d] = *plVar5;
          }
          *plVar5 = 0;
          puVar7[0x1d] = 0;
          *(int *)(lVar6 + 0x2f58) = *(int *)(lVar6 + 0x2f58) + -1;
          puVar10 = puVar7;
          do {
            puVar10 = (undefined8 *)puVar10[1];
          } while (puVar10 != puVar7);
          *puVar7 = *(undefined8 *)(lVar6 + 0x2f60);
          *(undefined8 **)(lVar6 + 0x2f60) = puVar7;
          lVar4 = *(long *)(param_1 + 8);
        }
      }
    }
    if ((*(int *)(param_1 + 0x77b0) == 0x4c || *(int *)(param_1 + 0x77f4) == 0x4c) &&
        *(char *)(param_1 + 0x789c) != '\0') {
      local_38 = *(undefined4 *)(param_1 + 0x7818);
      uStack_34 = *(undefined4 *)(param_1 + 0x781c);
      local_50 = *(undefined4 *)(*(long *)(lVar4 + 0x68) + 0x280);
      local_58 = *(undefined8 *)(*(long *)(lVar4 + 0x68) + 0x278);
      local_44 = 0;
      local_40 = &DAT_048f9750;
      local_4c = *(undefined4 *)(*(long *)(param_1 + 0x10) + 800);
      uStack_48 = 0x41200000;
      FUN_01521d80(DAT_0520f098,&local_58);
      lVar4 = *(long *)(param_1 + 8);
    }
    FUN_01e2a964(*(long *)puVar8 + 0xda0,0,lVar4 + 0x508);
  }
  if ((((*(byte *)(*DAT_0537d558 + 0x476) < 2) && ((*(ushort *)(param_1 + 0x12570) & 1) != 0)) &&
      (*(long *)(param_1 + 8) != 0)) &&
     (uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x508), uVar1 != 0xffffffff)) {
    puVar8 = &DAT_053fe348 + (ulong)uVar1 * 0xba0;
    if (9 < uVar1) {
      puVar8 = &DAT_053fe348;
    }
    *(undefined8 *)(puVar8 + 0x648) = 0;
    *(undefined8 *)(puVar8 + 0x640) = 0;
    *(undefined8 *)(puVar8 + 0x638) = 0;
    iVar2 = *(int *)(param_1 + 0xaa00);
    if ((iVar2 != 3) && (*(int *)(*(long *)(param_1 + 0x89b8) + 0x58) == 4)) {
      if (iVar2 == 0) {
        local_50 = 0;
        local_58 = 0;
        uVar3 = FUN_020d18e4(param_1 + 0x8998,&local_58);
        if ((uVar3 & 1) != 0) {
          *(undefined4 *)(puVar8 + 0x640) = local_50;
          *(undefined8 *)(puVar8 + 0x638) = local_58;
        }
        *(undefined4 *)(puVar8 + 0x644) = *(undefined4 *)(param_1 + 0xa9f0);
        *(undefined4 *)(puVar8 + 0x648) = *(undefined4 *)(param_1 + 0xa9f4);
        *(undefined4 *)(puVar8 + 0x64c) = *(undefined4 *)(param_1 + 0xa9f8);
      }
      else if (iVar2 == 1) {
        *(undefined4 *)(puVar8 + 0x638) = *(undefined4 *)(param_1 + 0xa9f0);
        *(undefined4 *)(puVar8 + 0x63c) = *(undefined4 *)(param_1 + 0xa9f4);
        *(undefined4 *)(puVar8 + 0x640) = *(undefined4 *)(param_1 + 0xa9f8);
      }
    }
  }
  return;
}

