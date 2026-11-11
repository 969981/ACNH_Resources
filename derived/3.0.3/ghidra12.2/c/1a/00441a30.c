
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00441a30(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 *local_b0;
  long local_a8;
  ulong local_a0;
  undefined8 *local_98;
  long local_90;
  ulong local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  ulong local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar6 = FUN_00428440(param_2[1]);
  switch(uVar6 & 0x1f) {
  case 0:
  case 1:
    return 0;
  case 2:
    if ((param_3[1] == 0) || (uVar11 = FUN_00428440(), (uVar11 & 0x1f) != 2)) {
      uVar14 = 0;
      uVar13 = 0;
      uVar11 = 0;
    }
    else {
      uVar13 = *param_3;
      uVar14 = param_3[1];
      uVar11 = param_3[2];
      if ((uVar11 & 1) != 0) {
        FUN_0043dd30(uVar11 & 0xfffffffffffffffe);
        uVar11 = param_3[2];
      }
    }
    local_48 = (double)((ulong)local_48 & 0xffffffffffffff00);
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_48);
    uVar10 = (ulong)local_48;
    plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
    (**(code **)(*plVar12 + 0x38))(plVar12,uVar13,uVar14,(long)register0x00000008 + -0x38);
    if ((uVar11 & 1) != 0) {
      FUN_0043dd50(plVar12);
    }
    return uVar10 & 0xff;
  case 3:
    if ((param_3[1] == 0) || (uVar11 = FUN_00428440(), (uVar11 & 0x1f) != 3)) {
      uVar11 = 0;
      uVar14 = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = *param_3;
      uVar14 = param_3[1];
      uVar11 = param_3[2];
      if ((uVar11 & 1) != 0) {
        FUN_0043dd30(uVar11 & 0xfffffffffffffffe);
        uVar11 = param_3[2];
      }
    }
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],
               (long)register0x00000008 + -0x38);
    plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
    local_48 = (double)0;
    (**(code **)(*plVar12 + 0x38))(plVar12,uVar13,uVar14,(long)register0x00000008 + -0x38);
    uVar10 = FUN_0043f0c0(&local_48,0);
    if ((uVar11 & 1) != 0) {
      FUN_0043dd50(plVar12);
    }
    return uVar10 & 0xffffffff;
  case 4:
    if ((param_3[1] == 0) || (uVar11 = FUN_00428440(), (uVar11 & 0x1f) != 4)) {
      uVar13 = 0;
      uVar14 = 0;
      uVar11 = 0;
    }
    else {
      uVar13 = *param_3;
      uVar14 = param_3[1];
      uVar11 = param_3[2];
      if ((uVar11 & 1) != 0) {
        FUN_0043dd30(uVar11 & 0xfffffffffffffffe);
        uVar11 = param_3[2];
      }
    }
    local_50 = 0;
    local_48 = (double)((ulong)local_48 & 0xffffffffffffff00);
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_50);
    uVar10 = local_50;
    uVar7 = (uint)local_48;
    local_50 = 0;
    local_48 = (double)((ulong)local_48 & 0xffffffffffffff00);
    plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
    (**(code **)(*plVar12 + 0x38))(plVar12,uVar13,uVar14,&local_50);
    uVar6 = (uVar7 & 0xff) - ((uint)local_48 & 1);
    if (uVar6 == 0) {
      uVar6 = ((uint)(local_50 < uVar10) - (uint)(uVar10 < local_50)) * ((uVar7 & 0x7f) * -2 + 1);
    }
    if ((uVar11 & 1) != 0) {
      FUN_0043dd50(plVar12);
    }
    return (ulong)uVar6;
  case 5:
    if ((param_3[1] == 0) || (uVar11 = FUN_00428440(), (uVar11 & 0x1f) != 5)) {
      uVar14 = 0;
      uVar13 = 0;
      uVar11 = 0;
    }
    else {
      uVar13 = *param_3;
      uVar14 = param_3[1];
      uVar11 = param_3[2];
      if ((uVar11 & 1) != 0) {
        FUN_0043dd30(uVar11 & 0xfffffffffffffffe);
        uVar11 = param_3[2];
      }
    }
    local_48 = 0.0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_48);
    dVar3 = local_48;
    local_48 = 0.0;
    plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
    (**(code **)(*plVar12 + 0x38))(plVar12,uVar13,uVar14,&local_48);
    bVar4 = local_48 < dVar3;
    bVar5 = dVar3 < local_48;
    if ((uVar11 & 1) != 0) {
      FUN_0043dd50(plVar12);
    }
    return (ulong)((uint)bVar4 - (uint)bVar5);
  case 6:
    if ((param_3[1] == 0) || (uVar11 = FUN_00428440(), (uVar11 & 0x1f) != 6)) {
      uVar11 = 0;
      uVar14 = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = *param_3;
      uVar14 = param_3[1];
      uVar11 = param_3[2];
      if ((uVar11 & 1) != 0) {
        FUN_0043dd30(uVar11 & 0xfffffffffffffffe);
        uVar11 = param_3[2];
      }
    }
    lVar8 = (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x60))
                      ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1]);
    plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
    lVar9 = (**(code **)(*plVar12 + 0x60))(plVar12,uVar13,uVar14);
    if ((uVar11 & 1) != 0) {
      FUN_0043dd50(plVar12);
    }
    return (ulong)((uint)(0 < lVar8 - lVar9) + (int)(lVar8 - lVar9 >> 0x3f));
  case 7:
    if ((param_3[1] == 0) || (uVar11 = FUN_00428440(), (uVar11 & 0x1f) != 7)) {
      uVar13 = 0;
      uVar11 = 0;
    }
    else {
      uVar13 = param_3[1];
      uVar11 = param_3[2];
      if ((uVar11 & 1) != 0) {
        FUN_0043dd30(uVar11 & 0xfffffffffffffffe);
        uVar11 = param_3[2];
      }
    }
    FUN_00427c30(&local_60,param_2[1],0);
    FUN_00427c30(&local_80,uVar13,0);
    break;
  case 8:
    if ((param_3[1] == 0) || (uVar11 = FUN_00428440(), (uVar11 & 0x1f) != 8)) {
      uVar13 = 0;
      uVar14 = 0;
      uVar11 = 0;
    }
    else {
      uVar13 = *param_3;
      uVar14 = param_3[1];
      uVar11 = param_3[2];
      if ((uVar11 & 1) != 0) {
        FUN_0043dd30(uVar11 & 0xfffffffffffffffe);
        uVar11 = param_3[2];
      }
    }
    local_50 = 0;
    local_48 = 0.0;
    local_60 = (undefined8 *)0x0;
    local_58 = (undefined8 *)0x0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_60);
    local_70 = 0;
    local_68 = 0;
    plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
    local_80 = (undefined8 *)0x0;
    local_78 = (undefined8 *)0x0;
    (**(code **)(*plVar12 + 0x50))(plVar12,uVar13,uVar14,&local_80);
    puVar1 = local_78;
    iVar2 = (int)local_50;
    uVar6 = (int)local_50 - (int)local_70;
    if (uVar6 == 0) {
      if ((int)local_50 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_00428440(local_58);
        uVar7 = FUN_00428440(puVar1);
        uVar6 = (uVar6 & 0x1f) - (uVar7 & 0x1f);
        if (uVar6 == 0) {
          if (0 < iVar2) {
            iVar15 = 0;
            do {
              local_98 = (undefined8 *)((long)local_60 + (long)local_50._4_4_ * (long)iVar15);
              local_90 = (long)local_58;
              local_88 = (ulong)local_48;
              if (((ulong)local_48 & 1) != 0) {
                FUN_0043dd30((ulong)local_48 & 0xfffffffffffffffe);
              }
              local_b0 = (undefined8 *)((long)local_80 + (long)local_70._4_4_ * (long)iVar15);
              local_a8 = (long)local_78;
              local_a0 = local_68;
              if ((local_68 & 1) != 0) {
                FUN_0043dd30(local_68 & 0xfffffffffffffffe);
              }
              if ((local_98 == local_b0) && (local_90 == local_a8)) {
                uVar6 = 0;
              }
              else {
                uVar6 = FUN_00441a30(param_1,&local_98,&local_b0);
              }
              if ((local_a0 & 1) != 0) {
                FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
              }
              if ((local_88 & 1) != 0) {
                FUN_0043dd50(local_88 & 0xfffffffffffffffe);
              }
              if (uVar6 != 0) goto joined_r0x0044249c;
              iVar15 = iVar15 + 1;
            } while (iVar15 < iVar2);
          }
          uVar6 = 0;
        }
      }
    }
joined_r0x0044249c:
    if ((local_68 & 1) != 0) {
      FUN_0043dd50(local_68 & 0xfffffffffffffffe);
    }
    if (((ulong)local_48 & 1) != 0) {
      FUN_0043dd50((ulong)local_48 & 0xfffffffffffffffe);
    }
    if ((uVar11 & 1) != 0) {
      FUN_0043dd50(plVar12);
    }
    return (ulong)uVar6;
  default:
    local_48 = 0.0;
    FUN_004223c0(0x261011c5,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",
                 0x3c,"Bad var visitor switch",&local_48);
    return 0;
  }
LAB_004420dc:
  do {
    do {
      if (local_60 + 1 < local_58) {
        local_60 = local_60 + 1;
        uVar6 = FUN_004290b0();
      }
      else {
        uVar10 = FUN_00427c40(&local_60);
        if ((uVar10 & 1) == 0) goto LAB_0044221c;
        uVar6 = FUN_004290b0(local_60);
      }
    } while ((uVar6 >> 5 & 1) == 0);
    do {
      while (local_80 + 1 < local_78) {
        local_80 = local_80 + 1;
        uVar6 = FUN_004290b0();
        if ((uVar6 >> 5 & 1) != 0) goto LAB_0044214c;
      }
      uVar10 = FUN_00427c40(&local_80);
      if ((uVar10 & 1) == 0) goto LAB_0044221c;
      uVar6 = FUN_004290b0(local_80);
    } while ((uVar6 >> 5 & 1) == 0);
LAB_0044214c:
    FUN_0043f280(&local_98,param_2,*local_60);
    FUN_0043f280(&local_b0,param_3,*local_80);
    lVar8 = local_a8;
    uVar6 = FUN_00428440(local_90);
    uVar7 = FUN_00428440(lVar8);
    uVar6 = (uVar6 & 0x1f) - (uVar7 & 0x1f);
    if (uVar6 != 0) {
joined_r0x00442214:
      if ((local_a0 & 1) == 0) goto LAB_004421a0;
LAB_004421ec:
      FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
      if ((local_88 & 1) == 0) goto LAB_004421a8;
LAB_004421fc:
      FUN_0043dd50(local_88 & 0xfffffffffffffffe);
      if (uVar6 != 0) break;
      goto LAB_004420dc;
    }
    if ((local_98 == local_b0) && (local_90 == local_a8)) {
      uVar6 = 0;
      goto joined_r0x00442214;
    }
    uVar6 = FUN_00441a30(param_1,&local_98,&local_b0);
    if ((local_a0 & 1) != 0) goto LAB_004421ec;
LAB_004421a0:
    if ((local_88 & 1) != 0) goto LAB_004421fc;
LAB_004421a8:
  } while (uVar6 == 0);
  goto joined_r0x004422c8;
LAB_00442280:
  do {
    if (local_60 + 1 < local_58) {
      local_60 = local_60 + 1;
      uVar6 = FUN_004290b0();
    }
    else {
      uVar10 = FUN_00427c40(&local_60);
      if ((uVar10 & 1) == 0) {
        uVar6 = 0;
        goto joined_r0x004422c8;
      }
      uVar6 = FUN_004290b0(local_60);
    }
  } while ((uVar6 >> 5 & 1) == 0);
  uVar6 = 1;
  if ((uVar11 & 1) == 0) goto LAB_00442264;
  goto LAB_0044225c;
  while ((uVar6 >> 5 & 1) == 0) {
LAB_0044221c:
    if (local_80 + 1 < local_78) {
      local_80 = local_80 + 1;
      uVar6 = FUN_004290b0();
    }
    else {
      uVar10 = FUN_00427c40(&local_80);
      if ((uVar10 & 1) == 0) goto LAB_00442280;
      uVar6 = FUN_004290b0(local_80);
    }
  }
  uVar6 = 0xffffffff;
joined_r0x004422c8:
  if ((uVar11 & 1) != 0) {
LAB_0044225c:
    FUN_0043dd50(uVar11 & 0xfffffffffffffffe);
  }
LAB_00442264:
  return (ulong)uVar6;
}

