
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02523cf0(undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ushort uVar7;
  ulong uVar8;
  uint *puVar9;
  undefined8 *puVar10;
  long lVar11;
  short *psVar12;
  long lVar13;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  int local_38;
  
  if ((DAT_054f5738 == 0) || (uVar8 = (ulong)*param_2, 7 < uVar8)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar12 = &DAT_054f0c08;
      if (iVar5 != 0) {
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c6c = 0;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        _DAT_054f0c44 = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
      }
    }
    else {
      psVar12 = &DAT_054f0c08;
    }
  }
  else {
    psVar12 = (short *)(DAT_054f5738 + uVar8 * 0xd0 +
                        (ulong)(*(uint *)(DAT_054f5738 + uVar8 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
  }
  if (((char)psVar12[0x32] == '\0') || (*psVar12 != DAT_04c487d4)) {
    local_38 = 1;
  }
  else {
    local_38 = *(int *)(psVar12 + 0x30);
  }
  if ((local_38 != 4) || (uVar8 = (ulong)*param_2, 7 < uVar8)) goto LAB_0252400c;
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar12 = &DAT_054f0c08;
      if (iVar5 != 0) {
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c6c = 0;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        _DAT_054f0c44 = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
      }
    }
    else {
      psVar12 = &DAT_054f0c08;
    }
  }
  else {
    psVar12 = (short *)(DAT_054f5738 + uVar8 * 0xd0 +
                        (ulong)(*(uint *)(DAT_054f5738 + uVar8 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
  }
  if (((char)psVar12[0x32] == '\0') || (*psVar12 != DAT_04c487d4)) goto LAB_0252400c;
  uVar8 = FUN_0231f070(*(undefined4 *)(psVar12 + 2),0);
  if ((uVar8 & 1) == 0) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_054f0960);
        puVar10 = &DAT_054f0958;
        if (iVar5 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar10 = &DAT_054f0958;
      }
    }
    else {
      puVar10 = (undefined8 *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_2 < 8) {
        puVar10 = puVar10 + *param_2;
      }
    }
    if ((*(uint *)((long)puVar10 + 4) >> 0xf & 1) == 0) goto LAB_0252400c;
  }
  FUN_016d73fc(param_1,psVar12 + 6);
  puVar2 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_1);
  lVar11 = *(long *)puVar2;
  if (lVar11 == 0) goto LAB_0252400c;
  lVar13 = *(long *)(lVar13 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
  if ((*(uint *)(lVar13 + 0x1d8) <= uVar4) ||
     (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0252400c;
  local_40 = 0;
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uVar4 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar2 == 0) {
LAB_02523ff4:
    uVar7 = 0;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02523ff4;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_1);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
       (puVar6 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8), puVar6 == (uint *)0x0
       )) goto LAB_02523ff4;
    uVar4 = *puVar6;
    uVar7 = 0;
    if ((uVar4 != 0) && (puVar6 != (uint *)(ulong)uVar4)) {
      puVar9 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
      uVar7 = 0;
      if (*puVar9 != 0) {
        uVar4 = puVar9[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar11 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar6 - lVar11) / (ulong)uVar4);
            }
            if (*puVar9 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326d48) &&
               (uVar7 = *(ushort *)(DAT_05326d50 + (long)(int)uVar1 * 2), uVar7 < 0x52))
            goto LAB_02523ff8;
          }
        }
        goto LAB_02523ff4;
      }
    }
  }
LAB_02523ff8:
  if ((uVar7 & 0xfffe) == 10) {
    return;
  }
LAB_0252400c:
  uVar3 = DAT_0558600c;
  *param_1 = _DAT_05586008;
  param_1[1] = uVar3;
  return;
}

