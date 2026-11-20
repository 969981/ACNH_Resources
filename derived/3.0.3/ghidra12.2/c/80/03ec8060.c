
ushort FUN_03ec8060(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  short sVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  
  if (*(short *)(param_1 + 0x14) == 0) {
    uVar5 = *(ushort *)(param_4 + 0x7a) & 1;
  }
  else {
    lVar10 = 0;
    do {
      lVar1 = param_1 + lVar10;
      sVar2 = *(short *)(lVar1 + 0x14);
      if (sVar2 == 1) {
        fVar12 = (float)FUN_03ebf3f0(param_3,lVar1 + 0x1c,param_2,1,0,0);
        fVar11 = (float)FUN_03ebf3f0(param_3,lVar1 + 0x24,param_2,1,0,0);
        bVar3 = fVar12 - fVar11 <= 1.1920929e-07 && -1.1920929e-07 <= fVar12 - fVar11;
      }
      else if (sVar2 == 2) {
        if ((int)*(uint *)(lVar1 + 0x18) < 0) {
          uVar6 = (**(code **)(**(long **)(param_3 + 0x18) + 0x118))
                            (*(long **)(param_3 + 0x18),
                             *(undefined8 *)(*(long *)(param_4 + 0x70) + 0x10),
                             *(uint *)(lVar1 + 0x18) & 0xffff);
          iVar7 = (**(code **)(**(long **)(param_3 + 0x20) + 0x128))
                            (*(long **)(param_3 + 0x20),uVar6);
          uVar9 = *(uint *)(lVar1 + 0x20);
          if ((int)uVar9 < 0) goto LAB_03ec8250;
LAB_03ec8184:
          iVar8 = *(int *)(lVar1 + 0x24);
        }
        else {
          iVar7 = *(int *)(lVar1 + 0x1c);
          uVar9 = *(uint *)(lVar1 + 0x20);
          if (-1 < (int)uVar9) goto LAB_03ec8184;
LAB_03ec8250:
          uVar6 = (**(code **)(**(long **)(param_3 + 0x18) + 0x118))
                            (*(long **)(param_3 + 0x18),
                             *(undefined8 *)(*(long *)(param_4 + 0x70) + 0x10),uVar9 & 0xffff);
          iVar8 = (**(code **)(**(long **)(param_3 + 0x20) + 0x128))
                            (*(long **)(param_3 + 0x20),uVar6);
        }
        bVar3 = iVar7 == iVar8;
        fVar12 = (float)iVar7;
        fVar11 = (float)iVar8;
      }
      else {
        if (sVar2 == 0) break;
        if ((int)*(uint *)(lVar1 + 0x18) < 0) {
          uVar6 = (**(code **)(**(long **)(param_3 + 0x18) + 0x128))
                            (*(long **)(param_3 + 0x18),
                             *(undefined8 *)(*(long *)(param_4 + 0x70) + 0x10),
                             *(uint *)(lVar1 + 0x18) & 0xffff);
          bVar3 = (**(code **)(**(long **)(param_3 + 0x20) + 0x138))
                            (*(long **)(param_3 + 0x20),uVar6);
          uVar9 = *(uint *)(lVar1 + 0x20);
          if ((int)uVar9 < 0) goto LAB_03ec81c8;
LAB_03ec8104:
          bVar4 = *(int *)(lVar1 + 0x24) != 0;
        }
        else {
          bVar3 = *(int *)(lVar1 + 0x1c) != 0;
          uVar9 = *(uint *)(lVar1 + 0x20);
          if (-1 < (int)uVar9) goto LAB_03ec8104;
LAB_03ec81c8:
          uVar6 = (**(code **)(**(long **)(param_3 + 0x18) + 0x128))
                            (*(long **)(param_3 + 0x18),
                             *(undefined8 *)(*(long *)(param_4 + 0x70) + 0x10),uVar9 & 0xffff);
          bVar4 = (**(code **)(**(long **)(param_3 + 0x20) + 0x138))
                            (*(long **)(param_3 + 0x20),uVar6);
        }
        fVar12 = (float)(bVar3 & 1);
        fVar11 = (float)(bVar4 & 1);
        bVar3 = bVar3 ^ bVar4 ^ 1;
      }
      switch(*(undefined2 *)(lVar1 + 0x16)) {
      case 0:
        if (fVar12 <= fVar11) {
          return 0;
        }
        break;
      case 1:
        if (fVar12 < fVar11) {
          return 0;
        }
        break;
      case 2:
        if ((bVar3 & 1) == 0) {
          return 0;
        }
        break;
      case 3:
        if ((bVar3 & 1) != 0) {
          return 0;
        }
        break;
      case 4:
        if (fVar11 < fVar12) {
          return 0;
        }
        break;
      case 5:
        if (fVar11 <= fVar12) {
          return 0;
        }
      }
      lVar10 = lVar10 + 0x14;
    } while (lVar10 != 0x50);
    uVar5 = 1;
  }
  return uVar5;
}

