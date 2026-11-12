
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00889f80(undefined4 *param_1,long *param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  undefined4 local_48;
  undefined4 uStack_44;
  
  if (param_3 != 0) {
    lVar4 = (**(code **)(*param_2 + 0x20))();
    lVar9 = 0;
    iVar5 = 0;
    iVar10 = 0;
    do {
      uVar8 = *(uint *)(lVar4 + lVar9);
      uVar3 = uVar8 - (uVar8 >> 1 & 0x55555555);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
      uVar3 = uVar3 + (uVar3 >> 8);
      iVar1 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + iVar10;
      if (param_3 <= iVar1) {
        if (uVar8 == 0) {
          uVar3 = 0xffffffff;
          goto LAB_0088a084;
        }
        iVar10 = (param_3 - iVar10) + 1;
        uVar3 = 0xffffffff;
        goto LAB_0088a030;
      }
      lVar9 = lVar9 + 4;
      iVar5 = iVar5 + 0x20;
      iVar10 = iVar1;
    } while (lVar9 != 0x754);
  }
  goto LAB_0088a104;
  while (uVar8 = uVar8 - 1 & uVar8, uVar8 != 0) {
LAB_0088a030:
    iVar10 = iVar10 + -1;
    if (iVar10 < 2) {
      uVar3 = uVar8 - 1 & (uVar8 ^ 0xffffffff);
      uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
      uVar3 = uVar3 + (uVar3 >> 8);
      uVar3 = uVar3 + (uVar3 >> 0x10) & 0x3f;
      break;
    }
  }
LAB_0088a084:
  if (uVar3 + iVar5 != -1) {
    (**(code **)(*param_2 + 0x10))(&local_48,param_2);
    puVar2 = PTR_DAT_04bb43c0;
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar2 == 0) {
LAB_0088a130:
      puVar7 = &DAT_0558600c;
      *param_1 = _DAT_05586008;
    }
    else {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0088a130;
      *param_1 = local_48;
      puVar7 = &uStack_44;
    }
    uVar6 = *puVar7;
    goto LAB_0088a114;
  }
LAB_0088a104:
  uVar6 = DAT_0558600c;
  *param_1 = _DAT_05586008;
LAB_0088a114:
  param_1[1] = uVar6;
  return;
}

