
undefined4 FUN_0073d060(long param_1,int param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  long *plVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined *local_60;
  undefined *puStack_58;
  
  lVar5 = *(long *)(param_1 + 0x1150);
  if (lVar5 == 0) {
    uVar11 = 0x3f800000;
  }
  else {
    puStack_58 = (&PTR_s_const_color0_04903918)[param_2];
    local_60 = PTR_DAT_04bb2020 + 0x10;
    if (*(int *)(lVar5 + 0x30) == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      lVar9 = *(long *)(lVar5 + 0x38);
      lVar8 = 0;
      lVar10 = (long)*(int *)(lVar5 + 0x30) << 3;
      uVar7 = 0xffffffff;
      do {
        plVar3 = (long *)**(undefined8 **)(lVar9 + lVar8 * 8);
        iVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3,param_3);
        if (iVar2 != -1) {
          uVar7 = (ulong)((uint)lVar8 & 0xffff | iVar2 << 0x10);
          break;
        }
        lVar8 = lVar8 + 1;
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
    uVar6 = -(uVar7 >> 0xf & 1) & 0xfffffffffff80000 | (uVar7 & 0xffff) << 3;
    iVar2 = (int)uVar7 >> 0x10;
    plVar3 = (long *)**(undefined8 **)(*(long *)(lVar5 + 0x38) + uVar6);
    sVar1 = (**(code **)(*plVar3 + 0xd0))(plVar3,iVar2,&local_60);
    plVar3 = (long *)**(undefined8 **)(*(long *)(*(long *)(param_1 + 0x1150) + 0x38) + uVar6);
    puVar4 = (undefined4 *)(**(code **)(*plVar3 + 0x150))(plVar3,iVar2,(int)sVar1);
    uVar11 = *puVar4;
  }
  return uVar11;
}

