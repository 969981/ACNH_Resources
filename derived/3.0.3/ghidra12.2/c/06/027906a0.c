
uint FUN_027906a0(undefined8 param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  
  iVar5 = FUN_0277d6c4(param_2);
  uVar6 = 0;
  if (iVar5 == 0) goto LAB_0279093c;
  iVar5 = FUN_0277d6c4(param_2);
  puVar3 = PTR_DAT_04bb43c0;
  if (iVar5 != 0xfffe) {
    lVar12 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(param_2);
    lVar11 = *(long *)puVar3;
    if (lVar11 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        local_48 = (uint *)0x0;
        local_50 = *param_2;
        uStack_4c = param_2[1];
        local_58 = &PTR_FUN_04a36b50;
        uVar6 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar3 == 0) {
LAB_027907cc:
          puVar10 = (uint *)0x0;
        }
        else {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((*(uint *)(lVar11 + 0x1d8) <= uVar6) ||
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_027907cc;
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(param_2);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if (*(uint *)(lVar11 + 0x1d8) <= uVar6) goto LAB_027907cc;
          puVar10 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8);
          if (puVar10 != (uint *)0x0) {
            local_48 = puVar10;
          }
        }
        iVar5 = FUN_01ad7260(&local_58);
        if (iVar5 != 0) {
          puVar7 = (ushort *)FUN_01afd600(&local_58);
          uVar6 = 0;
          if (puVar7 == (ushort *)0x0) goto LAB_0279093c;
          uVar4 = *puVar7;
          uVar6 = FUN_01ad7260(&local_58);
          if (uVar6 <= (uVar4 & 7)) goto LAB_02790938;
          puVar10 = local_48;
        }
        if (puVar10 != (uint *)0x0) {
          uVar2 = *puVar10;
          uVar6 = 1;
          if ((uVar2 == 0) || (puVar10 == (uint *)(ulong)uVar2)) goto LAB_0279093c;
          puVar9 = (uint *)((long)puVar10 - (long)(ulong)uVar2);
          if ((*puVar9 == 0) || ((uVar2 = puVar9[1], uVar2 == 0 || ((ulong)(ushort)puVar9[2] == 0)))
             ) goto LAB_0279093c;
          lVar11 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar11 == 0) goto LAB_0279093c;
          uVar1 = 0;
          if ((ulong)uVar2 != 0) {
            uVar1 = (uint)((ulong)((long)puVar10 - lVar11) / (ulong)uVar2);
          }
          if (*puVar9 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((DAT_05327180 <= uVar1) || (*(short *)(DAT_05327188 + (long)(int)uVar1 * 2) != 2))
          goto LAB_0279093c;
        }
        uVar8 = FUN_01b160f0(&local_58);
        if ((param_3 != -1) && ((uVar8 & 1) != 0)) {
          if (local_48 == (uint *)0x0) {
LAB_02790958:
            uVar4 = 0;
          }
          else {
            uVar6 = *local_48;
            uVar4 = 0;
            if ((uVar6 != 0) && (local_48 != (uint *)(ulong)uVar6)) {
              puVar10 = (uint *)((long)local_48 - (long)(ulong)uVar6);
              if ((*puVar10 != 0) &&
                 ((uVar6 = puVar10[1], uVar6 != 0 && ((ulong)(ushort)puVar10[2] != 0)))) {
                lVar11 = 0xc;
                if (*(char *)((long)puVar10 + 10) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
                if (lVar11 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar6 != 0) {
                    uVar2 = (uint)((ulong)((long)local_48 - lVar11) / (ulong)uVar6);
                  }
                  if (*puVar10 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < DAT_05327190) &&
                     (uVar4 = *(ushort *)(DAT_05327198 + (long)(int)uVar2 * 2), uVar4 < 0x13e))
                  goto LAB_0279095c;
                }
              }
              goto LAB_02790958;
            }
          }
LAB_0279095c:
          uVar8 = FUN_01b168d0(uVar4,param_3);
          if ((uVar8 & 1) != 0) {
            uVar6 = 1;
            goto LAB_0279093c;
          }
        }
        uVar6 = FUN_01b164e0(&local_58);
        goto LAB_0279093c;
      }
    }
  }
LAB_02790938:
  uVar6 = 0;
LAB_0279093c:
  return uVar6 & 1;
}

