
undefined8 FUN_033968f0(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  long lVar7;
  uint *puVar8;
  undefined4 local_3c [3];
  
  lVar7 = *(long *)PTR_DAT_04bc7368;
  FUN_02507c6c(local_3c,1,1,1,0);
  pbVar5 = (byte *)(lVar7 + 0xc);
  if (*pbVar5 < 8) {
    bVar6 = *param_1;
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    if (*pbVar5 != bVar6) goto LAB_03396954;
LAB_033969cc:
    puVar8 = (uint *)(pbVar5 + 4);
  }
  else {
LAB_03396954:
    pbVar5 = (byte *)(lVar7 + 0x14);
    if (*pbVar5 < 8) {
      bVar6 = *param_1;
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      if (*pbVar5 == bVar6) goto LAB_033969cc;
    }
    pbVar5 = (byte *)(lVar7 + 0x1c);
    if (*pbVar5 < 8) {
      bVar6 = *param_1;
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      if (*pbVar5 == bVar6) goto LAB_033969cc;
    }
    pbVar5 = (byte *)(lVar7 + 0x24);
    if (*pbVar5 < 8) {
      bVar6 = *param_1;
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      if (*pbVar5 == bVar6) goto LAB_033969cc;
    }
    puVar8 = (uint *)(lVar7 + 0x30);
  }
  iVar4 = 0;
  if (DAT_05aed670 != 0) {
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      iVar4 = 0;
    }
    else {
      puVar2 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar2,0);
      iVar4 = 0;
      if (((iVar1 == 0x758f7eaf) && (iVar4 = 0, DAT_05aed670 != 0)) &&
         (iVar4 = 0, *(long *)(DAT_05aed670 + 0x330) != 0)) {
        iVar4 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
      }
    }
  }
  if (((DAT_05292434 != iVar4) || (DAT_0523adf0 == 0)) ||
     ((*(char *)(DAT_0523adf0 + 8) == '\0' || (*(int *)(DAT_0523adf0 + 0x98) == 0)))) {
    iVar4 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        iVar4 = 0;
      }
      else {
        puVar2 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar1 = FUN_006bd550(*puVar2,0);
        iVar4 = 0;
        if (((iVar1 == 0x758f7eaf) && (iVar4 = 0, DAT_05aed670 != 0)) &&
           (iVar4 = 0, *(long *)(DAT_05aed670 + 0x330) != 0)) {
          iVar4 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
        }
      }
    }
    if ((((DAT_05292434 != iVar4) || (DAT_0523adf0 == 0)) || (*(int *)(DAT_0523adf0 + 0x98) == 0))
       || (**(char **)(DAT_0523adf0 + 0x60) == '\0')) {
      local_3c[0] = 0xf;
      if ((*puVar8 >> 0xf & 1) == 0) {
        return 0;
      }
    }
  }
  uVar3 = FUN_03394720(param_1);
  return uVar3;
}

