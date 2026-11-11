
undefined8 FUN_004c0890(undefined8 *param_1,long param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  code *pcVar13;
  ulong *puVar14;
  undefined8 uVar15;
  char *pcVar16;
  bool bVar17;
  long local_320;
  long lStack_318;
  char *local_118;
  char *local_110;
  char *local_108;
  char *local_100;
  long local_f8;
  int local_f0;
  
  plVar4 = (long *)(**(code **)*param_3)(param_3);
  puVar14 = (ulong *)(param_2 + 8);
  FUN_004225d0(&local_f8,*puVar14 & 0xfffffffffffffffe);
  uVar2 = FUN_004229e0(&local_f8,0x3c,0,0x7fffffff);
  if (-1 < (int)uVar2) {
    FUN_00422950(&local_f8,uVar2);
  }
  switch(*(undefined4 *)(param_2 + 0x1c)) {
  case 0:
    lVar8 = *(long *)(param_2 + 0x10);
    uVar7 = FUN_00428440(lVar8);
    if ((lVar8 != 0) && ((uVar7 & 0x1f) == 3)) {
      uVar6 = (**(code **)(*param_3 + 0x28))(param_3);
      uVar5 = FUN_004adce0(*puVar14 & 0xfffffffffffffffe,0xffffffff);
      uVar15 = (**(code **)(*plVar4 + 0x10))(plVar4,0x38,0);
      FUN_00453fd0(uVar15,8,8,uVar6,uVar5,1,0x1000);
      break;
    }
    if (*(int *)(param_2 + 0x1c) == 0) goto switchD_004c092c_caseD_6;
    goto LAB_004c0cf0;
  case 1:
    if (*(long *)(param_2 + 0x10) == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = (undefined *)FUN_004c0890(param_1,*(long *)(param_2 + 0x10),param_3);
    }
    uVar15 = (**(code **)(*(long *)*param_1 + 0x48))();
    lStack_318 = local_f8 + local_f0;
    local_320 = local_f8;
    goto LAB_004c0b00;
  case 2:
    uVar15 = (**(code **)(*(long *)*param_1 + 0x48))();
    lStack_318 = local_f8 + local_f0;
    local_320 = local_f8;
    puVar10 = &DAT_04c16210;
LAB_004c0b00:
    lStack_318 = lStack_318 + -1;
    uVar15 = FUN_004c01b0(uVar15,&local_320,puVar10,~uVar2 >> 0x1f);
    break;
  case 3:
    plVar4 = (long *)*param_1;
    puVar12 = *(undefined8 **)(param_2 + 0x10);
    pcVar13 = *(code **)(*plVar4 + 0x38);
LAB_004c0a34:
    lVar8 = (*pcVar13)(plVar4,puVar12);
    uVar15 = *(undefined8 *)(lVar8 + 0x50);
    break;
  case 4:
  case 5:
    if (*(long *)(param_2 + 0x10) == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = FUN_004c0890(param_1,*(long *)(param_2 + 0x10),param_3);
    }
    uVar6 = (**(code **)(*(long *)*param_1 + 0x48))();
    lStack_318 = local_f8 + local_f0 + -1;
    local_320 = local_f8;
    uVar15 = FUN_004c04c0(uVar6,&local_320,uVar15,~uVar2 >> 0x1f,*(undefined4 *)(param_2 + 0x18),0,0
                         );
    break;
  case 6:
switchD_004c092c_caseD_6:
    uVar15 = *(undefined8 *)(param_2 + 0x10);
    break;
  case 7:
    pcVar16 = (char *)(*puVar14 & 0xfffffffffffffffe);
    iVar3 = FUN_0043c110(puVar14);
    local_100 = pcVar16 + iVar3;
    local_108 = pcVar16;
    if ((int)local_100 != (int)pcVar16) {
      puVar12 = param_1;
      do {
        iVar3 = FUN_004299f0(&local_108,0x3a,0);
        if (iVar3 < 0) {
          iVar3 = (int)local_100 - (int)local_108;
          if (*local_108 == '$') goto LAB_004c0b6c;
LAB_004c0d30:
          if (1 < DAT_04c71768) {
            FUN_00444bc0(&local_320,&DAT_04c71718,2);
            lVar8 = FUN_004446b0(&local_320,"Invalid dependent parameter {}",&DAT_04868780,puVar14);
            uVar15 = 0x11d;
LAB_004c0de4:
            *(char **)(lVar8 + 0x28) =
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Version/hkVersionedTypeBuilder.cpp"
            ;
            *(undefined8 *)(lVar8 + 0x30) = uVar15;
            FUN_00444c00(&local_320);
          }
          goto LAB_004c0cf0;
        }
        if (*local_108 != '$') goto LAB_004c0d30;
LAB_004c0b6c:
        local_118 = local_108 + 1;
        local_110 = local_118 + (long)iVar3 + -1;
        if (*(int *)(puVar12 + 0xe) == 0) {
          iVar1 = *(int *)(puVar12 + 0x10);
        }
        else {
          lVar8 = (long)*(int *)(puVar12 + 0xe) * 0x28;
          plVar4 = (long *)(puVar12[0xd] + 8);
          while( true ) {
            lVar8 = lVar8 + -0x28;
            uVar7 = FUN_0043a700(local_118,(long)local_110 - (long)local_118,
                                 plVar4[-1] & 0xfffffffffffffffe);
            if ((uVar7 & 1) != 0) {
              lVar9 = *plVar4;
              if (*(int *)(lVar9 + 0x1c) == 3) {
                puVar11 = *(undefined8 **)(lVar9 + 0x10);
                if (puVar11 != (undefined8 *)0x0) {
                  bVar17 = true;
                  iVar1 = *(int *)(puVar11 + 0x10);
                  goto joined_r0x004c0b18;
                }
              }
              else if ((*(int *)(lVar9 + 0x1c) == 0) && (*(long *)(lVar9 + 0x10) != 0))
              goto LAB_004c0d20;
            }
            if (lVar8 == 0) break;
            plVar4 = plVar4 + 5;
          }
          iVar1 = *(int *)(puVar12 + 0x10);
        }
        bVar17 = false;
        puVar11 = puVar12;
joined_r0x004c0b18:
        if (iVar1 != 0) {
          lVar8 = (long)iVar1 * 0x28;
          plVar4 = (long *)(puVar11[0xf] + 8);
          do {
            uVar7 = FUN_0043a700(local_118,(long)local_110 - (long)local_118,
                                 plVar4[-1] & 0xfffffffffffffffe);
            if ((uVar7 & 1) != 0) {
              lVar9 = *plVar4;
              if (*(int *)(lVar9 + 0x1c) == 3) {
                puVar12 = *(undefined8 **)(lVar9 + 0x10);
                if (puVar12 != (undefined8 *)0x0) goto LAB_004c0c70;
              }
              else if ((*(int *)(lVar9 + 0x1c) == 0) && (*(long *)(lVar9 + 0x10) != 0))
              goto LAB_004c0d20;
            }
            lVar8 = lVar8 + -0x28;
            plVar4 = plVar4 + 5;
          } while (lVar8 != 0);
        }
        puVar12 = puVar11;
        if (!bVar17) {
          if (1 < DAT_04c71768) {
            FUN_00444bc0(&local_320,&DAT_04c71718,2);
            lVar8 = FUN_004446b0(&local_320,
                                 "Failed to resolve part of a dependent parameter: could not resolve {} in {}"
                                 ,&DAT_04868790,&local_118,puVar14);
            uVar15 = 0x14c;
            goto LAB_004c0de4;
          }
          goto LAB_004c0cf0;
        }
LAB_004c0c70:
        iVar1 = (int)local_100 - (int)local_108;
        if (iVar1 <= iVar3) {
          plVar4 = (long *)*param_1;
          pcVar13 = *(code **)(*plVar4 + 0x38);
          goto LAB_004c0a34;
        }
        iVar1 = (-2 - iVar3) + iVar1;
        local_108 = local_108 + (long)iVar3 + 2;
        local_100 = local_108 + iVar1;
      } while (iVar1 != 0);
    }
  default:
    FUN_004426d0(&local_108,&local_320,0x200);
    FUN_0043ac90(&local_108,"Invalid field type");
    iVar3 = FUN_00422320(0x33b1b823,&local_320,
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Version/hkVersionedTypeBuilder.cpp"
                         ,0x15e);
    if (iVar3 != 0) {
      CallSupervisor(0x26);
    }
    FUN_00442760(&local_108);
LAB_004c0cf0:
    uVar15 = 0;
  }
LAB_004c0cf4:
  FUN_00422550(&local_f8);
  return uVar15;
LAB_004c0d20:
  uVar15 = FUN_004c0890(param_1,lVar9,param_3);
  goto LAB_004c0cf4;
}

