
void FUN_004ba160(long *param_1,long param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long local_60 [2];
  ulong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulong local_38;
  
  lVar3 = FUN_004272d0(param_3[1]);
  lVar5 = *(long *)(param_2 + 0xc0);
  if (lVar3 == lVar5) {
    uStack_40 = param_3[1];
    local_38 = *(ulong *)((param_3[2] & 0xfffffffffffffffe) + 0x10);
    local_48 = *param_3;
    if ((local_38 & 1) != 0) {
      FUN_0043dd30(local_38 & 0xfffffffffffffffe);
      lVar5 = *(long *)(param_2 + 0xc0);
    }
    (**(code **)(**(long **)(lVar5 + 0x2c0) + 0x20))(local_60,*(long **)(lVar5 + 0x2c0),&local_48);
    if ((local_60[0] == 0) || (iVar2 = FUN_004b9a20(*(undefined8 *)(param_2 + 0xc0)), iVar2 < 1)) {
      bVar1 = false;
    }
    else {
      plVar6 = (long *)(*(long *)(param_2 + 0x18) + (long)iVar2 * 0x18);
      lVar3 = plVar6[1];
      *param_1 = *plVar6;
      param_1[1] = lVar3;
      uVar4 = 0;
      if (lVar3 != 0) {
        uVar4 = FUN_00428370();
      }
      param_1[2] = uVar4;
      if ((uVar4 & 1) != 0) {
        FUN_0043dd30(uVar4 & 0xfffffffffffffffe);
      }
      bVar1 = true;
    }
    if ((local_50 & 1) != 0) {
      FUN_0043dd50(local_50 & 0xfffffffffffffffe);
    }
    if ((local_38 & 1) != 0) {
      FUN_0043dd50(local_38 & 0xfffffffffffffffe);
    }
    if (bVar1) {
      return;
    }
  }
  lVar3 = FUN_00426d90(param_3[1]);
  if ((lVar3 == 0) || (uVar4 = FUN_0044f8a0(lVar3,&DAT_04c16210), (uVar4 & 1) == 0)) {
    lVar5 = (long)*(int *)*param_3;
    lVar3 = *(long *)(param_2 + 0x18);
    plVar6 = (long *)(lVar3 + lVar5 * 0x18);
    if ((char)plVar6[2] == '\x02') {
      lVar3 = *(long *)(lVar3 + lVar5 * 0x18 + 8);
      *param_1 = *plVar6;
      param_1[1] = lVar3;
      uVar4 = 0;
      if (lVar3 != 0) {
LAB_004ba1e8:
        uVar4 = FUN_00428370();
      }
    }
    else {
      if ((*plVar6 != 0) || (iVar2 = *(int *)(lVar3 + lVar5 * 0x18 + 0x14), iVar2 < 1))
      goto LAB_004ba29c;
      plVar6 = (long *)(lVar3 + (long)iVar2 * 0x18);
      lVar3 = plVar6[1];
      *param_1 = *plVar6;
      param_1[1] = lVar3;
      if (lVar3 != 0) goto LAB_004ba1e8;
      uVar4 = 0;
    }
    param_1[2] = uVar4;
    if ((uVar4 & 1) != 0) {
      FUN_0043dd30(uVar4 & 0xfffffffffffffffe);
    }
  }
  else {
LAB_004ba29c:
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  return;
}

