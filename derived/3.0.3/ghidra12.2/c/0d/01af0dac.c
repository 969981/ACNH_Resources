
ulong FUN_01af0dac(long param_1)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  float fVar10;
  undefined **local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar7 = *(uint **)(param_1 + 0x10);
  if ((puVar7 == (uint *)0x0) || (uVar3 = *puVar7, uVar3 == 0 || puVar7 == (uint *)(ulong)uVar3)) {
LAB_01af0fc4:
    local_40 = *(undefined ***)(param_1 + 8);
    iVar4 = FUN_0277d6c4(&local_40);
    if (iVar4 == 0x26ec) {
      uVar5 = 500;
    }
    else {
      uVar5 = FUN_01aed730(param_1);
      if (0 < (int)uVar5) {
        fVar10 = (float)(int)uVar5 / 20.0;
        uVar3 = 0;
        if (fVar10 != (float)(int)fVar10) {
          uVar3 = (uint)(0.0 <= fVar10);
        }
        uVar5 = (ulong)(uVar3 + (int)fVar10);
      }
    }
    return uVar5;
  }
  puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
  if ((*puVar8 == 0) || ((uVar3 = puVar8[1], uVar3 == 0 || ((ulong)(ushort)puVar8[2] == 0))))
  goto LAB_01af0fc4;
  lVar1 = 0xc;
  if (*(char *)((long)puVar8 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
  if (lVar1 == 0) goto LAB_01af0fc4;
  uVar6 = 0;
  if ((ulong)uVar3 != 0) {
    uVar6 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar3);
  }
  if (*puVar8 <= uVar6) {
    uVar6 = 0xffffffff;
  }
  if ((DAT_05326ec0 <= uVar6) || (*(short *)(DAT_05326ec8 + (long)(int)uVar6 * 2) != 0xb1))
  goto LAB_01af0fc4;
  local_28 = 0xfffe;
  FUN_0277d4ac(&local_28);
  local_40 = *(undefined ***)(param_1 + 8);
  FUN_02621c70(*(undefined8 *)PTR_DAT_04bb46f0,&local_28,&local_40);
  puVar2 = PTR_DAT_04bb43c0;
  local_30 = 0;
  local_40 = &PTR_FUN_04a36b50;
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_38);
  lVar1 = DAT_0532a768;
  if (*(long *)puVar2 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      uVar3 = FUN_0277d6c4(&local_28);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar1 + 0x1d8)) &&
         (puVar7 = *(uint **)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar7 != (uint *)0x0)) {
        uVar3 = *puVar7;
        uVar6 = 0;
        if ((uVar3 == 0) || (puVar7 == (uint *)(ulong)uVar3)) goto LAB_01af0fa0;
        puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
        uVar6 = 0;
        if (*puVar8 == 0) goto LAB_01af0fa0;
        uVar3 = puVar8[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar1 != 0) {
            uVar6 = 0;
            if ((ulong)uVar3 != 0) {
              uVar6 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar3);
            }
            if (*puVar8 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < DAT_05327190) &&
               (uVar6 = (uint)*(ushort *)(DAT_05327198 + (long)(int)uVar6 * 2), uVar6 < 0x13e))
            goto LAB_01af0fa0;
          }
        }
      }
    }
  }
  uVar6 = 0;
LAB_01af0fa0:
  if (uVar6 - 0x38 < 6) {
    return (ulong)*(uint *)(&DAT_041779cc + (long)(int)(uVar6 - 0x38) * 4);
  }
  return 1000;
}

