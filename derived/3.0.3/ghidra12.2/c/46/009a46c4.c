
ulong FUN_009a46c4(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  uint *local_40;
  uint local_34;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_40 = (uint *)0x0;
  local_50 = PTR_DAT_04bc0510 + 0x10;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar2 == 0) {
LAB_009a4af0:
    local_34 = 0xbc;
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0x9b);
LAB_009a4b88:
    if (local_34 == (uint)local_60) goto LAB_009a4b9c;
    uVar7 = FUN_01ad6a30(&local_50,0x8a);
    if ((uVar7 & 1) != 0) {
      pcStack_58 = "UnitIconParts";
LAB_009a4c90:
      local_60 = PTR_DAT_04bb2020 + 0x10;
      (**(code **)(*param_1 + 0x10))(param_1,&local_60);
LAB_009a4cfc:
      uVar4 = 1;
      goto LAB_009a4bc0;
    }
    uVar7 = FUN_01ad6a30(&local_50,1);
    if ((((uVar7 & 1) != 0) || (uVar7 = FUN_01ad6a30(&local_50,2), (uVar7 & 1) != 0)) ||
       (uVar7 = FUN_01ad673c(&local_50), (uVar7 & 1) != 0)) {
      FUN_01adf970(&local_60,&local_50);
      FUN_008aa0a0(param_1,&local_60,0xffffffff);
      goto LAB_009a4cfc;
    }
    uVar7 = FUN_01af8438(&local_50);
    if ((uVar7 & 1) != 0) {
      uVar7 = FUN_01af881c(&local_50);
      if ((uVar7 & 1) != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_04bb3d80;
        uVar6 = FUN_0277d6c4(param_2);
        FUN_013ee8f0(uVar10,param_1,uVar6);
        goto LAB_009a4cfc;
      }
      uVar7 = FUN_01af875c(&local_50);
      if ((uVar7 & 1) == 0) {
        uVar7 = FUN_01af88dc(&local_50);
        if ((uVar7 & 1) != 0) {
          uVar10 = *(undefined8 *)PTR_DAT_04bb4208;
          uVar3 = FUN_0277d6c4(param_2);
          local_60 = (undefined *)(ulong)uVar3;
          FUN_0277d4ac(&local_60);
          uVar4 = FUN_029535f0(uVar10,param_1,&local_60);
          goto LAB_009a4bc0;
        }
        uVar7 = FUN_01af899c(&local_50);
        if ((uVar7 & 1) != 0) {
          pcStack_58 = "ShellfishAsari";
          goto LAB_009a4c90;
        }
      }
      else {
        uVar10 = *(undefined8 *)PTR_DAT_04bb4008;
        iVar5 = FUN_0277d6c4(param_2);
        if (iVar5 != 0xfffe) {
          uVar4 = FUN_01a11820(uVar10,param_1,iVar5,0);
          goto LAB_009a4bc0;
        }
      }
    }
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_009a4af0;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_2);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
       (puVar8 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8), puVar8 == (uint *)0x0
       )) goto LAB_009a4af0;
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0x66);
    uVar4 = *puVar8;
    if (uVar4 == 0 || puVar8 == (uint *)(ulong)uVar4) {
LAB_009a47a0:
      local_34 = 0;
    }
    else {
      puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
      local_34 = 0;
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
              uVar1 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar4);
            }
            if (*puVar9 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
               (local_34 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2)
               , local_34 < 0xbd)) goto LAB_009a47a4;
          }
        }
        goto LAB_009a47a0;
      }
    }
LAB_009a47a4:
    local_40 = puVar8;
    if (local_34 != 0x66) {
      local_34 = 0;
      local_60 = (undefined *)CONCAT44(local_60._4_4_,100);
      uVar4 = *puVar8;
      if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
        puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
        local_34 = 0;
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
                uVar1 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar4);
              }
              if (*puVar9 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_34 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                 local_34 < 0xbd)) goto LAB_009a484c;
            }
          }
          local_34 = 0;
        }
      }
LAB_009a484c:
      if (local_34 == 100) goto LAB_009a4b9c;
      local_34 = 0;
      local_60 = (undefined *)CONCAT44(local_60._4_4_,0x89);
      uVar4 = *puVar8;
      if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
        puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
        local_34 = 0;
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
                uVar1 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar4);
              }
              if (*puVar9 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_34 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                 local_34 < 0xbd)) goto LAB_009a48f4;
            }
          }
          local_34 = 0;
        }
      }
LAB_009a48f4:
      if (local_34 == 0x89) goto LAB_009a4b9c;
      local_34 = 0;
      local_60 = (undefined *)CONCAT44(local_60._4_4_,0x65);
      uVar4 = *puVar8;
      if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
        puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
        local_34 = 0;
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
                uVar1 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar4);
              }
              if (*puVar9 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_34 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                 local_34 < 0xbd)) goto LAB_009a499c;
            }
          }
          local_34 = 0;
        }
      }
LAB_009a499c:
      if (local_34 == 0x65) goto LAB_009a4b9c;
      local_34 = 0;
      local_60 = (undefined *)CONCAT44(local_60._4_4_,0x9a);
      uVar4 = *puVar8;
      if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
        puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
        local_34 = 0;
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
                uVar1 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar4);
              }
              if (*puVar9 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_34 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                 local_34 < 0xbd)) goto LAB_009a4a44;
            }
          }
          local_34 = 0;
        }
      }
LAB_009a4a44:
      if (local_34 == 0x9a) goto LAB_009a4b9c;
      local_34 = 0;
      local_60 = (undefined *)CONCAT44(local_60._4_4_,0x9b);
      uVar4 = *puVar8;
      if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
        puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
        local_34 = 0;
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
                uVar1 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar4);
              }
              if (*puVar9 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_34 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                 local_34 < 0xbd)) goto LAB_009a4b88;
            }
          }
          local_34 = 0;
        }
      }
      goto LAB_009a4b88;
    }
LAB_009a4b9c:
    uVar10 = *(undefined8 *)PTR_DAT_04bb4008;
    iVar5 = FUN_0277d6c4(param_2);
    if (iVar5 != 0xfffe) {
      uVar7 = FUN_01a11820(uVar10,param_1,iVar5,0);
      return uVar7;
    }
  }
  uVar4 = 0;
LAB_009a4bc0:
  return (ulong)(uVar4 & 1);
}

