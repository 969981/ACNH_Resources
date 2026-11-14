
bool FUN_016102c0(long *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = *param_1;
  if (param_1[4] == 0 || lVar7 == 0) {
    return false;
  }
  if (*(int *)(lVar7 + 0x30) != 0) {
    lVar10 = *(long *)(lVar7 + 0x38);
    lVar9 = 0;
    lVar8 = 0;
    lVar7 = (long)*(int *)(lVar7 + 0x30) << 3;
    do {
      plVar6 = (long *)**(undefined8 **)(lVar10 + lVar9 * 8);
      uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6,param_3);
      if (uVar4 != 0xffffffff) {
        uVar2 = (uint)lVar9 & 0xffff;
        if (uVar2 == 0xffff) {
          return false;
        }
        if ((uVar4 & 0xffff) == 0xffff) {
          return false;
        }
        plVar6 = (long *)**(undefined8 **)(*(long *)(*param_1 + 0x38) + (lVar8 >> 0x2d));
        uVar5 = (**(code **)(*plVar6 + 0xd0))(plVar6,(int)(short)uVar4,param_4);
        uVar3 = param_2;
        if (*(uint *)(param_1 + 3) <= param_2) {
          uVar3 = 0;
        }
        *(ulong *)(param_1[4] + (long)(int)uVar3 * 8) =
             CONCAT44(uVar5,uVar4 << 0x10) & 0xffffffffffff | (ulong)uVar2;
        if (*(uint *)(param_1 + 3) <= param_2) {
          param_2 = 0;
        }
        psVar1 = (short *)(param_1[4] + (long)(int)param_2 * 8);
        if (*psVar1 == -1) {
          return false;
        }
        if (psVar1[1] == -1) {
          return false;
        }
        return psVar1[2] != -1;
      }
      lVar8 = lVar8 + 0x1000000000000;
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  return false;
}

