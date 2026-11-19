
undefined8 FUN_03c3c090(long *param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int iVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  byte *pbVar13;
  undefined *local_80;
  char *local_78;
  undefined4 local_70;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  puVar4 = PTR_DAT_04bb2020;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_78 = ".brbl";
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar7 = 0;
  do {
    if (*(char *)(param_2[1] + lVar7) == '\0') {
LAB_03c3c124:
      iVar6 = (int)lVar7;
joined_r0x03c3c128:
      if (4 < iVar6) {
        uVar11 = (ulong)(iVar6 - 5);
        goto LAB_03c3c154;
      }
      break;
    }
    lVar8 = param_2[1] + lVar7;
    if (*(char *)(lVar8 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_03c3c124;
    }
    if (*(char *)(lVar8 + 2) == '\0') {
      iVar6 = (int)lVar7 + 2;
      goto joined_r0x03c3c128;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  goto LAB_03c3c27c;
  while (uVar11 = uVar11 - 1, 0 < (int)uVar11 + 1) {
LAB_03c3c154:
    pcVar12 = (char *)(param_2[1] + uVar11);
    (**(code **)(local_80 + 0x18))(&local_80);
    if ((pcVar12 == local_78) ||
       ((*pcVar12 == *local_78 &&
        ((*pcVar12 == '\0' ||
         ((pcVar12[1] == local_78[1] &&
          ((pcVar12[1] == '\0' ||
           ((pcVar12[2] == local_78[2] &&
            ((pcVar12[2] == '\0' ||
             ((pcVar12[3] == local_78[3] && ((pcVar12[3] == '\0' || (pcVar12[4] == local_78[4]))))))
            )))))))))))) {
      if (-1 < (int)uVar11) {
        lVar7 = *param_1;
        uVar5 = extraout_x1;
        if (lVar7 == 0) {
          return 0;
        }
        while( true ) {
          (**(code **)(*param_2 + 0x18))(param_2,uVar5);
          (**(code **)(*param_2 + 0x18))(param_2);
          pbVar13 = (byte *)param_2[1];
          (**(code **)(*(long *)(lVar7 + 0x20) + 0x18))((long *)(lVar7 + 0x20));
          if (pbVar13 == *(byte **)(lVar7 + 0x28)) break;
          pbVar13 = *(byte **)(lVar7 + 0x28);
          pbVar9 = (byte *)param_2[1];
          lVar8 = 0x7ffff;
          while( true ) {
            bVar2 = *pbVar9;
            if (bVar2 != *pbVar13) break;
            if ((bVar2 == 0) ||
               (bVar1 = lVar8 == 0, pbVar13 = pbVar13 + 1, pbVar9 = pbVar9 + 1, lVar8 = lVar8 + -1,
               bVar1)) goto LAB_03c3c4bc;
          }
          lVar8 = 8;
          if (*pbVar13 <= bVar2) {
            lVar8 = 0x10;
          }
          uVar5 = 0;
          lVar7 = *(long *)(lVar7 + lVar8);
          if (lVar7 == 0) {
            return 0;
          }
        }
LAB_03c3c4bc:
        local_78 = (char *)0x0;
        local_68 = lVar7 + 0x30;
        local_70 = 0;
        uVar5 = *(undefined8 *)PTR_DAT_04bb2740;
        local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
        goto LAB_03c3c4f8;
      }
      break;
    }
  }
LAB_03c3c27c:
  pcVar12 = *(char **)PTR_PTR_04bd2e40;
  local_80 = puVar4 + 0x10;
  local_78 = pcVar12;
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar7 = 0;
  do {
    if (*(char *)(param_2[1] + lVar7) == '\0') goto LAB_03c3c2ec;
    lVar8 = param_2[1] + lVar7;
    if (*(char *)(lVar8 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_03c3c2ec;
    }
    if (*(char *)(lVar8 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_03c3c2ec;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_03c3c2ec:
  lVar8 = 0;
  do {
    iVar6 = (int)lVar7;
    if (pcVar12[lVar8] == '\0') {
LAB_03c3c324:
      uVar3 = iVar6 - (int)lVar8;
      if ((int)uVar3 < 0) {
        return 0;
      }
LAB_03c3c33c:
      uVar11 = (ulong)uVar3;
      if (0 < (int)lVar8) {
        while( true ) {
          lVar7 = param_2[1];
          (**(code **)(local_80 + 0x18))(&local_80);
          iVar6 = (int)uVar11;
          if ((char *)(lVar7 + uVar11) == local_78) break;
          pcVar12 = local_78;
          lVar10 = lVar8;
          while( true ) {
            lVar10 = lVar10 + -1;
            if (*(char *)(lVar7 + uVar11) != *pcVar12) break;
            if ((*(char *)(lVar7 + uVar11) == '\0') ||
               (lVar7 = lVar7 + 1, pcVar12 = pcVar12 + 1, lVar10 == 0)) goto LAB_03c3c3bc;
          }
          uVar11 = uVar11 - 1;
          if (iVar6 < 1) {
            return 0;
          }
        }
LAB_03c3c3bc:
        if (iVar6 < 0) {
          return 0;
        }
        lVar7 = param_1[4];
        while( true ) {
          uVar5 = 0;
          if (lVar7 == 0) {
            return 0;
          }
LAB_03c3c3d8:
          (**(code **)(*param_2 + 0x18))(param_2,uVar5);
          (**(code **)(*param_2 + 0x18))(param_2);
          pbVar13 = (byte *)param_2[1];
          (**(code **)(*(long *)(lVar7 + 0x20) + 0x18))((long *)(lVar7 + 0x20));
          if (pbVar13 == *(byte **)(lVar7 + 0x28)) break;
          pbVar13 = *(byte **)(lVar7 + 0x28);
          pbVar9 = (byte *)param_2[1];
          lVar8 = 0x7ffff;
          while( true ) {
            bVar2 = *pbVar9;
            if (bVar2 != *pbVar13) break;
            if ((bVar2 == 0) ||
               (bVar1 = lVar8 == 0, pbVar13 = pbVar13 + 1, pbVar9 = pbVar9 + 1, lVar8 = lVar8 + -1,
               bVar1)) goto LAB_03c3c468;
          }
          lVar8 = 8;
          if (*pbVar13 <= bVar2) {
            lVar8 = 0x10;
          }
          lVar7 = *(long *)(lVar7 + lVar8);
        }
LAB_03c3c468:
        lVar7 = *(long *)(lVar7 + 0x30);
        if (lVar7 == 0) {
          return 0;
        }
        local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
        uVar5 = *(undefined8 *)PTR_DAT_04bb2740;
        local_68 = 0;
        local_78 = *(char **)(lVar7 + 8);
        local_70 = *(undefined4 *)(lVar7 + 0x10);
LAB_03c3c4f8:
        local_58 = 0x43a000003f800000;
        uStack_60 = 0x432000003f800000;
        uVar5 = FUN_03c38700(uVar5,&local_80,param_3,param_4,param_2);
        return uVar5;
      }
      goto LAB_03c3c3b0;
    }
    if (pcVar12[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_03c3c324;
    }
    if (pcVar12[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      uVar3 = iVar6 - (int)lVar8;
      if ((int)uVar3 < 0) {
        return 0;
      }
      goto LAB_03c3c33c;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  if (iVar6 < 0) {
    return 0;
  }
LAB_03c3c3b0:
  lVar7 = param_1[4];
  uVar5 = extraout_x1_00;
  if (lVar7 != 0) goto LAB_03c3c3d8;
  return 0;
}

