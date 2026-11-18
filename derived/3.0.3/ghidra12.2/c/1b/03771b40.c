
float FUN_03771b40(undefined4 param_1,ulong param_2,long *param_3)

{
  char *__dest;
  long lVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ushort *puVar7;
  long lVar8;
  undefined8 *puVar9;
  char *__src;
  long lVar10;
  ushort uVar11;
  float fVar12;
  undefined *local_98;
  char *local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  float local_68;
  undefined1 uStack_51;
  
  lVar10 = *(long *)PTR_DAT_04bb59d8;
  lVar8 = *(long *)PTR_DAT_04bb27f8;
  if (lVar10 == 0 || lVar8 == 0) {
    return 0.0;
  }
  lVar5 = *(long *)PTR_DAT_04bb2720;
  if (lVar5 == 0) {
    puVar9 = &DAT_055c04a0;
  }
  else {
    puVar9 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar9 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (param_1,0,0,*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
      iVar3 = FUN_006bd550(*puVar9,0);
      puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar9 = &DAT_055c04a0;
      }
    }
  }
  puVar2 = PTR_DAT_04bc3a48;
  local_68 = 0.0;
  iVar3 = *(int *)(puVar9 + 7);
  local_70 = 0;
  if (((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) && ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)
      ) && (*(long *)PTR_DAT_04bc1530 != 0)) {
    lVar5 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
    plVar6 = *(long **)(lVar5 + 0x11b0);
    if (((plVar6 != (long *)0x0) && (puVar9 = (undefined8 *)*plVar6, puVar9 != (undefined8 *)0x0))
       && ((uVar4 = (**(code **)*puVar9)(), (uVar4 & 1) != 0 &&
           ((lVar5 = *(long *)(lVar5 + 0x11b0), lVar5 != 0 &&
            (puVar9 = *(undefined8 **)(lVar5 + 8), puVar9 != (undefined8 *)0x0)))))) {
      (**(code **)*puVar9)();
    }
  }
  if ((iVar3 == -0x7975b8e8) || (iVar3 == -0x3e092032)) {
    local_88 = 0;
    local_98 = PTR_DAT_04bbc1a0 + 0x10;
    local_90 = PTR_DAT_04bb2010 + 0x10;
    uStack_78 = 0;
    local_80 = local_90;
    FUN_01811430(&local_98);
    fVar12 = (float)(int)local_88 * 5.0 + 5.0;
    local_68 = (float)local_88._4_4_ * 5.0 + 5.0;
    local_70._0_4_ = fVar12;
    if (iVar3 == -0x7975b8e8) {
LAB_03771d48:
      local_70._0_4_ = fVar12 + 10.0;
    }
  }
  else {
    if (iVar3 != -0x17df00c3) {
      return 0.0;
    }
    FUN_0252d11c(&uStack_51);
    local_98 = PTR_DAT_04bb2020 + 0x10;
    local_90 = "WHEREAREN_ManTalkReserve_Inspect";
    iVar3 = FUN_02753180(&uStack_51,&local_98);
    if ((iVar3 == 0) || (puVar7 = *(ushort **)puVar2, puVar7 == (ushort *)0x0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *puVar7 & 1;
    }
    if (*(char *)param_3[1] != '\0') {
      uVar4 = FUN_036e4924(lVar8);
      if ((uVar4 & 1) == 0) {
joined_r0x03771e60:
        if (uVar11 == 0) goto LAB_03771f8c;
      }
      else {
        __dest = (char *)((long)&local_88 + 4);
        local_88 = CONCAT44(local_88._4_4_,8);
        local_80._0_4_ = (uint)(uint3)local_80;
        local_98 = PTR_DAT_04bb6a30 + 0x10;
        local_90 = __dest;
        (**(code **)(*param_3 + 0x18))(param_3);
        __src = (char *)param_3[1];
        if (__dest != __src) {
          (**(code **)(*param_3 + 0x18))(param_3);
          lVar5 = 0;
          do {
            if (*(char *)(param_3[1] + lVar5) == '\0') goto LAB_03771e74;
            lVar1 = param_3[1] + lVar5;
            if (*(char *)(lVar1 + 1) == '\0') {
              lVar5 = lVar5 + 1;
              goto LAB_03771e74;
            }
            if (*(char *)(lVar1 + 2) == '\0') {
              lVar5 = lVar5 + 2;
              goto LAB_03771e74;
            }
            lVar5 = lVar5 + 3;
          } while (lVar5 != 0x80001);
          lVar5 = 0;
LAB_03771e74:
          iVar3 = (int)lVar5;
          if ((int)local_88 <= (int)lVar5) {
            iVar3 = (int)local_88 + -1;
          }
          memcpy(__dest,__src,(long)iVar3);
          __dest[iVar3] = '\0';
        }
        local_98 = PTR_DAT_04bb3768 + 0x10;
        uVar4 = FUN_036e4cd0(lVar8,&local_98);
        if ((uVar4 & 1) != 0) goto joined_r0x03771e60;
      }
      local_90 = (char *)((ulong)local_90 & 0xffffffff00000000);
      local_98 = (undefined *)0x0;
      uVar4 = FUN_021d9820(&local_98,1);
      if ((uVar4 & 1) == 0) {
        return 0.0;
      }
      fVar12 = (float)(int)((int)((float)(int)(local_98._0_4_ + -10.0) / 5.0) -
                           (uint)(local_98._0_4_ + -10.0 < 0.0)) * 5.0 + 5.0;
      local_68 = (float)(int)((int)((float)(int)(local_90._0_4_ + -5.0) / 5.0) -
                             (uint)(local_90._0_4_ + -5.0 < 0.0)) * 5.0 + 5.0;
      local_70._0_4_ = fVar12;
      if ((param_2 & 1) != 0) {
        local_70._0_4_ = fVar12 + 10.0;
      }
      goto LAB_03771d64;
    }
LAB_03771f8c:
    puVar7 = *(ushort **)puVar2;
    fVar12 = (float)*(int *)(lVar10 + 0x50) * 5.0 + 5.0;
    local_68 = (float)*(int *)(lVar10 + 0x54) * 5.0 + 5.0;
    if ((puVar7 == (ushort *)0x0) || (local_70._0_4_ = fVar12, (*puVar7 & 1) == 0))
    goto LAB_03771d48;
  }
  if ((param_2 & 1) != 0) {
    local_68 = local_68 + 10.0;
  }
LAB_03771d64:
  lVar8 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar8 != 0) && (*(long *)(lVar8 + 0xa8) != 0)) && (*(char *)(lVar8 + 0x11c8) == '\0')) {
    FUN_0093a950(lVar8 + 0x28,&local_70,0);
  }
  return (float)local_70;
}

