
void FUN_004c7790(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long local_e8;
  long lStack_e0;
  long local_d8;
  int local_d0;
  undefined8 local_48;
  undefined8 local_38;
  
  FUN_00422780(&local_d8,param_3);
  lVar5 = 0;
  do {
    pcVar8 = (char *)(local_d8 + lVar5);
    lVar6 = lVar5 + 1;
    if ((long)local_d0 + -1 <= lVar5) break;
    lVar5 = lVar6;
  } while (*pcVar8 == ' ' || *pcVar8 == '\t');
  iVar2 = local_d0 + -2;
  uVar12 = 0xffffffffffffffff;
  do {
    lVar5 = (long)iVar2;
    lVar1 = lVar6 + uVar12;
    uVar12 = uVar12 + 1;
    if ((long)local_d0 + -1 <= lVar1) break;
    iVar2 = iVar2 + -1;
  } while (*(char *)(local_d8 + lVar5) == ' ' || *(char *)(local_d8 + lVar5) == '\t');
  FUN_004236e0(&local_d8);
  FUN_00423740(&local_d8,uVar12 & 0xffffffff);
  uVar12 = FUN_00422c70(&local_d8,&DAT_040bd946);
  if ((uVar12 & 1) != 0) {
    FUN_00423740(&local_d8,1);
    lVar5 = 0;
    do {
      pcVar8 = (char *)(local_d8 + lVar5);
      lVar6 = lVar5 + 1;
      if ((long)local_d0 + -1 <= lVar5) break;
      lVar5 = lVar6;
    } while (*pcVar8 == ' ' || *pcVar8 == '\t');
    iVar2 = local_d0 + -2;
    uVar12 = 0xffffffffffffffff;
    do {
      lVar5 = (long)iVar2;
      lVar1 = lVar6 + uVar12;
      uVar12 = uVar12 + 1;
      if ((long)local_d0 + -1 <= lVar1) break;
      iVar2 = iVar2 + -1;
    } while (*(char *)(local_d8 + lVar5) == ' ' || *(char *)(local_d8 + lVar5) == '\t');
    FUN_004236e0(&local_d8);
    FUN_00423740(&local_d8,uVar12 & 0xffffffff);
    lVar5 = (long)local_d0 + -2;
    do {
      lVar6 = lVar5;
      if (lVar6 < 2) break;
      lVar5 = lVar6 + -1;
    } while (*(byte *)(local_d8 + lVar6 + -1) - 0x30 < 10);
    iVar2 = FUN_0043a2f0(local_d8 + lVar6,0);
    lVar5 = 0;
    do {
      pcVar8 = (char *)(local_d8 + lVar5);
      lVar6 = lVar5 + 1;
      if ((long)local_d0 + -1 <= lVar5) break;
      lVar5 = lVar6;
    } while (*pcVar8 == ' ' || *pcVar8 == '\t');
    iVar3 = local_d0 + -2;
    uVar12 = 0xffffffffffffffff;
    do {
      lVar5 = (long)iVar3;
      lVar1 = lVar6 + uVar12;
      uVar12 = uVar12 + 1;
      if ((long)local_d0 + -1 <= lVar1) break;
      iVar3 = iVar3 + -1;
    } while (*(char *)(local_d8 + lVar5) == ' ' || *(char *)(local_d8 + lVar5) == '\t');
    FUN_004236e0(&local_d8);
    FUN_00423740(&local_d8,uVar12 & 0xffffffff);
    FUN_00423740(&local_d8,1);
    lVar5 = 0;
    do {
      pcVar8 = (char *)(local_d8 + lVar5);
      lVar6 = lVar5 + 1;
      if ((long)local_d0 + -1 <= lVar5) break;
      lVar5 = lVar6;
    } while (*pcVar8 == ' ' || *pcVar8 == '\t');
    iVar3 = local_d0 + -2;
    uVar12 = 0xffffffffffffffff;
    do {
      lVar5 = (long)iVar3;
      lVar1 = lVar6 + uVar12;
      uVar12 = uVar12 + 1;
      if ((long)local_d0 + -1 <= lVar1) break;
      iVar3 = iVar3 + -1;
    } while (*(char *)(local_d8 + lVar5) == ' ' || *(char *)(local_d8 + lVar5) == '\t');
    FUN_004236e0(&local_d8);
    FUN_00423740(&local_d8,uVar12 & 0xffffffff);
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x68,0);
    FUN_00453e60(lVar5,0,iVar2,0,0,&DAT_04c6fb68,&DAT_0408562c,0);
    lStack_e0 = local_d8 + local_d0 + -1;
    local_e8 = local_d8;
    FUN_004c7790(param_1,lVar5 + 0x18,&local_e8,param_4);
    iVar3 = FUN_00426fc0(*(undefined8 *)(lVar5 + 0x18));
    uVar4 = FUN_00427030(*(undefined8 *)(lVar5 + 0x18));
    FUN_0044e030(lVar5,iVar3 * iVar2,uVar4);
    uVar11 = *(undefined8 *)(lVar5 + 0x18);
    lVar6 = FUN_004270a0(lVar5);
    *(undefined8 *)(lVar6 + 0x10) = uVar11;
    if (param_2 != (long *)0x0) {
      *param_2 = lVar5;
    }
    goto LAB_004c7c70;
  }
  uVar12 = FUN_00422c60(&local_d8,"hkArray");
  if ((uVar12 & 1) == 0) {
    uVar12 = FUN_00422c50(&local_d8,"hkPtr");
    if ((uVar12 & 1) == 0) {
      uVar12 = FUN_00422c50(&local_d8,"hkViewPtr");
      if ((uVar12 & 1) == 0) {
        uVar12 = FUN_00422c50(&local_d8,"hkReflect::Type*");
        if ((uVar12 & 1) == 0) {
          lStack_e0 = local_d8 + local_d0 + -1;
          local_e8 = local_d8;
          if (local_d8 != lStack_e0) {
            FUN_0043bd90(&local_38);
            lVar5 = FUN_0047ceb0(param_4,&local_38);
            if (lVar5 == 0) {
              FUN_0043be10(&local_38);
            }
            else {
              iVar2 = *(int *)(*param_4 + (long)*(int *)(lVar5 + 4) * 0x10 + 8);
              FUN_0043be10(&local_38);
              if (iVar2 != -1) {
                local_38 = FUN_0047b100(param_1[0x22],&local_e8,iVar2);
                local_48 = 0xffffffffffffffff;
                puVar7 = (ulong *)FUN_004706d0(param_1 + 0xd,&local_38,&local_48);
                uVar12 = *puVar7;
                if (((-1 < (int)uVar12) && ((int)uVar12 != 0x50000000)) &&
                   (puVar10 = *(undefined8 **)
                               (param_1[0xb] +
                               (-(uVar12 >> 0x1f & 1) & 0xfffffff800000000 |
                               (uVar12 & 0xffffffff) << 3)), puVar10 != (undefined8 *)0x0)) {
                  if (param_2 == (long *)0x0) goto LAB_004c7c70;
                  puVar9 = (undefined *)*puVar10;
                  goto LAB_004c7cb0;
                }
              }
            }
          }
          lVar5 = (**(code **)(*(long *)param_1[0x23] + 0x20))((long *)param_1[0x23],local_d8);
          if ((param_2 != (long *)0x0) && (lVar5 != 0)) {
            *param_2 = lVar5;
          }
        }
        else {
          if (param_2 == (long *)0x0) goto LAB_004c7c70;
          puVar9 = &DAT_04c16210;
LAB_004c7cb0:
          *param_2 = (long)puVar9;
        }
        goto LAB_004c7c70;
      }
      FUN_004236e0(&local_d8,9);
      FUN_004c7db0(&local_d8);
      lVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x70,0);
      pcVar8 = "hkViewPtr";
    }
    else {
      FUN_004236e0(&local_d8,5);
      FUN_004c7db0(&local_d8);
      lVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x70,0);
      pcVar8 = "hkPtr";
    }
    FUN_00453c80(lVar5,0x22222222,pcVar8,0);
    *(long *)(lVar5 + 0x20) = param_1[0x16];
    lStack_e0 = local_d8 + local_d0;
  }
  else {
    FUN_004236e0(&local_d8,7);
    FUN_004c7db0(&local_d8);
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x78,0);
    FUN_00453d40(lVar5,0x22222222,0x18,8,param_1[0x14],"hkArray",0);
    lStack_e0 = local_d8 + local_d0;
  }
  lStack_e0 = lStack_e0 + -1;
  local_e8 = local_d8;
  FUN_004c7790(param_1,lVar5 + 0x18,&local_e8,param_4);
  uVar11 = *(undefined8 *)(lVar5 + 0x18);
  lVar6 = FUN_004270a0(lVar5);
  *(undefined8 *)(lVar6 + 0x10) = uVar11;
  if (param_2 != (long *)0x0) {
    *param_2 = lVar5;
  }
LAB_004c7c70:
  FUN_00422550(&local_d8);
  return;
}

