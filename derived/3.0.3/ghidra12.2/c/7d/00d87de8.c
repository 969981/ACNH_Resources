
void FUN_00d87de8(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined *local_38;
  undefined8 uStack_30;
  undefined4 local_28 [2];
  
  local_28[0] = 0;
  (**(code **)(*(long *)(param_1 + 0xd8) + 0x18))((long *)(param_1 + 0xd8));
  uStack_30 = *(undefined8 *)(param_1 + 0xe0);
  local_38 = PTR_DAT_04bb2020 + 0x10;
  FUN_00d879a8(local_28,&local_38);
  switch(local_28[0]) {
  case 0:
    if (*(uint *)(DAT_0537d558 + 0x10) < 2) {
      return;
    }
    lVar7 = DAT_0537d558[2];
    if (lVar7 == 0) {
      return;
    }
    iVar3 = *(int *)(lVar7 + 0x380);
    if (iVar3 - 0x25U < 2) {
      return;
    }
    if (iVar3 == 0x23) {
      return;
    }
    if (iVar3 == 0x24) {
      if (*(long *)(lVar7 + 0x3c8) == 0) {
        return;
      }
      if ((int)*(uint *)(lVar7 + 0x3d8) < 0) {
        return;
      }
      lVar8 = (ulong)*(uint *)(lVar7 + 0x3d8) + 1;
      plVar9 = (long *)(*(long *)(lVar7 + 0x3c8) + 8);
      while ((undefined *)plVar9[-1] != PTR_LAB_04bc12b0 || *plVar9 != 0) {
        plVar9 = plVar9 + 4;
        lVar8 = lVar8 + -1;
        if (lVar8 == 0) {
          return;
        }
      }
    }
    if ((*(int *)(lVar7 + 0x3d0) != 2) && (*(int *)(lVar7 + 0x3d0) != 1)) {
      return;
    }
    break;
  case 1:
    lVar7 = DAT_0537d558[2];
    if (lVar7 == 0) break;
    bVar4 = *(byte *)(*DAT_0537d558 + 0x472);
    if ((long)(char)bVar4 == 0xffffffffffffffff) {
      bVar5 = true;
    }
    else {
      pbVar1 = (byte *)(*DAT_0537d558 + 0x48);
      bVar5 = true;
      pbVar2 = pbVar1 + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
      if (7 < bVar4) {
        pbVar2 = pbVar1;
      }
      if ((*pbVar2 >> 1 & 1) != 0) {
        bVar5 = *(int *)(lVar7 + 0x3d0) != 1;
      }
    }
    goto LAB_00d87fd4;
  case 2:
    lVar7 = DAT_0537d558[2];
    if (lVar7 == 0) break;
    bVar5 = false;
LAB_00d87fd4:
    if (1 < *(byte *)(*DAT_0537d558 + 0x476)) {
      if (*(int *)(lVar7 + 0x3d8) == *(int *)(lVar7 + 0x3d4) + -1) {
        bVar5 = true;
      }
      if (!bVar5) {
        return;
      }
    }
    break;
  case 3:
    if (((DAT_0537d558 != (long *)0x0) && (DAT_0537d558[5] != 0)) &&
       (*(int *)(DAT_0537d558[5] + 0x60) != 9)) {
      return;
    }
    break;
  case 4:
    if (((DAT_0537d558 != (long *)0x0) && (DAT_0537d558[5] != 0)) &&
       (*(int *)(DAT_0537d558[5] + 0x60) != 0x11)) {
      return;
    }
    break;
  case 5:
    if (((DAT_0537d558[2] != 0) && (1 < *(byte *)(*DAT_0537d558 + 0x476))) &&
       (uVar6 = FUN_01d4dd04(), (uVar6 & 1) == 0)) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return;
}

