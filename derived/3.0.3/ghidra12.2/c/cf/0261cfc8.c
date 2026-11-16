
byte FUN_0261cfc8(undefined8 *param_1,ushort param_2)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  uint local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  uint local_38;
  undefined4 local_34;
  
  local_38 = (uint)param_2;
  local_34 = 0;
  FUN_0277d4ac(&local_38);
  puVar2 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_38);
  bVar3 = 0;
  if (*(long *)puVar2 == 0) goto switchD_0261d0cc_caseD_8c2;
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar4) {
    bVar3 = 0;
    goto switchD_0261d0cc_caseD_8c2;
  }
  bVar3 = 0;
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0)
  goto switchD_0261d0cc_caseD_8c2;
  iVar5 = FUN_0277d6c4(&local_38);
  bVar3 = 1;
  if (0xa3b < iVar5) {
    if (iVar5 < 0xbe4) {
      if (((iVar5 - 0xa3cU < 0xf) && ((1 << (ulong)(iVar5 - 0xa3cU & 0x1f) & 0x5001U) != 0)) ||
         (iVar5 - 0xb1eU < 2)) goto switchD_0261d0cc_caseD_8c2;
      if (iVar5 != 0xbdf) goto switchD_0261d0cc_caseD_8a7;
      piVar7 = (int *)param_1[2];
    }
    else {
      if (0x36a9 < iVar5) {
        if (iVar5 - 0x36adU < 2) {
          piVar7 = (int *)param_1[6];
        }
        else {
          if ((iVar5 != 0x36aa) && (iVar5 != 0x36ac)) goto switchD_0261d0cc_caseD_8a7;
          piVar7 = (int *)param_1[5];
        }
        bVar3 = *piVar7 < 5;
        goto switchD_0261d0cc_caseD_8c2;
      }
      if (iVar5 == 0xbe4) {
        piVar7 = (int *)param_1[3];
      }
      else {
        if (iVar5 == 0x1069) goto switchD_0261d0cc_caseD_8c2;
        if (iVar5 != 0x11ad) goto switchD_0261d0cc_caseD_8a7;
        piVar7 = (int *)param_1[4];
      }
    }
LAB_0261d17c:
    bVar3 = *piVar7 < 3;
    goto switchD_0261d0cc_caseD_8c2;
  }
  switch(iVar5) {
  case 0x8a5:
  case 0x8a6:
  case 0x8ed:
  case 0x8ee:
  case 0x8ef:
    bVar3 = FUN_0277d7b4(*param_1,&local_38);
    bVar3 = bVar3 ^ 1;
    goto switchD_0261d0cc_caseD_8c2;
  case 0x8a7:
  case 0x8a8:
  case 0x8a9:
  case 0x8aa:
  case 0x8ab:
  case 0x8ac:
  case 0x8ad:
  case 0x8ae:
  case 0x8af:
  case 0x8b0:
  case 0x8b1:
  case 0x8b2:
  case 0x8b3:
  case 0x8b4:
  case 0x8b5:
  case 0x8b6:
  case 0x8b7:
  case 0x8b8:
  case 0x8b9:
  case 0x8ba:
  case 0x8bb:
  case 0x8bc:
  case 0x8bd:
  case 0x8be:
  case 0x8bf:
  case 0x8c0:
  case 0x8c1:
  case 0x8c3:
  case 0x8c4:
  case 0x8c5:
  case 0x8c6:
  case 0x8c7:
  case 0x8c8:
  case 0x8c9:
  case 0x8ca:
  case 0x8cb:
  case 0x8cc:
  case 0x8cd:
  case 0x8ce:
  case 0x8cf:
  case 0x8d0:
  case 0x8d1:
  case 0x8d2:
  case 0x8d3:
  case 0x8d4:
  case 0x8d5:
  case 0x8d6:
  case 0x8d7:
  case 0x8d8:
  case 0x8da:
  case 0x8db:
  case 0x8dd:
  case 0x8df:
  case 0x8e0:
  case 0x8e1:
  case 0x8e2:
  case 0x8e4:
  case 0x8e5:
  case 0x8e6:
  case 0x8e7:
  case 0x8e8:
  case 0x8e9:
  case 0x8ea:
  case 0x8eb:
  case 0x8ec:
    goto switchD_0261d0cc_caseD_8a7;
  case 0x8c2:
  case 0x8d9:
  case 0x8dc:
  case 0x8de:
  case 0x8e3:
    goto switchD_0261d0cc_caseD_8c2;
  }
  if (iVar5 == 0xa0a) {
    piVar7 = (int *)param_1[1];
    goto LAB_0261d17c;
  }
switchD_0261d0cc_caseD_8a7:
  lVar10 = *(long *)puVar2;
  local_40 = 0;
  local_48 = local_38;
  uStack_44 = local_34;
  uVar4 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar2 == 0) {
LAB_0261d2c0:
    uVar6 = 0xbc;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0261d2c0;
    lVar10 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(&local_38);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar4) ||
       (puVar8 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8), puVar8 == (uint *)0x0
       )) goto LAB_0261d2c0;
    uVar6 = 0;
    uVar4 = *puVar8;
    if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
      puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
      uVar6 = 0;
      if (*puVar9 != 0) {
        uVar4 = puVar9[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar10 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar4);
            }
            if (*puVar9 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_0261d2cc;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_0261d2cc:
  bVar3 = uVar6 == 0x58;
switchD_0261d0cc_caseD_8c2:
  return bVar3 & 1;
}

