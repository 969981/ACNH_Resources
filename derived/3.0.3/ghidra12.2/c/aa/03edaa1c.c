
void FUN_03edaa1c(long *param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  undefined2 *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint *puVar9;
  long lVar10;
  uint local_24;
  
  puVar9 = (uint *)param_1[3];
  if ((int)(uint)(byte)puVar9[9] < param_4) {
    *(ushort *)(param_3 + 0x7a) = *(ushort *)(param_3 + 0x7a) | 1;
  }
  else {
    iVar1 = *(short *)(param_3 + 0x58) + 1;
    if (iVar1 < (int)(uint)(byte)puVar9[9]) {
      *(short *)(param_3 + 0x58) = (short)iVar1;
      uVar3 = *(ushort *)(param_3 + 0x7a);
    }
    else {
      if ((int)*puVar9 < 0) {
        lVar10 = *(long *)(param_2 + 8);
        plVar6 = *(long **)(lVar10 + 0x18);
        uVar4 = (**(code **)(*plVar6 + 0x118))
                          (plVar6,*(undefined8 *)(*(long *)(param_3 + 0x70) + 0x10),*puVar9 & 0xffff
                          );
        plVar6 = *(long **)(lVar10 + 0x20);
        uVar5 = (**(code **)(*plVar6 + 0x128))(plVar6,uVar4);
      }
      else {
        uVar5 = puVar9[1];
      }
      if (uVar5 == 0) {
        *(ushort *)(param_3 + 0x7a) = *(ushort *)(param_3 + 0x7a) | 1;
        uVar3 = *(ushort *)(param_3 + 0x7a);
      }
      else {
        *(undefined2 *)(param_3 + 0x58) = 0;
        uVar3 = *(ushort *)(param_3 + 0x7a);
      }
    }
    if ((uVar3 & 1) == 0) {
      lVar10 = param_1[2];
      uVar5 = (**(code **)(*param_1 + 200))(param_1,(long)*(short *)(param_3 + 0x58));
      if (uVar5 < *(uint *)(lVar10 + 0x38)) {
        uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0x40) + (long)(int)uVar5 * 8);
      }
      else {
        uVar8 = 0;
      }
      local_24 = 0xffffffff;
      uVar7 = FUN_03ed327c(param_1,param_2,param_3,uVar8,0,&local_24);
      if ((uVar7 & 1) == 0) {
        iVar1 = *(int *)(*(long *)(param_2 + 0x18) + 0x54);
        FUN_03ed1664(0,param_1,param_2,param_3,(long)*(short *)(param_3 + 0x58),0xffffffff,0,0);
        if (iVar1 == *(int *)(*(long *)(param_2 + 0x18) + 0x54)) {
          FUN_03edaa1c(param_1,param_2,param_3,param_4 + 1);
        }
      }
      else {
        puVar2 = (undefined2 *)(param_3 + 0x20) + local_24;
        if (3 < local_24) {
          puVar2 = (undefined2 *)(param_3 + 0x20);
        }
        *puVar2 = *(undefined2 *)(param_3 + 0x58);
      }
    }
  }
  return;
}

