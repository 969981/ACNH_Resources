
uint FUN_03363090(uint param_1)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  ushort *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  
  lVar3 = DAT_05734b90;
  if ((param_1 & 0xffff) == 0x3000) {
    return 0x3000;
  }
  for (puVar6 = &DAT_0418e2e0;
      (((uint)*puVar6 != (param_1 & 0xffff) && ((uint)puVar6[1] != (param_1 & 0xffff))) &&
      ((uint)puVar6[2] != (param_1 & 0xffff))); puVar6 = puVar6 + 4) {
    if (puVar6[2] == 0) {
      puVar6 = &DAT_0418e1f8;
      goto LAB_03363190;
    }
    if ((uint)puVar6[3] == (param_1 & 0xffff)) break;
  }
  uVar4 = FUN_033624b0(param_1);
  lVar3 = DAT_05734b90;
  for (puVar6 = &DAT_0418e1f8; uVar8 = uVar4, (uint)puVar6[-2] != (uVar4 & 0xffff);
      puVar6 = puVar6 + 4) {
    if ((uint)puVar6[-1] == (uVar4 & 0xffff)) {
      puVar6 = puVar6 + -1;
      goto LAB_033631fc;
    }
    if ((uint)*puVar6 == (uVar4 & 0xffff)) goto LAB_033631fc;
    if (*puVar6 == 0) {
      lVar9 = 0;
      goto LAB_033631e0;
    }
    if ((uint)puVar6[1] == (uVar4 & 0xffff)) {
      puVar6 = puVar6 + 1;
      goto LAB_033631fc;
    }
  }
  puVar6 = puVar6 + -2;
LAB_033631fc:
  uVar2 = *(ushort *)(PTR_DAT_04b205e0 + (long)(puVar6 + -0x20c70fa));
  if (uVar2 != 0x3000) {
    lVar9 = 9;
LAB_03363218:
    uVar5 = FUN_03368ef0(DAT_05734ea0,0);
    lVar7 = *(long *)(lVar3 + 8);
    uVar8 = (uint)uVar2;
    if (lVar7 != 0) {
      lVar1 = 0;
      if (*(char *)(lVar7 + 0x38) != '\0') {
        lVar1 = lVar7 + 8;
      }
      FUN_03366350(lVar3,lVar1,*(undefined8 *)(PTR_s_Decide_Erase_04bc9780 + lVar9 * 8 + 0x3f0),1,
                   uVar5,0);
    }
  }
  goto LAB_03363278;
LAB_03363190:
  if ((uint)puVar6[-2] == (param_1 & 0xffff)) {
    puVar6 = puVar6 + -2;
LAB_033632ec:
    uVar2 = *(ushort *)(PTR_DAT_04b205e0 + (long)(puVar6 + -0x20c70fa));
    if (uVar2 == 0x3000) {
      return param_1;
    }
    lVar9 = 9;
LAB_03363308:
    uVar5 = FUN_03368ef0(DAT_05734ea0,0);
    lVar7 = *(long *)(lVar3 + 8);
    if (lVar7 == 0) {
      return (uint)uVar2;
    }
    lVar1 = 0;
    if (*(char *)(lVar7 + 0x38) != '\0') {
      lVar1 = lVar7 + 8;
    }
    FUN_03366350(lVar3,lVar1,*(undefined8 *)(PTR_s_Decide_Erase_04bc9780 + lVar9 * 8 + 0x3f0),1,
                 uVar5,0);
    return (uint)uVar2;
  }
  if ((uint)puVar6[-1] == (param_1 & 0xffff)) {
    puVar6 = puVar6 + -1;
    goto LAB_033632ec;
  }
  if ((uint)*puVar6 == (param_1 & 0xffff)) goto LAB_033632ec;
  if (*puVar6 == 0) {
    lVar9 = 0;
    while (puVar6 = (ushort *)(PTR_DAT_04b205e0 + lVar9), (uint)*puVar6 != (param_1 & 0xffff)) {
      lVar9 = lVar9 + 2;
      if (*puVar6 == 0) {
        return param_1;
      }
    }
    uVar2 = *(ushort *)((long)&DAT_0418e1f4 + lVar9);
    if (uVar2 == 0x3000) {
      return param_1;
    }
    lVar9 = 8;
    goto LAB_03363308;
  }
  if ((uint)puVar6[1] == (param_1 & 0xffff)) {
    puVar6 = puVar6 + 1;
    goto LAB_033632ec;
  }
  puVar6 = puVar6 + 4;
  goto LAB_03363190;
  while (lVar9 = lVar9 + 2, *puVar6 != 0) {
LAB_033631e0:
    puVar6 = (ushort *)(PTR_DAT_04b205e0 + lVar9);
    if ((uint)*puVar6 == (uVar4 & 0xffff)) {
      uVar2 = *(ushort *)((long)&DAT_0418e1f4 + lVar9);
      if (uVar2 != 0x3000) {
        lVar9 = 8;
        goto LAB_03363218;
      }
      break;
    }
  }
LAB_03363278:
  if ((uVar8 & 0xffff) != (uVar4 & 0xffff)) {
    param_1 = uVar8;
  }
  return param_1;
}

