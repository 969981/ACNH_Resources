
void FUN_004e2fa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 undefined8 param_6,int param_7,float *param_8,undefined4 param_9)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  long local_88;
  undefined8 local_80;
  ulong local_78;
  long local_70;
  ulong local_68;
  
  lVar6 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar6 != 0) {
    FUN_00443a00(lVar6,"TtPATCH_MEMBER_ADDED");
  }
  local_70 = lVar6;
  local_78 = FUN_004dc1c0(param_3,param_4);
  if (param_8 != (float *)0x0) {
    local_88 = 0;
    local_80 = -0x8000000000000000;
    FUN_004e3690(param_1,param_2,&local_88);
    if (0 < (int)local_80) {
      lVar11 = 0;
      lVar10 = 0;
      do {
        uVar8 = local_78;
        lVar12 = *(long *)(local_88 + lVar11);
        local_68 = local_78;
        iVar2 = FUN_00429050(&local_68);
        lVar12 = lVar12 + iVar2;
        uVar7 = FUN_00428440(uVar8);
        if ((uVar8 == 0) || ((uVar7 & 0x1f) != 2)) {
          uVar7 = FUN_00428440(uVar8);
          if ((uVar8 == 0) || ((uVar7 & 0x1f) != 4)) {
            uVar7 = FUN_00428440(uVar8);
            if ((uVar8 == 0) || ((uVar7 & 0x1f) != 5)) {
              uVar3 = FUN_00426fc0(local_68);
              FUN_0043a3b0(lVar12,param_8,uVar3);
            }
            else {
              uVar7 = FUN_00428370(uVar8);
              plVar13 = (long *)(uVar7 & 0xfffffffffffffffe);
              if ((uVar7 & 1) != 0) {
                FUN_0043dd30(plVar13);
                (**(code **)(*plVar13 + 0x30))((double)*param_8,plVar13,lVar12,uVar8);
                goto LAB_004e318c;
              }
              (**(code **)(*plVar13 + 0x30))((double)*param_8,plVar13,lVar12,uVar8);
            }
          }
          else {
            uVar7 = FUN_00428370(uVar8);
            plVar13 = (long *)(uVar7 & 0xfffffffffffffffe);
            if ((uVar7 & 1) != 0) {
              FUN_0043dd30(plVar13);
            }
            uStack_98 = *(ulong *)param_8;
            local_a0 = -uStack_98;
            if (-1 < (long)uStack_98) {
              local_a0 = uStack_98;
            }
            uStack_98 = uStack_98 >> 0x3f;
            (**(code **)(*plVar13 + 0x30))(plVar13,lVar12,uVar8,&local_a0);
            if ((uVar7 & 1) != 0) goto LAB_004e318c;
          }
        }
        else {
          uVar7 = FUN_00428370(uVar8);
          plVar13 = (long *)(uVar7 & 0xfffffffffffffffe);
          if ((uVar7 & 1) == 0) {
            (**(code **)(*plVar13 + 0x30))(plVar13,lVar12,uVar8,*(ulong *)param_8 != 0);
          }
          else {
            FUN_0043dd30(plVar13);
            (**(code **)(*plVar13 + 0x30))(plVar13,lVar12,uVar8,*(ulong *)param_8 != 0);
LAB_004e318c:
            FUN_0043dd50(plVar13);
          }
        }
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 0x18;
      } while (lVar10 < (int)local_80);
    }
    lVar10 = local_80;
    uVar1 = local_80._4_4_;
    local_80 = (ulong)local_80._4_4_ << 0x20;
    if ((-1 < lVar10) && (local_88 != 0)) {
      FUN_00421f90(PTR_DAT_048607c0,local_88,0x18,uVar1 & 0x3fffffff);
    }
  }
  if (param_5 == 0x29) {
    local_88 = 0;
    local_80 = -0x8000000000000000;
    FUN_004e3690(param_1,param_2,&local_88);
    puVar9 = (ulong *)FUN_004c5150(param_1 + 0x68,param_6,param_9);
    uVar8 = *puVar9;
    uVar7 = FUN_00428440(uVar8);
    if ((uVar7 & 0x1f) != 7) {
      uVar8 = 0;
    }
    if ((0 < (int)local_80) && (0 < param_7)) {
      lVar10 = 0;
      do {
        iVar2 = 0;
        if (uVar8 == 0) {
          do {
            lVar11 = *(long *)(local_88 + lVar10 * 0x18);
            iVar4 = FUN_00429050(&local_78);
            iVar5 = FUN_00426fc0(0);
            local_a0 = lVar11 + (iVar4 + iVar5 * iVar2);
            local_90 = 0;
            uStack_98 = uVar8;
            FUN_00440bc0(&local_a0);
            if ((local_90 & 1) != 0) {
              FUN_0043dd50(local_90 & 0xfffffffffffffffe);
            }
            iVar2 = iVar2 + 1;
          } while (param_7 != iVar2);
        }
        else {
          do {
            while( true ) {
              lVar11 = *(long *)(local_88 + lVar10 * 0x18);
              iVar4 = FUN_00429050(&local_78);
              iVar5 = FUN_00426fc0(uVar8);
              local_a0 = lVar11 + (iVar4 + iVar5 * iVar2);
              uStack_98 = uVar8;
              local_90 = FUN_00428370(uVar8);
              if ((local_90 & 1) == 0) break;
              FUN_0043dd30(local_90 & 0xfffffffffffffffe);
              FUN_00440bc0(&local_a0);
              if ((local_90 & 1) != 0) goto LAB_004e33b8;
LAB_004e3390:
              iVar2 = iVar2 + 1;
              if (param_7 == iVar2) goto LAB_004e3424;
            }
            FUN_00440bc0(&local_a0);
            if ((local_90 & 1) == 0) goto LAB_004e3390;
LAB_004e33b8:
            FUN_0043dd50(local_90 & 0xfffffffffffffffe);
            iVar2 = iVar2 + 1;
          } while (param_7 != iVar2);
        }
LAB_004e3424:
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)local_80);
    }
  }
  else {
    if (param_5 != 9) goto LAB_004e3460;
    local_88 = 0;
    local_80 = -0x8000000000000000;
    FUN_004e3690(param_1,param_2,&local_88);
    if (0 < (int)local_80) {
      lVar11 = 0;
      lVar10 = 0;
      do {
        lVar12 = *(long *)(local_88 + lVar11);
        iVar2 = FUN_00429050(&local_78);
        local_a0 = lVar12 + iVar2;
        uStack_98 = local_78;
        uVar8 = 0;
        if (local_78 != 0) {
          uVar8 = FUN_00428370();
        }
        local_90 = uVar8;
        if ((uVar8 & 1) != 0) {
          FUN_0043dd30(uVar8 & 0xfffffffffffffffe);
        }
        FUN_00440bc0(&local_a0);
        if ((local_90 & 1) != 0) {
          FUN_0043dd50(local_90 & 0xfffffffffffffffe);
        }
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 0x18;
      } while (lVar10 < (int)local_80);
    }
  }
  lVar10 = local_80;
  uVar1 = local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar10) && (local_88 != 0)) {
    FUN_00421f90(PTR_DAT_048607c0,local_88,0x18,uVar1 & 0x3fffffff);
  }
LAB_004e3460:
  if (lVar6 != 0) {
    FUN_00443a70(lVar6,&DAT_04085310);
  }
  return;
}

