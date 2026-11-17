
/* WARNING: Type propagation algorithm not settling */

void FUN_02c8f150(int *param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  int iVar9;
  undefined8 *puVar10;
  char *pcVar11;
  int iVar12;
  undefined *local_c0;
  char *pcStack_b8;
  undefined4 local_b0;
  char local_ac;
  undefined4 uStack_ab;
  undefined3 uStack_a7;
  undefined5 uStack_a4;
  undefined3 local_9f;
  undefined2 local_9c;
  char acStack_9a [45];
  undefined1 local_6d;
  int local_64;
  
  if (0 < *param_1) {
    lVar6 = 0;
    puVar7 = *(undefined8 **)(param_1 + 4);
    do {
      puVar10 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar6 * 8);
      lVar6 = lVar6 + 1;
      *puVar10 = puVar7;
      *(undefined8 **)(param_1 + 4) = puVar10;
      puVar7 = puVar10;
    } while (lVar6 < *param_1);
  }
  puVar4 = PTR_DAT_04bb2bc0;
  *param_1 = 0;
  iVar12 = 0;
LAB_02c8f1fc:
  do {
    local_b0 = 0x40;
    local_6d = 0;
    local_ac = '\0';
    pcVar11 = &local_ac;
    switch(iVar12) {
    case 2:
      pcVar11 = "AddHairStyle1";
      goto LAB_02c8f320;
    case 3:
      pcVar11 = "AddHairStyle2";
      goto LAB_02c8f320;
    case 4:
      pcVar11 = "AddHairStyle4";
      goto LAB_02c8f320;
    case 5:
      local_9c = 0x3434;
      pcVar11 = "UnlockPlayerHair44";
      break;
    case 6:
      local_9c = 0x3733;
      pcVar11 = "UnlockPlayerHair37";
      break;
    case 7:
      local_9c = 0x3534;
      pcVar11 = "UnlockPlayerHair45";
      break;
    case 8:
      local_9c = 0x3234;
      pcVar11 = "UnlockPlayerHair42";
      break;
    case 9:
      local_9c = 0x3334;
      pcVar11 = "UnlockPlayerHair43";
      break;
    case 10:
      local_9c = 0x3833;
      pcVar11 = "UnlockPlayerHair38";
      break;
    case 0xb:
      local_9c = 0x3034;
      pcVar11 = "UnlockPlayerHair40";
      break;
    case 0xc:
      local_9c = 0x3933;
      pcVar11 = "UnlockPlayerHair39";
      break;
    case 0xd:
      local_9c = 0x3634;
      pcVar11 = "UnlockPlayerHair46";
      break;
    case 0xe:
      local_9c = 0x3134;
      pcVar11 = "UnlockPlayerHair41";
      break;
    case 0xf:
      local_9c = 0x3734;
      pcVar11 = "UnlockPlayerHair47";
      break;
    case 0x10:
      pcVar11 = "AddHairStyle3";
LAB_02c8f320:
      local_ac = (char)*(undefined8 *)pcVar11;
      uStack_ab = (undefined4)((ulong)*(undefined8 *)pcVar11 >> 8);
      uStack_a7 = (undefined3)*(undefined8 *)(pcVar11 + 5);
      uStack_a4 = (undefined5)((ulong)*(undefined8 *)(pcVar11 + 5) >> 0x18);
      pcVar11 = (char *)&local_9f;
    default:
      goto switchD_02c8f230_default;
    }
    uVar2 = *(undefined8 *)pcVar11;
    local_ac = (char)uVar2;
    uStack_ab = (undefined4)((ulong)uVar2 >> 8);
    uStack_a7 = (undefined3)((ulong)uVar2 >> 0x28);
    uStack_a4 = (undefined5)*(undefined8 *)(pcVar11 + 8);
    local_9f = (undefined3)((ulong)*(undefined8 *)(pcVar11 + 8) >> 0x28);
    pcVar11 = acStack_9a;
switchD_02c8f230_default:
    *pcVar11 = '\0';
    if (local_ac == '\0') {
      if ((iVar12 != 1) || ((param_3 & 1) == 0)) {
LAB_02c8f350:
        piVar8 = &DAT_04ab4010;
        switch(iVar12) {
        case 1:
          piVar8 = &DAT_04ab4020;
          iVar5 = DAT_04ab4020;
          break;
        case 2:
          piVar8 = &DAT_04ab4030;
          iVar5 = DAT_04ab4030;
          break;
        case 3:
          piVar8 = &DAT_04ab4040;
          iVar5 = DAT_04ab4040;
          break;
        case 4:
          piVar8 = &DAT_04ab4060;
        case 0:
          iVar5 = *piVar8;
          break;
        default:
          if (10 < iVar12 - 5U) {
            return;
          }
          if (param_1[1] <= *param_1) {
            return;
          }
          puVar7 = *(undefined8 **)(param_1 + 4);
          if (puVar7 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 4) = *puVar7;
          }
          uVar3 = *(undefined4 *)(&DAT_04180010 + (long)(int)(iVar12 - 5U) * 4);
          *(undefined4 *)puVar7 = 0;
          if (*param_1 < param_1[1]) {
            *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar7;
            *param_1 = *param_1 + 1;
          }
          *(undefined4 *)puVar7 = uVar3;
          goto LAB_02c8f1f0;
        case 0x10:
          piVar8 = &DAT_04ab4050;
          iVar5 = DAT_04ab4050;
        }
        if (iVar5 == 0) {
          iVar12 = iVar12 + 1;
          if (iVar12 == 0x11) {
            return;
          }
          goto LAB_02c8f1fc;
        }
        lVar6 = *(long *)(piVar8 + 2);
        iVar9 = 0;
        do {
          if (param_1[1] <= *param_1) {
            return;
          }
          puVar7 = *(undefined8 **)(param_1 + 4);
          if (puVar7 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 4) = *puVar7;
          }
          *(undefined4 *)puVar7 = 0;
          if (*param_1 < param_1[1]) {
            *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar7;
            *param_1 = *param_1 + 1;
          }
          *(undefined4 *)puVar7 = *(undefined4 *)(lVar6 + (long)iVar9 * 4);
          iVar9 = iVar9 + 1;
        } while (iVar5 != iVar9);
      }
    }
    else {
      local_c0 = puVar4 + 0x10;
      pcStack_b8 = &local_ac;
      local_64 = iVar12;
      iVar5 = FUN_0274bce0(param_2,&local_c0);
      if (iVar5 != 0) goto LAB_02c8f350;
    }
LAB_02c8f1f0:
    bVar1 = 0xf < iVar12;
    iVar12 = iVar12 + 1;
    if (bVar1) {
      return;
    }
  } while( true );
}

