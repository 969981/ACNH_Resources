
undefined8 FUN_0049efb0(long param_1)

{
  long lVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1 + 0x18;
  do {
    pbVar3 = *(byte **)(param_1 + 0x38);
    lVar6 = *(long *)(param_1 + 0x40);
    lVar7 = (long)*(int *)(param_1 + 0x48);
    if ((byte *)(lVar6 + lVar7) <= pbVar3) {
      FUN_0049e150(lVar1,0x100);
      pbVar3 = *(byte **)(param_1 + 0x38);
      lVar6 = *(long *)(param_1 + 0x40);
      lVar7 = (long)*(int *)(param_1 + 0x48);
      if ((byte *)(lVar6 + lVar7) <= pbVar3) {
        return 5;
      }
    }
    pbVar4 = pbVar3 + 1;
    *(byte **)(param_1 + 0x38) = pbVar4;
    bVar2 = *pbVar3;
    switch(bVar2) {
    case 0:
      return 5;
    default:
      if (((0x19 < (byte)((bVar2 & 0xdf) + 0xbf)) && (bVar2 != 0x5f)) && (bVar2 != 0x3a)) {
        return 0xc;
      }
      goto LAB_0049f1a0;
    case 9:
    case 10:
    case 0xd:
    case 0x20:
switchD_0049f044_caseD_9:
      bVar2 = *pbVar4;
      if (bVar2 == 0) {
        FUN_0049e150(lVar1,0x100);
        pbVar4 = *(byte **)(param_1 + 0x38);
        bVar2 = *pbVar4;
      }
      if (bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0) {
        if ((byte *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x48)) <= pbVar4)
        goto code_r0x0049f0fc;
        goto LAB_0049f0b0;
      }
      FUN_0049e270(lVar1);
      break;
    case 0x22:
      goto switchD_0049f044_caseD_22;
    case 0x2f:
      return 0xb;
    case 0x3d:
      return 9;
    case 0x3e:
      if ((*(uint *)(param_1 + 0x60) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffe;
        return 6;
      }
      return 0xc;
    case 0x3f:
      if ((*(byte *)(param_1 + 0x60) >> 1 & 1) != 0) {
        if (pbVar4 < (byte *)(lVar6 + (int)lVar7)) {
LAB_0049f080:
          pbVar3 = pbVar4 + 1;
          *(byte **)(param_1 + 0x38) = pbVar3;
          if (*pbVar4 == 0x3e) {
            *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffc;
            return 7;
          }
        }
        else {
          FUN_0049e150(lVar1,0x100);
          pbVar4 = *(byte **)(param_1 + 0x38);
          lVar6 = *(long *)(param_1 + 0x40);
          pbVar3 = pbVar4;
          if (pbVar4 < (byte *)(lVar6 + *(int *)(param_1 + 0x48))) goto LAB_0049f080;
        }
        if ((byte *)(lVar6 + *(int *)(param_1 + 0x34)) < pbVar3) {
          *(byte **)(param_1 + 0x38) = pbVar3 + -1;
        }
      }
    }
  } while( true );
code_r0x0049f0fc:
  FUN_0049e150(lVar1,0x100);
  pbVar4 = *(byte **)(param_1 + 0x38);
  if (pbVar4 < (byte *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x48))) {
LAB_0049f0b0:
    pbVar4 = pbVar4 + 1;
    *(byte **)(param_1 + 0x38) = pbVar4;
  }
  goto switchD_0049f044_caseD_9;
LAB_0049f1a0:
  bVar2 = *pbVar4;
  if (bVar2 == 0) {
    FUN_0049e150(lVar1,0x100);
    pbVar4 = *(byte **)(param_1 + 0x38);
    bVar2 = *pbVar4;
  }
  uVar5 = (uint)bVar2;
  if (((9 < uVar5 - 0x30 && 0x19 < ((uVar5 & 0xffffffdf) - 0x41 & 0xff)) && (uVar5 != 0x5f)) &&
     (uVar5 != 0x3a)) {
    return 8;
  }
  if ((byte *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x48)) <= pbVar4)
  goto code_r0x0049f1fc;
  goto LAB_0049f198;
code_r0x0049f1fc:
  FUN_0049e150(lVar1,0x100);
  pbVar4 = *(byte **)(param_1 + 0x38);
  if (pbVar4 < (byte *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x48))) {
LAB_0049f198:
    pbVar4 = pbVar4 + 1;
    *(byte **)(param_1 + 0x38) = pbVar4;
  }
  goto LAB_0049f1a0;
switchD_0049f044_caseD_22:
  while( true ) {
    pbVar3 = pbVar4;
    if ((byte *)(lVar6 + (int)lVar7) <= pbVar4) {
      FUN_0049e150(lVar1,0x100);
      pbVar3 = *(byte **)(param_1 + 0x38);
      lVar6 = *(long *)(param_1 + 0x40);
      lVar7 = (long)*(int *)(param_1 + 0x48);
      if ((byte *)(lVar6 + lVar7) <= pbVar3) {
        return 0xc;
      }
    }
    pbVar4 = pbVar3 + 1;
    *(byte **)(param_1 + 0x38) = pbVar4;
    if (*pbVar3 == 0) break;
    if (*pbVar3 == 0x22) {
      return 10;
    }
  }
  return 0xc;
}

