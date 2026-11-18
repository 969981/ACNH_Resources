
undefined8 FUN_03657730(long param_1,uint param_2,long param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  
  puVar1 = (undefined8 *)(param_1 + 0x278);
  *(uint *)(param_1 + 0x2a4) = param_2;
  *(undefined4 *)(param_1 + 0x294) = 0;
  switch(param_2) {
  case 0:
    uVar8 = FUN_03658028(puVar1,param_3,param_4);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    break;
  case 1:
    uVar8 = FUN_03658028(puVar1,param_3 + (ulong)*(uint *)(param_3 + 8),
                         *(int *)(param_3 + 0xc) - *(uint *)(param_3 + 8));
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    param_3 = param_3 + (ulong)*(uint *)(param_3 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    break;
  case 3:
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x280) = 0;
    *(undefined8 *)(param_1 + 0x288) = 0x8000;
    *(undefined2 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x290) = 0x2000;
    *(undefined8 *)(param_1 + 0x298) = 0x300000006;
LAB_03657854:
    FUN_03653200(param_1 + 0x2a8,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x40),puVar1);
    goto LAB_0365786c;
  default:
    if ((param_2 & 0xfffffffd) != 4) {
      return 0;
    }
  case 2:
  case 5:
    *(undefined2 *)(param_1 + 0x2a0) = 0;
    *(undefined8 *)(param_1 + 0x288) = 0x8000;
    *(undefined4 *)(param_1 + 0x290) = 0x2000;
    *(undefined8 *)(param_1 + 0x298) = 0x300000006;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x280) = 0;
    if ((((param_2 != 2) && (param_2 != 3)) && (param_2 != 5)) && ((param_2 & 0xfffffffd) != 4)) {
      return 0;
    }
    goto LAB_03657854;
  }
  FUN_036528f0(param_1 + 0x2a8,param_3,*(undefined8 *)(param_1 + 0x18),uVar4,
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),puVar1);
LAB_0365786c:
  FUN_03657d08(param_1,*(undefined4 *)(param_1 + 0x29c));
  iVar6 = *(int *)(param_1 + 0x298);
  if (iVar6 < 0x99) {
    switch(iVar6) {
    case 1:
      *(long *)(param_1 + 0x1c30) = param_1;
      *(undefined4 *)(param_1 + 0x1c58) = 0;
      *(undefined8 *)(param_1 + 0x1c50) = 0;
      *(undefined1 *)(param_1 + 0x1c48) = *(undefined1 *)(param_1 + 0x2a1);
      uVar7 = *(uint *)(param_1 + 0x278) - 1;
      if (0xe < uVar7) {
        uVar7 = 0xf;
      }
      *(uint *)(param_1 + 0x1c5c) = uVar7;
      *(uint *)(param_1 + 0x1c60) = (uint)(0x1f < *(uint *)(param_1 + 0x278)) << 4;
      *(undefined4 *)(param_1 + 0x1c4c) = 0x1f;
      break;
    default:
      goto switchD_036578ac_caseD_2;
    case 4:
      FUN_0364c918(param_1 + 0x1c68,param_1,3);
      break;
    case 5:
      FUN_0364efb0(param_1 + 0x1d08,param_1);
      break;
    case 9:
      FUN_0364ec8c(param_1 + 0x1c98,param_1,9);
      *(undefined1 **)(param_1 + 0x1c28) = &LAB_03652690;
      break;
    case 10:
      FUN_0364ec8c(param_1 + 0x1cd0,param_1,10);
      *(undefined1 **)(param_1 + 0x1c28) = &LAB_036527c0;
      break;
    case 0x10:
      uVar7 = *(uint *)(param_1 + 0x778);
      lVar13 = 0;
      uVar3 = *(undefined1 *)(param_1 + 0x4b8);
      lVar9 = *(long *)(param_1 + 0x4c0);
      *(long *)(param_1 + 0x1de8) = param_1;
      plVar11 = (long *)(param_1 + 0x1400);
      puVar14 = (undefined4 *)(param_1 + 0x9f8);
      do {
        *puVar14 = (int)lVar13;
        lVar12 = lVar9 + lVar13;
        lVar13 = lVar13 + 0x100;
        *(undefined1 *)(plVar11 + -1) = uVar3;
        *plVar11 = lVar12;
        plVar11 = plVar11 + 2;
        puVar14 = puVar14 + 1;
      } while (lVar13 != 0x4000);
      lVar9 = *(long *)(param_1 + 0x1de8);
      lVar13 = 0xaf8;
      uVar3 = *(undefined1 *)(lVar9 + 0x5b8);
      uVar8 = (ulong)(*(int *)(lVar9 + 0x778) - 1U & (uVar7 & 0xffffc000) - 0x4000);
      lVar12 = *(long *)(lVar9 + 0x5c0);
      plVar11 = (long *)(lVar9 + 0x1800);
      do {
        *(int *)(lVar9 + lVar13) = (int)uVar8;
        lVar10 = lVar12 + uVar8;
        lVar13 = lVar13 + 4;
        *(undefined1 *)(plVar11 + -1) = uVar3;
        uVar8 = uVar8 + 0x100;
        *plVar11 = lVar10;
        plVar11 = plVar11 + 2;
      } while (lVar13 != 0xbf8);
      *(undefined4 *)(param_1 + 0x1e00) = 2;
      uVar5 = 0x100;
LAB_03657c3c:
      *(undefined4 *)(param_1 + 0x1e24) = uVar5;
      *(undefined8 *)(param_1 + 0x1e28) = 0;
      *(undefined8 *)(param_1 + 0x1e30) = 0;
      *(undefined8 *)(param_1 + 0x1e38) = 0;
      *(undefined8 *)(param_1 + 0x1e40) = 0;
      *(undefined8 *)(param_1 + 0x1e48) = 0;
      *(undefined8 *)(param_1 + 0x1e50) = 0;
      *(undefined8 *)(param_1 + 0x1e58) = 0;
      *(undefined8 *)(param_1 + 0x1e60) = 0;
      *(undefined8 *)(param_1 + 0x1e68) = 0;
      *(undefined8 *)(param_1 + 0x1e70) = 0;
      *(undefined8 *)(param_1 + 0x1e78) = 0;
      *(undefined8 *)(param_1 + 0x1e80) = 0;
      *(undefined8 *)(param_1 + 0x1e88) = 0;
      *(undefined8 *)(param_1 + 0x1e90) = 0;
      *(undefined8 *)(param_1 + 0x1e98) = 0;
      *(undefined8 *)(param_1 + 0x1ea0) = 0;
      *(undefined8 *)(param_1 + 0x1ea8) = 0;
      *(undefined8 *)(param_1 + 0x1eb0) = 0;
      *(undefined8 *)(param_1 + 0x1eb8) = 0;
      *(undefined8 *)(param_1 + 0x1ec0) = 0;
      *(undefined8 *)(param_1 + 0x1ec8) = 0;
      *(undefined8 *)(param_1 + 0x1ed0) = 0;
      *(undefined8 *)(param_1 + 0x1ed8) = 0;
      *(undefined8 *)(param_1 + 0x1ee0) = 0;
      *(undefined8 *)(param_1 + 0x1ee8) = 0;
      *(undefined8 *)(param_1 + 0x1ef0) = 0;
      *(undefined8 *)(param_1 + 0x1ef8) = 0;
      *(undefined8 *)(param_1 + 0x1f00) = 0;
      *(undefined8 *)(param_1 + 0x1f08) = 0;
      *(undefined8 *)(param_1 + 0x1f10) = 0;
      *(undefined8 *)(param_1 + 0x1f18) = 0;
      *(undefined8 *)(param_1 + 0x1f20) = 0;
      break;
    case 0x12:
      *(long *)(param_1 + 0x1f38) = param_1;
      *(undefined1 *)(param_1 + 0x1f50) = 0;
      *(undefined4 *)(param_1 + 0x1f52) = 0;
      uVar3 = *(undefined1 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x1f55) = 0;
      lVar13 = 0xb78;
      *(undefined8 *)(param_1 + 8000) = 0;
      *(undefined8 *)(param_1 + 0x1f48) = 0;
      uVar8 = (ulong)(*(int *)(param_1 + 0x798) - 1U &
                     (*(uint *)(param_1 + 0x738) & 0xffffe000) - 0x2000);
      lVar9 = *(long *)(param_1 + 0x640);
      plVar11 = (long *)(param_1 + 0x1a00);
      do {
        *(int *)(param_1 + lVar13) = (int)uVar8;
        lVar12 = lVar9 + uVar8;
        lVar13 = lVar13 + 4;
        *(undefined1 *)(plVar11 + -1) = uVar3;
        uVar8 = uVar8 + 0x100;
        *plVar11 = lVar12;
        plVar11 = plVar11 + 2;
      } while (lVar13 != 0xbf8);
      break;
    case 0x13:
      *(long *)(param_1 + 0x1db8) = param_1;
      break;
    case 0x58:
    case 0x5f:
switchD_036578ac_caseD_58:
      lVar13 = 0xaf8;
      uVar3 = *(undefined1 *)(param_1 + 0x5b8);
      *(long *)(param_1 + 0x1f28) = param_1;
      uVar8 = (ulong)((*(uint *)(param_1 + 0x778) & 0xffffc000) - 0x4000 &
                     *(uint *)(param_1 + 0x778) - 1);
      lVar9 = *(long *)(param_1 + 0x5c0);
      plVar11 = (long *)(param_1 + 0x1800);
      do {
        *(int *)(param_1 + lVar13) = (int)uVar8;
        lVar12 = lVar9 + uVar8;
        lVar13 = lVar13 + 4;
        *(undefined1 *)(plVar11 + -1) = uVar3;
        uVar8 = uVar8 + 0x100;
        *plVar11 = lVar12;
        plVar11 = plVar11 + 2;
      } while (lVar13 != 0xbf8);
    }
  }
  else {
    if (iVar6 != 0x99) {
      if (iVar6 != 0x9f) {
        if (iVar6 != 0xce) goto switchD_036578ac_caseD_2;
        goto switchD_036578ac_caseD_58;
      }
      uVar7 = *(uint *)(param_1 + 0x778);
      lVar13 = 0;
      uVar3 = *(undefined1 *)(param_1 + 0x4b8);
      lVar9 = *(long *)(param_1 + 0x4c0);
      *(long *)(param_1 + 0x1de8) = param_1;
      plVar11 = (long *)(param_1 + 0x1400);
      puVar14 = (undefined4 *)(param_1 + 0x9f8);
      do {
        *puVar14 = (int)lVar13;
        lVar12 = lVar9 + lVar13;
        lVar13 = lVar13 + 0x100;
        *(undefined1 *)(plVar11 + -1) = uVar3;
        *plVar11 = lVar12;
        plVar11 = plVar11 + 2;
        puVar14 = puVar14 + 1;
      } while (lVar13 != 0x4000);
      lVar9 = *(long *)(param_1 + 0x1de8);
      lVar13 = 0xaf8;
      uVar3 = *(undefined1 *)(lVar9 + 0x5b8);
      uVar8 = (ulong)(*(int *)(lVar9 + 0x778) - 1U & (uVar7 & 0xffffc000) - 0x4000);
      lVar12 = *(long *)(lVar9 + 0x5c0);
      plVar11 = (long *)(lVar9 + 0x1800);
      do {
        *(int *)(lVar9 + lVar13) = (int)uVar8;
        lVar10 = lVar12 + uVar8;
        lVar13 = lVar13 + 4;
        *(undefined1 *)(plVar11 + -1) = uVar3;
        uVar8 = uVar8 + 0x100;
        *plVar11 = lVar10;
        plVar11 = plVar11 + 2;
      } while (lVar13 != 0xbf8);
      *(undefined4 *)(param_1 + 0x1e00) = 1;
      uVar5 = 0x80;
      goto LAB_03657c3c;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x4b8);
    lVar13 = 0;
    lVar9 = *(long *)(param_1 + 0x4c0);
    *(long *)(param_1 + 0x1de8) = param_1;
    plVar11 = (long *)(param_1 + 0x1400);
    puVar14 = (undefined4 *)(param_1 + 0x9f8);
    do {
      *puVar14 = (int)lVar13;
      lVar12 = lVar9 + lVar13;
      lVar13 = lVar13 + 0x100;
      *(undefined1 *)(plVar11 + -1) = uVar3;
      *plVar11 = lVar12;
      plVar11 = plVar11 + 2;
      puVar14 = puVar14 + 1;
    } while (lVar13 != 0x4000);
    lVar12 = *(long *)(param_1 + 0x1de8);
    lVar13 = 0xaf8;
    uVar3 = *(undefined1 *)(lVar12 + 0x5b8);
    lVar10 = *(long *)(lVar12 + 0x5c0);
    lVar9 = ((ulong)(*(int *)(lVar12 + 0x778) - 1U >> 0xe) & 0xf) << 0xe;
    plVar11 = (long *)(lVar12 + 0x1800);
    do {
      *(int *)(lVar12 + lVar13) = (int)lVar9;
      lVar2 = lVar10 + lVar9;
      lVar13 = lVar13 + 4;
      *(undefined1 *)(plVar11 + -1) = uVar3;
      lVar9 = lVar9 + 0x100;
      *plVar11 = lVar2;
      plVar11 = plVar11 + 2;
    } while (lVar13 != 0xbf8);
    *(undefined4 *)(param_1 + 0x1e00) = 0;
    memset((void *)(param_1 + 0x1e24),0,0x104);
  }
  iVar6 = *(int *)(param_1 + 0x298);
switchD_036578ac_caseD_2:
  *(undefined2 *)(param_1 + 0x1bf8) = 0x101;
  *(undefined1 *)(param_1 + 0x1f68) = 1;
  if (iVar6 == 0x99) {
    iVar6 = 0xff;
  }
  else {
    iVar6 = 0;
  }
  memset(*(void **)(param_1 + 0x10),iVar6,0x8000);
  return 1;
}

