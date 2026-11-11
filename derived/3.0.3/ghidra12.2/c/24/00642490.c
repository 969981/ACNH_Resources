
void FUN_00642490(long *param_1,undefined8 param_2,long *param_3,long param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  undefined1 local_2b0 [16];
  ulong local_2a0;
  undefined1 local_298 [16];
  ulong local_288;
  undefined1 auStack_280 [80];
  undefined8 local_230;
  ulong local_228;
  long local_218;
  undefined8 *local_210;
  undefined8 *local_1f8;
  undefined8 local_1b0;
  undefined8 *local_188;
  undefined8 local_168;
  undefined1 auStack_160 [256];
  
  uVar3 = FUN_00428440(param_2);
  switch(uVar3 & 0x1f) {
  case 1:
    iVar4 = (int)param_1[2];
    if (*(int *)((long)param_1 + 0xc) == 0) {
      iVar4 = iVar4 + 1;
    }
    *(int *)(param_1 + 2) = iVar4;
    FUN_00643030(param_2,param_3,param_4);
    return;
  case 2:
  case 3:
  case 4:
  case 5:
    lVar12 = FUN_0044f1b0(param_2);
    uVar6 = FUN_00428440();
    if ((lVar12 == 0) || ((uVar6 & 0x1f) != 3)) {
      uVar10 = FUN_00643030(lVar12,param_3,param_4);
      FUN_00643220(uVar10,param_2,param_3,param_4);
      return;
    }
    if (param_5 < 0) {
      iVar4 = (int)param_1[2];
      if (*(int *)((long)param_1 + 0xc) == 0) {
        iVar4 = iVar4 + 1;
      }
      *(int *)(param_1 + 2) = iVar4;
      uVar10 = FUN_00643030(&DAT_04c161d0,param_3,param_4);
    }
    else {
      uVar10 = FUN_0044f1b0(lVar12);
      if (param_4 == 0) {
        if (param_3 != (long *)0x0) {
          uVar3 = *(uint *)(param_3 + 1);
          if (uVar3 == (*(uint *)((long)param_3 + 0xc) & 0x3fffffff)) {
            FUN_00426990(PTR_DAT_048607b8,param_3,2);
            uVar3 = *(uint *)(param_3 + 1);
          }
          *(short *)(*param_3 + (long)(int)uVar3 * 2) = (short)param_5;
          *(uint *)(param_3 + 1) = uVar3 + 1;
          uVar3 = *(uint *)(param_3 + 3);
          if (uVar3 == (*(uint *)((long)param_3 + 0x1c) & 0x3fffffff)) {
            FUN_00426990(PTR_DAT_048607b8,param_3 + 2,8);
            uVar3 = *(uint *)(param_3 + 3);
          }
          *(undefined8 *)(param_3[2] + (long)(int)uVar3 * 8) = uVar10;
          *(uint *)(param_3 + 3) = uVar3 + 1;
          *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
        }
      }
      else {
        FUN_00451ea0(auStack_280);
        FUN_004522c0(auStack_280,uVar10,0xffffffff);
        uVar11 = FUN_004272d0(uVar10);
        FUN_00452230(auStack_280,uVar11);
        local_210 = (undefined8 *)((ulong)local_210 | 4);
        local_1f8 = &DAT_04c785c8;
        piVar7 = (int *)FUN_00438810(4);
        *piVar7 = 0;
        iVar4 = *(int *)((long)param_1 + 0x14);
        *(int *)((long)param_1 + 0x14) = iVar4 + 1;
        *piVar7 = iVar4;
        local_298._8_8_ = 0;
        local_288 = 0;
        if (piVar7 == (int *)0x0) {
          local_298 = ZEXT816(0);
          uVar13 = 0;
          uVar6 = local_288;
        }
        else {
          local_298 = FUN_00446e00(piVar7,&DAT_04c32e60);
          uVar6 = local_288;
          if (local_298._8_8_ == 0) {
            local_288 = 0;
            uVar13 = local_288;
          }
          else {
            uVar13 = FUN_00428370(local_298._8_8_);
            uVar6 = local_288;
            if ((uVar13 & 1) != 0) {
              FUN_0043dd30(uVar13 & 0xfffffffffffffffe);
              uVar6 = local_288;
            }
          }
        }
        local_288 = uVar13;
        if ((uVar6 & 1) != 0) {
          FUN_0043dd50(uVar6 & 0xfffffffffffffffe);
        }
        FUN_00452380(auStack_280,local_298);
        if ((local_288 & 1) != 0) {
          FUN_0043dd50(local_288 & 0xfffffffffffffffe);
        }
        FUN_00643160(auStack_280,uVar10,param_4);
        FUN_00453420(auStack_280,0);
        uVar10 = FUN_004535c0(auStack_280,param_4);
        uVar3 = *(uint *)(param_3 + 3);
        if (uVar3 == (*(uint *)((long)param_3 + 0x1c) & 0x3fffffff)) {
          FUN_00426990(PTR_DAT_048607b8,param_3 + 2,8);
          uVar3 = *(uint *)(param_3 + 3);
        }
        *(undefined8 *)(param_3[2] + (long)(int)uVar3 * 8) = uVar10;
        *(uint *)(param_3 + 3) = uVar3 + 1;
        uVar10 = FUN_00643220(uVar10,lVar12,param_3,param_4);
        FUN_00451fa0(auStack_280);
      }
    }
    FUN_00643220(uVar10,param_2,param_3,param_4);
    return;
  case 6:
  case 7:
  case 8:
    break;
  default:
    FUN_004223c0(0xfdbd9f9,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",0x1b
                 ,"Bad type visitor switch",auStack_160 + 0x108);
  case 0:
    uVar6 = FUN_0043d930(0x75a2b2b5,
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Visualize/Serialize/hkVdbSerialize.cpp"
                         ,0x20a,
                         "const hkReflect::Type *(anonymous namespace)::VdbObjectTypeBuilder::visit(const hkReflect::VoidType *, hkVdbReflect::TypeInfo *, hkMemoryAllocator *, int)"
                         ,&DAT_0407ebb1,"Not implemented",&DAT_0413df78);
    if ((uVar6 & 1) != 0) {
      CallSupervisor(0x26);
    }
    FUN_00643030(param_2,param_3,param_4);
    return;
  }
  puVar8 = (undefined1 *)FUN_0044f1b0(param_2);
  uVar6 = FUN_00428440();
  if ((puVar8 == (undefined1 *)0x0) || ((uVar6 & 0x1f) != 8)) {
    uVar6 = FUN_00428440(puVar8);
    if ((puVar8 != (undefined1 *)0x0) && ((uVar6 & 0x1f) == 7)) {
      uVar2 = *(undefined4 *)((long)param_1 + 0xc);
      if (puVar8 == (undefined1 *)*param_1) {
        *(uint *)((long)param_1 + 0xc) = (uint)((int)param_1[1] != 0);
      }
      else {
        *(undefined4 *)((long)param_1 + 0xc) = 1;
      }
      if (param_4 == 0) {
        lVar12 = FUN_00427d30(puVar8);
        if (lVar12 != 0) {
          FUN_00642490(param_1,lVar12,param_3,0,param_5);
        }
        auVar17 = FUN_00428460(puVar8);
        uVar6 = auVar17._8_8_ - (long)auVar17._0_8_;
        if (0 < (int)(uVar6 >> 3)) {
          uVar6 = uVar6 >> 3 & 0xffffffff;
          plVar14 = auVar17._0_8_;
          do {
            local_298._0_8_ = *plVar14;
            iVar4 = FUN_00429050(local_298);
            FUN_00642490(param_1,*(undefined8 *)(local_298._0_8_ + 8),param_3,0,iVar4 + param_5);
            uVar6 = uVar6 - 1;
            plVar14 = plVar14 + 1;
          } while (uVar6 != 0);
        }
      }
      else {
        lVar12 = FUN_0044f1b0(puVar8);
        uVar6 = FUN_00428440();
        if ((uVar6 & 0x1f) != 7) {
          lVar12 = 0;
        }
        FUN_00451ea0(local_298);
        FUN_004522c0(local_298,lVar12,0xffffffff);
        uVar10 = FUN_004272d0(lVar12);
        FUN_00452230(local_298,uVar10);
        if (lVar12 == *param_1) {
          local_228 = local_228 | 0x80000;
          local_188 = &DAT_04c785b0;
          plVar14 = (long *)FUN_00438810(0x20);
          *plVar14 = 0;
          plVar14[1] = 0;
          *(undefined4 *)((long)plVar14 + 0xc) = 0x80000000;
          plVar14[2] = 0;
          plVar14[3] = -0x8000000000000000;
          FUN_004534f0(local_298,&LAB_00643320,plVar14);
        }
        else {
          FUN_00453420(local_298,0);
          plVar14 = param_3;
        }
        FUN_00643160(local_298,lVar12,param_4);
        lVar15 = FUN_00427d30(lVar12);
        if (lVar15 != 0) {
          local_230 = FUN_00642490(param_1,lVar15,plVar14,param_4,param_5);
        }
        local_228 = local_228 | 0x800000;
        local_168 = 0;
        auVar17 = FUN_00428460(lVar12);
        plVar16 = auVar17._0_8_;
        uVar6 = auVar17._8_8_ - (long)plVar16;
        if (0 < (int)(uVar6 >> 3)) {
          uVar6 = uVar6 >> 3 & 0xffffffff;
          do {
            local_2b0._0_8_ = *plVar16;
            uVar10 = FUN_00427b40(local_2b0);
            iVar4 = FUN_00429050(local_2b0);
            uVar5 = FUN_004290b0(local_2b0);
            lVar15 = FUN_00642490(param_1,*(undefined8 *)(local_2b0._0_8_ + 8),plVar14,param_4,
                                  iVar4 + param_5);
            if (lVar15 == 0) {
              iVar1 = (int)param_1[2];
              if (*(int *)((long)param_1 + 0xc) == 0) {
                iVar1 = iVar1 + 1;
              }
              *(int *)(param_1 + 2) = iVar1;
              lVar15 = FUN_00643030(&DAT_04c161d0,plVar14,param_4);
            }
            FUN_00453ba0(local_298,uVar10,iVar4,uVar5,lVar15);
            plVar16 = plVar16 + 1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        local_210 = &DAT_04c785b8;
        local_228 = local_228 | 0x4004;
        local_1b0 = 0;
        uVar10 = FUN_004535c0(local_298,param_4);
        if (lVar12 == *param_1) {
          if ((*(uint *)((long)plVar14 + 0xc) & 0x3ffffffe) == 0) {
            lVar12 = FUN_00426720(PTR_DAT_048607b8,2,2,*plVar14,(int)plVar14[1]);
            *plVar14 = lVar12;
          }
          if ((int)plVar14[1] != 2) {
            *(undefined4 *)(plVar14 + 1) = 2;
          }
          uVar5 = FUN_00452730(local_298);
          *(undefined4 *)*plVar14 = uVar5;
        }
        else {
          uVar3 = *(uint *)(plVar14 + 3);
          if (uVar3 == (*(uint *)((long)plVar14 + 0x1c) & 0x3fffffff)) {
            FUN_00426990(PTR_DAT_048607b8,plVar14 + 2,8);
            uVar3 = *(uint *)(plVar14 + 3);
          }
          *(undefined8 *)(plVar14[2] + (long)(int)uVar3 * 8) = uVar10;
          *(uint *)(plVar14 + 3) = uVar3 + 1;
        }
        puVar8 = (undefined1 *)FUN_00643220(uVar10,puVar8,plVar14,param_4);
        FUN_00451fa0(local_298);
      }
      FUN_00643220(puVar8,param_2,param_3,param_4);
      *(undefined4 *)((long)param_1 + 0xc) = uVar2;
      return;
    }
    uVar6 = FUN_00428440(puVar8);
    iVar4 = (int)param_1[2];
    if (*(int *)((long)param_1 + 0xc) == 0) {
      iVar4 = iVar4 + 1;
    }
    *(int *)(param_1 + 2) = iVar4;
    if ((puVar8 == (undefined1 *)0x0) || ((uVar6 & 0x1f) != 6)) {
      FUN_00643030(&DAT_04c161d0,param_3,param_4);
      return;
    }
    if (param_4 == 0) goto LAB_00642fe4;
    uVar10 = FUN_0044f1b0(puVar8);
    FUN_00451ea0(local_298);
    FUN_004522c0(local_298,uVar10,0xffffffff);
    uVar11 = FUN_004272d0(uVar10);
    FUN_00452230(local_298,uVar11);
    local_228 = local_228 | 4;
    local_210 = &DAT_04c785d8;
    puVar9 = (undefined8 *)FUN_00438810(8);
    *puVar9 = FUN_00641aa0;
    local_2b0._8_8_ = 0;
    local_2a0 = 0;
    if (puVar9 == (undefined8 *)0x0) {
      local_2b0 = ZEXT816(0);
      uVar13 = 0;
      uVar6 = local_2a0;
    }
    else {
      local_2b0 = FUN_00446e00(puVar9,&DAT_04c32ec0);
      uVar6 = local_2a0;
      if (local_2b0._8_8_ == 0) {
        local_2a0 = 0;
        uVar13 = local_2a0;
      }
      else {
        uVar13 = FUN_00428370(local_2b0._8_8_);
        uVar6 = local_2a0;
        if ((uVar13 & 1) != 0) {
          FUN_0043dd30(uVar13 & 0xfffffffffffffffe);
          uVar6 = local_2a0;
        }
      }
    }
    local_2a0 = uVar13;
    if ((uVar6 & 1) != 0) {
      FUN_0043dd50(uVar6 & 0xfffffffffffffffe);
    }
    FUN_00452380(local_298,local_2b0);
    if ((local_2a0 & 1) != 0) {
      FUN_0043dd50(local_2a0 & 0xfffffffffffffffe);
    }
    FUN_00643160(local_298,uVar10,param_4);
    FUN_00453420(local_298,0);
LAB_00642f78:
    uVar10 = FUN_004535c0(local_298,param_4);
    uVar3 = *(uint *)(param_3 + 3);
    if (uVar3 == (*(uint *)((long)param_3 + 0x1c) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,param_3 + 2,8);
      uVar3 = *(uint *)(param_3 + 3);
    }
    *(undefined8 *)(param_3[2] + (long)(int)uVar3 * 8) = uVar10;
    *(uint *)(param_3 + 3) = uVar3 + 1;
    puVar8 = (undefined1 *)FUN_00643220(uVar10,puVar8,param_3,param_4);
    FUN_00451fa0(local_298);
  }
  else {
    if ((-1 < param_5) &&
       ((puVar9 = (undefined8 *)FUN_00426e90(puVar8,1), puVar9 != (undefined8 *)0x0 &&
        ((int)((ulong)*puVar9 >> 8) != 0)))) {
      uVar10 = FUN_0044f1b0(puVar8);
      uVar6 = FUN_00428440();
      if ((uVar6 & 0x1f) != 8) {
        uVar10 = 0;
      }
      uVar11 = FUN_00426d90(uVar10);
      lVar12 = FUN_00642490(param_1,uVar11,param_3,param_4,param_5);
      auVar17._8_8_ = local_2b0._8_8_;
      auVar17._0_8_ = local_2b0._0_8_;
      if (param_4 == 0) {
        if (lVar12 == 0) {
          iVar4 = (int)param_1[2];
          if (*(int *)((long)param_1 + 0xc) == 0) {
            iVar4 = iVar4 + 1;
          }
          *(int *)(param_1 + 2) = iVar4;
          puVar8 = &DAT_04c161d0;
          local_2b0 = auVar17;
        }
        goto LAB_00642fe4;
      }
      if (lVar12 != 0) {
        FUN_00451ea0(local_298);
        FUN_004522c0(local_298,uVar10,0xffffffff);
        uVar11 = FUN_004272d0(uVar10);
        FUN_00452230(local_298,uVar11);
        FUN_00643160(local_298,uVar10,param_4);
        FUN_00453420(local_298,0);
        local_228 = local_228 | 2;
        local_218 = lVar12;
        goto LAB_00642f78;
      }
    }
    iVar4 = (int)param_1[2];
    if (*(int *)((long)param_1 + 0xc) == 0) {
      iVar4 = iVar4 + 1;
    }
    *(int *)(param_1 + 2) = iVar4;
    puVar8 = (undefined1 *)FUN_00643030(&DAT_04c161d0,param_3,param_4);
  }
LAB_00642fe4:
  FUN_00643220(puVar8,param_2,param_3,param_4);
  return;
}

