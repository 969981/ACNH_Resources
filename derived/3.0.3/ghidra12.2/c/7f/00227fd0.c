
/* WARNING: Type propagation algorithm not settling */

uint FUN_00227fd0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar12 = *(long *)(param_1 + 8);
  if ((lVar12 == 0) || (*(int *)(param_1 + 0x10) == 0)) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    return 0xffffffff;
  }
  local_40 = *param_3;
  uStack_38 = param_3[1];
  local_30 = param_3[2];
  uStack_28 = param_3[3];
  uVar3 = nn::util::VSNPrintf(lVar12,*(int *)(param_1 + 0x10),param_2,&local_40);
  *(undefined4 *)(param_1 + 0x18) = 1;
  uVar7 = *(uint *)(param_1 + 0x10);
  if (((int)uVar3 < 0) || ((int)uVar7 <= (int)uVar3)) {
    *(undefined1 *)(lVar12 + (ulong)(uVar7 - 1)) = 0;
    uVar7 = *(uint *)(param_1 + 0x10);
    uVar3 = uVar7 - 1;
  }
  pbVar8 = *(byte **)(param_1 + 8);
  uVar4 = 0;
  *(uint *)(param_1 + 0x14) = uVar3;
  if ((pbVar8 != (byte *)0x0) && (uVar3 != 0)) {
    if (*(int *)(param_1 + 0x18) == 1) {
      bVar1 = *pbVar8;
      if (bVar1 != 0) {
        uVar4 = 0;
        pbVar10 = pbVar8;
        do {
          if ((char)bVar1 < '\0') {
            if ((byte)(bVar1 + 0x3e) < 0x1e) {
              lVar11 = 2;
            }
            else if ((bVar1 & 0xf0) == 0xe0) {
              lVar11 = 3;
            }
            else if ((bVar1 & 0xf8) == 0xf0) {
              lVar11 = 4;
            }
            else if ((bVar1 & 0xfc) == 0xf8) {
              lVar11 = 5;
            }
            else {
              if ((bVar1 & 0xfe) != 0xfc) break;
              lVar11 = 6;
            }
          }
          else {
            lVar11 = 1;
          }
          pbVar10 = pbVar10 + lVar11;
          uVar4 = uVar4 + 1;
          bVar1 = *pbVar10;
        } while (bVar1 != 0 && (long)pbVar10 - (long)pbVar8 < (long)(ulong)uVar3);
        goto LAB_00228154;
      }
    }
    else if (*(int *)(param_1 + 0x18) == 2) {
      uVar4 = uVar3 >> 1;
      goto LAB_00228154;
    }
    uVar4 = 0;
  }
LAB_00228154:
  uVar7 = uVar7 >> 2;
  if (uVar4 < uVar7) {
    return uVar4;
  }
  if (uVar7 == 1) {
    uVar3 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar3 = 0;
    do {
      while( true ) {
        if (*(char *)(lVar12 + uVar6) == '\0') goto LAB_0022826c;
        uVar4 = (uint)*(char *)(lVar12 + uVar6);
        iVar5 = (int)uVar6;
        if ((int)uVar4 < 0) break;
        uVar4 = iVar5 + 1;
joined_r0x002281ec:
        uVar3 = uVar3 + 1;
joined_r0x0022825c:
        uVar6 = (ulong)uVar4;
        if (uVar7 - 1 <= uVar3) goto LAB_0022826c;
      }
      if (0x1d < uVar4 + 0x3e) {
        if ((uVar4 & 0xfffffff0) == 0xffffffe0) {
          uVar4 = iVar5 + 3;
          goto joined_r0x002281ec;
        }
        if ((uVar4 & 0xfffffff8) == 0xfffffff0) {
          uVar4 = iVar5 + 4;
          goto joined_r0x00228210;
        }
        if ((uVar4 & 0xfffffffc) == 0xfffffff8) {
          uVar4 = iVar5 + 5;
          goto joined_r0x002281ec;
        }
        bVar2 = (uVar4 & 0xfffffffe) == 0xfffffffc;
        if (bVar2) {
          uVar3 = uVar3 + 1;
        }
        iVar9 = 6;
        if (!bVar2) {
          iVar9 = 1;
        }
        uVar4 = iVar9 + iVar5;
        goto joined_r0x0022825c;
      }
      uVar4 = iVar5 + 2;
joined_r0x00228210:
      uVar6 = (ulong)uVar4;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar7 - 1);
  }
LAB_0022826c:
  *(undefined1 *)(lVar12 + uVar6) = 0;
  *(int *)(param_1 + 0x14) = (int)uVar6;
  return uVar3;
}

