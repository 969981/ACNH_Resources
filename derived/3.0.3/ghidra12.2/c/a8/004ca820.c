
undefined8 * FUN_004ca820(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  char *local_2f0;
  char *pcStack_2e8;
  char *local_2e0;
  char *pcStack_2d8;
  char *local_d8;
  int local_d0;
  undefined1 auStack_48 [8];
  
  puVar4 = (undefined8 *)FUN_00438810(0x28);
  *puVar4 = 0;
  puVar10 = puVar4 + 1;
  *puVar10 = 0;
  puVar4[2] = 0;
  puVar4[3] = 0xffffffff00000000;
  *(byte *)(puVar4 + 4) = *(byte *)(puVar4 + 4) & 0xfc;
  FUN_0043bf00(puVar4,*param_2,param_2[1]);
  FUN_0043bf00(puVar10,*param_3,param_3[1]);
  *(byte *)(puVar4 + 4) = *(byte *)(puVar4 + 4) | 1;
  uVar9 = *puVar10;
  iVar2 = FUN_0043c110(puVar10);
  FUN_004cade0(auStack_48,uVar9 & 0xfffffffffffffffe,(uVar9 & 0xfffffffffffffffe) + (long)iVar2);
  FUN_004225d0(&local_d8,*puVar10 & 0xfffffffffffffffe);
  FUN_00425dd0(&local_d8);
  FUN_00425cf0(&local_d8);
  uVar9 = FUN_00422c70(&local_d8,&DAT_040bd946);
  puVar8 = puVar4;
  if ((uVar9 & 1) == 0) {
    uVar9 = FUN_00422c70(&local_d8,&DAT_040cca3a);
    if (((uVar9 & 1) == 0) || (uVar9 = FUN_00422c20(&local_d8,"const char*"), (uVar9 & 1) == 0)) {
      uVar9 = FUN_00422c70(&local_d8,"hkVariantArray");
      if (((uVar9 & 1) == 0) && (uVar9 = FUN_00422c70(&local_d8,"hkReflect::Any"), (uVar9 & 1) == 0)
         ) {
        uVar9 = FUN_00422c70(&local_d8,"hkVariant");
        if (((uVar9 & 1) == 0) &&
           (uVar9 = FUN_00422c70(&local_d8,"hkReflect::Var"), (uVar9 & 1) == 0)) {
          uVar9 = FUN_00422c50(&local_d8,"hkArray");
          if ((uVar9 & 1) != 0) {
            FUN_004236e0(&local_d8,7);
            FUN_00425f90(&local_d8,0x3c);
            FUN_00425e90(&local_d8,0x3e);
            FUN_00425dd0(&local_d8);
            FUN_00425cf0(&local_d8);
            uVar3 = 4;
LAB_004cac78:
            *(undefined4 *)((long)puVar4 + 0x1c) = uVar3;
            goto LAB_004cac88;
          }
          uVar9 = FUN_00422c50(&local_d8,"hkRefPtr");
          if ((uVar9 & 1) != 0) {
            uVar6 = 8;
LAB_004cac48:
            FUN_004236e0(&local_d8,uVar6);
            FUN_00425f90(&local_d8,0x3c);
            FUN_00425e90(&local_d8,0x3e);
            FUN_00425dd0(&local_d8);
            FUN_00425cf0(&local_d8);
            uVar3 = 1;
            goto LAB_004cac78;
          }
          uVar9 = FUN_00422c50(&local_d8,"hkPtr");
          if ((uVar9 & 1) != 0) {
            uVar6 = 5;
            goto LAB_004cac48;
          }
          uVar9 = FUN_00422c50(&local_d8,"hkViewPtr");
          if ((uVar9 & 1) != 0) {
LAB_004cac40:
            uVar6 = 9;
            goto LAB_004cac48;
          }
          uVar9 = FUN_00422c50(&local_d8,"hkStrongRefPtr");
          if ((uVar9 & 1) != 0) {
            uVar6 = 0xe;
            goto LAB_004cac48;
          }
          uVar9 = FUN_00422c50(&local_d8,"hkWeakPtr");
          pcVar1 = local_d8;
          if ((uVar9 & 1) != 0) goto LAB_004cac40;
          pcVar7 = strchr(local_d8,0x24);
          if (pcVar7 == (char *)0x0) {
            pcStack_2d8 = pcVar1 + (long)local_d0 + -1;
            local_2e0 = pcVar1;
            lVar5 = (**(code **)(*param_1 + 8))(param_1,&local_2e0);
            if (lVar5 == 0) {
              *(undefined4 *)((long)puVar4 + 0x1c) = 3;
              pcStack_2d8 = local_d8 + (long)local_d0 + -1;
              local_2e0 = local_d8;
              uVar6 = (**(code **)*param_1)(param_1,&local_2e0);
              puVar4[2] = uVar6;
              *(undefined4 *)(puVar4 + 3) = 0;
            }
            else {
              puVar4[2] = lVar5;
              puVar4[3] = 0;
            }
            goto LAB_004cad74;
          }
          pcStack_2d8 = pcVar1 + (long)local_d0 + -1;
          local_2e0 = pcVar1;
          puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,&local_2e0);
          if (puVar8 != (undefined8 *)0x0) {
            FUN_0043c080(puVar8,puVar4);
            if (puVar4 != (undefined8 *)0x0) {
              FUN_004ca7b0(puVar4);
              FUN_00438870(puVar4,0x28);
            }
            goto LAB_004cad74;
          }
          if (puVar4 != (undefined8 *)0x0) goto LAB_004cad5c;
          goto LAB_004cad70;
        }
        uVar6 = 0x100000000;
      }
      else {
        uVar6 = 0x400000000;
      }
LAB_004caa48:
      puVar4[2] = 0;
      puVar4[3] = uVar6;
      goto LAB_004cad74;
    }
    FUN_00423740(&local_d8,1);
    uVar9 = FUN_00422bf0(&local_d8,"hkReflect::Type");
    if ((uVar9 & 1) != 0) {
      uVar6 = 0x200000000;
      goto LAB_004caa48;
    }
    *(undefined4 *)((long)puVar4 + 0x1c) = 1;
LAB_004cac88:
    pcStack_2d8 = "";
    local_2e0 = "";
    pcStack_2e8 = local_d8 + (long)local_d0 + -1;
    local_2f0 = local_d8;
    lVar5 = FUN_004ca820(param_1,&local_2e0,&local_2f0);
    if (lVar5 != 0) {
      puVar4[2] = lVar5;
      *(undefined4 *)(puVar4 + 3) = 0;
      goto LAB_004cad74;
    }
LAB_004cad5c:
    FUN_004ca7b0(puVar4);
    FUN_00438870(puVar4,0x28);
  }
  else {
    FUN_00423740(&local_d8,1);
    FUN_00425cf0(&local_d8);
    iVar2 = local_d0 + -2;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar9 = uVar9 + 1;
      if ((long)local_d0 + -1 <= (long)uVar9) break;
      lVar5 = (long)iVar2;
      iVar2 = iVar2 + -1;
    } while ((byte)(local_d8[lVar5] - 0x30U) < 10);
    if ((int)uVar9 == 0) {
      FUN_004426d0(&local_2f0,&local_2e0,0x200);
      uVar6 = FUN_0043ac90(&local_2f0,"Invalid array count in field ");
      uVar6 = FUN_0043aec0(uVar6,puVar4);
      uVar6 = FUN_0043ac90(uVar6,&DAT_040951b5);
      uVar6 = FUN_0043aec0(uVar6,puVar10);
      FUN_0043ac90(uVar6,&DAT_04094801);
      uVar3 = 0x5b3ff9fd;
      uVar6 = 0x6d;
    }
    else {
      uVar3 = FUN_0043a2f0(local_d8 + (((long)local_d0 + -1) - uVar9),0);
      FUN_00423740(&local_d8,uVar9 & 0xffffffff);
      FUN_00425cf0(&local_d8);
      uVar9 = FUN_00422c70(&local_d8,&DAT_0408f254);
      if ((uVar9 & 1) != 0) {
        FUN_00423740(&local_d8,1);
        *(undefined4 *)((long)puVar4 + 0x1c) = 5;
        local_2e0 = "";
        pcStack_2d8 = "";
        pcStack_2e8 = local_d8 + (long)local_d0 + -1;
        local_2f0 = local_d8;
        lVar5 = FUN_004ca820(param_1,&local_2e0,&local_2f0);
        if (lVar5 != 0) {
          puVar4[2] = lVar5;
          *(undefined4 *)(puVar4 + 3) = uVar3;
          goto LAB_004cad74;
        }
        goto LAB_004cad5c;
      }
      FUN_004426d0(&local_2f0,&local_2e0,0x200);
      uVar6 = FUN_0043ac90(&local_2f0,"Invalid array count in field ");
      uVar6 = FUN_0043aec0(uVar6,puVar4);
      uVar6 = FUN_0043ac90(uVar6,&DAT_040951b5);
      uVar6 = FUN_0043aec0(uVar6,puVar10);
      FUN_0043ac90(uVar6,&DAT_04094801);
      uVar3 = 0x5b3ff9fe;
      uVar6 = 0x77;
    }
    FUN_004221e0(uVar3,&local_2e0,
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Version/hkVersionBundleUtil.cpp"
                 ,uVar6);
    FUN_00442760(&local_2f0);
  }
LAB_004cad70:
  puVar8 = (undefined8 *)0x0;
LAB_004cad74:
  FUN_00422550(&local_d8);
  FUN_004cb350(auStack_48);
  return puVar8;
}

