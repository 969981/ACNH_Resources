
bool FUN_03396b60(byte *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  byte *pbVar6;
  byte bVar7;
  uint *puVar8;
  long lVar9;
  undefined4 local_4c [3];
  
  puVar1 = PTR_DAT_04bc7368;
  lVar9 = *(long *)PTR_DAT_04bc7368;
  FUN_02507c6c(local_4c,1,1,1,0);
  pbVar6 = (byte *)(lVar9 + 0xc);
  if (*pbVar6 < 8) {
    bVar7 = *param_1;
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    if (*pbVar6 != bVar7) goto LAB_03396bc8;
LAB_03396c40:
    puVar8 = (uint *)(pbVar6 + 4);
  }
  else {
LAB_03396bc8:
    pbVar6 = (byte *)(lVar9 + 0x14);
    if (*pbVar6 < 8) {
      bVar7 = *param_1;
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      if (*pbVar6 == bVar7) goto LAB_03396c40;
    }
    pbVar6 = (byte *)(lVar9 + 0x1c);
    if (*pbVar6 < 8) {
      bVar7 = *param_1;
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      if (*pbVar6 == bVar7) goto LAB_03396c40;
    }
    pbVar6 = (byte *)(lVar9 + 0x24);
    if (*pbVar6 < 8) {
      bVar7 = *param_1;
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      if (*pbVar6 == bVar7) goto LAB_03396c40;
    }
    puVar8 = (uint *)(lVar9 + 0x30);
  }
  iVar5 = 0;
  if (DAT_05aed670 != 0) {
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      iVar5 = 0;
    }
    else {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar3,0);
      iVar5 = 0;
      if ((iVar2 == 0x758f7eaf) && (iVar5 = 0, DAT_05aed670 != 0)) {
        iVar5 = 0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
        }
      }
    }
  }
  if ((((DAT_05292434 != iVar5) || (DAT_0523adf0 == 0)) || (*(char *)(DAT_0523adf0 + 8) == '\0')) ||
     (*(int *)(DAT_0523adf0 + 0x98) == 0)) {
    iVar5 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        iVar5 = 0;
      }
      else {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar3,0);
        iVar5 = 0;
        if ((iVar2 == 0x758f7eaf) && (iVar5 = 0, DAT_05aed670 != 0)) {
          iVar5 = 0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
          }
        }
      }
    }
    if ((((DAT_05292434 != iVar5) || (DAT_0523adf0 == 0)) ||
        ((*(int *)(DAT_0523adf0 + 0x98) == 0 || (**(char **)(DAT_0523adf0 + 0x60) == '\0')))) &&
       (local_4c[0] = 0xf, (*puVar8 >> 0xf & 1) == 0)) {
      return false;
    }
  }
  lVar9 = *(long *)puVar1;
  FUN_02507c6c(local_4c,1,1,1,0);
  pbVar6 = (byte *)(lVar9 + 0xc);
  if (*pbVar6 < 8) {
    bVar7 = *param_1;
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    if (*pbVar6 != bVar7) goto LAB_03396de4;
LAB_03396e5c:
    puVar8 = (uint *)(pbVar6 + 4);
  }
  else {
LAB_03396de4:
    pbVar6 = (byte *)(lVar9 + 0x14);
    if (*pbVar6 < 8) {
      bVar7 = *param_1;
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      if (*pbVar6 == bVar7) goto LAB_03396e5c;
    }
    pbVar6 = (byte *)(lVar9 + 0x1c);
    if (*pbVar6 < 8) {
      bVar7 = *param_1;
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      if (*pbVar6 == bVar7) goto LAB_03396e5c;
    }
    pbVar6 = (byte *)(lVar9 + 0x24);
    if (*pbVar6 < 8) {
      bVar7 = *param_1;
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      if (*pbVar6 == bVar7) goto LAB_03396e5c;
    }
    puVar8 = (uint *)(lVar9 + 0x30);
  }
  uVar4 = FUN_03394720(param_1);
  if ((uVar4 & 1) == 0) {
    return false;
  }
  return (*puVar8 >> 3 & 1) == 0;
}

