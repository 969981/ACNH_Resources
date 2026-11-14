
void FUN_017397b0(long param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *local_60;
  char *pcStack_58;
  
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_3 + 0x48) + 0x240);
  puVar2 = PTR_DAT_04bb2020;
  lVar10 = *(long *)(param_3 + 0x1150);
  if (lVar10 == 0) {
    return;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "FaceGood";
  if (*(int *)(lVar10 + 0x30) == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    lVar12 = *(long *)(lVar10 + 0x38);
    lVar11 = 0;
    lVar13 = (long)*(int *)(lVar10 + 0x30) << 3;
    uVar7 = 0xffffffff;
    local_60 = puVar1;
    do {
      plVar4 = (long *)**(undefined8 **)(lVar12 + lVar11 * 8);
      iVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,&local_60);
      if (iVar3 != -1) {
        uVar7 = (uint)lVar11 & 0xffff | iVar3 << 0x10;
        break;
      }
      lVar11 = lVar11 + 1;
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
  }
  pcStack_58 = "FaceBad";
  if (*(int *)(lVar10 + 0x30) == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    lVar12 = *(long *)(lVar10 + 0x38);
    lVar11 = 0;
    lVar13 = (long)*(int *)(lVar10 + 0x30) << 3;
    uVar8 = 0xffffffff;
    local_60 = puVar1;
    do {
      plVar4 = (long *)**(undefined8 **)(lVar12 + lVar11 * 8);
      iVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,&local_60);
      if (iVar3 != -1) {
        uVar8 = (uint)lVar11 & 0xffff | iVar3 << 0x10;
        break;
      }
      lVar11 = lVar11 + 1;
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
  }
  local_60 = puVar2 + 0x10;
  pcStack_58 = "FaceNothing";
  if (*(int *)(lVar10 + 0x30) == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    lVar13 = *(long *)(lVar10 + 0x38);
    lVar11 = 0;
    lVar10 = (long)*(int *)(lVar10 + 0x30) << 3;
    uVar9 = 0xffffffff;
    do {
      plVar4 = (long *)**(undefined8 **)(lVar13 + lVar11 * 8);
      iVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,&local_60);
      if (iVar3 != -1) {
        uVar9 = (uint)lVar11 & 0xffff | iVar3 << 0x10;
        break;
      }
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  if (0xfffeffff < uVar7) {
    return;
  }
  if ((uVar7 & 0xffff) == 0xffff) {
    return;
  }
  if (0xfffeffff < uVar8) {
    return;
  }
  if ((uVar8 & 0xffff) == 0xffff) {
    return;
  }
  if (0xfffeffff < uVar9 || (uVar9 & 0xffff) == 0xffff) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    puVar5 = malloc(0xc);
joined_r0x017399f8:
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 1) = 0xffffffff;
      uVar6 = 1;
      *(undefined4 *)(param_1 + 0x10) = 3;
      *(undefined8 **)(param_1 + 0x18) = puVar5;
      goto LAB_01739a0c;
    }
  }
  else {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar10 + 8);
    if (lVar11 != 0) {
      plVar4 = (long *)(lVar11 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) {
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0xc,8);
      goto joined_r0x017399f8;
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 0x18);
  uVar6 = (ulong)(1 < *(uint *)(param_1 + 0x10));
LAB_01739a0c:
  *(uint *)((long)puVar5 + uVar6 * 4) = uVar8;
  **(uint **)(param_1 + 0x18) = uVar7;
  *(uint *)(*(long *)(param_1 + 0x18) + (ulong)(2 < *(uint *)(param_1 + 0x10)) * 8) = uVar9;
  return;
}

